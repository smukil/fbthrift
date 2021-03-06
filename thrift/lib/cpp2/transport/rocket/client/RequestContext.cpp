/*
 * Copyright 2018-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/transport/rocket/client/RequestContext.h>

#include <glog/logging.h>

#include <fmt/core.h>
#include <folly/Likely.h>
#include <folly/Range.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <folly/lang/Assume.h>

#include <thrift/lib/cpp/transport/TTransportException.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/transport/rocket/RocketException.h>
#include <thrift/lib/cpp2/transport/rocket/client/RequestContextQueue.h>
#include <thrift/lib/cpp2/transport/rocket/client/RocketClientWriteCallback.h>
#include <thrift/lib/cpp2/transport/rocket/framing/Frames.h>
#include <thrift/lib/cpp2/transport/rsocket/gen-cpp2/Config_types.h>

using apache::thrift::transport::TTransportException;

namespace apache {
namespace thrift {
namespace rocket {

void RequestContext::waitForWriteToComplete() {
  baton_.wait();

  switch (state_) {
    case State::RESPONSE_RECEIVED:
      // Even though this function should only be called for no-response
      // requests, we still use RESPONSE_RECEIVED as the terminal "expected"
      // state for such requests.
      return;

    case State::REQUEST_ABORTED:
      throw TTransportException(
          TTransportException::NOT_OPEN,
          "Request aborted during client shutdown");

    case State::WRITE_NOT_SCHEDULED:
    case State::WRITE_SCHEDULED:
    case State::WRITE_SENDING:
    case State::WRITE_SENT:
      LOG(FATAL) << fmt::format(
          "Returned from Baton::wait() with unexpected state {} in {}",
          static_cast<int>(state_),
          __func__);
  }

  folly::assume_unreachable();
}

Payload RequestContext::waitForResponse(std::chrono::milliseconds timeout) {
  // Once the eventual write to the socket succeeds or errors out (via
  // writeSuccess() or writeErr()), a timeout for baton_ will be scheduled via
  // awaitResponseTimeoutHandler_.
  awaitResponseTimeout_ = timeout;
  baton_.wait(awaitResponseTimeoutHandler_);

  switch (state_) {
    case State::WRITE_SENT:
      // writeSuccess() or writeErr() processed this request but a response was
      // not received within the request's allotted timeout. Terminate request
      // with timeout.
      queue_.abortSentRequest(*this);
      throw TTransportException(TTransportException::TIMED_OUT);

    case State::RESPONSE_RECEIVED:
      if (UNLIKELY(responsePayload_.hasException())) {
        responsePayload_.exception().throw_exception();
      }
      DCHECK(responsePayload_.hasValue());
      return std::move(*responsePayload_);

    case State::REQUEST_ABORTED:
      throw TTransportException(
          TTransportException::NOT_OPEN,
          "Request aborted during client shutdown");

    case State::WRITE_NOT_SCHEDULED:
    case State::WRITE_SCHEDULED:
    case State::WRITE_SENDING:
      LOG(FATAL) << fmt::format(
          "Returned from Baton::wait() with unexpected state {} in {}",
          static_cast<int>(state_),
          __func__);
  }

  folly::assume_unreachable();
}

void RequestContext::onPayloadFrame(PayloadFrame&& payloadFrame) {
  DCHECK(!responsePayload_.hasException());
  DCHECK(isRequestResponse());

  // This function is only called on the response payload frame corresponding to
  // a REQUEST_RESPONSE context. Each fragment of the response payload frame
  // should have the next and complete flags.
  DCHECK(payloadFrame.hasNext());
  DCHECK(payloadFrame.hasComplete());

  if (LIKELY(!responsePayload_.hasValue())) {
    responsePayload_.emplace(std::move(payloadFrame.payload()));
  } else {
    responsePayload_->append(std::move(payloadFrame.payload()));
  }

  if (!payloadFrame.hasFollows()) {
    queue_.markAsResponded(*this);
  }
}

void RequestContext::onErrorFrame(ErrorFrame&& errorFrame) {
  // Protocol specifies that partial PAYLOAD cannot have arrived before an ERROR
  // frame.
  DCHECK(!responsePayload_.hasValue());
  DCHECK(!responsePayload_.hasException());
  DCHECK(isRequestResponse());

  responsePayload_ =
      folly::Try<Payload>(folly::make_exception_wrapper<RocketException>(
          errorFrame.errorCode(), std::move(errorFrame.payload()).data()));

  queue_.markAsResponded(*this);
}

void RequestContext::onWriteSuccess() noexcept {
  if (writeCallback_) {
    writeCallback_->onWriteSuccess();
  }
}

} // namespace rocket
} // namespace thrift
} // namespace apache

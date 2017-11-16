/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums
namespace facebook { namespace ns { namespace qwerty {

enum class AnEnumA {
  FIELDA = 0
};

using _AnEnumA_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnumA, AnEnumA>;
extern const _AnEnumA_EnumMapFactory::ValuesToNamesMapType _AnEnumA_VALUES_TO_NAMES;
extern const _AnEnumA_EnumMapFactory::NamesToValuesMapType _AnEnumA_NAMES_TO_VALUES;



enum class AnEnumB {
  FIELDA = 0,
  FIELDB = 2
};

using _AnEnumB_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnumB, AnEnumB>;
extern const _AnEnumB_EnumMapFactory::ValuesToNamesMapType _AnEnumB_VALUES_TO_NAMES;
extern const _AnEnumB_EnumMapFactory::NamesToValuesMapType _AnEnumB_NAMES_TO_VALUES;



enum class AnEnumC {
  FIELDC = 0
};

using _AnEnumC_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnumC, AnEnumC>;
extern const _AnEnumC_EnumMapFactory::ValuesToNamesMapType _AnEnumC_VALUES_TO_NAMES;
extern const _AnEnumC_EnumMapFactory::NamesToValuesMapType _AnEnumC_NAMES_TO_VALUES;



enum class AnEnumD {
  FIELDD = 0
};

using _AnEnumD_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnumD, AnEnumD>;
extern const _AnEnumD_EnumMapFactory::ValuesToNamesMapType _AnEnumD_VALUES_TO_NAMES;
extern const _AnEnumD_EnumMapFactory::NamesToValuesMapType _AnEnumD_NAMES_TO_VALUES;



enum class AnEnumE {
  FIELDA = 0
};

using _AnEnumE_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnumE, AnEnumE>;
extern const _AnEnumE_EnumMapFactory::ValuesToNamesMapType _AnEnumE_VALUES_TO_NAMES;
extern const _AnEnumE_EnumMapFactory::NamesToValuesMapType _AnEnumE_NAMES_TO_VALUES;



}}} // facebook::ns::qwerty
namespace std {


template<> struct hash<typename  ::facebook::ns::qwerty::AnEnumA> : public apache::thrift::detail::enum_hash<typename  ::facebook::ns::qwerty::AnEnumA> {};
template<> struct equal_to<typename  ::facebook::ns::qwerty::AnEnumA> : public apache::thrift::detail::enum_equal_to<typename  ::facebook::ns::qwerty::AnEnumA> {};


template<> struct hash<typename  ::facebook::ns::qwerty::AnEnumB> : public apache::thrift::detail::enum_hash<typename  ::facebook::ns::qwerty::AnEnumB> {};
template<> struct equal_to<typename  ::facebook::ns::qwerty::AnEnumB> : public apache::thrift::detail::enum_equal_to<typename  ::facebook::ns::qwerty::AnEnumB> {};


template<> struct hash<typename  ::facebook::ns::qwerty::AnEnumC> : public apache::thrift::detail::enum_hash<typename  ::facebook::ns::qwerty::AnEnumC> {};
template<> struct equal_to<typename  ::facebook::ns::qwerty::AnEnumC> : public apache::thrift::detail::enum_equal_to<typename  ::facebook::ns::qwerty::AnEnumC> {};


template<> struct hash<typename  ::facebook::ns::qwerty::AnEnumD> : public apache::thrift::detail::enum_hash<typename  ::facebook::ns::qwerty::AnEnumD> {};
template<> struct equal_to<typename  ::facebook::ns::qwerty::AnEnumD> : public apache::thrift::detail::enum_equal_to<typename  ::facebook::ns::qwerty::AnEnumD> {};


template<> struct hash<typename  ::facebook::ns::qwerty::AnEnumE> : public apache::thrift::detail::enum_hash<typename  ::facebook::ns::qwerty::AnEnumE> {};
template<> struct equal_to<typename  ::facebook::ns::qwerty::AnEnumE> : public apache::thrift::detail::enum_equal_to<typename  ::facebook::ns::qwerty::AnEnumE> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumA>;
template <> const std::size_t TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::size;
template <> const folly::Range<const  ::facebook::ns::qwerty::AnEnumA*> TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::names;
template <> const char* TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::findName( ::facebook::ns::qwerty::AnEnumA value);
template <> bool TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::findValue(const char* name,  ::facebook::ns::qwerty::AnEnumA* outValue);

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumA TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::min() {
  return  ::facebook::ns::qwerty::AnEnumA::FIELDA;
}

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumA TEnumTraits< ::facebook::ns::qwerty::AnEnumA>::max() {
  return  ::facebook::ns::qwerty::AnEnumA::FIELDA;
}


template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumB>;
template <> const std::size_t TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::size;
template <> const folly::Range<const  ::facebook::ns::qwerty::AnEnumB*> TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::names;
template <> const char* TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::findName( ::facebook::ns::qwerty::AnEnumB value);
template <> bool TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::findValue(const char* name,  ::facebook::ns::qwerty::AnEnumB* outValue);

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumB TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::min() {
  return  ::facebook::ns::qwerty::AnEnumB::FIELDA;
}

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumB TEnumTraits< ::facebook::ns::qwerty::AnEnumB>::max() {
  return  ::facebook::ns::qwerty::AnEnumB::FIELDB;
}


template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumC>;
template <> const std::size_t TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::size;
template <> const folly::Range<const  ::facebook::ns::qwerty::AnEnumC*> TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::names;
template <> const char* TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::findName( ::facebook::ns::qwerty::AnEnumC value);
template <> bool TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::findValue(const char* name,  ::facebook::ns::qwerty::AnEnumC* outValue);

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumC TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::min() {
  return  ::facebook::ns::qwerty::AnEnumC::FIELDC;
}

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumC TEnumTraits< ::facebook::ns::qwerty::AnEnumC>::max() {
  return  ::facebook::ns::qwerty::AnEnumC::FIELDC;
}


template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumD>;
template <> const std::size_t TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::size;
template <> const folly::Range<const  ::facebook::ns::qwerty::AnEnumD*> TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::names;
template <> const char* TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::findName( ::facebook::ns::qwerty::AnEnumD value);
template <> bool TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::findValue(const char* name,  ::facebook::ns::qwerty::AnEnumD* outValue);

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumD TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::min() {
  return  ::facebook::ns::qwerty::AnEnumD::FIELDD;
}

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumD TEnumTraits< ::facebook::ns::qwerty::AnEnumD>::max() {
  return  ::facebook::ns::qwerty::AnEnumD::FIELDD;
}


template <> struct TEnumDataStorage< ::facebook::ns::qwerty::AnEnumE>;
template <> const std::size_t TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::size;
template <> const folly::Range<const  ::facebook::ns::qwerty::AnEnumE*> TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::names;
template <> const char* TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::findName( ::facebook::ns::qwerty::AnEnumE value);
template <> bool TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::findValue(const char* name,  ::facebook::ns::qwerty::AnEnumE* outValue);

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumE TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::min() {
  return  ::facebook::ns::qwerty::AnEnumE::FIELDA;
}

template <> inline constexpr  ::facebook::ns::qwerty::AnEnumE TEnumTraits< ::facebook::ns::qwerty::AnEnumE>::max() {
  return  ::facebook::ns::qwerty::AnEnumE::FIELDA;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace facebook { namespace ns { namespace qwerty {
class SomeStruct;
}}} // facebook::ns::qwerty
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace facebook { namespace ns { namespace qwerty {
class SomeStruct final : private apache::thrift::detail::st::ComparisonOperators<SomeStruct> {
 public:

  SomeStruct() :
      fieldA(0) {}
  // FragileConstructor for use in initialization lists only.
  SomeStruct(apache::thrift::FragileConstructor, int32_t fieldA__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  SomeStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    SomeStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldA = arg.move();
    __isset.fieldA = true;
  }

  SomeStruct(SomeStruct&&) = default;

  SomeStruct(const SomeStruct&) = default;

  SomeStruct& operator=(SomeStruct&&) = default;

  SomeStruct& operator=(const SomeStruct&) = default;
  void __clear();
  int32_t fieldA;

  struct __isset {
    bool fieldA;
  } __isset = {};
  bool operator==(const SomeStruct& rhs) const;

  bool operator < (const SomeStruct& rhs) const {
    if (!(fieldA == rhs.fieldA)) {
      return fieldA < rhs.fieldA;
    }
    (void)rhs;
    return false;
  }

  int32_t get_fieldA() const {
    return fieldA;
  }

  int32_t& set_fieldA(int32_t fieldA_) {
    fieldA = fieldA_;
    __isset.fieldA = true;
    return fieldA;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(SomeStruct& a, SomeStruct& b);
extern template uint32_t SomeStruct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t SomeStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t SomeStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t SomeStruct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t SomeStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t SomeStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t SomeStruct::read<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t SomeStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t SomeStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

}}} // facebook::ns::qwerty
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::facebook::ns::qwerty::SomeStruct>::clear( ::facebook::ns::qwerty::SomeStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::facebook::ns::qwerty::SomeStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::facebook::ns::qwerty::SomeStruct>::write(Protocol* proto,  ::facebook::ns::qwerty::SomeStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::facebook::ns::qwerty::SomeStruct>::read(Protocol* proto,  ::facebook::ns::qwerty::SomeStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::facebook::ns::qwerty::SomeStruct>::serializedSize(Protocol const* proto,  ::facebook::ns::qwerty::SomeStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::facebook::ns::qwerty::SomeStruct>::serializedSizeZC(Protocol const* proto,  ::facebook::ns::qwerty::SomeStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift

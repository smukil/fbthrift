{-# LANGUAGE DeriveDataTypeable #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-missing-fields #-}
{-# OPTIONS_GHC -fno-warn-missing-signatures #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing #-}
{-# OPTIONS_GHC -fno-warn-unused-imports #-}
{-# OPTIONS_GHC -fno-warn-unused-matches #-}

-----------------------------------------------------------------
-- Autogenerated by Thrift
--                                                             --
-- DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
--  @generated
-----------------------------------------------------------------

module Module_Types where
import Prelude ( Bool(..), Enum, Float, IO, Double, String, Maybe(..),
                 Eq, Show, Ord,
                 concat, error, fromIntegral, fromEnum, length, map,
                 maybe, not, null, otherwise, return, show, toEnum,
                 enumFromTo, Bounded, minBound, maxBound,
                 (.), (&&), (||), (==), (++), ($), (-), (>>=), (>>))

import Control.Applicative (ZipList(..), (<*>))
import Control.Exception
import Control.Monad ( liftM, ap, when )
import Data.ByteString.Lazy (ByteString)
import Data.Functor ( (<$>) )
import Data.Hashable
import Data.Int
import Data.Maybe (catMaybes)
import Data.Text.Lazy ( Text )
import Data.Text.Lazy.Encoding ( decodeUtf8, encodeUtf8 )
import qualified Data.Text.Lazy as T
import Data.Typeable ( Typeable )
import qualified Data.HashMap.Strict as Map
import qualified Data.HashSet as Set
import qualified Data.Vector as Vector
import Test.QuickCheck.Arbitrary ( Arbitrary(..) )
import Test.QuickCheck ( elements )

import Thrift hiding (ProtocolExnType(..))
import qualified Thrift (ProtocolExnType(..))
import Thrift.Types
import Thrift.Arbitraries

import qualified Includes_Types as Includes_Types


data MyStruct = MyStruct
  { myStruct_MyIncludedField :: Includes_Types.Included
  } deriving (Show,Eq,Typeable)
instance Hashable MyStruct where
  hashWithSalt salt record = salt   `hashWithSalt` myStruct_MyIncludedField record  
instance Arbitrary MyStruct where 
  arbitrary = liftM MyStruct (arbitrary)
  shrink obj | obj == default_MyStruct = []
             | otherwise = catMaybes
    [ if obj == default_MyStruct{myStruct_MyIncludedField = myStruct_MyIncludedField obj} then Nothing else Just $ default_MyStruct{myStruct_MyIncludedField = myStruct_MyIncludedField obj}
    ]
from_MyStruct :: MyStruct -> ThriftVal
from_MyStruct record = TStruct $ Map.fromList $ catMaybes
  [ (\_v2 -> Just (1, ("MyIncludedField",Includes_Types.from_Included _v2))) $ myStruct_MyIncludedField record
  ]
write_MyStruct :: (Protocol p, Transport t) => p t -> MyStruct -> IO ()
write_MyStruct oprot record = writeVal oprot $ from_MyStruct record
encode_MyStruct :: (Protocol p, Transport t) => p t -> MyStruct -> ByteString
encode_MyStruct oprot record = serializeVal oprot $ from_MyStruct record
to_MyStruct :: ThriftVal -> MyStruct
to_MyStruct (TStruct fields) = MyStruct{
  myStruct_MyIncludedField = maybe (myStruct_MyIncludedField default_MyStruct) (\(_,_val4) -> (case _val4 of {TStruct _val5 -> (Includes_Types.to_Included (TStruct _val5)); _ -> error "wrong type"})) (Map.lookup (1) fields)
  }
to_MyStruct _ = error "not a struct"
read_MyStruct :: (Transport t, Protocol p) => p t -> IO MyStruct
read_MyStruct iprot = to_MyStruct <$> readVal iprot (T_STRUCT typemap_MyStruct)
decode_MyStruct :: (Protocol p, Transport t) => p t -> ByteString -> MyStruct
decode_MyStruct iprot bs = to_MyStruct $ deserializeVal iprot (T_STRUCT typemap_MyStruct) bs
typemap_MyStruct :: TypeMap
typemap_MyStruct = Map.fromList [("MyIncludedField",(1,(T_STRUCT Includes_Types.typemap_Included)))]
default_MyStruct :: MyStruct
default_MyStruct = MyStruct{
  myStruct_MyIncludedField = Includes_Types.default_Included{Includes_Types.included_MyIntField = 5}}

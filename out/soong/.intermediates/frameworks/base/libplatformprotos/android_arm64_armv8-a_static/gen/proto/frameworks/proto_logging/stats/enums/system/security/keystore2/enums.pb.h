// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/system/security/keystore2/enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fsystem_2fsecurity_2fkeystore2_2fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fsystem_2fsecurity_2fkeystore2_2fenums_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fproto_5flogging_2fstats_2fenums_2fsystem_2fsecurity_2fkeystore2_2fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fsystem_2fsecurity_2fkeystore2_2fenums_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace system {
namespace security {
namespace keystore2 {

enum SecurityLevelEnum : int {
  SECURITY_LEVEL_UNSPECIFIED = 0,
  SECURITY_LEVEL_SOFTWARE = 1,
  SECURITY_LEVEL_TRUSTED_ENVIRONMENT = 2,
  SECURITY_LEVEL_STRONGBOX = 3,
  SECURITY_LEVEL_KEYSTORE = 4
};
bool SecurityLevelEnum_IsValid(int value);
constexpr SecurityLevelEnum SecurityLevelEnum_MIN = SECURITY_LEVEL_UNSPECIFIED;
constexpr SecurityLevelEnum SecurityLevelEnum_MAX = SECURITY_LEVEL_KEYSTORE;
constexpr int SecurityLevelEnum_ARRAYSIZE = SecurityLevelEnum_MAX + 1;

const std::string& SecurityLevelEnum_Name(SecurityLevelEnum value);
template<typename T>
inline const std::string& SecurityLevelEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SecurityLevelEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SecurityLevelEnum_Name.");
  return SecurityLevelEnum_Name(static_cast<SecurityLevelEnum>(enum_t_value));
}
bool SecurityLevelEnum_Parse(
    const std::string& name, SecurityLevelEnum* value);
enum Algorithm : int {
  ALGORITHM_UNSPECIFIED = 0,
  RSA = 1,
  EC = 3,
  AES = 32,
  TRIPLE_DES = 33,
  HMAC = 128
};
bool Algorithm_IsValid(int value);
constexpr Algorithm Algorithm_MIN = ALGORITHM_UNSPECIFIED;
constexpr Algorithm Algorithm_MAX = HMAC;
constexpr int Algorithm_ARRAYSIZE = Algorithm_MAX + 1;

const std::string& Algorithm_Name(Algorithm value);
template<typename T>
inline const std::string& Algorithm_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Algorithm>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Algorithm_Name.");
  return Algorithm_Name(static_cast<Algorithm>(enum_t_value));
}
bool Algorithm_Parse(
    const std::string& name, Algorithm* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace keystore2
}  // namespace security
}  // namespace system
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::system::security::keystore2::SecurityLevelEnum> : ::std::true_type {};
template <> struct is_proto_enum< ::android::system::security::keystore2::Algorithm> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fsystem_2fsecurity_2fkeystore2_2fenums_2eproto

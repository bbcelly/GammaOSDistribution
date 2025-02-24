// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/app/job/enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fapp_2fjob_2fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fapp_2fjob_2fenums_2eproto

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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fproto_5flogging_2fstats_2fenums_2fapp_2fjob_2fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fapp_2fjob_2fenums_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fapp_2fjob_2fenums_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace app {
namespace job {

enum InternalStopReasonEnum : int {
  INTERNAL_STOP_REASON_UNKNOWN = -1,
  INTERNAL_STOP_REASON_CANCELLED = 0,
  INTERNAL_STOP_REASON_CONSTRAINTS_NOT_SATISFIED = 1,
  INTERNAL_STOP_REASON_PREEMPT = 2,
  INTERNAL_STOP_REASON_TIMEOUT = 3,
  INTERNAL_STOP_REASON_DEVICE_IDLE = 4,
  INTERNAL_STOP_REASON_DEVICE_THERMAL = 5,
  INTERNAL_STOP_REASON_RESTRICTED_BUCKET = 6,
  INTERNAL_STOP_REASON_UNINSTALL = 7,
  INTERNAL_STOP_REASON_DATA_CLEARED = 8,
  INTERNAL_STOP_REASON_RTC_UPDATED = 9,
  INTERNAL_STOP_REASON_SUCCESSFUL_FINISH = 10
};
bool InternalStopReasonEnum_IsValid(int value);
constexpr InternalStopReasonEnum InternalStopReasonEnum_MIN = INTERNAL_STOP_REASON_UNKNOWN;
constexpr InternalStopReasonEnum InternalStopReasonEnum_MAX = INTERNAL_STOP_REASON_SUCCESSFUL_FINISH;
constexpr int InternalStopReasonEnum_ARRAYSIZE = InternalStopReasonEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* InternalStopReasonEnum_descriptor();
template<typename T>
inline const std::string& InternalStopReasonEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, InternalStopReasonEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function InternalStopReasonEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    InternalStopReasonEnum_descriptor(), enum_t_value);
}
inline bool InternalStopReasonEnum_Parse(
    const std::string& name, InternalStopReasonEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<InternalStopReasonEnum>(
    InternalStopReasonEnum_descriptor(), name, value);
}
enum StopReasonEnum : int {
  STOP_REASON_UNDEFINED = 0,
  STOP_REASON_CANCELLED_BY_APP = 1,
  STOP_REASON_PREEMPT = 2,
  STOP_REASON_TIMEOUT = 3,
  STOP_REASON_DEVICE_STATE = 4,
  STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW = 5,
  STOP_REASON_CONSTRAINT_CHARGING = 6,
  STOP_REASON_CONSTRAINT_CONNECTIVITY = 7,
  STOP_REASON_CONSTRAINT_DEVICE_IDLE = 8,
  STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW = 9,
  STOP_REASON_QUOTA = 10,
  STOP_REASON_BACKGROUND_RESTRICTION = 11,
  STOP_REASON_APP_STANDBY = 12,
  STOP_REASON_USER = 13,
  STOP_REASON_SYSTEM_PROCESSING = 14
};
bool StopReasonEnum_IsValid(int value);
constexpr StopReasonEnum StopReasonEnum_MIN = STOP_REASON_UNDEFINED;
constexpr StopReasonEnum StopReasonEnum_MAX = STOP_REASON_SYSTEM_PROCESSING;
constexpr int StopReasonEnum_ARRAYSIZE = StopReasonEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StopReasonEnum_descriptor();
template<typename T>
inline const std::string& StopReasonEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StopReasonEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StopReasonEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    StopReasonEnum_descriptor(), enum_t_value);
}
inline bool StopReasonEnum_Parse(
    const std::string& name, StopReasonEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<StopReasonEnum>(
    StopReasonEnum_descriptor(), name, value);
}
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

}  // namespace job
}  // namespace app
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::app::job::InternalStopReasonEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::app::job::InternalStopReasonEnum>() {
  return ::android::app::job::InternalStopReasonEnum_descriptor();
}
template <> struct is_proto_enum< ::android::app::job::StopReasonEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::app::job::StopReasonEnum>() {
  return ::android::app::job::StopReasonEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fapp_2fjob_2fenums_2eproto

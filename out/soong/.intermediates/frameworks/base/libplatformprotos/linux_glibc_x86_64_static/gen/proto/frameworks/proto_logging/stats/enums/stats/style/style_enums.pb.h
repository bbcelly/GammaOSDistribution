// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/stats/style/style_enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fstyle_2fstyle_5fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fstyle_2fstyle_5fenums_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fstyle_2fstyle_5fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fstyle_2fstyle_5fenums_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fstyle_2fstyle_5fenums_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace stats {
namespace style {

enum Action : int {
  DEFAULT_ACTION = 0,
  ONRESUME = 1,
  ONSTOP = 2,
  PICKER_SELECT = 3,
  PICKER_APPLIED = 4,
  WALLPAPER_OPEN_CATEGORY = 5,
  WALLPAPER_SELECT = 6,
  WALLPAPER_APPLIED = 7,
  WALLPAPER_EXPLORE = 8,
  WALLPAPER_DOWNLOAD = 9,
  WALLPAPER_REMOVE = 10,
  LIVE_WALLPAPER_DOWNLOAD_SUCCESS = 11,
  LIVE_WALLPAPER_DOWNLOAD_FAILED = 12,
  LIVE_WALLPAPER_DOWNLOAD_CANCELLED = 13,
  LIVE_WALLPAPER_DELETE_SUCCESS = 14,
  LIVE_WALLPAPER_DELETE_FAILED = 15,
  LIVE_WALLPAPER_APPLIED = 16,
  LIVE_WALLPAPER_INFO_SELECT = 17,
  LIVE_WALLPAPER_CUSTOMIZE_SELECT = 18,
  LIVE_WALLPAPER_QUESTIONNAIRE_SELECT = 19,
  LIVE_WALLPAPER_QUESTIONNAIRE_APPLIED = 20,
  LIVE_WALLPAPER_EFFECT_SHOW = 21,
  APP_LAUNCHED = 22,
  COLOR_WALLPAPER_HOME_APPLIED = 23,
  COLOR_WALLPAPER_LOCK_APPLIED = 24,
  COLOR_WALLPAPER_HOME_LOCK_APPLIED = 25,
  COLOR_PRESET_APPLIED = 26
};
bool Action_IsValid(int value);
constexpr Action Action_MIN = DEFAULT_ACTION;
constexpr Action Action_MAX = COLOR_PRESET_APPLIED;
constexpr int Action_ARRAYSIZE = Action_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Action_descriptor();
template<typename T>
inline const std::string& Action_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Action>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Action_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Action_descriptor(), enum_t_value);
}
inline bool Action_Parse(
    const std::string& name, Action* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Action>(
    Action_descriptor(), name, value);
}
enum LocationPreference : int {
  LOCATION_PREFERENCE_UNSPECIFIED = 0,
  LOCATION_UNAVAILABLE = 1,
  LOCATION_CURRENT = 2,
  LOCATION_MANUAL = 3
};
bool LocationPreference_IsValid(int value);
constexpr LocationPreference LocationPreference_MIN = LOCATION_PREFERENCE_UNSPECIFIED;
constexpr LocationPreference LocationPreference_MAX = LOCATION_MANUAL;
constexpr int LocationPreference_ARRAYSIZE = LocationPreference_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LocationPreference_descriptor();
template<typename T>
inline const std::string& LocationPreference_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LocationPreference>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LocationPreference_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LocationPreference_descriptor(), enum_t_value);
}
inline bool LocationPreference_Parse(
    const std::string& name, LocationPreference* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LocationPreference>(
    LocationPreference_descriptor(), name, value);
}
enum DatePreference : int {
  DATE_PREFERENCE_UNSPECIFIED = 0,
  DATE_UNAVAILABLE = 1,
  DATE_MANUAL = 2
};
bool DatePreference_IsValid(int value);
constexpr DatePreference DatePreference_MIN = DATE_PREFERENCE_UNSPECIFIED;
constexpr DatePreference DatePreference_MAX = DATE_MANUAL;
constexpr int DatePreference_ARRAYSIZE = DatePreference_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DatePreference_descriptor();
template<typename T>
inline const std::string& DatePreference_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DatePreference>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DatePreference_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DatePreference_descriptor(), enum_t_value);
}
inline bool DatePreference_Parse(
    const std::string& name, DatePreference* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DatePreference>(
    DatePreference_descriptor(), name, value);
}
enum LaunchedPreference : int {
  LAUNCHED_PREFERENCE_UNSPECIFIED = 0,
  LAUNCHED_LAUNCHER = 1,
  LAUNCHED_SETTINGS = 2,
  LAUNCHED_SUW = 3,
  LAUNCHED_TIPS = 4,
  LAUNCHED_LAUNCH_ICON = 5,
  LAUNCHED_CROP_AND_SET_ACTION = 6,
  LAUNCHED_DEEP_LINK = 7,
  LAUNCHED_SETTINGS_SEARCH = 8
};
bool LaunchedPreference_IsValid(int value);
constexpr LaunchedPreference LaunchedPreference_MIN = LAUNCHED_PREFERENCE_UNSPECIFIED;
constexpr LaunchedPreference LaunchedPreference_MAX = LAUNCHED_SETTINGS_SEARCH;
constexpr int LaunchedPreference_ARRAYSIZE = LaunchedPreference_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LaunchedPreference_descriptor();
template<typename T>
inline const std::string& LaunchedPreference_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LaunchedPreference>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LaunchedPreference_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LaunchedPreference_descriptor(), enum_t_value);
}
inline bool LaunchedPreference_Parse(
    const std::string& name, LaunchedPreference* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LaunchedPreference>(
    LaunchedPreference_descriptor(), name, value);
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

}  // namespace style
}  // namespace stats
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::stats::style::Action> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::stats::style::Action>() {
  return ::android::stats::style::Action_descriptor();
}
template <> struct is_proto_enum< ::android::stats::style::LocationPreference> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::stats::style::LocationPreference>() {
  return ::android::stats::style::LocationPreference_descriptor();
}
template <> struct is_proto_enum< ::android::stats::style::DatePreference> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::stats::style::DatePreference>() {
  return ::android::stats::style::DatePreference_descriptor();
}
template <> struct is_proto_enum< ::android::stats::style::LaunchedPreference> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::stats::style::LaunchedPreference>() {
  return ::android::stats::style::LaunchedPreference_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fstyle_2fstyle_5fenums_2eproto

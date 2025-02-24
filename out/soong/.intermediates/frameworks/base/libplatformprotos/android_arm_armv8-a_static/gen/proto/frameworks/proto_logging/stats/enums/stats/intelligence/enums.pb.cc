// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/stats/intelligence/enums.proto

#include "frameworks/proto_logging/stats/enums/stats/intelligence/enums.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace android {
namespace stats {
namespace intelligence {
}  // namespace intelligence
}  // namespace stats
}  // namespace android
namespace android {
namespace stats {
namespace intelligence {
bool Status_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> Status_strings[3] = {};

static const char Status_names[] =
  "STATUS_FAILED"
  "STATUS_SUCCEEDED"
  "STATUS_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry Status_entries[] = {
  { {Status_names + 0, 13}, 2 },
  { {Status_names + 13, 16}, 1 },
  { {Status_names + 29, 14}, 0 },
};

static const int Status_entries_by_number[] = {
  2, // 0 -> STATUS_UNKNOWN
  1, // 1 -> STATUS_SUCCEEDED
  0, // 2 -> STATUS_FAILED
};

const std::string& Status_Name(
    Status value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          Status_entries,
          Status_entries_by_number,
          3, Status_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      Status_entries,
      Status_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     Status_strings[idx].get();
}
bool Status_Parse(
    const std::string& name, Status* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      Status_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<Status>(int_value);
  }
  return success;
}
bool EventType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> EventType_strings[3] = {};

static const char EventType_names[] =
  "EVENT_CONTENT_SUGGESTIONS_CLASSIFY_CONTENT_CALL"
  "EVENT_CONTENT_SUGGESTIONS_SUGGEST_CONTENT_CALL"
  "EVENT_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry EventType_entries[] = {
  { {EventType_names + 0, 47}, 1 },
  { {EventType_names + 47, 46}, 2 },
  { {EventType_names + 93, 13}, 0 },
};

static const int EventType_entries_by_number[] = {
  2, // 0 -> EVENT_UNKNOWN
  0, // 1 -> EVENT_CONTENT_SUGGESTIONS_CLASSIFY_CONTENT_CALL
  1, // 2 -> EVENT_CONTENT_SUGGESTIONS_SUGGEST_CONTENT_CALL
};

const std::string& EventType_Name(
    EventType value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          EventType_entries,
          EventType_entries_by_number,
          3, EventType_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      EventType_entries,
      EventType_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     EventType_strings[idx].get();
}
bool EventType_Parse(
    const std::string& name, EventType* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      EventType_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<EventType>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace intelligence
}  // namespace stats
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

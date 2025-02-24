// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/server/job/enums.proto

#include "frameworks/proto_logging/stats/enums/server/job/enums.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace com {
namespace android {
namespace server {
namespace job {
}  // namespace job
}  // namespace server
}  // namespace android
}  // namespace com
namespace com {
namespace android {
namespace server {
namespace job {
bool ConstraintEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ConstraintEnum_strings[13] = {};

static const char ConstraintEnum_names[] =
  "CONSTRAINT_BACKGROUND_NOT_RESTRICTED"
  "CONSTRAINT_BATTERY_NOT_LOW"
  "CONSTRAINT_CHARGING"
  "CONSTRAINT_CONNECTIVITY"
  "CONSTRAINT_CONTENT_TRIGGER"
  "CONSTRAINT_DEADLINE"
  "CONSTRAINT_DEVICE_NOT_DOZING"
  "CONSTRAINT_IDLE"
  "CONSTRAINT_STORAGE_NOT_LOW"
  "CONSTRAINT_TIMING_DELAY"
  "CONSTRAINT_UNKNOWN"
  "CONSTRAINT_WITHIN_EXPEDITED_JOB_QUOTA"
  "CONSTRAINT_WITHIN_QUOTA";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ConstraintEnum_entries[] = {
  { {ConstraintEnum_names + 0, 36}, 11 },
  { {ConstraintEnum_names + 36, 26}, 2 },
  { {ConstraintEnum_names + 62, 19}, 1 },
  { {ConstraintEnum_names + 81, 23}, 7 },
  { {ConstraintEnum_names + 104, 26}, 8 },
  { {ConstraintEnum_names + 130, 19}, 5 },
  { {ConstraintEnum_names + 149, 28}, 9 },
  { {ConstraintEnum_names + 177, 15}, 6 },
  { {ConstraintEnum_names + 192, 26}, 3 },
  { {ConstraintEnum_names + 218, 23}, 4 },
  { {ConstraintEnum_names + 241, 18}, 0 },
  { {ConstraintEnum_names + 259, 37}, 12 },
  { {ConstraintEnum_names + 296, 23}, 10 },
};

static const int ConstraintEnum_entries_by_number[] = {
  10, // 0 -> CONSTRAINT_UNKNOWN
  2, // 1 -> CONSTRAINT_CHARGING
  1, // 2 -> CONSTRAINT_BATTERY_NOT_LOW
  8, // 3 -> CONSTRAINT_STORAGE_NOT_LOW
  9, // 4 -> CONSTRAINT_TIMING_DELAY
  5, // 5 -> CONSTRAINT_DEADLINE
  7, // 6 -> CONSTRAINT_IDLE
  3, // 7 -> CONSTRAINT_CONNECTIVITY
  4, // 8 -> CONSTRAINT_CONTENT_TRIGGER
  6, // 9 -> CONSTRAINT_DEVICE_NOT_DOZING
  12, // 10 -> CONSTRAINT_WITHIN_QUOTA
  0, // 11 -> CONSTRAINT_BACKGROUND_NOT_RESTRICTED
  11, // 12 -> CONSTRAINT_WITHIN_EXPEDITED_JOB_QUOTA
};

const std::string& ConstraintEnum_Name(
    ConstraintEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ConstraintEnum_entries,
          ConstraintEnum_entries_by_number,
          13, ConstraintEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ConstraintEnum_entries,
      ConstraintEnum_entries_by_number,
      13, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ConstraintEnum_strings[idx].get();
}
bool ConstraintEnum_Parse(
    const std::string& name, ConstraintEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ConstraintEnum_entries, 13, name, &int_value);
  if (success) {
    *value = static_cast<ConstraintEnum>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace job
}  // namespace server
}  // namespace android
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

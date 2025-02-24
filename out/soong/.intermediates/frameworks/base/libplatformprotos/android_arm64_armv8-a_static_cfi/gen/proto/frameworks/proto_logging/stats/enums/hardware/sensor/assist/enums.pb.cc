// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/hardware/sensor/assist/enums.proto

#include "frameworks/proto_logging/stats/enums/hardware/sensor/assist/enums.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace android {
namespace hardware {
namespace sensor {
namespace assist {
}  // namespace assist
}  // namespace sensor
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace sensor {
namespace assist {
bool AssistGestureStageEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> AssistGestureStageEnum_strings[4] = {};

static const char AssistGestureStageEnum_names[] =
  "ASSIST_GESTURE_STAGE_DETECTED"
  "ASSIST_GESTURE_STAGE_PRIMED"
  "ASSIST_GESTURE_STAGE_PROGRESS"
  "ASSIST_GESTURE_STAGE_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry AssistGestureStageEnum_entries[] = {
  { {AssistGestureStageEnum_names + 0, 29}, 3 },
  { {AssistGestureStageEnum_names + 29, 27}, 2 },
  { {AssistGestureStageEnum_names + 56, 29}, 1 },
  { {AssistGestureStageEnum_names + 85, 28}, 0 },
};

static const int AssistGestureStageEnum_entries_by_number[] = {
  3, // 0 -> ASSIST_GESTURE_STAGE_UNKNOWN
  2, // 1 -> ASSIST_GESTURE_STAGE_PROGRESS
  1, // 2 -> ASSIST_GESTURE_STAGE_PRIMED
  0, // 3 -> ASSIST_GESTURE_STAGE_DETECTED
};

const std::string& AssistGestureStageEnum_Name(
    AssistGestureStageEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          AssistGestureStageEnum_entries,
          AssistGestureStageEnum_entries_by_number,
          4, AssistGestureStageEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      AssistGestureStageEnum_entries,
      AssistGestureStageEnum_entries_by_number,
      4, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     AssistGestureStageEnum_strings[idx].get();
}
bool AssistGestureStageEnum_Parse(
    const std::string& name, AssistGestureStageEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      AssistGestureStageEnum_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<AssistGestureStageEnum>(int_value);
  }
  return success;
}
bool AssistGestureFeedbackEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> AssistGestureFeedbackEnum_strings[3] = {};

static const char AssistGestureFeedbackEnum_names[] =
  "ASSIST_GESTURE_FEEDBACK_NOT_USED"
  "ASSIST_GESTURE_FEEDBACK_UNKNOWN"
  "ASSIST_GESTURE_FEEDBACK_USED";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry AssistGestureFeedbackEnum_entries[] = {
  { {AssistGestureFeedbackEnum_names + 0, 32}, 1 },
  { {AssistGestureFeedbackEnum_names + 32, 31}, 0 },
  { {AssistGestureFeedbackEnum_names + 63, 28}, 2 },
};

static const int AssistGestureFeedbackEnum_entries_by_number[] = {
  1, // 0 -> ASSIST_GESTURE_FEEDBACK_UNKNOWN
  0, // 1 -> ASSIST_GESTURE_FEEDBACK_NOT_USED
  2, // 2 -> ASSIST_GESTURE_FEEDBACK_USED
};

const std::string& AssistGestureFeedbackEnum_Name(
    AssistGestureFeedbackEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          AssistGestureFeedbackEnum_entries,
          AssistGestureFeedbackEnum_entries_by_number,
          3, AssistGestureFeedbackEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      AssistGestureFeedbackEnum_entries,
      AssistGestureFeedbackEnum_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     AssistGestureFeedbackEnum_strings[idx].get();
}
bool AssistGestureFeedbackEnum_Parse(
    const std::string& name, AssistGestureFeedbackEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      AssistGestureFeedbackEnum_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<AssistGestureFeedbackEnum>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace assist
}  // namespace sensor
}  // namespace hardware
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

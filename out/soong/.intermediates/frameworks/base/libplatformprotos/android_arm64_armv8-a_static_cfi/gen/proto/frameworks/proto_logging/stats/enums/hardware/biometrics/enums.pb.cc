// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/hardware/biometrics/enums.proto

#include "frameworks/proto_logging/stats/enums/hardware/biometrics/enums.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace android {
namespace hardware {
namespace biometrics {
}  // namespace biometrics
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace biometrics {
bool ModalityEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ModalityEnum_strings[4] = {};

static const char ModalityEnum_names[] =
  "MODALITY_FACE"
  "MODALITY_FINGERPRINT"
  "MODALITY_IRIS"
  "MODALITY_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ModalityEnum_entries[] = {
  { {ModalityEnum_names + 0, 13}, 4 },
  { {ModalityEnum_names + 13, 20}, 1 },
  { {ModalityEnum_names + 33, 13}, 2 },
  { {ModalityEnum_names + 46, 16}, 0 },
};

static const int ModalityEnum_entries_by_number[] = {
  3, // 0 -> MODALITY_UNKNOWN
  1, // 1 -> MODALITY_FINGERPRINT
  2, // 2 -> MODALITY_IRIS
  0, // 4 -> MODALITY_FACE
};

const std::string& ModalityEnum_Name(
    ModalityEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ModalityEnum_entries,
          ModalityEnum_entries_by_number,
          4, ModalityEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ModalityEnum_entries,
      ModalityEnum_entries_by_number,
      4, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ModalityEnum_strings[idx].get();
}
bool ModalityEnum_Parse(
    const std::string& name, ModalityEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ModalityEnum_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<ModalityEnum>(int_value);
  }
  return success;
}
bool ClientEnum_IsValid(int value) {
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

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ClientEnum_strings[4] = {};

static const char ClientEnum_names[] =
  "CLIENT_BIOMETRIC_PROMPT"
  "CLIENT_FINGERPRINT_MANAGER"
  "CLIENT_KEYGUARD"
  "CLIENT_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ClientEnum_entries[] = {
  { {ClientEnum_names + 0, 23}, 2 },
  { {ClientEnum_names + 23, 26}, 3 },
  { {ClientEnum_names + 49, 15}, 1 },
  { {ClientEnum_names + 64, 14}, 0 },
};

static const int ClientEnum_entries_by_number[] = {
  3, // 0 -> CLIENT_UNKNOWN
  2, // 1 -> CLIENT_KEYGUARD
  0, // 2 -> CLIENT_BIOMETRIC_PROMPT
  1, // 3 -> CLIENT_FINGERPRINT_MANAGER
};

const std::string& ClientEnum_Name(
    ClientEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ClientEnum_entries,
          ClientEnum_entries_by_number,
          4, ClientEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ClientEnum_entries,
      ClientEnum_entries_by_number,
      4, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ClientEnum_strings[idx].get();
}
bool ClientEnum_Parse(
    const std::string& name, ClientEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ClientEnum_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<ClientEnum>(int_value);
  }
  return success;
}
bool ActionEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ActionEnum_strings[5] = {};

static const char ActionEnum_names[] =
  "ACTION_AUTHENTICATE"
  "ACTION_ENROLL"
  "ACTION_ENUMERATE"
  "ACTION_REMOVE"
  "ACTION_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ActionEnum_entries[] = {
  { {ActionEnum_names + 0, 19}, 2 },
  { {ActionEnum_names + 19, 13}, 1 },
  { {ActionEnum_names + 32, 16}, 3 },
  { {ActionEnum_names + 48, 13}, 4 },
  { {ActionEnum_names + 61, 14}, 0 },
};

static const int ActionEnum_entries_by_number[] = {
  4, // 0 -> ACTION_UNKNOWN
  1, // 1 -> ACTION_ENROLL
  0, // 2 -> ACTION_AUTHENTICATE
  2, // 3 -> ACTION_ENUMERATE
  3, // 4 -> ACTION_REMOVE
};

const std::string& ActionEnum_Name(
    ActionEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ActionEnum_entries,
          ActionEnum_entries_by_number,
          5, ActionEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ActionEnum_entries,
      ActionEnum_entries_by_number,
      5, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ActionEnum_strings[idx].get();
}
bool ActionEnum_Parse(
    const std::string& name, ActionEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ActionEnum_entries, 5, name, &int_value);
  if (success) {
    *value = static_cast<ActionEnum>(int_value);
  }
  return success;
}
bool IssueEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> IssueEnum_strings[5] = {};

static const char IssueEnum_names[] =
  "ISSUE_CANCEL_TIMED_OUT"
  "ISSUE_HAL_DEATH"
  "ISSUE_UNKNOWN"
  "ISSUE_UNKNOWN_TEMPLATE_ENROLLED_FRAMEWORK"
  "ISSUE_UNKNOWN_TEMPLATE_ENROLLED_HAL";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry IssueEnum_entries[] = {
  { {IssueEnum_names + 0, 22}, 4 },
  { {IssueEnum_names + 22, 15}, 1 },
  { {IssueEnum_names + 37, 13}, 0 },
  { {IssueEnum_names + 50, 41}, 2 },
  { {IssueEnum_names + 91, 35}, 3 },
};

static const int IssueEnum_entries_by_number[] = {
  2, // 0 -> ISSUE_UNKNOWN
  1, // 1 -> ISSUE_HAL_DEATH
  3, // 2 -> ISSUE_UNKNOWN_TEMPLATE_ENROLLED_FRAMEWORK
  4, // 3 -> ISSUE_UNKNOWN_TEMPLATE_ENROLLED_HAL
  0, // 4 -> ISSUE_CANCEL_TIMED_OUT
};

const std::string& IssueEnum_Name(
    IssueEnum value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          IssueEnum_entries,
          IssueEnum_entries_by_number,
          5, IssueEnum_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      IssueEnum_entries,
      IssueEnum_entries_by_number,
      5, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     IssueEnum_strings[idx].get();
}
bool IssueEnum_Parse(
    const std::string& name, IssueEnum* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      IssueEnum_entries, 5, name, &int_value);
  if (success) {
    *value = static_cast<IssueEnum>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace biometrics
}  // namespace hardware
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

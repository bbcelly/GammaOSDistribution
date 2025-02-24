// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/telephony/enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2ftelephony_2fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2ftelephony_2fenums_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fproto_5flogging_2fstats_2fenums_2ftelephony_2fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2ftelephony_2fenums_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fproto_5flogging_2fstats_2fenums_2ftelephony_2fenums_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace telephony {

enum CallBearerEnum : int {
  CALL_BEARER_UNKNOWN = 0,
  CALL_BEARER_CS = 1,
  CALL_BEARER_IMS = 2
};
bool CallBearerEnum_IsValid(int value);
constexpr CallBearerEnum CallBearerEnum_MIN = CALL_BEARER_UNKNOWN;
constexpr CallBearerEnum CallBearerEnum_MAX = CALL_BEARER_IMS;
constexpr int CallBearerEnum_ARRAYSIZE = CallBearerEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CallBearerEnum_descriptor();
template<typename T>
inline const std::string& CallBearerEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CallBearerEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CallBearerEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CallBearerEnum_descriptor(), enum_t_value);
}
inline bool CallBearerEnum_Parse(
    const std::string& name, CallBearerEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CallBearerEnum>(
    CallBearerEnum_descriptor(), name, value);
}
enum CallDirectionEnum : int {
  CALL_DIRECTION_UNKNOWN = 0,
  CALL_DIRECTION_MO = 1,
  CALL_DIRECTION_MT = 2
};
bool CallDirectionEnum_IsValid(int value);
constexpr CallDirectionEnum CallDirectionEnum_MIN = CALL_DIRECTION_UNKNOWN;
constexpr CallDirectionEnum CallDirectionEnum_MAX = CALL_DIRECTION_MT;
constexpr int CallDirectionEnum_ARRAYSIZE = CallDirectionEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CallDirectionEnum_descriptor();
template<typename T>
inline const std::string& CallDirectionEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CallDirectionEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CallDirectionEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CallDirectionEnum_descriptor(), enum_t_value);
}
inline bool CallDirectionEnum_Parse(
    const std::string& name, CallDirectionEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CallDirectionEnum>(
    CallDirectionEnum_descriptor(), name, value);
}
enum CallSetupDurationEnum : int {
  CALL_SETUP_DURATION_UNKNOWN = 0,
  CALL_SETUP_DURATION_EXTREMELY_FAST = 1,
  CALL_SETUP_DURATION_ULTRA_FAST = 2,
  CALL_SETUP_DURATION_VERY_FAST = 3,
  CALL_SETUP_DURATION_FAST = 4,
  CALL_SETUP_DURATION_NORMAL = 5,
  CALL_SETUP_DURATION_SLOW = 6,
  CALL_SETUP_DURATION_VERY_SLOW = 7,
  CALL_SETUP_DURATION_ULTRA_SLOW = 8,
  CALL_SETUP_DURATION_EXTREMELY_SLOW = 9
};
bool CallSetupDurationEnum_IsValid(int value);
constexpr CallSetupDurationEnum CallSetupDurationEnum_MIN = CALL_SETUP_DURATION_UNKNOWN;
constexpr CallSetupDurationEnum CallSetupDurationEnum_MAX = CALL_SETUP_DURATION_EXTREMELY_SLOW;
constexpr int CallSetupDurationEnum_ARRAYSIZE = CallSetupDurationEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CallSetupDurationEnum_descriptor();
template<typename T>
inline const std::string& CallSetupDurationEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CallSetupDurationEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CallSetupDurationEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CallSetupDurationEnum_descriptor(), enum_t_value);
}
inline bool CallSetupDurationEnum_Parse(
    const std::string& name, CallSetupDurationEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CallSetupDurationEnum>(
    CallSetupDurationEnum_descriptor(), name, value);
}
enum DataConnectionPowerStateEnum : int {
  DATA_CONNECTION_POWER_STATE_LOW = 1,
  DATA_CONNECTION_POWER_STATE_MEDIUM = 2,
  DATA_CONNECTION_POWER_STATE_HIGH = 3,
  DATA_CONNECTION_POWER_STATE_UNKNOWN = 2147483647
};
bool DataConnectionPowerStateEnum_IsValid(int value);
constexpr DataConnectionPowerStateEnum DataConnectionPowerStateEnum_MIN = DATA_CONNECTION_POWER_STATE_LOW;
constexpr DataConnectionPowerStateEnum DataConnectionPowerStateEnum_MAX = DATA_CONNECTION_POWER_STATE_UNKNOWN;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataConnectionPowerStateEnum_descriptor();
template<typename T>
inline const std::string& DataConnectionPowerStateEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataConnectionPowerStateEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataConnectionPowerStateEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataConnectionPowerStateEnum_descriptor(), enum_t_value);
}
inline bool DataConnectionPowerStateEnum_Parse(
    const std::string& name, DataConnectionPowerStateEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataConnectionPowerStateEnum>(
    DataConnectionPowerStateEnum_descriptor(), name, value);
}
enum NetworkTypeEnum : int {
  NETWORK_TYPE_UNKNOWN = 0,
  NETWORK_TYPE_GPRS = 1,
  NETWORK_TYPE_EDGE = 2,
  NETWORK_TYPE_UMTS = 3,
  NETWORK_TYPE_CDMA = 4,
  NETWORK_TYPE_EVDO_0 = 5,
  NETWORK_TYPE_EVDO_A = 6,
  NETWORK_TYPE_1XRTT = 7,
  NETWORK_TYPE_HSDPA = 8,
  NETWORK_TYPE_HSUPA = 9,
  NETWORK_TYPE_HSPA = 10,
  NETWORK_TYPE_IDEN = 11,
  NETWORK_TYPE_EVDO_B = 12,
  NETWORK_TYPE_LTE = 13,
  NETWORK_TYPE_EHRPD = 14,
  NETWORK_TYPE_HSPAP = 15,
  NETWORK_TYPE_GSM = 16,
  NETWORK_TYPE_TD_SCDMA = 17,
  NETWORK_TYPE_IWLAN = 18,
  NETWORK_TYPE_LTE_CA = 19,
  NETWORK_TYPE_NR = 20
};
bool NetworkTypeEnum_IsValid(int value);
constexpr NetworkTypeEnum NetworkTypeEnum_MIN = NETWORK_TYPE_UNKNOWN;
constexpr NetworkTypeEnum NetworkTypeEnum_MAX = NETWORK_TYPE_NR;
constexpr int NetworkTypeEnum_ARRAYSIZE = NetworkTypeEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* NetworkTypeEnum_descriptor();
template<typename T>
inline const std::string& NetworkTypeEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NetworkTypeEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NetworkTypeEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    NetworkTypeEnum_descriptor(), enum_t_value);
}
inline bool NetworkTypeEnum_Parse(
    const std::string& name, NetworkTypeEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<NetworkTypeEnum>(
    NetworkTypeEnum_descriptor(), name, value);
}
enum RoamingTypeEnum : int {
  ROAMING_TYPE_NOT_ROAMING = 0,
  ROAMING_TYPE_ROAMING = 1,
  ROAMING_TYPE_ROAMING_DOMESTIC = 2,
  ROAMING_TYPE_ROAMING_INTERNATIONAL = 3
};
bool RoamingTypeEnum_IsValid(int value);
constexpr RoamingTypeEnum RoamingTypeEnum_MIN = ROAMING_TYPE_NOT_ROAMING;
constexpr RoamingTypeEnum RoamingTypeEnum_MAX = ROAMING_TYPE_ROAMING_INTERNATIONAL;
constexpr int RoamingTypeEnum_ARRAYSIZE = RoamingTypeEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RoamingTypeEnum_descriptor();
template<typename T>
inline const std::string& RoamingTypeEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RoamingTypeEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RoamingTypeEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RoamingTypeEnum_descriptor(), enum_t_value);
}
inline bool RoamingTypeEnum_Parse(
    const std::string& name, RoamingTypeEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RoamingTypeEnum>(
    RoamingTypeEnum_descriptor(), name, value);
}
enum SignalStrengthEnum : int {
  SIGNAL_STRENGTH_NONE_OR_UNKNOWN = 0,
  SIGNAL_STRENGTH_POOR = 1,
  SIGNAL_STRENGTH_MODERATE = 2,
  SIGNAL_STRENGTH_GOOD = 3,
  SIGNAL_STRENGTH_GREAT = 4
};
bool SignalStrengthEnum_IsValid(int value);
constexpr SignalStrengthEnum SignalStrengthEnum_MIN = SIGNAL_STRENGTH_NONE_OR_UNKNOWN;
constexpr SignalStrengthEnum SignalStrengthEnum_MAX = SIGNAL_STRENGTH_GREAT;
constexpr int SignalStrengthEnum_ARRAYSIZE = SignalStrengthEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SignalStrengthEnum_descriptor();
template<typename T>
inline const std::string& SignalStrengthEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SignalStrengthEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SignalStrengthEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SignalStrengthEnum_descriptor(), enum_t_value);
}
inline bool SignalStrengthEnum_Parse(
    const std::string& name, SignalStrengthEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SignalStrengthEnum>(
    SignalStrengthEnum_descriptor(), name, value);
}
enum ServiceStateEnum : int {
  SERVICE_STATE_IN_SERVICE = 0,
  SERVICE_STATE_OUT_OF_SERVICE = 1,
  SERVICE_STATE_EMERGENCY_ONLY = 2,
  SERVICE_STATE_POWER_OFF = 3
};
bool ServiceStateEnum_IsValid(int value);
constexpr ServiceStateEnum ServiceStateEnum_MIN = SERVICE_STATE_IN_SERVICE;
constexpr ServiceStateEnum ServiceStateEnum_MAX = SERVICE_STATE_POWER_OFF;
constexpr int ServiceStateEnum_ARRAYSIZE = ServiceStateEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ServiceStateEnum_descriptor();
template<typename T>
inline const std::string& ServiceStateEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ServiceStateEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ServiceStateEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ServiceStateEnum_descriptor(), enum_t_value);
}
inline bool ServiceStateEnum_Parse(
    const std::string& name, ServiceStateEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ServiceStateEnum>(
    ServiceStateEnum_descriptor(), name, value);
}
enum SimStateEnum : int {
  SIM_STATE_UNKNOWN = 0,
  SIM_STATE_ABSENT = 1,
  SIM_STATE_PIN_REQUIRED = 2,
  SIM_STATE_PUK_REQUIRED = 3,
  SIM_STATE_NETWORK_LOCKED = 4,
  SIM_STATE_READY = 5,
  SIM_STATE_NOT_READY = 6,
  SIM_STATE_PERM_DISABLED = 7,
  SIM_STATE_CARD_IO_ERROR = 8,
  SIM_STATE_CARD_RESTRICTED = 9,
  SIM_STATE_LOADED = 10,
  SIM_STATE_PRESENT = 11
};
bool SimStateEnum_IsValid(int value);
constexpr SimStateEnum SimStateEnum_MIN = SIM_STATE_UNKNOWN;
constexpr SimStateEnum SimStateEnum_MAX = SIM_STATE_PRESENT;
constexpr int SimStateEnum_ARRAYSIZE = SimStateEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SimStateEnum_descriptor();
template<typename T>
inline const std::string& SimStateEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SimStateEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SimStateEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SimStateEnum_descriptor(), enum_t_value);
}
inline bool SimStateEnum_Parse(
    const std::string& name, SimStateEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SimStateEnum>(
    SimStateEnum_descriptor(), name, value);
}
enum SmsFormatEnum : int {
  SMS_FORMAT_UNKNOWN = 0,
  SMS_FORMAT_3GPP = 1,
  SMS_FORMAT_3GPP2 = 2
};
bool SmsFormatEnum_IsValid(int value);
constexpr SmsFormatEnum SmsFormatEnum_MIN = SMS_FORMAT_UNKNOWN;
constexpr SmsFormatEnum SmsFormatEnum_MAX = SMS_FORMAT_3GPP2;
constexpr int SmsFormatEnum_ARRAYSIZE = SmsFormatEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SmsFormatEnum_descriptor();
template<typename T>
inline const std::string& SmsFormatEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SmsFormatEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SmsFormatEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SmsFormatEnum_descriptor(), enum_t_value);
}
inline bool SmsFormatEnum_Parse(
    const std::string& name, SmsFormatEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SmsFormatEnum>(
    SmsFormatEnum_descriptor(), name, value);
}
enum SmsTechEnum : int {
  SMS_TECH_UNKNOWN = 0,
  SMS_TECH_CS_3GPP = 1,
  SMS_TECH_CS_3GPP2 = 2,
  SMS_TECH_IMS = 3
};
bool SmsTechEnum_IsValid(int value);
constexpr SmsTechEnum SmsTechEnum_MIN = SMS_TECH_UNKNOWN;
constexpr SmsTechEnum SmsTechEnum_MAX = SMS_TECH_IMS;
constexpr int SmsTechEnum_ARRAYSIZE = SmsTechEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SmsTechEnum_descriptor();
template<typename T>
inline const std::string& SmsTechEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SmsTechEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SmsTechEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SmsTechEnum_descriptor(), enum_t_value);
}
inline bool SmsTechEnum_Parse(
    const std::string& name, SmsTechEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SmsTechEnum>(
    SmsTechEnum_descriptor(), name, value);
}
enum SmsTypeEnum : int {
  SMS_TYPE_NORMAL = 0,
  SMS_TYPE_SMS_PP = 1,
  SMS_TYPE_VOICEMAIL_INDICATION = 2,
  SMS_TYPE_ZERO = 3,
  SMS_TYPE_WAP_PUSH = 4
};
bool SmsTypeEnum_IsValid(int value);
constexpr SmsTypeEnum SmsTypeEnum_MIN = SMS_TYPE_NORMAL;
constexpr SmsTypeEnum SmsTypeEnum_MAX = SMS_TYPE_WAP_PUSH;
constexpr int SmsTypeEnum_ARRAYSIZE = SmsTypeEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SmsTypeEnum_descriptor();
template<typename T>
inline const std::string& SmsTypeEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SmsTypeEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SmsTypeEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SmsTypeEnum_descriptor(), enum_t_value);
}
inline bool SmsTypeEnum_Parse(
    const std::string& name, SmsTypeEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SmsTypeEnum>(
    SmsTypeEnum_descriptor(), name, value);
}
enum SmsIncomingErrorEnum : int {
  SMS_SUCCESS = 0,
  SMS_ERROR_GENERIC = 1,
  SMS_ERROR_NO_MEMORY = 2,
  SMS_ERROR_NOT_SUPPORTED = 3
};
bool SmsIncomingErrorEnum_IsValid(int value);
constexpr SmsIncomingErrorEnum SmsIncomingErrorEnum_MIN = SMS_SUCCESS;
constexpr SmsIncomingErrorEnum SmsIncomingErrorEnum_MAX = SMS_ERROR_NOT_SUPPORTED;
constexpr int SmsIncomingErrorEnum_ARRAYSIZE = SmsIncomingErrorEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SmsIncomingErrorEnum_descriptor();
template<typename T>
inline const std::string& SmsIncomingErrorEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SmsIncomingErrorEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SmsIncomingErrorEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SmsIncomingErrorEnum_descriptor(), enum_t_value);
}
inline bool SmsIncomingErrorEnum_Parse(
    const std::string& name, SmsIncomingErrorEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SmsIncomingErrorEnum>(
    SmsIncomingErrorEnum_descriptor(), name, value);
}
enum SmsSendResultEnum : int {
  SMS_SEND_RESULT_UNKNOWN = 0,
  SMS_SEND_RESULT_SUCCESS = 1,
  SMS_SEND_RESULT_ERROR = 2,
  SMS_SEND_RESULT_ERROR_RETRY = 3,
  SMS_SEND_RESULT_ERROR_FALLBACK = 4
};
bool SmsSendResultEnum_IsValid(int value);
constexpr SmsSendResultEnum SmsSendResultEnum_MIN = SMS_SEND_RESULT_UNKNOWN;
constexpr SmsSendResultEnum SmsSendResultEnum_MAX = SMS_SEND_RESULT_ERROR_FALLBACK;
constexpr int SmsSendResultEnum_ARRAYSIZE = SmsSendResultEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SmsSendResultEnum_descriptor();
template<typename T>
inline const std::string& SmsSendResultEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SmsSendResultEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SmsSendResultEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SmsSendResultEnum_descriptor(), enum_t_value);
}
inline bool SmsSendResultEnum_Parse(
    const std::string& name, SmsSendResultEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SmsSendResultEnum>(
    SmsSendResultEnum_descriptor(), name, value);
}
enum DataProfileEnum : int {
  DATA_PROFILE_DEFAULT = 0,
  DATA_PROFILE_TETHERED = 1,
  DATA_PROFILE_IMS = 2,
  DATA_PROFILE_FOTA = 3,
  DATA_PROFILE_CBS = 4,
  DATA_PROFILE_OEM_BASE = 1000,
  DATA_PROFILE_INVALID = -1
};
bool DataProfileEnum_IsValid(int value);
constexpr DataProfileEnum DataProfileEnum_MIN = DATA_PROFILE_INVALID;
constexpr DataProfileEnum DataProfileEnum_MAX = DATA_PROFILE_OEM_BASE;
constexpr int DataProfileEnum_ARRAYSIZE = DataProfileEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataProfileEnum_descriptor();
template<typename T>
inline const std::string& DataProfileEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataProfileEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataProfileEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataProfileEnum_descriptor(), enum_t_value);
}
inline bool DataProfileEnum_Parse(
    const std::string& name, DataProfileEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataProfileEnum>(
    DataProfileEnum_descriptor(), name, value);
}
enum DataDeactivateReasonEnum : int {
  DEACTIVATE_REASON_UNKNOWN = 0,
  DEACTIVATE_REASON_NORMAL = 1,
  DEACTIVATE_REASON_RADIO_OFF = 2,
  DEACTIVATE_REASON_HANDOVER = 3
};
bool DataDeactivateReasonEnum_IsValid(int value);
constexpr DataDeactivateReasonEnum DataDeactivateReasonEnum_MIN = DEACTIVATE_REASON_UNKNOWN;
constexpr DataDeactivateReasonEnum DataDeactivateReasonEnum_MAX = DEACTIVATE_REASON_HANDOVER;
constexpr int DataDeactivateReasonEnum_ARRAYSIZE = DataDeactivateReasonEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataDeactivateReasonEnum_descriptor();
template<typename T>
inline const std::string& DataDeactivateReasonEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataDeactivateReasonEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataDeactivateReasonEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataDeactivateReasonEnum_descriptor(), enum_t_value);
}
inline bool DataDeactivateReasonEnum_Parse(
    const std::string& name, DataDeactivateReasonEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataDeactivateReasonEnum>(
    DataDeactivateReasonEnum_descriptor(), name, value);
}
enum ApnProtocolEnum : int {
  APN_PROTOCOL_IPV4 = 0,
  APN_PROTOCOL_IPV6 = 1,
  APN_PROTOCOL_IPV4V6 = 2,
  APN_PROTOCOL_PPP = 3
};
bool ApnProtocolEnum_IsValid(int value);
constexpr ApnProtocolEnum ApnProtocolEnum_MIN = APN_PROTOCOL_IPV4;
constexpr ApnProtocolEnum ApnProtocolEnum_MAX = APN_PROTOCOL_PPP;
constexpr int ApnProtocolEnum_ARRAYSIZE = ApnProtocolEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ApnProtocolEnum_descriptor();
template<typename T>
inline const std::string& ApnProtocolEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ApnProtocolEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ApnProtocolEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ApnProtocolEnum_descriptor(), enum_t_value);
}
inline bool ApnProtocolEnum_Parse(
    const std::string& name, ApnProtocolEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ApnProtocolEnum>(
    ApnProtocolEnum_descriptor(), name, value);
}
enum DataStallRecoveryActionEnum : int {
  RECOVERY_ACTION_GET_DATA_CALL_LIST = 0,
  RECOVERY_ACTION_CLEANUP = 1,
  RECOVERY_ACTION_REREGISTER = 2,
  RECOVERY_ACTION_RADIO_RESTART = 3
};
bool DataStallRecoveryActionEnum_IsValid(int value);
constexpr DataStallRecoveryActionEnum DataStallRecoveryActionEnum_MIN = RECOVERY_ACTION_GET_DATA_CALL_LIST;
constexpr DataStallRecoveryActionEnum DataStallRecoveryActionEnum_MAX = RECOVERY_ACTION_RADIO_RESTART;
constexpr int DataStallRecoveryActionEnum_ARRAYSIZE = DataStallRecoveryActionEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataStallRecoveryActionEnum_descriptor();
template<typename T>
inline const std::string& DataStallRecoveryActionEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataStallRecoveryActionEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataStallRecoveryActionEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataStallRecoveryActionEnum_descriptor(), enum_t_value);
}
inline bool DataStallRecoveryActionEnum_Parse(
    const std::string& name, DataStallRecoveryActionEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataStallRecoveryActionEnum>(
    DataStallRecoveryActionEnum_descriptor(), name, value);
}
enum CodecQuality : int {
  CODEC_QUALITY_UNKNOWN = 0,
  CODEC_QUALITY_NARROWBAND = 1,
  CODEC_QUALITY_WIDEBAND = 2,
  CODEC_QUALITY_SUPER_WIDEBAND = 3,
  CODEC_QUALITY_FULLBAND = 4
};
bool CodecQuality_IsValid(int value);
constexpr CodecQuality CodecQuality_MIN = CODEC_QUALITY_UNKNOWN;
constexpr CodecQuality CodecQuality_MAX = CODEC_QUALITY_FULLBAND;
constexpr int CodecQuality_ARRAYSIZE = CodecQuality_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CodecQuality_descriptor();
template<typename T>
inline const std::string& CodecQuality_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CodecQuality>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CodecQuality_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CodecQuality_descriptor(), enum_t_value);
}
inline bool CodecQuality_Parse(
    const std::string& name, CodecQuality* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CodecQuality>(
    CodecQuality_descriptor(), name, value);
}
enum SimSpecfifcSettingsRestoreResult : int {
  SIM_RESTORE_RESULT_UNKNOWN = 0,
  SIM_RESTORE_RESULT_SUCCESS = 1,
  SIM_RESTORE_RESULT_NONE_MATCH = 2,
  SIM_RESTORE_RESULT_ZERO_SIM_IN_BACKUP = 3
};
bool SimSpecfifcSettingsRestoreResult_IsValid(int value);
constexpr SimSpecfifcSettingsRestoreResult SimSpecfifcSettingsRestoreResult_MIN = SIM_RESTORE_RESULT_UNKNOWN;
constexpr SimSpecfifcSettingsRestoreResult SimSpecfifcSettingsRestoreResult_MAX = SIM_RESTORE_RESULT_ZERO_SIM_IN_BACKUP;
constexpr int SimSpecfifcSettingsRestoreResult_ARRAYSIZE = SimSpecfifcSettingsRestoreResult_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SimSpecfifcSettingsRestoreResult_descriptor();
template<typename T>
inline const std::string& SimSpecfifcSettingsRestoreResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SimSpecfifcSettingsRestoreResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SimSpecfifcSettingsRestoreResult_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SimSpecfifcSettingsRestoreResult_descriptor(), enum_t_value);
}
inline bool SimSpecfifcSettingsRestoreResult_Parse(
    const std::string& name, SimSpecfifcSettingsRestoreResult* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SimSpecfifcSettingsRestoreResult>(
    SimSpecfifcSettingsRestoreResult_descriptor(), name, value);
}
enum SimSpecificSettingsRestoreCase : int {
  SIM_RESTORE_CASE_UNDEFINED_USE_CASE = 0,
  SIM_RESTORE_CASE_SUW = 1,
  SIM_RESTORE_CASE_SIM_INSERTED = 2
};
bool SimSpecificSettingsRestoreCase_IsValid(int value);
constexpr SimSpecificSettingsRestoreCase SimSpecificSettingsRestoreCase_MIN = SIM_RESTORE_CASE_UNDEFINED_USE_CASE;
constexpr SimSpecificSettingsRestoreCase SimSpecificSettingsRestoreCase_MAX = SIM_RESTORE_CASE_SIM_INSERTED;
constexpr int SimSpecificSettingsRestoreCase_ARRAYSIZE = SimSpecificSettingsRestoreCase_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SimSpecificSettingsRestoreCase_descriptor();
template<typename T>
inline const std::string& SimSpecificSettingsRestoreCase_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SimSpecificSettingsRestoreCase>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SimSpecificSettingsRestoreCase_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SimSpecificSettingsRestoreCase_descriptor(), enum_t_value);
}
inline bool SimSpecificSettingsRestoreCase_Parse(
    const std::string& name, SimSpecificSettingsRestoreCase* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SimSpecificSettingsRestoreCase>(
    SimSpecificSettingsRestoreCase_descriptor(), name, value);
}
enum SimSpecificSettingsRestoreMatchingCriteria : int {
  SIM_RESTORE_MATCHING_CRITERIA_UNSET = 0,
  SIM_RESTORE_MATCHING_CRITERIA_NONE = 1,
  SIM_RESTORE_MATCHING_CRITERIA_ICCID = 2,
  SIM_RESTORE_MATCHING_CRITERIA_CARRIER_ID_AND_PHONE_NUMBER = 3,
  SIM_RESTORE_MATCHING_CRITERIA_CARRIER_ID_ONLY = 4
};
bool SimSpecificSettingsRestoreMatchingCriteria_IsValid(int value);
constexpr SimSpecificSettingsRestoreMatchingCriteria SimSpecificSettingsRestoreMatchingCriteria_MIN = SIM_RESTORE_MATCHING_CRITERIA_UNSET;
constexpr SimSpecificSettingsRestoreMatchingCriteria SimSpecificSettingsRestoreMatchingCriteria_MAX = SIM_RESTORE_MATCHING_CRITERIA_CARRIER_ID_ONLY;
constexpr int SimSpecificSettingsRestoreMatchingCriteria_ARRAYSIZE = SimSpecificSettingsRestoreMatchingCriteria_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SimSpecificSettingsRestoreMatchingCriteria_descriptor();
template<typename T>
inline const std::string& SimSpecificSettingsRestoreMatchingCriteria_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SimSpecificSettingsRestoreMatchingCriteria>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SimSpecificSettingsRestoreMatchingCriteria_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SimSpecificSettingsRestoreMatchingCriteria_descriptor(), enum_t_value);
}
inline bool SimSpecificSettingsRestoreMatchingCriteria_Parse(
    const std::string& name, SimSpecificSettingsRestoreMatchingCriteria* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SimSpecificSettingsRestoreMatchingCriteria>(
    SimSpecificSettingsRestoreMatchingCriteria_descriptor(), name, value);
}
enum ImsFeatureTag : int {
  IMS_FEATURE_TAG_UNSPECIFIED = 0,
  IMS_FEATURE_TAG_CUSTOM = 1,
  IMS_FEATURE_TAG_STANDALONE_MSG = 2,
  IMS_FEATURE_TAG_CHAT_IM = 3,
  IMS_FEATURE_TAG_CHAT_SESSION = 4,
  IMS_FEATURE_TAG_FILE_TRANSFER = 5,
  IMS_FEATURE_TAG_FILE_TRANSFER_VIA_SMS = 6,
  IMS_FEATURE_TAG_CALL_COMPOSER_ENRICHED_CALLING = 7,
  IMS_FEATURE_TAG_CALL_COMPOSER_VIA_TELEPHONY = 8,
  IMS_FEATURE_TAG_POST_CALL = 9,
  IMS_FEATURE_TAG_SHARED_MAP = 10,
  IMS_FEATURE_TAG_SHARED_SKETCH = 11,
  IMS_FEATURE_TAG_GEO_PUSH = 12,
  IMS_FEATURE_TAG_GEO_PUSH_VIA_SMS = 13,
  IMS_FEATURE_TAG_CHATBOT_COMMUNICATION_USING_SESSION = 14,
  IMS_FEATURE_TAG_CHATBOT_COMMUNICATION_USING_STANDALONE_MSG = 15,
  IMS_FEATURE_TAG_CHATBOT_VERSION_SUPPORTED = 16,
  IMS_FEATURE_TAG_CHATBOT_ROLE = 17,
  IMS_FEATURE_TAG_MMTEL = 18,
  IMS_FEATURE_TAG_VIDEO = 19,
  IMS_FEATURE_TAG_PRESENCE = 20
};
bool ImsFeatureTag_IsValid(int value);
constexpr ImsFeatureTag ImsFeatureTag_MIN = IMS_FEATURE_TAG_UNSPECIFIED;
constexpr ImsFeatureTag ImsFeatureTag_MAX = IMS_FEATURE_TAG_PRESENCE;
constexpr int ImsFeatureTag_ARRAYSIZE = ImsFeatureTag_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ImsFeatureTag_descriptor();
template<typename T>
inline const std::string& ImsFeatureTag_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ImsFeatureTag>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ImsFeatureTag_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ImsFeatureTag_descriptor(), enum_t_value);
}
inline bool ImsFeatureTag_Parse(
    const std::string& name, ImsFeatureTag* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ImsFeatureTag>(
    ImsFeatureTag_descriptor(), name, value);
}
enum SipRequestMethodType : int {
  SIP_REQUEST_UNSPECIFIED = 0,
  SIP_REQUEST_CUSTOM = 1,
  SIP_REQUEST_INVITE = 2,
  SIP_REQUEST_ACK = 3,
  SIP_REQUEST_OPTIONS = 4,
  SIP_REQUEST_BYE = 5,
  SIP_REQUEST_CANCEL = 6,
  SIP_REQUEST_REGISTER = 7,
  SIP_REQUEST_PRACK = 8,
  SIP_REQUEST_SUBSCRIBE = 9,
  SIP_REQUEST_NOTIFY = 10,
  SIP_REQUEST_PUBLISH = 11,
  SIP_REQUEST_INFO = 12,
  SIP_REQUEST_REFER = 13,
  SIP_REQUEST_MESSAGE = 14,
  SIP_REQUEST_UPDATE = 15
};
bool SipRequestMethodType_IsValid(int value);
constexpr SipRequestMethodType SipRequestMethodType_MIN = SIP_REQUEST_UNSPECIFIED;
constexpr SipRequestMethodType SipRequestMethodType_MAX = SIP_REQUEST_UPDATE;
constexpr int SipRequestMethodType_ARRAYSIZE = SipRequestMethodType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SipRequestMethodType_descriptor();
template<typename T>
inline const std::string& SipRequestMethodType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SipRequestMethodType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SipRequestMethodType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SipRequestMethodType_descriptor(), enum_t_value);
}
inline bool SipRequestMethodType_Parse(
    const std::string& name, SipRequestMethodType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SipRequestMethodType>(
    SipRequestMethodType_descriptor(), name, value);
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

}  // namespace telephony
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::telephony::CallBearerEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::CallBearerEnum>() {
  return ::android::telephony::CallBearerEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::CallDirectionEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::CallDirectionEnum>() {
  return ::android::telephony::CallDirectionEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::CallSetupDurationEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::CallSetupDurationEnum>() {
  return ::android::telephony::CallSetupDurationEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::DataConnectionPowerStateEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::DataConnectionPowerStateEnum>() {
  return ::android::telephony::DataConnectionPowerStateEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::NetworkTypeEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::NetworkTypeEnum>() {
  return ::android::telephony::NetworkTypeEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::RoamingTypeEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::RoamingTypeEnum>() {
  return ::android::telephony::RoamingTypeEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SignalStrengthEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SignalStrengthEnum>() {
  return ::android::telephony::SignalStrengthEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::ServiceStateEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::ServiceStateEnum>() {
  return ::android::telephony::ServiceStateEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SimStateEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SimStateEnum>() {
  return ::android::telephony::SimStateEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SmsFormatEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SmsFormatEnum>() {
  return ::android::telephony::SmsFormatEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SmsTechEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SmsTechEnum>() {
  return ::android::telephony::SmsTechEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SmsTypeEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SmsTypeEnum>() {
  return ::android::telephony::SmsTypeEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SmsIncomingErrorEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SmsIncomingErrorEnum>() {
  return ::android::telephony::SmsIncomingErrorEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SmsSendResultEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SmsSendResultEnum>() {
  return ::android::telephony::SmsSendResultEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::DataProfileEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::DataProfileEnum>() {
  return ::android::telephony::DataProfileEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::DataDeactivateReasonEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::DataDeactivateReasonEnum>() {
  return ::android::telephony::DataDeactivateReasonEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::ApnProtocolEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::ApnProtocolEnum>() {
  return ::android::telephony::ApnProtocolEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::DataStallRecoveryActionEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::DataStallRecoveryActionEnum>() {
  return ::android::telephony::DataStallRecoveryActionEnum_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::CodecQuality> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::CodecQuality>() {
  return ::android::telephony::CodecQuality_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SimSpecfifcSettingsRestoreResult> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SimSpecfifcSettingsRestoreResult>() {
  return ::android::telephony::SimSpecfifcSettingsRestoreResult_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SimSpecificSettingsRestoreCase> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SimSpecificSettingsRestoreCase>() {
  return ::android::telephony::SimSpecificSettingsRestoreCase_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SimSpecificSettingsRestoreMatchingCriteria> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SimSpecificSettingsRestoreMatchingCriteria>() {
  return ::android::telephony::SimSpecificSettingsRestoreMatchingCriteria_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::ImsFeatureTag> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::ImsFeatureTag>() {
  return ::android::telephony::ImsFeatureTag_descriptor();
}
template <> struct is_proto_enum< ::android::telephony::SipRequestMethodType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::telephony::SipRequestMethodType>() {
  return ::android::telephony::SipRequestMethodType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2ftelephony_2fenums_2eproto

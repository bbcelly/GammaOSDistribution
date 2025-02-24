// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/proto_logging/stats/enums/stats/connectivity/network_stack.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fconnectivity_2fnetwork_5fstack_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fconnectivity_2fnetwork_5fstack_2eproto

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fconnectivity_2fnetwork_5fstack_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fconnectivity_2fnetwork_5fstack_2eproto {
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
namespace android {
namespace stats {
namespace connectivity {
class NetworkStackEventData;
class NetworkStackEventDataDefaultTypeInternal;
extern NetworkStackEventDataDefaultTypeInternal _NetworkStackEventData_default_instance_;
}  // namespace connectivity
}  // namespace stats
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::stats::connectivity::NetworkStackEventData* Arena::CreateMaybeMessage<::android::stats::connectivity::NetworkStackEventData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace stats {
namespace connectivity {

enum DhcpRenewResult : int {
  RR_UNKNOWN = 0,
  RR_SUCCESS = 1,
  RR_ERROR_NAK = 2,
  RR_ERROR_IP_MISMATCH = 3,
  RR_ERROR_IP_EXPIRE = 4
};
bool DhcpRenewResult_IsValid(int value);
constexpr DhcpRenewResult DhcpRenewResult_MIN = RR_UNKNOWN;
constexpr DhcpRenewResult DhcpRenewResult_MAX = RR_ERROR_IP_EXPIRE;
constexpr int DhcpRenewResult_ARRAYSIZE = DhcpRenewResult_MAX + 1;

const std::string& DhcpRenewResult_Name(DhcpRenewResult value);
template<typename T>
inline const std::string& DhcpRenewResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DhcpRenewResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DhcpRenewResult_Name.");
  return DhcpRenewResult_Name(static_cast<DhcpRenewResult>(enum_t_value));
}
bool DhcpRenewResult_Parse(
    const std::string& name, DhcpRenewResult* value);
enum DisconnectCode : int {
  DC_NONE = 0,
  DC_NORMAL_TERMINATION = 1,
  DC_PROVISIONING_FAIL = 2,
  DC_ERROR_STARTING_IPV4 = 4,
  DC_ERROR_STARTING_IPV6 = 5,
  DC_ERROR_STARTING_IPREACHABILITYMONITOR = 6,
  DC_INVALID_PROVISIONING = 7,
  DC_INTERFACE_NOT_FOUND = 8,
  DC_PROVISIONING_TIMEOUT = 9
};
bool DisconnectCode_IsValid(int value);
constexpr DisconnectCode DisconnectCode_MIN = DC_NONE;
constexpr DisconnectCode DisconnectCode_MAX = DC_PROVISIONING_TIMEOUT;
constexpr int DisconnectCode_ARRAYSIZE = DisconnectCode_MAX + 1;

const std::string& DisconnectCode_Name(DisconnectCode value);
template<typename T>
inline const std::string& DisconnectCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DisconnectCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DisconnectCode_Name.");
  return DisconnectCode_Name(static_cast<DisconnectCode>(enum_t_value));
}
bool DisconnectCode_Parse(
    const std::string& name, DisconnectCode* value);
enum TransportType : int {
  TT_UNKNOWN = 0,
  TT_CELLULAR = 1,
  TT_WIFI = 2,
  TT_BLUETOOTH = 3,
  TT_ETHERNET = 4,
  TT_WIFI_AWARE = 5,
  TT_LOWPAN = 6,
  TT_CELLULAR_VPN = 7,
  TT_WIFI_VPN = 8,
  TT_BLUETOOTH_VPN = 9,
  TT_ETHERNET_VPN = 10,
  TT_WIFI_CELLULAR_VPN = 11,
  TT_TEST = 12
};
bool TransportType_IsValid(int value);
constexpr TransportType TransportType_MIN = TT_UNKNOWN;
constexpr TransportType TransportType_MAX = TT_TEST;
constexpr int TransportType_ARRAYSIZE = TransportType_MAX + 1;

const std::string& TransportType_Name(TransportType value);
template<typename T>
inline const std::string& TransportType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TransportType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TransportType_Name.");
  return TransportType_Name(static_cast<TransportType>(enum_t_value));
}
bool TransportType_Parse(
    const std::string& name, TransportType* value);
enum DhcpFeature : int {
  DF_UNKNOWN = 0,
  DF_INITREBOOT = 1,
  DF_RAPIDCOMMIT = 2,
  DF_DAD = 3,
  DF_FILS = 4
};
bool DhcpFeature_IsValid(int value);
constexpr DhcpFeature DhcpFeature_MIN = DF_UNKNOWN;
constexpr DhcpFeature DhcpFeature_MAX = DF_FILS;
constexpr int DhcpFeature_ARRAYSIZE = DhcpFeature_MAX + 1;

const std::string& DhcpFeature_Name(DhcpFeature value);
template<typename T>
inline const std::string& DhcpFeature_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DhcpFeature>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DhcpFeature_Name.");
  return DhcpFeature_Name(static_cast<DhcpFeature>(enum_t_value));
}
bool DhcpFeature_Parse(
    const std::string& name, DhcpFeature* value);
enum HostnameTransResult : int {
  HTR_UNKNOWN = 0,
  HTR_SUCCESS = 1,
  HTR_FAILURE = 2,
  HTR_DISABLE = 3
};
bool HostnameTransResult_IsValid(int value);
constexpr HostnameTransResult HostnameTransResult_MIN = HTR_UNKNOWN;
constexpr HostnameTransResult HostnameTransResult_MAX = HTR_DISABLE;
constexpr int HostnameTransResult_ARRAYSIZE = HostnameTransResult_MAX + 1;

const std::string& HostnameTransResult_Name(HostnameTransResult value);
template<typename T>
inline const std::string& HostnameTransResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, HostnameTransResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function HostnameTransResult_Name.");
  return HostnameTransResult_Name(static_cast<HostnameTransResult>(enum_t_value));
}
bool HostnameTransResult_Parse(
    const std::string& name, HostnameTransResult* value);
enum ProbeResult : int {
  PR_UNKNOWN = 0,
  PR_SUCCESS = 1,
  PR_FAILURE = 2,
  PR_PORTAL = 3,
  PR_PRIVATE_IP_DNS = 4
};
bool ProbeResult_IsValid(int value);
constexpr ProbeResult ProbeResult_MIN = PR_UNKNOWN;
constexpr ProbeResult ProbeResult_MAX = PR_PRIVATE_IP_DNS;
constexpr int ProbeResult_ARRAYSIZE = ProbeResult_MAX + 1;

const std::string& ProbeResult_Name(ProbeResult value);
template<typename T>
inline const std::string& ProbeResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProbeResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProbeResult_Name.");
  return ProbeResult_Name(static_cast<ProbeResult>(enum_t_value));
}
bool ProbeResult_Parse(
    const std::string& name, ProbeResult* value);
enum ValidationResult : int {
  VR_UNKNOWN = 0,
  VR_SUCCESS = 1,
  VR_FAILURE = 2,
  VR_PORTAL = 3,
  VR_PARTIAL = 4
};
bool ValidationResult_IsValid(int value);
constexpr ValidationResult ValidationResult_MIN = VR_UNKNOWN;
constexpr ValidationResult ValidationResult_MAX = VR_PARTIAL;
constexpr int ValidationResult_ARRAYSIZE = ValidationResult_MAX + 1;

const std::string& ValidationResult_Name(ValidationResult value);
template<typename T>
inline const std::string& ValidationResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ValidationResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ValidationResult_Name.");
  return ValidationResult_Name(static_cast<ValidationResult>(enum_t_value));
}
bool ValidationResult_Parse(
    const std::string& name, ValidationResult* value);
enum ProbeType : int {
  PT_UNKNOWN = 0,
  PT_DNS = 1,
  PT_HTTP = 2,
  PT_HTTPS = 3,
  PT_PAC = 4,
  PT_FALLBACK = 5,
  PT_PRIVDNS = 6,
  PT_CAPPORT_API = 7
};
bool ProbeType_IsValid(int value);
constexpr ProbeType ProbeType_MIN = PT_UNKNOWN;
constexpr ProbeType ProbeType_MAX = PT_CAPPORT_API;
constexpr int ProbeType_ARRAYSIZE = ProbeType_MAX + 1;

const std::string& ProbeType_Name(ProbeType value);
template<typename T>
inline const std::string& ProbeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProbeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProbeType_Name.");
  return ProbeType_Name(static_cast<ProbeType>(enum_t_value));
}
bool ProbeType_Parse(
    const std::string& name, ProbeType* value);
enum DhcpErrorCode : int {
  ET_UNKNOWN = 0,
  ET_L2_ERROR = 1,
  ET_L3_ERROR = 2,
  ET_L4_ERROR = 3,
  ET_DHCP_ERROR = 4,
  ET_MISC_ERROR = 5,
  ET_L2_TOO_SHORT = 16842752,
  ET_L2_WRONG_ETH_TYPE = 16908288,
  ET_L3_TOO_SHORT = 33619968,
  ET_L3_NOT_IPV4 = 33685504,
  ET_L3_INVALID_IP = 33751040,
  ET_L4_NOT_UDP = 50397184,
  ET_L4_WRONG_PORT = 50462720,
  ET_BOOTP_TOO_SHORT = 67174400,
  ET_DHCP_BAD_MAGIC_COOKIE = 67239936,
  ET_DHCP_INVALID_OPTION_LENGTH = 67305472,
  ET_DHCP_NO_MSG_TYPE = 67371008,
  ET_DHCP_UNKNOWN_MSG_TYPE = 67436544,
  ET_DHCP_NO_COOKIE = 67502080,
  ET_BUFFER_UNDERFLOW = 83951616,
  ET_RECEIVE_ERROR = 84017152,
  ET_PARSING_ERROR = 84082688
};
bool DhcpErrorCode_IsValid(int value);
constexpr DhcpErrorCode DhcpErrorCode_MIN = ET_UNKNOWN;
constexpr DhcpErrorCode DhcpErrorCode_MAX = ET_PARSING_ERROR;
constexpr int DhcpErrorCode_ARRAYSIZE = DhcpErrorCode_MAX + 1;

const std::string& DhcpErrorCode_Name(DhcpErrorCode value);
template<typename T>
inline const std::string& DhcpErrorCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DhcpErrorCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DhcpErrorCode_Name.");
  return DhcpErrorCode_Name(static_cast<DhcpErrorCode>(enum_t_value));
}
bool DhcpErrorCode_Parse(
    const std::string& name, DhcpErrorCode* value);
enum NetworkQuirkEvent : int {
  QE_UNKNOWN = 0,
  QE_IPV6_PROVISIONING_ROUTER_LOST = 1
};
bool NetworkQuirkEvent_IsValid(int value);
constexpr NetworkQuirkEvent NetworkQuirkEvent_MIN = QE_UNKNOWN;
constexpr NetworkQuirkEvent NetworkQuirkEvent_MAX = QE_IPV6_PROVISIONING_ROUTER_LOST;
constexpr int NetworkQuirkEvent_ARRAYSIZE = NetworkQuirkEvent_MAX + 1;

const std::string& NetworkQuirkEvent_Name(NetworkQuirkEvent value);
template<typename T>
inline const std::string& NetworkQuirkEvent_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NetworkQuirkEvent>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NetworkQuirkEvent_Name.");
  return NetworkQuirkEvent_Name(static_cast<NetworkQuirkEvent>(enum_t_value));
}
bool NetworkQuirkEvent_Parse(
    const std::string& name, NetworkQuirkEvent* value);
enum IpType : int {
  UNKNOWN = 0,
  IPV4 = 4,
  IPV6 = 6
};
bool IpType_IsValid(int value);
constexpr IpType IpType_MIN = UNKNOWN;
constexpr IpType IpType_MAX = IPV6;
constexpr int IpType_ARRAYSIZE = IpType_MAX + 1;

const std::string& IpType_Name(IpType value);
template<typename T>
inline const std::string& IpType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, IpType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function IpType_Name.");
  return IpType_Name(static_cast<IpType>(enum_t_value));
}
bool IpType_Parse(
    const std::string& name, IpType* value);
enum NudEventType : int {
  NUD_EVENT_UNKNOWN = 0,
  NUD_POST_ROAMING_FAILED = 1,
  NUD_POST_ROAMING_FAILED_CRITICAL = 2,
  NUD_CONFIRM_FAILED = 3,
  NUD_CONFIRM_FAILED_CRITICAL = 4,
  NUD_ORGANIC_FAILED = 5,
  NUD_ORGANIC_FAILED_CRITICAL = 6,
  NUD_MAC_ADDRESS_CHANGED = 7
};
bool NudEventType_IsValid(int value);
constexpr NudEventType NudEventType_MIN = NUD_EVENT_UNKNOWN;
constexpr NudEventType NudEventType_MAX = NUD_MAC_ADDRESS_CHANGED;
constexpr int NudEventType_ARRAYSIZE = NudEventType_MAX + 1;

const std::string& NudEventType_Name(NudEventType value);
template<typename T>
inline const std::string& NudEventType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NudEventType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NudEventType_Name.");
  return NudEventType_Name(static_cast<NudEventType>(enum_t_value));
}
bool NudEventType_Parse(
    const std::string& name, NudEventType* value);
enum NudNeighborType : int {
  NUD_NEIGHBOR_UNKNOWN = 0,
  NUD_NEIGHBOR_GATEWAY = 1,
  NUD_NEIGHBOR_DNS = 2,
  NUD_NEIGHBOR_BOTH = 3
};
bool NudNeighborType_IsValid(int value);
constexpr NudNeighborType NudNeighborType_MIN = NUD_NEIGHBOR_UNKNOWN;
constexpr NudNeighborType NudNeighborType_MAX = NUD_NEIGHBOR_BOTH;
constexpr int NudNeighborType_ARRAYSIZE = NudNeighborType_MAX + 1;

const std::string& NudNeighborType_Name(NudNeighborType value);
template<typename T>
inline const std::string& NudNeighborType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NudNeighborType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NudNeighborType_Name.");
  return NudNeighborType_Name(static_cast<NudNeighborType>(enum_t_value));
}
bool NudNeighborType_Parse(
    const std::string& name, NudNeighborType* value);
// ===================================================================

class NetworkStackEventData :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.stats.connectivity.NetworkStackEventData) */ {
 public:
  NetworkStackEventData();
  virtual ~NetworkStackEventData();

  NetworkStackEventData(const NetworkStackEventData& from);
  NetworkStackEventData(NetworkStackEventData&& from) noexcept
    : NetworkStackEventData() {
    *this = ::std::move(from);
  }

  inline NetworkStackEventData& operator=(const NetworkStackEventData& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetworkStackEventData& operator=(NetworkStackEventData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const NetworkStackEventData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NetworkStackEventData* internal_default_instance() {
    return reinterpret_cast<const NetworkStackEventData*>(
               &_NetworkStackEventData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NetworkStackEventData& a, NetworkStackEventData& b) {
    a.Swap(&b);
  }
  inline void Swap(NetworkStackEventData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetworkStackEventData* New() const final {
    return CreateMaybeMessage<NetworkStackEventData>(nullptr);
  }

  NetworkStackEventData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetworkStackEventData>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const NetworkStackEventData& from);
  void MergeFrom(const NetworkStackEventData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NetworkStackEventData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.stats.connectivity.NetworkStackEventData";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:android.stats.connectivity.NetworkStackEventData)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fconnectivity_2fnetwork_5fstack_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetworkStackEventData

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace connectivity
}  // namespace stats
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::stats::connectivity::DhcpRenewResult> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::DisconnectCode> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::TransportType> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::DhcpFeature> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::HostnameTransResult> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::ProbeResult> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::ValidationResult> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::ProbeType> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::DhcpErrorCode> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::NetworkQuirkEvent> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::IpType> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::NudEventType> : ::std::true_type {};
template <> struct is_proto_enum< ::android::stats::connectivity::NudNeighborType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fproto_5flogging_2fstats_2fenums_2fstats_2fconnectivity_2fnetwork_5fstack_2eproto

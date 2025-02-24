// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/net/networkcapabilities.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fnet_2fnetworkcapabilities_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fnet_2fnetworkcapabilities_2eproto

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
#include "frameworks/base/core/proto/android/privacy.pb.h"
#include "frameworks/proto_logging/stats/enums/net/enums.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fnet_2fnetworkcapabilities_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fnet_2fnetworkcapabilities_2eproto {
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
namespace net {
class NetworkCapabilitiesProto;
class NetworkCapabilitiesProtoDefaultTypeInternal;
extern NetworkCapabilitiesProtoDefaultTypeInternal _NetworkCapabilitiesProto_default_instance_;
}  // namespace net
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::net::NetworkCapabilitiesProto* Arena::CreateMaybeMessage<::android::net::NetworkCapabilitiesProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace net {

enum NetworkCapabilitiesProto_NetCapability : int {
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_MMS = 0,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_SUPL = 1,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_DUN = 2,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_FOTA = 3,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_IMS = 4,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_CBS = 5,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_WIFI_P2P = 6,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_IA = 7,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_RCS = 8,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_XCAP = 9,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_EIMS = 10,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_METERED = 11,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_INTERNET = 12,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_RESTRICTED = 13,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_TRUSTED = 14,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_VPN = 15,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_VALIDATED = 16,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_CAPTIVE_PORTAL = 17,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_ROAMING = 18,
  NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_FOREGROUND = 19
};
bool NetworkCapabilitiesProto_NetCapability_IsValid(int value);
constexpr NetworkCapabilitiesProto_NetCapability NetworkCapabilitiesProto_NetCapability_NetCapability_MIN = NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_MMS;
constexpr NetworkCapabilitiesProto_NetCapability NetworkCapabilitiesProto_NetCapability_NetCapability_MAX = NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_FOREGROUND;
constexpr int NetworkCapabilitiesProto_NetCapability_NetCapability_ARRAYSIZE = NetworkCapabilitiesProto_NetCapability_NetCapability_MAX + 1;

const std::string& NetworkCapabilitiesProto_NetCapability_Name(NetworkCapabilitiesProto_NetCapability value);
template<typename T>
inline const std::string& NetworkCapabilitiesProto_NetCapability_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NetworkCapabilitiesProto_NetCapability>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NetworkCapabilitiesProto_NetCapability_Name.");
  return NetworkCapabilitiesProto_NetCapability_Name(static_cast<NetworkCapabilitiesProto_NetCapability>(enum_t_value));
}
bool NetworkCapabilitiesProto_NetCapability_Parse(
    const std::string& name, NetworkCapabilitiesProto_NetCapability* value);
// ===================================================================

class NetworkCapabilitiesProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.net.NetworkCapabilitiesProto) */ {
 public:
  NetworkCapabilitiesProto();
  virtual ~NetworkCapabilitiesProto();

  NetworkCapabilitiesProto(const NetworkCapabilitiesProto& from);
  NetworkCapabilitiesProto(NetworkCapabilitiesProto&& from) noexcept
    : NetworkCapabilitiesProto() {
    *this = ::std::move(from);
  }

  inline NetworkCapabilitiesProto& operator=(const NetworkCapabilitiesProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetworkCapabilitiesProto& operator=(NetworkCapabilitiesProto&& from) noexcept {
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

  static const NetworkCapabilitiesProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NetworkCapabilitiesProto* internal_default_instance() {
    return reinterpret_cast<const NetworkCapabilitiesProto*>(
               &_NetworkCapabilitiesProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NetworkCapabilitiesProto& a, NetworkCapabilitiesProto& b) {
    a.Swap(&b);
  }
  inline void Swap(NetworkCapabilitiesProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetworkCapabilitiesProto* New() const final {
    return CreateMaybeMessage<NetworkCapabilitiesProto>(nullptr);
  }

  NetworkCapabilitiesProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetworkCapabilitiesProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const NetworkCapabilitiesProto& from);
  void MergeFrom(const NetworkCapabilitiesProto& from);
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
  void InternalSwap(NetworkCapabilitiesProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.net.NetworkCapabilitiesProto";
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

  typedef NetworkCapabilitiesProto_NetCapability NetCapability;
  static constexpr NetCapability NET_CAPABILITY_MMS =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_MMS;
  static constexpr NetCapability NET_CAPABILITY_SUPL =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_SUPL;
  static constexpr NetCapability NET_CAPABILITY_DUN =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_DUN;
  static constexpr NetCapability NET_CAPABILITY_FOTA =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_FOTA;
  static constexpr NetCapability NET_CAPABILITY_IMS =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_IMS;
  static constexpr NetCapability NET_CAPABILITY_CBS =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_CBS;
  static constexpr NetCapability NET_CAPABILITY_WIFI_P2P =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_WIFI_P2P;
  static constexpr NetCapability NET_CAPABILITY_IA =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_IA;
  static constexpr NetCapability NET_CAPABILITY_RCS =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_RCS;
  static constexpr NetCapability NET_CAPABILITY_XCAP =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_XCAP;
  static constexpr NetCapability NET_CAPABILITY_EIMS =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_EIMS;
  static constexpr NetCapability NET_CAPABILITY_NOT_METERED =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_METERED;
  static constexpr NetCapability NET_CAPABILITY_INTERNET =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_INTERNET;
  static constexpr NetCapability NET_CAPABILITY_NOT_RESTRICTED =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_RESTRICTED;
  static constexpr NetCapability NET_CAPABILITY_TRUSTED =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_TRUSTED;
  static constexpr NetCapability NET_CAPABILITY_NOT_VPN =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_VPN;
  static constexpr NetCapability NET_CAPABILITY_VALIDATED =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_VALIDATED;
  static constexpr NetCapability NET_CAPABILITY_CAPTIVE_PORTAL =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_CAPTIVE_PORTAL;
  static constexpr NetCapability NET_CAPABILITY_NOT_ROAMING =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_NOT_ROAMING;
  static constexpr NetCapability NET_CAPABILITY_FOREGROUND =
    NetworkCapabilitiesProto_NetCapability_NET_CAPABILITY_FOREGROUND;
  static inline bool NetCapability_IsValid(int value) {
    return NetworkCapabilitiesProto_NetCapability_IsValid(value);
  }
  static constexpr NetCapability NetCapability_MIN =
    NetworkCapabilitiesProto_NetCapability_NetCapability_MIN;
  static constexpr NetCapability NetCapability_MAX =
    NetworkCapabilitiesProto_NetCapability_NetCapability_MAX;
  static constexpr int NetCapability_ARRAYSIZE =
    NetworkCapabilitiesProto_NetCapability_NetCapability_ARRAYSIZE;
  template<typename T>
  static inline const std::string& NetCapability_Name(T enum_t_value) {
    static_assert(::std::is_same<T, NetCapability>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function NetCapability_Name.");
    return NetworkCapabilitiesProto_NetCapability_Name(enum_t_value);
  }
  static inline bool NetCapability_Parse(const std::string& name,
      NetCapability* value) {
    return NetworkCapabilitiesProto_NetCapability_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTransportsFieldNumber = 1,
    kCapabilitiesFieldNumber = 2,
    kNetworkSpecifierFieldNumber = 5,
    kLinkUpBandwidthKbpsFieldNumber = 3,
    kLinkDownBandwidthKbpsFieldNumber = 4,
    kCanReportSignalStrengthFieldNumber = 6,
    kSignalStrengthFieldNumber = 7,
  };
  // repeated .android.net.Transport transports = 1;
  int transports_size() const;
  void clear_transports();
  ::android::net::Transport transports(int index) const;
  void set_transports(int index, ::android::net::Transport value);
  void add_transports(::android::net::Transport value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& transports() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_transports();

  // repeated .android.net.NetworkCapabilitiesProto.NetCapability capabilities = 2;
  int capabilities_size() const;
  void clear_capabilities();
  ::android::net::NetworkCapabilitiesProto_NetCapability capabilities(int index) const;
  void set_capabilities(int index, ::android::net::NetworkCapabilitiesProto_NetCapability value);
  void add_capabilities(::android::net::NetworkCapabilitiesProto_NetCapability value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& capabilities() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_capabilities();

  // optional string network_specifier = 5 [(.android.privacy) = {
  bool has_network_specifier() const;
  void clear_network_specifier();
  const std::string& network_specifier() const;
  void set_network_specifier(const std::string& value);
  void set_network_specifier(std::string&& value);
  void set_network_specifier(const char* value);
  void set_network_specifier(const char* value, size_t size);
  std::string* mutable_network_specifier();
  std::string* release_network_specifier();
  void set_allocated_network_specifier(std::string* network_specifier);

  // optional int32 link_up_bandwidth_kbps = 3;
  bool has_link_up_bandwidth_kbps() const;
  void clear_link_up_bandwidth_kbps();
  ::PROTOBUF_NAMESPACE_ID::int32 link_up_bandwidth_kbps() const;
  void set_link_up_bandwidth_kbps(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 link_down_bandwidth_kbps = 4;
  bool has_link_down_bandwidth_kbps() const;
  void clear_link_down_bandwidth_kbps();
  ::PROTOBUF_NAMESPACE_ID::int32 link_down_bandwidth_kbps() const;
  void set_link_down_bandwidth_kbps(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional bool can_report_signal_strength = 6;
  bool has_can_report_signal_strength() const;
  void clear_can_report_signal_strength();
  bool can_report_signal_strength() const;
  void set_can_report_signal_strength(bool value);

  // optional sint32 signal_strength = 7;
  bool has_signal_strength() const;
  void clear_signal_strength();
  ::PROTOBUF_NAMESPACE_ID::int32 signal_strength() const;
  void set_signal_strength(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:android.net.NetworkCapabilitiesProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> transports_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> capabilities_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr network_specifier_;
  ::PROTOBUF_NAMESPACE_ID::int32 link_up_bandwidth_kbps_;
  ::PROTOBUF_NAMESPACE_ID::int32 link_down_bandwidth_kbps_;
  bool can_report_signal_strength_;
  ::PROTOBUF_NAMESPACE_ID::int32 signal_strength_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fnet_2fnetworkcapabilities_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetworkCapabilitiesProto

// repeated .android.net.Transport transports = 1;
inline int NetworkCapabilitiesProto::transports_size() const {
  return transports_.size();
}
inline void NetworkCapabilitiesProto::clear_transports() {
  transports_.Clear();
}
inline ::android::net::Transport NetworkCapabilitiesProto::transports(int index) const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.transports)
  return static_cast< ::android::net::Transport >(transports_.Get(index));
}
inline void NetworkCapabilitiesProto::set_transports(int index, ::android::net::Transport value) {
  assert(::android::net::Transport_IsValid(value));
  transports_.Set(index, value);
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.transports)
}
inline void NetworkCapabilitiesProto::add_transports(::android::net::Transport value) {
  assert(::android::net::Transport_IsValid(value));
  transports_.Add(value);
  // @@protoc_insertion_point(field_add:android.net.NetworkCapabilitiesProto.transports)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
NetworkCapabilitiesProto::transports() const {
  // @@protoc_insertion_point(field_list:android.net.NetworkCapabilitiesProto.transports)
  return transports_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
NetworkCapabilitiesProto::mutable_transports() {
  // @@protoc_insertion_point(field_mutable_list:android.net.NetworkCapabilitiesProto.transports)
  return &transports_;
}

// repeated .android.net.NetworkCapabilitiesProto.NetCapability capabilities = 2;
inline int NetworkCapabilitiesProto::capabilities_size() const {
  return capabilities_.size();
}
inline void NetworkCapabilitiesProto::clear_capabilities() {
  capabilities_.Clear();
}
inline ::android::net::NetworkCapabilitiesProto_NetCapability NetworkCapabilitiesProto::capabilities(int index) const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.capabilities)
  return static_cast< ::android::net::NetworkCapabilitiesProto_NetCapability >(capabilities_.Get(index));
}
inline void NetworkCapabilitiesProto::set_capabilities(int index, ::android::net::NetworkCapabilitiesProto_NetCapability value) {
  assert(::android::net::NetworkCapabilitiesProto_NetCapability_IsValid(value));
  capabilities_.Set(index, value);
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.capabilities)
}
inline void NetworkCapabilitiesProto::add_capabilities(::android::net::NetworkCapabilitiesProto_NetCapability value) {
  assert(::android::net::NetworkCapabilitiesProto_NetCapability_IsValid(value));
  capabilities_.Add(value);
  // @@protoc_insertion_point(field_add:android.net.NetworkCapabilitiesProto.capabilities)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
NetworkCapabilitiesProto::capabilities() const {
  // @@protoc_insertion_point(field_list:android.net.NetworkCapabilitiesProto.capabilities)
  return capabilities_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
NetworkCapabilitiesProto::mutable_capabilities() {
  // @@protoc_insertion_point(field_mutable_list:android.net.NetworkCapabilitiesProto.capabilities)
  return &capabilities_;
}

// optional int32 link_up_bandwidth_kbps = 3;
inline bool NetworkCapabilitiesProto::has_link_up_bandwidth_kbps() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NetworkCapabilitiesProto::clear_link_up_bandwidth_kbps() {
  link_up_bandwidth_kbps_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NetworkCapabilitiesProto::link_up_bandwidth_kbps() const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.link_up_bandwidth_kbps)
  return link_up_bandwidth_kbps_;
}
inline void NetworkCapabilitiesProto::set_link_up_bandwidth_kbps(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  link_up_bandwidth_kbps_ = value;
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.link_up_bandwidth_kbps)
}

// optional int32 link_down_bandwidth_kbps = 4;
inline bool NetworkCapabilitiesProto::has_link_down_bandwidth_kbps() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NetworkCapabilitiesProto::clear_link_down_bandwidth_kbps() {
  link_down_bandwidth_kbps_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NetworkCapabilitiesProto::link_down_bandwidth_kbps() const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.link_down_bandwidth_kbps)
  return link_down_bandwidth_kbps_;
}
inline void NetworkCapabilitiesProto::set_link_down_bandwidth_kbps(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  link_down_bandwidth_kbps_ = value;
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.link_down_bandwidth_kbps)
}

// optional string network_specifier = 5 [(.android.privacy) = {
inline bool NetworkCapabilitiesProto::has_network_specifier() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NetworkCapabilitiesProto::clear_network_specifier() {
  network_specifier_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& NetworkCapabilitiesProto::network_specifier() const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.network_specifier)
  return network_specifier_.GetNoArena();
}
inline void NetworkCapabilitiesProto::set_network_specifier(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  network_specifier_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.network_specifier)
}
inline void NetworkCapabilitiesProto::set_network_specifier(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  network_specifier_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.net.NetworkCapabilitiesProto.network_specifier)
}
inline void NetworkCapabilitiesProto::set_network_specifier(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  network_specifier_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.net.NetworkCapabilitiesProto.network_specifier)
}
inline void NetworkCapabilitiesProto::set_network_specifier(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  network_specifier_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.net.NetworkCapabilitiesProto.network_specifier)
}
inline std::string* NetworkCapabilitiesProto::mutable_network_specifier() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:android.net.NetworkCapabilitiesProto.network_specifier)
  return network_specifier_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* NetworkCapabilitiesProto::release_network_specifier() {
  // @@protoc_insertion_point(field_release:android.net.NetworkCapabilitiesProto.network_specifier)
  if (!has_network_specifier()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return network_specifier_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void NetworkCapabilitiesProto::set_allocated_network_specifier(std::string* network_specifier) {
  if (network_specifier != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  network_specifier_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), network_specifier);
  // @@protoc_insertion_point(field_set_allocated:android.net.NetworkCapabilitiesProto.network_specifier)
}

// optional bool can_report_signal_strength = 6;
inline bool NetworkCapabilitiesProto::has_can_report_signal_strength() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NetworkCapabilitiesProto::clear_can_report_signal_strength() {
  can_report_signal_strength_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool NetworkCapabilitiesProto::can_report_signal_strength() const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.can_report_signal_strength)
  return can_report_signal_strength_;
}
inline void NetworkCapabilitiesProto::set_can_report_signal_strength(bool value) {
  _has_bits_[0] |= 0x00000008u;
  can_report_signal_strength_ = value;
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.can_report_signal_strength)
}

// optional sint32 signal_strength = 7;
inline bool NetworkCapabilitiesProto::has_signal_strength() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NetworkCapabilitiesProto::clear_signal_strength() {
  signal_strength_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NetworkCapabilitiesProto::signal_strength() const {
  // @@protoc_insertion_point(field_get:android.net.NetworkCapabilitiesProto.signal_strength)
  return signal_strength_;
}
inline void NetworkCapabilitiesProto::set_signal_strength(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  signal_strength_ = value;
  // @@protoc_insertion_point(field_set:android.net.NetworkCapabilitiesProto.signal_strength)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace net
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::net::NetworkCapabilitiesProto_NetCapability> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fnet_2fnetworkcapabilities_2eproto

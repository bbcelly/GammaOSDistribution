// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/providers/settings.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "frameworks/base/core/proto/android/providers/settings/config.pb.h"
#include "frameworks/base/core/proto/android/providers/settings/global.pb.h"
#include "frameworks/base/core/proto/android/providers/settings/secure.pb.h"
#include "frameworks/base/core/proto/android/providers/settings/system.pb.h"
#include "frameworks/base/core/proto/android/privacy.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto;
namespace android {
namespace providers {
namespace settings {
class SettingsProto;
class SettingsProtoDefaultTypeInternal;
extern SettingsProtoDefaultTypeInternal _SettingsProto_default_instance_;
class SettingsServiceDumpProto;
class SettingsServiceDumpProtoDefaultTypeInternal;
extern SettingsServiceDumpProtoDefaultTypeInternal _SettingsServiceDumpProto_default_instance_;
class UserSettingsProto;
class UserSettingsProtoDefaultTypeInternal;
extern UserSettingsProtoDefaultTypeInternal _UserSettingsProto_default_instance_;
}  // namespace settings
}  // namespace providers
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::providers::settings::SettingsProto* Arena::CreateMaybeMessage<::android::providers::settings::SettingsProto>(Arena*);
template<> ::android::providers::settings::SettingsServiceDumpProto* Arena::CreateMaybeMessage<::android::providers::settings::SettingsServiceDumpProto>(Arena*);
template<> ::android::providers::settings::UserSettingsProto* Arena::CreateMaybeMessage<::android::providers::settings::UserSettingsProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace providers {
namespace settings {

enum SettingsProto_ScreenBrightnessMode : int {
  SettingsProto_ScreenBrightnessMode_SCREEN_BRIGHTNESS_MODE_MANUAL = 0,
  SettingsProto_ScreenBrightnessMode_SCREEN_BRIGHTNESS_MODE_AUTOMATIC = 1
};
bool SettingsProto_ScreenBrightnessMode_IsValid(int value);
constexpr SettingsProto_ScreenBrightnessMode SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_MIN = SettingsProto_ScreenBrightnessMode_SCREEN_BRIGHTNESS_MODE_MANUAL;
constexpr SettingsProto_ScreenBrightnessMode SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_MAX = SettingsProto_ScreenBrightnessMode_SCREEN_BRIGHTNESS_MODE_AUTOMATIC;
constexpr int SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_ARRAYSIZE = SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SettingsProto_ScreenBrightnessMode_descriptor();
template<typename T>
inline const std::string& SettingsProto_ScreenBrightnessMode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SettingsProto_ScreenBrightnessMode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SettingsProto_ScreenBrightnessMode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SettingsProto_ScreenBrightnessMode_descriptor(), enum_t_value);
}
inline bool SettingsProto_ScreenBrightnessMode_Parse(
    const std::string& name, SettingsProto_ScreenBrightnessMode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SettingsProto_ScreenBrightnessMode>(
    SettingsProto_ScreenBrightnessMode_descriptor(), name, value);
}
// ===================================================================

class SettingsServiceDumpProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:android.providers.settings.SettingsServiceDumpProto) */ {
 public:
  SettingsServiceDumpProto();
  virtual ~SettingsServiceDumpProto();

  SettingsServiceDumpProto(const SettingsServiceDumpProto& from);
  SettingsServiceDumpProto(SettingsServiceDumpProto&& from) noexcept
    : SettingsServiceDumpProto() {
    *this = ::std::move(from);
  }

  inline SettingsServiceDumpProto& operator=(const SettingsServiceDumpProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline SettingsServiceDumpProto& operator=(SettingsServiceDumpProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SettingsServiceDumpProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SettingsServiceDumpProto* internal_default_instance() {
    return reinterpret_cast<const SettingsServiceDumpProto*>(
               &_SettingsServiceDumpProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SettingsServiceDumpProto& a, SettingsServiceDumpProto& b) {
    a.Swap(&b);
  }
  inline void Swap(SettingsServiceDumpProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SettingsServiceDumpProto* New() const final {
    return CreateMaybeMessage<SettingsServiceDumpProto>(nullptr);
  }

  SettingsServiceDumpProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SettingsServiceDumpProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SettingsServiceDumpProto& from);
  void MergeFrom(const SettingsServiceDumpProto& from);
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
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SettingsServiceDumpProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.providers.settings.SettingsServiceDumpProto";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserSettingsFieldNumber = 1,
    kGlobalSettingsFieldNumber = 2,
    kConfigSettingsFieldNumber = 3,
  };
  // repeated .android.providers.settings.UserSettingsProto user_settings = 1;
  int user_settings_size() const;
  void clear_user_settings();
  ::android::providers::settings::UserSettingsProto* mutable_user_settings(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::android::providers::settings::UserSettingsProto >*
      mutable_user_settings();
  const ::android::providers::settings::UserSettingsProto& user_settings(int index) const;
  ::android::providers::settings::UserSettingsProto* add_user_settings();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::android::providers::settings::UserSettingsProto >&
      user_settings() const;

  // optional .android.providers.settings.GlobalSettingsProto global_settings = 2;
  bool has_global_settings() const;
  void clear_global_settings();
  const ::android::providers::settings::GlobalSettingsProto& global_settings() const;
  ::android::providers::settings::GlobalSettingsProto* release_global_settings();
  ::android::providers::settings::GlobalSettingsProto* mutable_global_settings();
  void set_allocated_global_settings(::android::providers::settings::GlobalSettingsProto* global_settings);

  // optional .android.providers.settings.ConfigSettingsProto config_settings = 3;
  bool has_config_settings() const;
  void clear_config_settings();
  const ::android::providers::settings::ConfigSettingsProto& config_settings() const;
  ::android::providers::settings::ConfigSettingsProto* release_config_settings();
  ::android::providers::settings::ConfigSettingsProto* mutable_config_settings();
  void set_allocated_config_settings(::android::providers::settings::ConfigSettingsProto* config_settings);

  // @@protoc_insertion_point(class_scope:android.providers.settings.SettingsServiceDumpProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::android::providers::settings::UserSettingsProto > user_settings_;
  ::android::providers::settings::GlobalSettingsProto* global_settings_;
  ::android::providers::settings::ConfigSettingsProto* config_settings_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto;
};
// -------------------------------------------------------------------

class UserSettingsProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:android.providers.settings.UserSettingsProto) */ {
 public:
  UserSettingsProto();
  virtual ~UserSettingsProto();

  UserSettingsProto(const UserSettingsProto& from);
  UserSettingsProto(UserSettingsProto&& from) noexcept
    : UserSettingsProto() {
    *this = ::std::move(from);
  }

  inline UserSettingsProto& operator=(const UserSettingsProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserSettingsProto& operator=(UserSettingsProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const UserSettingsProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserSettingsProto* internal_default_instance() {
    return reinterpret_cast<const UserSettingsProto*>(
               &_UserSettingsProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UserSettingsProto& a, UserSettingsProto& b) {
    a.Swap(&b);
  }
  inline void Swap(UserSettingsProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UserSettingsProto* New() const final {
    return CreateMaybeMessage<UserSettingsProto>(nullptr);
  }

  UserSettingsProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UserSettingsProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const UserSettingsProto& from);
  void MergeFrom(const UserSettingsProto& from);
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
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserSettingsProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.providers.settings.UserSettingsProto";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSecureSettingsFieldNumber = 2,
    kSystemSettingsFieldNumber = 3,
    kUserIdFieldNumber = 1,
  };
  // optional .android.providers.settings.SecureSettingsProto secure_settings = 2;
  bool has_secure_settings() const;
  void clear_secure_settings();
  const ::android::providers::settings::SecureSettingsProto& secure_settings() const;
  ::android::providers::settings::SecureSettingsProto* release_secure_settings();
  ::android::providers::settings::SecureSettingsProto* mutable_secure_settings();
  void set_allocated_secure_settings(::android::providers::settings::SecureSettingsProto* secure_settings);

  // optional .android.providers.settings.SystemSettingsProto system_settings = 3;
  bool has_system_settings() const;
  void clear_system_settings();
  const ::android::providers::settings::SystemSettingsProto& system_settings() const;
  ::android::providers::settings::SystemSettingsProto* release_system_settings();
  ::android::providers::settings::SystemSettingsProto* mutable_system_settings();
  void set_allocated_system_settings(::android::providers::settings::SystemSettingsProto* system_settings);

  // optional int32 user_id = 1 [(.android.privacy) = {
  bool has_user_id() const;
  void clear_user_id();
  ::PROTOBUF_NAMESPACE_ID::int32 user_id() const;
  void set_user_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:android.providers.settings.UserSettingsProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::android::providers::settings::SecureSettingsProto* secure_settings_;
  ::android::providers::settings::SystemSettingsProto* system_settings_;
  ::PROTOBUF_NAMESPACE_ID::int32 user_id_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto;
};
// -------------------------------------------------------------------

class SettingsProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:android.providers.settings.SettingsProto) */ {
 public:
  SettingsProto();
  virtual ~SettingsProto();

  SettingsProto(const SettingsProto& from);
  SettingsProto(SettingsProto&& from) noexcept
    : SettingsProto() {
    *this = ::std::move(from);
  }

  inline SettingsProto& operator=(const SettingsProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline SettingsProto& operator=(SettingsProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SettingsProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SettingsProto* internal_default_instance() {
    return reinterpret_cast<const SettingsProto*>(
               &_SettingsProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(SettingsProto& a, SettingsProto& b) {
    a.Swap(&b);
  }
  inline void Swap(SettingsProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SettingsProto* New() const final {
    return CreateMaybeMessage<SettingsProto>(nullptr);
  }

  SettingsProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SettingsProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SettingsProto& from);
  void MergeFrom(const SettingsProto& from);
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
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SettingsProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.providers.settings.SettingsProto";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef SettingsProto_ScreenBrightnessMode ScreenBrightnessMode;
  static constexpr ScreenBrightnessMode SCREEN_BRIGHTNESS_MODE_MANUAL =
    SettingsProto_ScreenBrightnessMode_SCREEN_BRIGHTNESS_MODE_MANUAL;
  static constexpr ScreenBrightnessMode SCREEN_BRIGHTNESS_MODE_AUTOMATIC =
    SettingsProto_ScreenBrightnessMode_SCREEN_BRIGHTNESS_MODE_AUTOMATIC;
  static inline bool ScreenBrightnessMode_IsValid(int value) {
    return SettingsProto_ScreenBrightnessMode_IsValid(value);
  }
  static constexpr ScreenBrightnessMode ScreenBrightnessMode_MIN =
    SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_MIN;
  static constexpr ScreenBrightnessMode ScreenBrightnessMode_MAX =
    SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_MAX;
  static constexpr int ScreenBrightnessMode_ARRAYSIZE =
    SettingsProto_ScreenBrightnessMode_ScreenBrightnessMode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ScreenBrightnessMode_descriptor() {
    return SettingsProto_ScreenBrightnessMode_descriptor();
  }
  template<typename T>
  static inline const std::string& ScreenBrightnessMode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ScreenBrightnessMode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ScreenBrightnessMode_Name.");
    return SettingsProto_ScreenBrightnessMode_Name(enum_t_value);
  }
  static inline bool ScreenBrightnessMode_Parse(const std::string& name,
      ScreenBrightnessMode* value) {
    return SettingsProto_ScreenBrightnessMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:android.providers.settings.SettingsProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SettingsServiceDumpProto

// repeated .android.providers.settings.UserSettingsProto user_settings = 1;
inline int SettingsServiceDumpProto::user_settings_size() const {
  return user_settings_.size();
}
inline void SettingsServiceDumpProto::clear_user_settings() {
  user_settings_.Clear();
}
inline ::android::providers::settings::UserSettingsProto* SettingsServiceDumpProto::mutable_user_settings(int index) {
  // @@protoc_insertion_point(field_mutable:android.providers.settings.SettingsServiceDumpProto.user_settings)
  return user_settings_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::android::providers::settings::UserSettingsProto >*
SettingsServiceDumpProto::mutable_user_settings() {
  // @@protoc_insertion_point(field_mutable_list:android.providers.settings.SettingsServiceDumpProto.user_settings)
  return &user_settings_;
}
inline const ::android::providers::settings::UserSettingsProto& SettingsServiceDumpProto::user_settings(int index) const {
  // @@protoc_insertion_point(field_get:android.providers.settings.SettingsServiceDumpProto.user_settings)
  return user_settings_.Get(index);
}
inline ::android::providers::settings::UserSettingsProto* SettingsServiceDumpProto::add_user_settings() {
  // @@protoc_insertion_point(field_add:android.providers.settings.SettingsServiceDumpProto.user_settings)
  return user_settings_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::android::providers::settings::UserSettingsProto >&
SettingsServiceDumpProto::user_settings() const {
  // @@protoc_insertion_point(field_list:android.providers.settings.SettingsServiceDumpProto.user_settings)
  return user_settings_;
}

// optional .android.providers.settings.GlobalSettingsProto global_settings = 2;
inline bool SettingsServiceDumpProto::has_global_settings() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::android::providers::settings::GlobalSettingsProto& SettingsServiceDumpProto::global_settings() const {
  const ::android::providers::settings::GlobalSettingsProto* p = global_settings_;
  // @@protoc_insertion_point(field_get:android.providers.settings.SettingsServiceDumpProto.global_settings)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::providers::settings::GlobalSettingsProto*>(
      &::android::providers::settings::_GlobalSettingsProto_default_instance_);
}
inline ::android::providers::settings::GlobalSettingsProto* SettingsServiceDumpProto::release_global_settings() {
  // @@protoc_insertion_point(field_release:android.providers.settings.SettingsServiceDumpProto.global_settings)
  _has_bits_[0] &= ~0x00000001u;
  ::android::providers::settings::GlobalSettingsProto* temp = global_settings_;
  global_settings_ = nullptr;
  return temp;
}
inline ::android::providers::settings::GlobalSettingsProto* SettingsServiceDumpProto::mutable_global_settings() {
  _has_bits_[0] |= 0x00000001u;
  if (global_settings_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::providers::settings::GlobalSettingsProto>(GetArenaNoVirtual());
    global_settings_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.providers.settings.SettingsServiceDumpProto.global_settings)
  return global_settings_;
}
inline void SettingsServiceDumpProto::set_allocated_global_settings(::android::providers::settings::GlobalSettingsProto* global_settings) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(global_settings_);
  }
  if (global_settings) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      global_settings = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, global_settings, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  global_settings_ = global_settings;
  // @@protoc_insertion_point(field_set_allocated:android.providers.settings.SettingsServiceDumpProto.global_settings)
}

// optional .android.providers.settings.ConfigSettingsProto config_settings = 3;
inline bool SettingsServiceDumpProto::has_config_settings() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::android::providers::settings::ConfigSettingsProto& SettingsServiceDumpProto::config_settings() const {
  const ::android::providers::settings::ConfigSettingsProto* p = config_settings_;
  // @@protoc_insertion_point(field_get:android.providers.settings.SettingsServiceDumpProto.config_settings)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::providers::settings::ConfigSettingsProto*>(
      &::android::providers::settings::_ConfigSettingsProto_default_instance_);
}
inline ::android::providers::settings::ConfigSettingsProto* SettingsServiceDumpProto::release_config_settings() {
  // @@protoc_insertion_point(field_release:android.providers.settings.SettingsServiceDumpProto.config_settings)
  _has_bits_[0] &= ~0x00000002u;
  ::android::providers::settings::ConfigSettingsProto* temp = config_settings_;
  config_settings_ = nullptr;
  return temp;
}
inline ::android::providers::settings::ConfigSettingsProto* SettingsServiceDumpProto::mutable_config_settings() {
  _has_bits_[0] |= 0x00000002u;
  if (config_settings_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::providers::settings::ConfigSettingsProto>(GetArenaNoVirtual());
    config_settings_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.providers.settings.SettingsServiceDumpProto.config_settings)
  return config_settings_;
}
inline void SettingsServiceDumpProto::set_allocated_config_settings(::android::providers::settings::ConfigSettingsProto* config_settings) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(config_settings_);
  }
  if (config_settings) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      config_settings = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, config_settings, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  config_settings_ = config_settings;
  // @@protoc_insertion_point(field_set_allocated:android.providers.settings.SettingsServiceDumpProto.config_settings)
}

// -------------------------------------------------------------------

// UserSettingsProto

// optional int32 user_id = 1 [(.android.privacy) = {
inline bool UserSettingsProto::has_user_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UserSettingsProto::clear_user_id() {
  user_id_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 UserSettingsProto::user_id() const {
  // @@protoc_insertion_point(field_get:android.providers.settings.UserSettingsProto.user_id)
  return user_id_;
}
inline void UserSettingsProto::set_user_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  user_id_ = value;
  // @@protoc_insertion_point(field_set:android.providers.settings.UserSettingsProto.user_id)
}

// optional .android.providers.settings.SecureSettingsProto secure_settings = 2;
inline bool UserSettingsProto::has_secure_settings() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::android::providers::settings::SecureSettingsProto& UserSettingsProto::secure_settings() const {
  const ::android::providers::settings::SecureSettingsProto* p = secure_settings_;
  // @@protoc_insertion_point(field_get:android.providers.settings.UserSettingsProto.secure_settings)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::providers::settings::SecureSettingsProto*>(
      &::android::providers::settings::_SecureSettingsProto_default_instance_);
}
inline ::android::providers::settings::SecureSettingsProto* UserSettingsProto::release_secure_settings() {
  // @@protoc_insertion_point(field_release:android.providers.settings.UserSettingsProto.secure_settings)
  _has_bits_[0] &= ~0x00000001u;
  ::android::providers::settings::SecureSettingsProto* temp = secure_settings_;
  secure_settings_ = nullptr;
  return temp;
}
inline ::android::providers::settings::SecureSettingsProto* UserSettingsProto::mutable_secure_settings() {
  _has_bits_[0] |= 0x00000001u;
  if (secure_settings_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::providers::settings::SecureSettingsProto>(GetArenaNoVirtual());
    secure_settings_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.providers.settings.UserSettingsProto.secure_settings)
  return secure_settings_;
}
inline void UserSettingsProto::set_allocated_secure_settings(::android::providers::settings::SecureSettingsProto* secure_settings) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(secure_settings_);
  }
  if (secure_settings) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      secure_settings = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, secure_settings, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  secure_settings_ = secure_settings;
  // @@protoc_insertion_point(field_set_allocated:android.providers.settings.UserSettingsProto.secure_settings)
}

// optional .android.providers.settings.SystemSettingsProto system_settings = 3;
inline bool UserSettingsProto::has_system_settings() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::android::providers::settings::SystemSettingsProto& UserSettingsProto::system_settings() const {
  const ::android::providers::settings::SystemSettingsProto* p = system_settings_;
  // @@protoc_insertion_point(field_get:android.providers.settings.UserSettingsProto.system_settings)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::providers::settings::SystemSettingsProto*>(
      &::android::providers::settings::_SystemSettingsProto_default_instance_);
}
inline ::android::providers::settings::SystemSettingsProto* UserSettingsProto::release_system_settings() {
  // @@protoc_insertion_point(field_release:android.providers.settings.UserSettingsProto.system_settings)
  _has_bits_[0] &= ~0x00000002u;
  ::android::providers::settings::SystemSettingsProto* temp = system_settings_;
  system_settings_ = nullptr;
  return temp;
}
inline ::android::providers::settings::SystemSettingsProto* UserSettingsProto::mutable_system_settings() {
  _has_bits_[0] |= 0x00000002u;
  if (system_settings_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::providers::settings::SystemSettingsProto>(GetArenaNoVirtual());
    system_settings_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.providers.settings.UserSettingsProto.system_settings)
  return system_settings_;
}
inline void UserSettingsProto::set_allocated_system_settings(::android::providers::settings::SystemSettingsProto* system_settings) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(system_settings_);
  }
  if (system_settings) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      system_settings = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, system_settings, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  system_settings_ = system_settings;
  // @@protoc_insertion_point(field_set_allocated:android.providers.settings.UserSettingsProto.system_settings)
}

// -------------------------------------------------------------------

// SettingsProto

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace settings
}  // namespace providers
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::providers::settings::SettingsProto_ScreenBrightnessMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::android::providers::settings::SettingsProto_ScreenBrightnessMode>() {
  return ::android::providers::settings::SettingsProto_ScreenBrightnessMode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fproviders_2fsettings_2eproto

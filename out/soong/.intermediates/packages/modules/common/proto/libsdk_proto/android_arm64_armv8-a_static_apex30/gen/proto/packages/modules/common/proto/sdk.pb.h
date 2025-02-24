// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packages/modules/common/proto/sdk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
class ExtensionDatabase;
class ExtensionDatabaseDefaultTypeInternal;
extern ExtensionDatabaseDefaultTypeInternal _ExtensionDatabase_default_instance_;
class ExtensionVersion;
class ExtensionVersionDefaultTypeInternal;
extern ExtensionVersionDefaultTypeInternal _ExtensionVersion_default_instance_;
class ExtensionVersion_ModuleRequirement;
class ExtensionVersion_ModuleRequirementDefaultTypeInternal;
extern ExtensionVersion_ModuleRequirementDefaultTypeInternal _ExtensionVersion_ModuleRequirement_default_instance_;
class SdkVersion;
class SdkVersionDefaultTypeInternal;
extern SdkVersionDefaultTypeInternal _SdkVersion_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ExtensionDatabase* Arena::CreateMaybeMessage<::ExtensionDatabase>(Arena*);
template<> ::ExtensionVersion* Arena::CreateMaybeMessage<::ExtensionVersion>(Arena*);
template<> ::ExtensionVersion_ModuleRequirement* Arena::CreateMaybeMessage<::ExtensionVersion_ModuleRequirement>(Arena*);
template<> ::SdkVersion* Arena::CreateMaybeMessage<::SdkVersion>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum SdkModule : int {
  UNKNOWN = 0,
  CONSCRYPT = 10,
  IPSEC = 1,
  MEDIA = 2,
  MEDIA_PROVIDER = 3,
  PERMISSIONS = 4,
  SDK_EXTENSIONS = 5,
  STATSD = 6,
  TETHERING = 7,
  ART = 8,
  SCHEDULING = 9,
  SdkModule_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SdkModule_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SdkModule_IsValid(int value);
constexpr SdkModule SdkModule_MIN = UNKNOWN;
constexpr SdkModule SdkModule_MAX = CONSCRYPT;
constexpr int SdkModule_ARRAYSIZE = SdkModule_MAX + 1;

const std::string& SdkModule_Name(SdkModule value);
template<typename T>
inline const std::string& SdkModule_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SdkModule>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SdkModule_Name.");
  return SdkModule_Name(static_cast<SdkModule>(enum_t_value));
}
bool SdkModule_Parse(
    const std::string& name, SdkModule* value);
// ===================================================================

class SdkVersion :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:SdkVersion) */ {
 public:
  SdkVersion();
  virtual ~SdkVersion();

  SdkVersion(const SdkVersion& from);
  SdkVersion(SdkVersion&& from) noexcept
    : SdkVersion() {
    *this = ::std::move(from);
  }

  inline SdkVersion& operator=(const SdkVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline SdkVersion& operator=(SdkVersion&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const SdkVersion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SdkVersion* internal_default_instance() {
    return reinterpret_cast<const SdkVersion*>(
               &_SdkVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SdkVersion& a, SdkVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(SdkVersion* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SdkVersion* New() const final {
    return CreateMaybeMessage<SdkVersion>(nullptr);
  }

  SdkVersion* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SdkVersion>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const SdkVersion& from);
  void MergeFrom(const SdkVersion& from);
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
  void InternalSwap(SdkVersion* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "SdkVersion";
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

  enum : int {
    kVersionFieldNumber = 1,
  };
  // int32 version = 1;
  void clear_version();
  ::PROTOBUF_NAMESPACE_ID::int32 version() const;
  void set_version(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:SdkVersion)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto;
};
// -------------------------------------------------------------------

class ExtensionVersion_ModuleRequirement :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ExtensionVersion.ModuleRequirement) */ {
 public:
  ExtensionVersion_ModuleRequirement();
  virtual ~ExtensionVersion_ModuleRequirement();

  ExtensionVersion_ModuleRequirement(const ExtensionVersion_ModuleRequirement& from);
  ExtensionVersion_ModuleRequirement(ExtensionVersion_ModuleRequirement&& from) noexcept
    : ExtensionVersion_ModuleRequirement() {
    *this = ::std::move(from);
  }

  inline ExtensionVersion_ModuleRequirement& operator=(const ExtensionVersion_ModuleRequirement& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExtensionVersion_ModuleRequirement& operator=(ExtensionVersion_ModuleRequirement&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ExtensionVersion_ModuleRequirement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExtensionVersion_ModuleRequirement* internal_default_instance() {
    return reinterpret_cast<const ExtensionVersion_ModuleRequirement*>(
               &_ExtensionVersion_ModuleRequirement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ExtensionVersion_ModuleRequirement& a, ExtensionVersion_ModuleRequirement& b) {
    a.Swap(&b);
  }
  inline void Swap(ExtensionVersion_ModuleRequirement* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExtensionVersion_ModuleRequirement* New() const final {
    return CreateMaybeMessage<ExtensionVersion_ModuleRequirement>(nullptr);
  }

  ExtensionVersion_ModuleRequirement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExtensionVersion_ModuleRequirement>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ExtensionVersion_ModuleRequirement& from);
  void MergeFrom(const ExtensionVersion_ModuleRequirement& from);
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
  void InternalSwap(ExtensionVersion_ModuleRequirement* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ExtensionVersion.ModuleRequirement";
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

  enum : int {
    kVersionFieldNumber = 2,
    kModuleFieldNumber = 1,
  };
  // .SdkVersion version = 2;
  bool has_version() const;
  void clear_version();
  const ::SdkVersion& version() const;
  ::SdkVersion* release_version();
  ::SdkVersion* mutable_version();
  void set_allocated_version(::SdkVersion* version);

  // .SdkModule module = 1;
  void clear_module();
  ::SdkModule module() const;
  void set_module(::SdkModule value);

  // @@protoc_insertion_point(class_scope:ExtensionVersion.ModuleRequirement)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::SdkVersion* version_;
  int module_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto;
};
// -------------------------------------------------------------------

class ExtensionVersion :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ExtensionVersion) */ {
 public:
  ExtensionVersion();
  virtual ~ExtensionVersion();

  ExtensionVersion(const ExtensionVersion& from);
  ExtensionVersion(ExtensionVersion&& from) noexcept
    : ExtensionVersion() {
    *this = ::std::move(from);
  }

  inline ExtensionVersion& operator=(const ExtensionVersion& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExtensionVersion& operator=(ExtensionVersion&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ExtensionVersion& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExtensionVersion* internal_default_instance() {
    return reinterpret_cast<const ExtensionVersion*>(
               &_ExtensionVersion_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ExtensionVersion& a, ExtensionVersion& b) {
    a.Swap(&b);
  }
  inline void Swap(ExtensionVersion* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExtensionVersion* New() const final {
    return CreateMaybeMessage<ExtensionVersion>(nullptr);
  }

  ExtensionVersion* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExtensionVersion>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ExtensionVersion& from);
  void MergeFrom(const ExtensionVersion& from);
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
  void InternalSwap(ExtensionVersion* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ExtensionVersion";
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

  typedef ExtensionVersion_ModuleRequirement ModuleRequirement;

  // accessors -------------------------------------------------------

  enum : int {
    kRequirementsFieldNumber = 2,
    kVersionFieldNumber = 1,
  };
  // repeated .ExtensionVersion.ModuleRequirement requirements = 2;
  int requirements_size() const;
  void clear_requirements();
  ::ExtensionVersion_ModuleRequirement* mutable_requirements(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion_ModuleRequirement >*
      mutable_requirements();
  const ::ExtensionVersion_ModuleRequirement& requirements(int index) const;
  ::ExtensionVersion_ModuleRequirement* add_requirements();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion_ModuleRequirement >&
      requirements() const;

  // int32 version = 1;
  void clear_version();
  ::PROTOBUF_NAMESPACE_ID::int32 version() const;
  void set_version(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:ExtensionVersion)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion_ModuleRequirement > requirements_;
  ::PROTOBUF_NAMESPACE_ID::int32 version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto;
};
// -------------------------------------------------------------------

class ExtensionDatabase :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ExtensionDatabase) */ {
 public:
  ExtensionDatabase();
  virtual ~ExtensionDatabase();

  ExtensionDatabase(const ExtensionDatabase& from);
  ExtensionDatabase(ExtensionDatabase&& from) noexcept
    : ExtensionDatabase() {
    *this = ::std::move(from);
  }

  inline ExtensionDatabase& operator=(const ExtensionDatabase& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExtensionDatabase& operator=(ExtensionDatabase&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ExtensionDatabase& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExtensionDatabase* internal_default_instance() {
    return reinterpret_cast<const ExtensionDatabase*>(
               &_ExtensionDatabase_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(ExtensionDatabase& a, ExtensionDatabase& b) {
    a.Swap(&b);
  }
  inline void Swap(ExtensionDatabase* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExtensionDatabase* New() const final {
    return CreateMaybeMessage<ExtensionDatabase>(nullptr);
  }

  ExtensionDatabase* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExtensionDatabase>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ExtensionDatabase& from);
  void MergeFrom(const ExtensionDatabase& from);
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
  void InternalSwap(ExtensionDatabase* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ExtensionDatabase";
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

  enum : int {
    kVersionsFieldNumber = 1,
  };
  // repeated .ExtensionVersion versions = 1;
  int versions_size() const;
  void clear_versions();
  ::ExtensionVersion* mutable_versions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion >*
      mutable_versions();
  const ::ExtensionVersion& versions(int index) const;
  ::ExtensionVersion* add_versions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion >&
      versions() const;

  // @@protoc_insertion_point(class_scope:ExtensionDatabase)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion > versions_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SdkVersion

// int32 version = 1;
inline void SdkVersion::clear_version() {
  version_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SdkVersion::version() const {
  // @@protoc_insertion_point(field_get:SdkVersion.version)
  return version_;
}
inline void SdkVersion::set_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:SdkVersion.version)
}

// -------------------------------------------------------------------

// ExtensionVersion_ModuleRequirement

// .SdkModule module = 1;
inline void ExtensionVersion_ModuleRequirement::clear_module() {
  module_ = 0;
}
inline ::SdkModule ExtensionVersion_ModuleRequirement::module() const {
  // @@protoc_insertion_point(field_get:ExtensionVersion.ModuleRequirement.module)
  return static_cast< ::SdkModule >(module_);
}
inline void ExtensionVersion_ModuleRequirement::set_module(::SdkModule value) {
  
  module_ = value;
  // @@protoc_insertion_point(field_set:ExtensionVersion.ModuleRequirement.module)
}

// .SdkVersion version = 2;
inline bool ExtensionVersion_ModuleRequirement::has_version() const {
  return this != internal_default_instance() && version_ != nullptr;
}
inline void ExtensionVersion_ModuleRequirement::clear_version() {
  if (GetArenaNoVirtual() == nullptr && version_ != nullptr) {
    delete version_;
  }
  version_ = nullptr;
}
inline const ::SdkVersion& ExtensionVersion_ModuleRequirement::version() const {
  const ::SdkVersion* p = version_;
  // @@protoc_insertion_point(field_get:ExtensionVersion.ModuleRequirement.version)
  return p != nullptr ? *p : *reinterpret_cast<const ::SdkVersion*>(
      &::_SdkVersion_default_instance_);
}
inline ::SdkVersion* ExtensionVersion_ModuleRequirement::release_version() {
  // @@protoc_insertion_point(field_release:ExtensionVersion.ModuleRequirement.version)
  
  ::SdkVersion* temp = version_;
  version_ = nullptr;
  return temp;
}
inline ::SdkVersion* ExtensionVersion_ModuleRequirement::mutable_version() {
  
  if (version_ == nullptr) {
    auto* p = CreateMaybeMessage<::SdkVersion>(GetArenaNoVirtual());
    version_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ExtensionVersion.ModuleRequirement.version)
  return version_;
}
inline void ExtensionVersion_ModuleRequirement::set_allocated_version(::SdkVersion* version) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete version_;
  }
  if (version) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      version = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, version, submessage_arena);
    }
    
  } else {
    
  }
  version_ = version;
  // @@protoc_insertion_point(field_set_allocated:ExtensionVersion.ModuleRequirement.version)
}

// -------------------------------------------------------------------

// ExtensionVersion

// int32 version = 1;
inline void ExtensionVersion::clear_version() {
  version_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ExtensionVersion::version() const {
  // @@protoc_insertion_point(field_get:ExtensionVersion.version)
  return version_;
}
inline void ExtensionVersion::set_version(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:ExtensionVersion.version)
}

// repeated .ExtensionVersion.ModuleRequirement requirements = 2;
inline int ExtensionVersion::requirements_size() const {
  return requirements_.size();
}
inline void ExtensionVersion::clear_requirements() {
  requirements_.Clear();
}
inline ::ExtensionVersion_ModuleRequirement* ExtensionVersion::mutable_requirements(int index) {
  // @@protoc_insertion_point(field_mutable:ExtensionVersion.requirements)
  return requirements_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion_ModuleRequirement >*
ExtensionVersion::mutable_requirements() {
  // @@protoc_insertion_point(field_mutable_list:ExtensionVersion.requirements)
  return &requirements_;
}
inline const ::ExtensionVersion_ModuleRequirement& ExtensionVersion::requirements(int index) const {
  // @@protoc_insertion_point(field_get:ExtensionVersion.requirements)
  return requirements_.Get(index);
}
inline ::ExtensionVersion_ModuleRequirement* ExtensionVersion::add_requirements() {
  // @@protoc_insertion_point(field_add:ExtensionVersion.requirements)
  return requirements_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion_ModuleRequirement >&
ExtensionVersion::requirements() const {
  // @@protoc_insertion_point(field_list:ExtensionVersion.requirements)
  return requirements_;
}

// -------------------------------------------------------------------

// ExtensionDatabase

// repeated .ExtensionVersion versions = 1;
inline int ExtensionDatabase::versions_size() const {
  return versions_.size();
}
inline void ExtensionDatabase::clear_versions() {
  versions_.Clear();
}
inline ::ExtensionVersion* ExtensionDatabase::mutable_versions(int index) {
  // @@protoc_insertion_point(field_mutable:ExtensionDatabase.versions)
  return versions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion >*
ExtensionDatabase::mutable_versions() {
  // @@protoc_insertion_point(field_mutable_list:ExtensionDatabase.versions)
  return &versions_;
}
inline const ::ExtensionVersion& ExtensionDatabase::versions(int index) const {
  // @@protoc_insertion_point(field_get:ExtensionDatabase.versions)
  return versions_.Get(index);
}
inline ::ExtensionVersion* ExtensionDatabase::add_versions() {
  // @@protoc_insertion_point(field_add:ExtensionDatabase.versions)
  return versions_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ExtensionVersion >&
ExtensionDatabase::versions() const {
  // @@protoc_insertion_point(field_list:ExtensionDatabase.versions)
  return versions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::SdkModule> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_packages_2fmodules_2fcommon_2fproto_2fsdk_2eproto

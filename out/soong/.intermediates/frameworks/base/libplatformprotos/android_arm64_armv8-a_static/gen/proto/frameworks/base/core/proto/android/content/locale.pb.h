// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/content/locale.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2flocale_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2flocale_2eproto

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
#include "frameworks/base/core/proto/android/privacy.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2flocale_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2flocale_2eproto {
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
namespace content {
class LocaleProto;
class LocaleProtoDefaultTypeInternal;
extern LocaleProtoDefaultTypeInternal _LocaleProto_default_instance_;
}  // namespace content
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::content::LocaleProto* Arena::CreateMaybeMessage<::android::content::LocaleProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace content {

// ===================================================================

class LocaleProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.content.LocaleProto) */ {
 public:
  LocaleProto();
  virtual ~LocaleProto();

  LocaleProto(const LocaleProto& from);
  LocaleProto(LocaleProto&& from) noexcept
    : LocaleProto() {
    *this = ::std::move(from);
  }

  inline LocaleProto& operator=(const LocaleProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline LocaleProto& operator=(LocaleProto&& from) noexcept {
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

  static const LocaleProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LocaleProto* internal_default_instance() {
    return reinterpret_cast<const LocaleProto*>(
               &_LocaleProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LocaleProto& a, LocaleProto& b) {
    a.Swap(&b);
  }
  inline void Swap(LocaleProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LocaleProto* New() const final {
    return CreateMaybeMessage<LocaleProto>(nullptr);
  }

  LocaleProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LocaleProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const LocaleProto& from);
  void MergeFrom(const LocaleProto& from);
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
  void InternalSwap(LocaleProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.content.LocaleProto";
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
    kLanguageFieldNumber = 1,
    kCountryFieldNumber = 2,
    kVariantFieldNumber = 3,
    kScriptFieldNumber = 4,
  };
  // optional string language = 1;
  bool has_language() const;
  void clear_language();
  const std::string& language() const;
  void set_language(const std::string& value);
  void set_language(std::string&& value);
  void set_language(const char* value);
  void set_language(const char* value, size_t size);
  std::string* mutable_language();
  std::string* release_language();
  void set_allocated_language(std::string* language);

  // optional string country = 2;
  bool has_country() const;
  void clear_country();
  const std::string& country() const;
  void set_country(const std::string& value);
  void set_country(std::string&& value);
  void set_country(const char* value);
  void set_country(const char* value, size_t size);
  std::string* mutable_country();
  std::string* release_country();
  void set_allocated_country(std::string* country);

  // optional string variant = 3;
  bool has_variant() const;
  void clear_variant();
  const std::string& variant() const;
  void set_variant(const std::string& value);
  void set_variant(std::string&& value);
  void set_variant(const char* value);
  void set_variant(const char* value, size_t size);
  std::string* mutable_variant();
  std::string* release_variant();
  void set_allocated_variant(std::string* variant);

  // optional string script = 4;
  bool has_script() const;
  void clear_script();
  const std::string& script() const;
  void set_script(const std::string& value);
  void set_script(std::string&& value);
  void set_script(const char* value);
  void set_script(const char* value, size_t size);
  std::string* mutable_script();
  std::string* release_script();
  void set_allocated_script(std::string* script);

  // @@protoc_insertion_point(class_scope:android.content.LocaleProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr language_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr country_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr variant_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr script_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2flocale_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocaleProto

// optional string language = 1;
inline bool LocaleProto::has_language() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LocaleProto::clear_language() {
  language_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LocaleProto::language() const {
  // @@protoc_insertion_point(field_get:android.content.LocaleProto.language)
  return language_.GetNoArena();
}
inline void LocaleProto::set_language(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  language_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.content.LocaleProto.language)
}
inline void LocaleProto::set_language(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  language_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.content.LocaleProto.language)
}
inline void LocaleProto::set_language(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  language_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.content.LocaleProto.language)
}
inline void LocaleProto::set_language(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  language_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.content.LocaleProto.language)
}
inline std::string* LocaleProto::mutable_language() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:android.content.LocaleProto.language)
  return language_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LocaleProto::release_language() {
  // @@protoc_insertion_point(field_release:android.content.LocaleProto.language)
  if (!has_language()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return language_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LocaleProto::set_allocated_language(std::string* language) {
  if (language != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  language_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), language);
  // @@protoc_insertion_point(field_set_allocated:android.content.LocaleProto.language)
}

// optional string country = 2;
inline bool LocaleProto::has_country() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LocaleProto::clear_country() {
  country_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& LocaleProto::country() const {
  // @@protoc_insertion_point(field_get:android.content.LocaleProto.country)
  return country_.GetNoArena();
}
inline void LocaleProto::set_country(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  country_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.content.LocaleProto.country)
}
inline void LocaleProto::set_country(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  country_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.content.LocaleProto.country)
}
inline void LocaleProto::set_country(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  country_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.content.LocaleProto.country)
}
inline void LocaleProto::set_country(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  country_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.content.LocaleProto.country)
}
inline std::string* LocaleProto::mutable_country() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:android.content.LocaleProto.country)
  return country_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LocaleProto::release_country() {
  // @@protoc_insertion_point(field_release:android.content.LocaleProto.country)
  if (!has_country()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return country_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LocaleProto::set_allocated_country(std::string* country) {
  if (country != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  country_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), country);
  // @@protoc_insertion_point(field_set_allocated:android.content.LocaleProto.country)
}

// optional string variant = 3;
inline bool LocaleProto::has_variant() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LocaleProto::clear_variant() {
  variant_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& LocaleProto::variant() const {
  // @@protoc_insertion_point(field_get:android.content.LocaleProto.variant)
  return variant_.GetNoArena();
}
inline void LocaleProto::set_variant(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  variant_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.content.LocaleProto.variant)
}
inline void LocaleProto::set_variant(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  variant_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.content.LocaleProto.variant)
}
inline void LocaleProto::set_variant(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  variant_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.content.LocaleProto.variant)
}
inline void LocaleProto::set_variant(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  variant_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.content.LocaleProto.variant)
}
inline std::string* LocaleProto::mutable_variant() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:android.content.LocaleProto.variant)
  return variant_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LocaleProto::release_variant() {
  // @@protoc_insertion_point(field_release:android.content.LocaleProto.variant)
  if (!has_variant()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return variant_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LocaleProto::set_allocated_variant(std::string* variant) {
  if (variant != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  variant_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), variant);
  // @@protoc_insertion_point(field_set_allocated:android.content.LocaleProto.variant)
}

// optional string script = 4;
inline bool LocaleProto::has_script() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LocaleProto::clear_script() {
  script_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& LocaleProto::script() const {
  // @@protoc_insertion_point(field_get:android.content.LocaleProto.script)
  return script_.GetNoArena();
}
inline void LocaleProto::set_script(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  script_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.content.LocaleProto.script)
}
inline void LocaleProto::set_script(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  script_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.content.LocaleProto.script)
}
inline void LocaleProto::set_script(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  script_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.content.LocaleProto.script)
}
inline void LocaleProto::set_script(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  script_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.content.LocaleProto.script)
}
inline std::string* LocaleProto::mutable_script() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:android.content.LocaleProto.script)
  return script_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LocaleProto::release_script() {
  // @@protoc_insertion_point(field_release:android.content.LocaleProto.script)
  if (!has_script()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return script_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LocaleProto::set_allocated_script(std::string* script) {
  if (script != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  script_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), script);
  // @@protoc_insertion_point(field_set_allocated:android.content.LocaleProto.script)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace content
}  // namespace android

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2flocale_2eproto

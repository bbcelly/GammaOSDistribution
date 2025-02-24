// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/server/intentresolver.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace com {
namespace android {
namespace server {
class IntentResolverProto;
class IntentResolverProtoDefaultTypeInternal;
extern IntentResolverProtoDefaultTypeInternal _IntentResolverProto_default_instance_;
class IntentResolverProto_ArrayMapEntry;
class IntentResolverProto_ArrayMapEntryDefaultTypeInternal;
extern IntentResolverProto_ArrayMapEntryDefaultTypeInternal _IntentResolverProto_ArrayMapEntry_default_instance_;
}  // namespace server
}  // namespace android
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::android::server::IntentResolverProto* Arena::CreateMaybeMessage<::com::android::server::IntentResolverProto>(Arena*);
template<> ::com::android::server::IntentResolverProto_ArrayMapEntry* Arena::CreateMaybeMessage<::com::android::server::IntentResolverProto_ArrayMapEntry>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace android {
namespace server {

// ===================================================================

class IntentResolverProto_ArrayMapEntry :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:com.android.server.IntentResolverProto.ArrayMapEntry) */ {
 public:
  IntentResolverProto_ArrayMapEntry();
  virtual ~IntentResolverProto_ArrayMapEntry();

  IntentResolverProto_ArrayMapEntry(const IntentResolverProto_ArrayMapEntry& from);
  IntentResolverProto_ArrayMapEntry(IntentResolverProto_ArrayMapEntry&& from) noexcept
    : IntentResolverProto_ArrayMapEntry() {
    *this = ::std::move(from);
  }

  inline IntentResolverProto_ArrayMapEntry& operator=(const IntentResolverProto_ArrayMapEntry& from) {
    CopyFrom(from);
    return *this;
  }
  inline IntentResolverProto_ArrayMapEntry& operator=(IntentResolverProto_ArrayMapEntry&& from) noexcept {
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

  static const IntentResolverProto_ArrayMapEntry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const IntentResolverProto_ArrayMapEntry* internal_default_instance() {
    return reinterpret_cast<const IntentResolverProto_ArrayMapEntry*>(
               &_IntentResolverProto_ArrayMapEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(IntentResolverProto_ArrayMapEntry& a, IntentResolverProto_ArrayMapEntry& b) {
    a.Swap(&b);
  }
  inline void Swap(IntentResolverProto_ArrayMapEntry* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline IntentResolverProto_ArrayMapEntry* New() const final {
    return CreateMaybeMessage<IntentResolverProto_ArrayMapEntry>(nullptr);
  }

  IntentResolverProto_ArrayMapEntry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<IntentResolverProto_ArrayMapEntry>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const IntentResolverProto_ArrayMapEntry& from);
  void MergeFrom(const IntentResolverProto_ArrayMapEntry& from);
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
  void InternalSwap(IntentResolverProto_ArrayMapEntry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.android.server.IntentResolverProto.ArrayMapEntry";
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
    kValuesFieldNumber = 2,
    kKeyFieldNumber = 1,
  };
  // repeated string values = 2;
  int values_size() const;
  void clear_values();
  const std::string& values(int index) const;
  std::string* mutable_values(int index);
  void set_values(int index, const std::string& value);
  void set_values(int index, std::string&& value);
  void set_values(int index, const char* value);
  void set_values(int index, const char* value, size_t size);
  std::string* add_values();
  void add_values(const std::string& value);
  void add_values(std::string&& value);
  void add_values(const char* value);
  void add_values(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& values() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_values();

  // optional string key = 1;
  bool has_key() const;
  void clear_key();
  const std::string& key() const;
  void set_key(const std::string& value);
  void set_key(std::string&& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  std::string* mutable_key();
  std::string* release_key();
  void set_allocated_key(std::string* key);

  // @@protoc_insertion_point(class_scope:com.android.server.IntentResolverProto.ArrayMapEntry)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> values_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto;
};
// -------------------------------------------------------------------

class IntentResolverProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:com.android.server.IntentResolverProto) */ {
 public:
  IntentResolverProto();
  virtual ~IntentResolverProto();

  IntentResolverProto(const IntentResolverProto& from);
  IntentResolverProto(IntentResolverProto&& from) noexcept
    : IntentResolverProto() {
    *this = ::std::move(from);
  }

  inline IntentResolverProto& operator=(const IntentResolverProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline IntentResolverProto& operator=(IntentResolverProto&& from) noexcept {
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

  static const IntentResolverProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const IntentResolverProto* internal_default_instance() {
    return reinterpret_cast<const IntentResolverProto*>(
               &_IntentResolverProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(IntentResolverProto& a, IntentResolverProto& b) {
    a.Swap(&b);
  }
  inline void Swap(IntentResolverProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline IntentResolverProto* New() const final {
    return CreateMaybeMessage<IntentResolverProto>(nullptr);
  }

  IntentResolverProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<IntentResolverProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const IntentResolverProto& from);
  void MergeFrom(const IntentResolverProto& from);
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
  void InternalSwap(IntentResolverProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.android.server.IntentResolverProto";
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

  typedef IntentResolverProto_ArrayMapEntry ArrayMapEntry;

  // accessors -------------------------------------------------------

  enum : int {
    kFullMimeTypesFieldNumber = 1,
    kBaseMimeTypesFieldNumber = 2,
    kWildMimeTypesFieldNumber = 3,
    kSchemesFieldNumber = 4,
    kNonDataActionsFieldNumber = 5,
    kMimeTypedActionsFieldNumber = 6,
  };
  // repeated .com.android.server.IntentResolverProto.ArrayMapEntry full_mime_types = 1;
  int full_mime_types_size() const;
  void clear_full_mime_types();
  ::com::android::server::IntentResolverProto_ArrayMapEntry* mutable_full_mime_types(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
      mutable_full_mime_types();
  const ::com::android::server::IntentResolverProto_ArrayMapEntry& full_mime_types(int index) const;
  ::com::android::server::IntentResolverProto_ArrayMapEntry* add_full_mime_types();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
      full_mime_types() const;

  // repeated .com.android.server.IntentResolverProto.ArrayMapEntry base_mime_types = 2;
  int base_mime_types_size() const;
  void clear_base_mime_types();
  ::com::android::server::IntentResolverProto_ArrayMapEntry* mutable_base_mime_types(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
      mutable_base_mime_types();
  const ::com::android::server::IntentResolverProto_ArrayMapEntry& base_mime_types(int index) const;
  ::com::android::server::IntentResolverProto_ArrayMapEntry* add_base_mime_types();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
      base_mime_types() const;

  // repeated .com.android.server.IntentResolverProto.ArrayMapEntry wild_mime_types = 3;
  int wild_mime_types_size() const;
  void clear_wild_mime_types();
  ::com::android::server::IntentResolverProto_ArrayMapEntry* mutable_wild_mime_types(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
      mutable_wild_mime_types();
  const ::com::android::server::IntentResolverProto_ArrayMapEntry& wild_mime_types(int index) const;
  ::com::android::server::IntentResolverProto_ArrayMapEntry* add_wild_mime_types();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
      wild_mime_types() const;

  // repeated .com.android.server.IntentResolverProto.ArrayMapEntry schemes = 4;
  int schemes_size() const;
  void clear_schemes();
  ::com::android::server::IntentResolverProto_ArrayMapEntry* mutable_schemes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
      mutable_schemes();
  const ::com::android::server::IntentResolverProto_ArrayMapEntry& schemes(int index) const;
  ::com::android::server::IntentResolverProto_ArrayMapEntry* add_schemes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
      schemes() const;

  // repeated .com.android.server.IntentResolverProto.ArrayMapEntry non_data_actions = 5;
  int non_data_actions_size() const;
  void clear_non_data_actions();
  ::com::android::server::IntentResolverProto_ArrayMapEntry* mutable_non_data_actions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
      mutable_non_data_actions();
  const ::com::android::server::IntentResolverProto_ArrayMapEntry& non_data_actions(int index) const;
  ::com::android::server::IntentResolverProto_ArrayMapEntry* add_non_data_actions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
      non_data_actions() const;

  // repeated .com.android.server.IntentResolverProto.ArrayMapEntry mime_typed_actions = 6;
  int mime_typed_actions_size() const;
  void clear_mime_typed_actions();
  ::com::android::server::IntentResolverProto_ArrayMapEntry* mutable_mime_typed_actions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
      mutable_mime_typed_actions();
  const ::com::android::server::IntentResolverProto_ArrayMapEntry& mime_typed_actions(int index) const;
  ::com::android::server::IntentResolverProto_ArrayMapEntry* add_mime_typed_actions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
      mime_typed_actions() const;

  // @@protoc_insertion_point(class_scope:com.android.server.IntentResolverProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry > full_mime_types_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry > base_mime_types_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry > wild_mime_types_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry > schemes_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry > non_data_actions_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry > mime_typed_actions_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// IntentResolverProto_ArrayMapEntry

// optional string key = 1;
inline bool IntentResolverProto_ArrayMapEntry::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IntentResolverProto_ArrayMapEntry::clear_key() {
  key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& IntentResolverProto_ArrayMapEntry::key() const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.ArrayMapEntry.key)
  return key_.GetNoArena();
}
inline void IntentResolverProto_ArrayMapEntry::set_key(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.android.server.IntentResolverProto.ArrayMapEntry.key)
}
inline void IntentResolverProto_ArrayMapEntry::set_key(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.android.server.IntentResolverProto.ArrayMapEntry.key)
}
inline void IntentResolverProto_ArrayMapEntry::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.android.server.IntentResolverProto.ArrayMapEntry.key)
}
inline void IntentResolverProto_ArrayMapEntry::set_key(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.android.server.IntentResolverProto.ArrayMapEntry.key)
}
inline std::string* IntentResolverProto_ArrayMapEntry::mutable_key() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.ArrayMapEntry.key)
  return key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* IntentResolverProto_ArrayMapEntry::release_key() {
  // @@protoc_insertion_point(field_release:com.android.server.IntentResolverProto.ArrayMapEntry.key)
  if (!has_key()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return key_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void IntentResolverProto_ArrayMapEntry::set_allocated_key(std::string* key) {
  if (key != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:com.android.server.IntentResolverProto.ArrayMapEntry.key)
}

// repeated string values = 2;
inline int IntentResolverProto_ArrayMapEntry::values_size() const {
  return values_.size();
}
inline void IntentResolverProto_ArrayMapEntry::clear_values() {
  values_.Clear();
}
inline const std::string& IntentResolverProto_ArrayMapEntry::values(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  return values_.Get(index);
}
inline std::string* IntentResolverProto_ArrayMapEntry::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  return values_.Mutable(index);
}
inline void IntentResolverProto_ArrayMapEntry::set_values(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  values_.Mutable(index)->assign(value);
}
inline void IntentResolverProto_ArrayMapEntry::set_values(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  values_.Mutable(index)->assign(std::move(value));
}
inline void IntentResolverProto_ArrayMapEntry::set_values(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  values_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:com.android.server.IntentResolverProto.ArrayMapEntry.values)
}
inline void IntentResolverProto_ArrayMapEntry::set_values(int index, const char* value, size_t size) {
  values_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:com.android.server.IntentResolverProto.ArrayMapEntry.values)
}
inline std::string* IntentResolverProto_ArrayMapEntry::add_values() {
  // @@protoc_insertion_point(field_add_mutable:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  return values_.Add();
}
inline void IntentResolverProto_ArrayMapEntry::add_values(const std::string& value) {
  values_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.ArrayMapEntry.values)
}
inline void IntentResolverProto_ArrayMapEntry::add_values(std::string&& value) {
  values_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.ArrayMapEntry.values)
}
inline void IntentResolverProto_ArrayMapEntry::add_values(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  values_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:com.android.server.IntentResolverProto.ArrayMapEntry.values)
}
inline void IntentResolverProto_ArrayMapEntry::add_values(const char* value, size_t size) {
  values_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:com.android.server.IntentResolverProto.ArrayMapEntry.values)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
IntentResolverProto_ArrayMapEntry::values() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  return values_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
IntentResolverProto_ArrayMapEntry::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.ArrayMapEntry.values)
  return &values_;
}

// -------------------------------------------------------------------

// IntentResolverProto

// repeated .com.android.server.IntentResolverProto.ArrayMapEntry full_mime_types = 1;
inline int IntentResolverProto::full_mime_types_size() const {
  return full_mime_types_.size();
}
inline void IntentResolverProto::clear_full_mime_types() {
  full_mime_types_.Clear();
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::mutable_full_mime_types(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.full_mime_types)
  return full_mime_types_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
IntentResolverProto::mutable_full_mime_types() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.full_mime_types)
  return &full_mime_types_;
}
inline const ::com::android::server::IntentResolverProto_ArrayMapEntry& IntentResolverProto::full_mime_types(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.full_mime_types)
  return full_mime_types_.Get(index);
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::add_full_mime_types() {
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.full_mime_types)
  return full_mime_types_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
IntentResolverProto::full_mime_types() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.full_mime_types)
  return full_mime_types_;
}

// repeated .com.android.server.IntentResolverProto.ArrayMapEntry base_mime_types = 2;
inline int IntentResolverProto::base_mime_types_size() const {
  return base_mime_types_.size();
}
inline void IntentResolverProto::clear_base_mime_types() {
  base_mime_types_.Clear();
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::mutable_base_mime_types(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.base_mime_types)
  return base_mime_types_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
IntentResolverProto::mutable_base_mime_types() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.base_mime_types)
  return &base_mime_types_;
}
inline const ::com::android::server::IntentResolverProto_ArrayMapEntry& IntentResolverProto::base_mime_types(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.base_mime_types)
  return base_mime_types_.Get(index);
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::add_base_mime_types() {
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.base_mime_types)
  return base_mime_types_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
IntentResolverProto::base_mime_types() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.base_mime_types)
  return base_mime_types_;
}

// repeated .com.android.server.IntentResolverProto.ArrayMapEntry wild_mime_types = 3;
inline int IntentResolverProto::wild_mime_types_size() const {
  return wild_mime_types_.size();
}
inline void IntentResolverProto::clear_wild_mime_types() {
  wild_mime_types_.Clear();
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::mutable_wild_mime_types(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.wild_mime_types)
  return wild_mime_types_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
IntentResolverProto::mutable_wild_mime_types() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.wild_mime_types)
  return &wild_mime_types_;
}
inline const ::com::android::server::IntentResolverProto_ArrayMapEntry& IntentResolverProto::wild_mime_types(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.wild_mime_types)
  return wild_mime_types_.Get(index);
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::add_wild_mime_types() {
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.wild_mime_types)
  return wild_mime_types_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
IntentResolverProto::wild_mime_types() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.wild_mime_types)
  return wild_mime_types_;
}

// repeated .com.android.server.IntentResolverProto.ArrayMapEntry schemes = 4;
inline int IntentResolverProto::schemes_size() const {
  return schemes_.size();
}
inline void IntentResolverProto::clear_schemes() {
  schemes_.Clear();
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::mutable_schemes(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.schemes)
  return schemes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
IntentResolverProto::mutable_schemes() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.schemes)
  return &schemes_;
}
inline const ::com::android::server::IntentResolverProto_ArrayMapEntry& IntentResolverProto::schemes(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.schemes)
  return schemes_.Get(index);
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::add_schemes() {
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.schemes)
  return schemes_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
IntentResolverProto::schemes() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.schemes)
  return schemes_;
}

// repeated .com.android.server.IntentResolverProto.ArrayMapEntry non_data_actions = 5;
inline int IntentResolverProto::non_data_actions_size() const {
  return non_data_actions_.size();
}
inline void IntentResolverProto::clear_non_data_actions() {
  non_data_actions_.Clear();
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::mutable_non_data_actions(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.non_data_actions)
  return non_data_actions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
IntentResolverProto::mutable_non_data_actions() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.non_data_actions)
  return &non_data_actions_;
}
inline const ::com::android::server::IntentResolverProto_ArrayMapEntry& IntentResolverProto::non_data_actions(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.non_data_actions)
  return non_data_actions_.Get(index);
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::add_non_data_actions() {
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.non_data_actions)
  return non_data_actions_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
IntentResolverProto::non_data_actions() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.non_data_actions)
  return non_data_actions_;
}

// repeated .com.android.server.IntentResolverProto.ArrayMapEntry mime_typed_actions = 6;
inline int IntentResolverProto::mime_typed_actions_size() const {
  return mime_typed_actions_.size();
}
inline void IntentResolverProto::clear_mime_typed_actions() {
  mime_typed_actions_.Clear();
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::mutable_mime_typed_actions(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.IntentResolverProto.mime_typed_actions)
  return mime_typed_actions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >*
IntentResolverProto::mutable_mime_typed_actions() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.IntentResolverProto.mime_typed_actions)
  return &mime_typed_actions_;
}
inline const ::com::android::server::IntentResolverProto_ArrayMapEntry& IntentResolverProto::mime_typed_actions(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.IntentResolverProto.mime_typed_actions)
  return mime_typed_actions_.Get(index);
}
inline ::com::android::server::IntentResolverProto_ArrayMapEntry* IntentResolverProto::add_mime_typed_actions() {
  // @@protoc_insertion_point(field_add:com.android.server.IntentResolverProto.mime_typed_actions)
  return mime_typed_actions_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::IntentResolverProto_ArrayMapEntry >&
IntentResolverProto::mime_typed_actions() const {
  // @@protoc_insertion_point(field_list:com.android.server.IntentResolverProto.mime_typed_actions)
  return mime_typed_actions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace server
}  // namespace android
}  // namespace com

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fintentresolver_2eproto

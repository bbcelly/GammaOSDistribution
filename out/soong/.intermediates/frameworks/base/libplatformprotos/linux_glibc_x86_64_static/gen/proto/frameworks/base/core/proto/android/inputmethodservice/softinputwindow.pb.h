// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/inputmethodservice/softinputwindow.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "frameworks/base/core/proto/android/graphics/rect.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto;
namespace android {
namespace inputmethodservice {
class SoftInputWindowProto;
class SoftInputWindowProtoDefaultTypeInternal;
extern SoftInputWindowProtoDefaultTypeInternal _SoftInputWindowProto_default_instance_;
}  // namespace inputmethodservice
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::inputmethodservice::SoftInputWindowProto* Arena::CreateMaybeMessage<::android::inputmethodservice::SoftInputWindowProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace inputmethodservice {

// ===================================================================

class SoftInputWindowProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:android.inputmethodservice.SoftInputWindowProto) */ {
 public:
  SoftInputWindowProto();
  virtual ~SoftInputWindowProto();

  SoftInputWindowProto(const SoftInputWindowProto& from);
  SoftInputWindowProto(SoftInputWindowProto&& from) noexcept
    : SoftInputWindowProto() {
    *this = ::std::move(from);
  }

  inline SoftInputWindowProto& operator=(const SoftInputWindowProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline SoftInputWindowProto& operator=(SoftInputWindowProto&& from) noexcept {
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
  static const SoftInputWindowProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SoftInputWindowProto* internal_default_instance() {
    return reinterpret_cast<const SoftInputWindowProto*>(
               &_SoftInputWindowProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SoftInputWindowProto& a, SoftInputWindowProto& b) {
    a.Swap(&b);
  }
  inline void Swap(SoftInputWindowProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SoftInputWindowProto* New() const final {
    return CreateMaybeMessage<SoftInputWindowProto>(nullptr);
  }

  SoftInputWindowProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SoftInputWindowProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SoftInputWindowProto& from);
  void MergeFrom(const SoftInputWindowProto& from);
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
  void InternalSwap(SoftInputWindowProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.inputmethodservice.SoftInputWindowProto";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kBoundsFieldNumber = 5,
    kWindowTypeFieldNumber = 2,
    kGravityFieldNumber = 3,
    kTakesFocusFieldNumber = 4,
    kWindowStateFieldNumber = 6,
  };
  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // optional .android.graphics.RectProto bounds = 5;
  bool has_bounds() const;
  void clear_bounds();
  const ::android::graphics::RectProto& bounds() const;
  ::android::graphics::RectProto* release_bounds();
  ::android::graphics::RectProto* mutable_bounds();
  void set_allocated_bounds(::android::graphics::RectProto* bounds);

  // optional int32 window_type = 2;
  bool has_window_type() const;
  void clear_window_type();
  ::PROTOBUF_NAMESPACE_ID::int32 window_type() const;
  void set_window_type(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 gravity = 3;
  bool has_gravity() const;
  void clear_gravity();
  ::PROTOBUF_NAMESPACE_ID::int32 gravity() const;
  void set_gravity(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional bool takes_focus = 4;
  bool has_takes_focus() const;
  void clear_takes_focus();
  bool takes_focus() const;
  void set_takes_focus(bool value);

  // optional int32 window_state = 6;
  bool has_window_state() const;
  void clear_window_state();
  ::PROTOBUF_NAMESPACE_ID::int32 window_state() const;
  void set_window_state(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:android.inputmethodservice.SoftInputWindowProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::android::graphics::RectProto* bounds_;
  ::PROTOBUF_NAMESPACE_ID::int32 window_type_;
  ::PROTOBUF_NAMESPACE_ID::int32 gravity_;
  bool takes_focus_;
  ::PROTOBUF_NAMESPACE_ID::int32 window_state_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SoftInputWindowProto

// optional string name = 1;
inline bool SoftInputWindowProto::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SoftInputWindowProto::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SoftInputWindowProto::name() const {
  // @@protoc_insertion_point(field_get:android.inputmethodservice.SoftInputWindowProto.name)
  return name_.GetNoArena();
}
inline void SoftInputWindowProto::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.inputmethodservice.SoftInputWindowProto.name)
}
inline void SoftInputWindowProto::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.inputmethodservice.SoftInputWindowProto.name)
}
inline void SoftInputWindowProto::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.inputmethodservice.SoftInputWindowProto.name)
}
inline void SoftInputWindowProto::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.inputmethodservice.SoftInputWindowProto.name)
}
inline std::string* SoftInputWindowProto::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:android.inputmethodservice.SoftInputWindowProto.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SoftInputWindowProto::release_name() {
  // @@protoc_insertion_point(field_release:android.inputmethodservice.SoftInputWindowProto.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SoftInputWindowProto::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:android.inputmethodservice.SoftInputWindowProto.name)
}

// optional int32 window_type = 2;
inline bool SoftInputWindowProto::has_window_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SoftInputWindowProto::clear_window_type() {
  window_type_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SoftInputWindowProto::window_type() const {
  // @@protoc_insertion_point(field_get:android.inputmethodservice.SoftInputWindowProto.window_type)
  return window_type_;
}
inline void SoftInputWindowProto::set_window_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  window_type_ = value;
  // @@protoc_insertion_point(field_set:android.inputmethodservice.SoftInputWindowProto.window_type)
}

// optional int32 gravity = 3;
inline bool SoftInputWindowProto::has_gravity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SoftInputWindowProto::clear_gravity() {
  gravity_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SoftInputWindowProto::gravity() const {
  // @@protoc_insertion_point(field_get:android.inputmethodservice.SoftInputWindowProto.gravity)
  return gravity_;
}
inline void SoftInputWindowProto::set_gravity(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  gravity_ = value;
  // @@protoc_insertion_point(field_set:android.inputmethodservice.SoftInputWindowProto.gravity)
}

// optional bool takes_focus = 4;
inline bool SoftInputWindowProto::has_takes_focus() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SoftInputWindowProto::clear_takes_focus() {
  takes_focus_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool SoftInputWindowProto::takes_focus() const {
  // @@protoc_insertion_point(field_get:android.inputmethodservice.SoftInputWindowProto.takes_focus)
  return takes_focus_;
}
inline void SoftInputWindowProto::set_takes_focus(bool value) {
  _has_bits_[0] |= 0x00000010u;
  takes_focus_ = value;
  // @@protoc_insertion_point(field_set:android.inputmethodservice.SoftInputWindowProto.takes_focus)
}

// optional .android.graphics.RectProto bounds = 5;
inline bool SoftInputWindowProto::has_bounds() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::android::graphics::RectProto& SoftInputWindowProto::bounds() const {
  const ::android::graphics::RectProto* p = bounds_;
  // @@protoc_insertion_point(field_get:android.inputmethodservice.SoftInputWindowProto.bounds)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::graphics::RectProto*>(
      &::android::graphics::_RectProto_default_instance_);
}
inline ::android::graphics::RectProto* SoftInputWindowProto::release_bounds() {
  // @@protoc_insertion_point(field_release:android.inputmethodservice.SoftInputWindowProto.bounds)
  _has_bits_[0] &= ~0x00000002u;
  ::android::graphics::RectProto* temp = bounds_;
  bounds_ = nullptr;
  return temp;
}
inline ::android::graphics::RectProto* SoftInputWindowProto::mutable_bounds() {
  _has_bits_[0] |= 0x00000002u;
  if (bounds_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::graphics::RectProto>(GetArenaNoVirtual());
    bounds_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.inputmethodservice.SoftInputWindowProto.bounds)
  return bounds_;
}
inline void SoftInputWindowProto::set_allocated_bounds(::android::graphics::RectProto* bounds) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(bounds_);
  }
  if (bounds) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      bounds = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bounds, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  bounds_ = bounds;
  // @@protoc_insertion_point(field_set_allocated:android.inputmethodservice.SoftInputWindowProto.bounds)
}

// optional int32 window_state = 6;
inline bool SoftInputWindowProto::has_window_state() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SoftInputWindowProto::clear_window_state() {
  window_state_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SoftInputWindowProto::window_state() const {
  // @@protoc_insertion_point(field_get:android.inputmethodservice.SoftInputWindowProto.window_state)
  return window_state_;
}
inline void SoftInputWindowProto::set_window_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000020u;
  window_state_ = value;
  // @@protoc_insertion_point(field_set:android.inputmethodservice.SoftInputWindowProto.window_state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace inputmethodservice
}  // namespace android

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2finputmethodservice_2fsoftinputwindow_2eproto

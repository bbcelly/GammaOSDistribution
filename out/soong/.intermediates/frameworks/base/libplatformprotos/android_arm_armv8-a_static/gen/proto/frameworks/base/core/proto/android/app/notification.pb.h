// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/app/notification.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fnotification_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fnotification_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fnotification_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fnotification_2eproto {
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
namespace app {
class NotificationProto;
class NotificationProtoDefaultTypeInternal;
extern NotificationProtoDefaultTypeInternal _NotificationProto_default_instance_;
}  // namespace app
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::app::NotificationProto* Arena::CreateMaybeMessage<::android::app::NotificationProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace app {

enum NotificationProto_Visibility : int {
  NotificationProto_Visibility_VISIBILITY_SECRET = -1,
  NotificationProto_Visibility_VISIBILITY_PRIVATE = 0,
  NotificationProto_Visibility_VISIBILITY_PUBLIC = 1
};
bool NotificationProto_Visibility_IsValid(int value);
constexpr NotificationProto_Visibility NotificationProto_Visibility_Visibility_MIN = NotificationProto_Visibility_VISIBILITY_SECRET;
constexpr NotificationProto_Visibility NotificationProto_Visibility_Visibility_MAX = NotificationProto_Visibility_VISIBILITY_PUBLIC;
constexpr int NotificationProto_Visibility_Visibility_ARRAYSIZE = NotificationProto_Visibility_Visibility_MAX + 1;

const std::string& NotificationProto_Visibility_Name(NotificationProto_Visibility value);
template<typename T>
inline const std::string& NotificationProto_Visibility_Name(T enum_t_value) {
  static_assert(::std::is_same<T, NotificationProto_Visibility>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function NotificationProto_Visibility_Name.");
  return NotificationProto_Visibility_Name(static_cast<NotificationProto_Visibility>(enum_t_value));
}
bool NotificationProto_Visibility_Parse(
    const std::string& name, NotificationProto_Visibility* value);
// ===================================================================

class NotificationProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.app.NotificationProto) */ {
 public:
  NotificationProto();
  virtual ~NotificationProto();

  NotificationProto(const NotificationProto& from);
  NotificationProto(NotificationProto&& from) noexcept
    : NotificationProto() {
    *this = ::std::move(from);
  }

  inline NotificationProto& operator=(const NotificationProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline NotificationProto& operator=(NotificationProto&& from) noexcept {
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

  static const NotificationProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NotificationProto* internal_default_instance() {
    return reinterpret_cast<const NotificationProto*>(
               &_NotificationProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NotificationProto& a, NotificationProto& b) {
    a.Swap(&b);
  }
  inline void Swap(NotificationProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NotificationProto* New() const final {
    return CreateMaybeMessage<NotificationProto>(nullptr);
  }

  NotificationProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NotificationProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const NotificationProto& from);
  void MergeFrom(const NotificationProto& from);
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
  void InternalSwap(NotificationProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.app.NotificationProto";
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

  typedef NotificationProto_Visibility Visibility;
  static constexpr Visibility VISIBILITY_SECRET =
    NotificationProto_Visibility_VISIBILITY_SECRET;
  static constexpr Visibility VISIBILITY_PRIVATE =
    NotificationProto_Visibility_VISIBILITY_PRIVATE;
  static constexpr Visibility VISIBILITY_PUBLIC =
    NotificationProto_Visibility_VISIBILITY_PUBLIC;
  static inline bool Visibility_IsValid(int value) {
    return NotificationProto_Visibility_IsValid(value);
  }
  static constexpr Visibility Visibility_MIN =
    NotificationProto_Visibility_Visibility_MIN;
  static constexpr Visibility Visibility_MAX =
    NotificationProto_Visibility_Visibility_MAX;
  static constexpr int Visibility_ARRAYSIZE =
    NotificationProto_Visibility_Visibility_ARRAYSIZE;
  template<typename T>
  static inline const std::string& Visibility_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Visibility>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Visibility_Name.");
    return NotificationProto_Visibility_Name(enum_t_value);
  }
  static inline bool Visibility_Parse(const std::string& name,
      Visibility* value) {
    return NotificationProto_Visibility_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kChannelIdFieldNumber = 1,
    kCategoryFieldNumber = 5,
    kGroupKeyFieldNumber = 6,
    kSortKeyFieldNumber = 7,
    kPublicVersionFieldNumber = 10,
    kHasTickerTextFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kColorFieldNumber = 4,
    kActionLengthFieldNumber = 8,
    kVisibilityFieldNumber = 9,
  };
  // optional string channel_id = 1 [(.android.privacy) = {
  bool has_channel_id() const;
  void clear_channel_id();
  const std::string& channel_id() const;
  void set_channel_id(const std::string& value);
  void set_channel_id(std::string&& value);
  void set_channel_id(const char* value);
  void set_channel_id(const char* value, size_t size);
  std::string* mutable_channel_id();
  std::string* release_channel_id();
  void set_allocated_channel_id(std::string* channel_id);

  // optional string category = 5 [(.android.privacy) = {
  bool has_category() const;
  void clear_category();
  const std::string& category() const;
  void set_category(const std::string& value);
  void set_category(std::string&& value);
  void set_category(const char* value);
  void set_category(const char* value, size_t size);
  std::string* mutable_category();
  std::string* release_category();
  void set_allocated_category(std::string* category);

  // optional string group_key = 6 [(.android.privacy) = {
  bool has_group_key() const;
  void clear_group_key();
  const std::string& group_key() const;
  void set_group_key(const std::string& value);
  void set_group_key(std::string&& value);
  void set_group_key(const char* value);
  void set_group_key(const char* value, size_t size);
  std::string* mutable_group_key();
  std::string* release_group_key();
  void set_allocated_group_key(std::string* group_key);

  // optional string sort_key = 7 [(.android.privacy) = {
  bool has_sort_key() const;
  void clear_sort_key();
  const std::string& sort_key() const;
  void set_sort_key(const std::string& value);
  void set_sort_key(std::string&& value);
  void set_sort_key(const char* value);
  void set_sort_key(const char* value, size_t size);
  std::string* mutable_sort_key();
  std::string* release_sort_key();
  void set_allocated_sort_key(std::string* sort_key);

  // optional .android.app.NotificationProto public_version = 10;
  bool has_public_version() const;
  void clear_public_version();
  const ::android::app::NotificationProto& public_version() const;
  ::android::app::NotificationProto* release_public_version();
  ::android::app::NotificationProto* mutable_public_version();
  void set_allocated_public_version(::android::app::NotificationProto* public_version);

  // optional bool has_ticker_text = 2;
  bool has_has_ticker_text() const;
  void clear_has_ticker_text();
  bool has_ticker_text() const;
  void set_has_ticker_text(bool value);

  // optional int32 flags = 3;
  bool has_flags() const;
  void clear_flags();
  ::PROTOBUF_NAMESPACE_ID::int32 flags() const;
  void set_flags(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 color = 4;
  bool has_color() const;
  void clear_color();
  ::PROTOBUF_NAMESPACE_ID::int32 color() const;
  void set_color(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 action_length = 8;
  bool has_action_length() const;
  void clear_action_length();
  ::PROTOBUF_NAMESPACE_ID::int32 action_length() const;
  void set_action_length(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional .android.app.NotificationProto.Visibility visibility = 9;
  bool has_visibility() const;
  void clear_visibility();
  ::android::app::NotificationProto_Visibility visibility() const;
  void set_visibility(::android::app::NotificationProto_Visibility value);

  // @@protoc_insertion_point(class_scope:android.app.NotificationProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr channel_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr category_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr group_key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sort_key_;
  ::android::app::NotificationProto* public_version_;
  bool has_ticker_text_;
  ::PROTOBUF_NAMESPACE_ID::int32 flags_;
  ::PROTOBUF_NAMESPACE_ID::int32 color_;
  ::PROTOBUF_NAMESPACE_ID::int32 action_length_;
  int visibility_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fnotification_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NotificationProto

// optional string channel_id = 1 [(.android.privacy) = {
inline bool NotificationProto::has_channel_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotificationProto::clear_channel_id() {
  channel_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& NotificationProto::channel_id() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.channel_id)
  return channel_id_.GetNoArena();
}
inline void NotificationProto::set_channel_id(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  channel_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.channel_id)
}
inline void NotificationProto::set_channel_id(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  channel_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.app.NotificationProto.channel_id)
}
inline void NotificationProto::set_channel_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  channel_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.app.NotificationProto.channel_id)
}
inline void NotificationProto::set_channel_id(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  channel_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.app.NotificationProto.channel_id)
}
inline std::string* NotificationProto::mutable_channel_id() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:android.app.NotificationProto.channel_id)
  return channel_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* NotificationProto::release_channel_id() {
  // @@protoc_insertion_point(field_release:android.app.NotificationProto.channel_id)
  if (!has_channel_id()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return channel_id_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void NotificationProto::set_allocated_channel_id(std::string* channel_id) {
  if (channel_id != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  channel_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), channel_id);
  // @@protoc_insertion_point(field_set_allocated:android.app.NotificationProto.channel_id)
}

// optional bool has_ticker_text = 2;
inline bool NotificationProto::has_has_ticker_text() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void NotificationProto::clear_has_ticker_text() {
  has_ticker_text_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool NotificationProto::has_ticker_text() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.has_ticker_text)
  return has_ticker_text_;
}
inline void NotificationProto::set_has_ticker_text(bool value) {
  _has_bits_[0] |= 0x00000020u;
  has_ticker_text_ = value;
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.has_ticker_text)
}

// optional int32 flags = 3;
inline bool NotificationProto::has_flags() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void NotificationProto::clear_flags() {
  flags_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationProto::flags() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.flags)
  return flags_;
}
inline void NotificationProto::set_flags(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000040u;
  flags_ = value;
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.flags)
}

// optional int32 color = 4;
inline bool NotificationProto::has_color() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void NotificationProto::clear_color() {
  color_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationProto::color() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.color)
  return color_;
}
inline void NotificationProto::set_color(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000080u;
  color_ = value;
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.color)
}

// optional string category = 5 [(.android.privacy) = {
inline bool NotificationProto::has_category() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NotificationProto::clear_category() {
  category_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& NotificationProto::category() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.category)
  return category_.GetNoArena();
}
inline void NotificationProto::set_category(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  category_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.category)
}
inline void NotificationProto::set_category(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  category_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.app.NotificationProto.category)
}
inline void NotificationProto::set_category(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  category_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.app.NotificationProto.category)
}
inline void NotificationProto::set_category(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  category_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.app.NotificationProto.category)
}
inline std::string* NotificationProto::mutable_category() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:android.app.NotificationProto.category)
  return category_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* NotificationProto::release_category() {
  // @@protoc_insertion_point(field_release:android.app.NotificationProto.category)
  if (!has_category()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return category_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void NotificationProto::set_allocated_category(std::string* category) {
  if (category != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  category_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), category);
  // @@protoc_insertion_point(field_set_allocated:android.app.NotificationProto.category)
}

// optional string group_key = 6 [(.android.privacy) = {
inline bool NotificationProto::has_group_key() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NotificationProto::clear_group_key() {
  group_key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& NotificationProto::group_key() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.group_key)
  return group_key_.GetNoArena();
}
inline void NotificationProto::set_group_key(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  group_key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.group_key)
}
inline void NotificationProto::set_group_key(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  group_key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.app.NotificationProto.group_key)
}
inline void NotificationProto::set_group_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  group_key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.app.NotificationProto.group_key)
}
inline void NotificationProto::set_group_key(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  group_key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.app.NotificationProto.group_key)
}
inline std::string* NotificationProto::mutable_group_key() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:android.app.NotificationProto.group_key)
  return group_key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* NotificationProto::release_group_key() {
  // @@protoc_insertion_point(field_release:android.app.NotificationProto.group_key)
  if (!has_group_key()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return group_key_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void NotificationProto::set_allocated_group_key(std::string* group_key) {
  if (group_key != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  group_key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), group_key);
  // @@protoc_insertion_point(field_set_allocated:android.app.NotificationProto.group_key)
}

// optional string sort_key = 7 [(.android.privacy) = {
inline bool NotificationProto::has_sort_key() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NotificationProto::clear_sort_key() {
  sort_key_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& NotificationProto::sort_key() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.sort_key)
  return sort_key_.GetNoArena();
}
inline void NotificationProto::set_sort_key(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  sort_key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.sort_key)
}
inline void NotificationProto::set_sort_key(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  sort_key_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.app.NotificationProto.sort_key)
}
inline void NotificationProto::set_sort_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  sort_key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.app.NotificationProto.sort_key)
}
inline void NotificationProto::set_sort_key(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  sort_key_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.app.NotificationProto.sort_key)
}
inline std::string* NotificationProto::mutable_sort_key() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:android.app.NotificationProto.sort_key)
  return sort_key_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* NotificationProto::release_sort_key() {
  // @@protoc_insertion_point(field_release:android.app.NotificationProto.sort_key)
  if (!has_sort_key()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return sort_key_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void NotificationProto::set_allocated_sort_key(std::string* sort_key) {
  if (sort_key != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  sort_key_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sort_key);
  // @@protoc_insertion_point(field_set_allocated:android.app.NotificationProto.sort_key)
}

// optional int32 action_length = 8;
inline bool NotificationProto::has_action_length() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void NotificationProto::clear_action_length() {
  action_length_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 NotificationProto::action_length() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.action_length)
  return action_length_;
}
inline void NotificationProto::set_action_length(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000100u;
  action_length_ = value;
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.action_length)
}

// optional .android.app.NotificationProto.Visibility visibility = 9;
inline bool NotificationProto::has_visibility() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void NotificationProto::clear_visibility() {
  visibility_ = -1;
  _has_bits_[0] &= ~0x00000200u;
}
inline ::android::app::NotificationProto_Visibility NotificationProto::visibility() const {
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.visibility)
  return static_cast< ::android::app::NotificationProto_Visibility >(visibility_);
}
inline void NotificationProto::set_visibility(::android::app::NotificationProto_Visibility value) {
  assert(::android::app::NotificationProto_Visibility_IsValid(value));
  _has_bits_[0] |= 0x00000200u;
  visibility_ = value;
  // @@protoc_insertion_point(field_set:android.app.NotificationProto.visibility)
}

// optional .android.app.NotificationProto public_version = 10;
inline bool NotificationProto::has_public_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NotificationProto::clear_public_version() {
  if (public_version_ != nullptr) public_version_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
inline const ::android::app::NotificationProto& NotificationProto::public_version() const {
  const ::android::app::NotificationProto* p = public_version_;
  // @@protoc_insertion_point(field_get:android.app.NotificationProto.public_version)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::app::NotificationProto*>(
      &::android::app::_NotificationProto_default_instance_);
}
inline ::android::app::NotificationProto* NotificationProto::release_public_version() {
  // @@protoc_insertion_point(field_release:android.app.NotificationProto.public_version)
  _has_bits_[0] &= ~0x00000010u;
  ::android::app::NotificationProto* temp = public_version_;
  public_version_ = nullptr;
  return temp;
}
inline ::android::app::NotificationProto* NotificationProto::mutable_public_version() {
  _has_bits_[0] |= 0x00000010u;
  if (public_version_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::app::NotificationProto>(GetArenaNoVirtual());
    public_version_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.app.NotificationProto.public_version)
  return public_version_;
}
inline void NotificationProto::set_allocated_public_version(::android::app::NotificationProto* public_version) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete public_version_;
  }
  if (public_version) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      public_version = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, public_version, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  public_version_ = public_version;
  // @@protoc_insertion_point(field_set_allocated:android.app.NotificationProto.public_version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace app
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::app::NotificationProto_Visibility> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fapp_2fnotification_2eproto

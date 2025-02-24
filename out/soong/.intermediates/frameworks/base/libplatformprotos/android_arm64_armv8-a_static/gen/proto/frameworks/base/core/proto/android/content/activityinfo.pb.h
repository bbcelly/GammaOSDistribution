// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/content/activityinfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2factivityinfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2factivityinfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2factivityinfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2factivityinfo_2eproto {
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
class ActivityInfoProto;
class ActivityInfoProtoDefaultTypeInternal;
extern ActivityInfoProtoDefaultTypeInternal _ActivityInfoProto_default_instance_;
}  // namespace content
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::content::ActivityInfoProto* Arena::CreateMaybeMessage<::android::content::ActivityInfoProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace content {

enum ActivityInfoProto_ScreenOrientation : int {
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_UNSET = -2,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_UNSPECIFIED = -1,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_LANDSCAPE = 0,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_PORTRAIT = 1,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_USER = 2,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_BEHIND = 3,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_SENSOR = 4,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_NOSENSOR = 5,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_SENSOR_LANDSCAPE = 6,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_SENSOR_PORTRAIT = 7,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_REVERSE_LANDSCAPE = 8,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_REVERSE_PORTRAIT = 9,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_FULL_SENSOR = 10,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_USER_LANDSCAPE = 11,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_USER_PORTRAIT = 12,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_FULL_USER = 13,
  ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_LOCKED = 14
};
bool ActivityInfoProto_ScreenOrientation_IsValid(int value);
constexpr ActivityInfoProto_ScreenOrientation ActivityInfoProto_ScreenOrientation_ScreenOrientation_MIN = ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_UNSET;
constexpr ActivityInfoProto_ScreenOrientation ActivityInfoProto_ScreenOrientation_ScreenOrientation_MAX = ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_LOCKED;
constexpr int ActivityInfoProto_ScreenOrientation_ScreenOrientation_ARRAYSIZE = ActivityInfoProto_ScreenOrientation_ScreenOrientation_MAX + 1;

const std::string& ActivityInfoProto_ScreenOrientation_Name(ActivityInfoProto_ScreenOrientation value);
template<typename T>
inline const std::string& ActivityInfoProto_ScreenOrientation_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ActivityInfoProto_ScreenOrientation>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ActivityInfoProto_ScreenOrientation_Name.");
  return ActivityInfoProto_ScreenOrientation_Name(static_cast<ActivityInfoProto_ScreenOrientation>(enum_t_value));
}
bool ActivityInfoProto_ScreenOrientation_Parse(
    const std::string& name, ActivityInfoProto_ScreenOrientation* value);
// ===================================================================

class ActivityInfoProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.content.ActivityInfoProto) */ {
 public:
  ActivityInfoProto();
  virtual ~ActivityInfoProto();

  ActivityInfoProto(const ActivityInfoProto& from);
  ActivityInfoProto(ActivityInfoProto&& from) noexcept
    : ActivityInfoProto() {
    *this = ::std::move(from);
  }

  inline ActivityInfoProto& operator=(const ActivityInfoProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline ActivityInfoProto& operator=(ActivityInfoProto&& from) noexcept {
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

  static const ActivityInfoProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ActivityInfoProto* internal_default_instance() {
    return reinterpret_cast<const ActivityInfoProto*>(
               &_ActivityInfoProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ActivityInfoProto& a, ActivityInfoProto& b) {
    a.Swap(&b);
  }
  inline void Swap(ActivityInfoProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ActivityInfoProto* New() const final {
    return CreateMaybeMessage<ActivityInfoProto>(nullptr);
  }

  ActivityInfoProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ActivityInfoProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ActivityInfoProto& from);
  void MergeFrom(const ActivityInfoProto& from);
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
  void InternalSwap(ActivityInfoProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.content.ActivityInfoProto";
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

  typedef ActivityInfoProto_ScreenOrientation ScreenOrientation;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_UNSET =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_UNSET;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_UNSPECIFIED =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_UNSPECIFIED;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_LANDSCAPE =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_LANDSCAPE;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_PORTRAIT =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_PORTRAIT;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_USER =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_USER;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_BEHIND =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_BEHIND;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_SENSOR =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_SENSOR;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_NOSENSOR =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_NOSENSOR;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_SENSOR_LANDSCAPE =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_SENSOR_LANDSCAPE;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_SENSOR_PORTRAIT =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_SENSOR_PORTRAIT;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_REVERSE_LANDSCAPE =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_REVERSE_LANDSCAPE;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_REVERSE_PORTRAIT =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_REVERSE_PORTRAIT;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_FULL_SENSOR =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_FULL_SENSOR;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_USER_LANDSCAPE =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_USER_LANDSCAPE;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_USER_PORTRAIT =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_USER_PORTRAIT;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_FULL_USER =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_FULL_USER;
  static constexpr ScreenOrientation SCREEN_ORIENTATION_LOCKED =
    ActivityInfoProto_ScreenOrientation_SCREEN_ORIENTATION_LOCKED;
  static inline bool ScreenOrientation_IsValid(int value) {
    return ActivityInfoProto_ScreenOrientation_IsValid(value);
  }
  static constexpr ScreenOrientation ScreenOrientation_MIN =
    ActivityInfoProto_ScreenOrientation_ScreenOrientation_MIN;
  static constexpr ScreenOrientation ScreenOrientation_MAX =
    ActivityInfoProto_ScreenOrientation_ScreenOrientation_MAX;
  static constexpr int ScreenOrientation_ARRAYSIZE =
    ActivityInfoProto_ScreenOrientation_ScreenOrientation_ARRAYSIZE;
  template<typename T>
  static inline const std::string& ScreenOrientation_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ScreenOrientation>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ScreenOrientation_Name.");
    return ActivityInfoProto_ScreenOrientation_Name(enum_t_value);
  }
  static inline bool ScreenOrientation_Parse(const std::string& name,
      ScreenOrientation* value) {
    return ActivityInfoProto_ScreenOrientation_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:android.content.ActivityInfoProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2factivityinfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ActivityInfoProto

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace content
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::content::ActivityInfoProto_ScreenOrientation> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fcontent_2factivityinfo_2eproto

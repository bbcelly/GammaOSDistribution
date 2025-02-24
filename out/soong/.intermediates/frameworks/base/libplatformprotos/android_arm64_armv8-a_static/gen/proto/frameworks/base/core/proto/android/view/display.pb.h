// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/view/display.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2fdisplay_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2fdisplay_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2fdisplay_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2fdisplay_2eproto {
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
namespace view {
class DisplayProto;
class DisplayProtoDefaultTypeInternal;
extern DisplayProtoDefaultTypeInternal _DisplayProto_default_instance_;
}  // namespace view
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::view::DisplayProto* Arena::CreateMaybeMessage<::android::view::DisplayProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace view {

enum DisplayProto_ColorMode : int {
  DisplayProto_ColorMode_COLOR_MODE_INVALID = -1,
  DisplayProto_ColorMode_COLOR_MODE_DEFAULT = 0,
  DisplayProto_ColorMode_COLOR_MODE_BT601_625 = 1,
  DisplayProto_ColorMode_COLOR_MODE_BT601_625_UNADJUSTED = 2,
  DisplayProto_ColorMode_COLOR_MODE_BT601_525 = 3,
  DisplayProto_ColorMode_COLOR_MODE_BT601_525_UNADJUSTED = 4,
  DisplayProto_ColorMode_COLOR_MODE_BT709 = 5,
  DisplayProto_ColorMode_COLOR_MODE_DCI_P3 = 6,
  DisplayProto_ColorMode_COLOR_MODE_SRGB = 7,
  DisplayProto_ColorMode_COLOR_MODE_ADOBE_RGB = 8,
  DisplayProto_ColorMode_COLOR_MODE_DISPLAY_P3 = 9
};
bool DisplayProto_ColorMode_IsValid(int value);
constexpr DisplayProto_ColorMode DisplayProto_ColorMode_ColorMode_MIN = DisplayProto_ColorMode_COLOR_MODE_INVALID;
constexpr DisplayProto_ColorMode DisplayProto_ColorMode_ColorMode_MAX = DisplayProto_ColorMode_COLOR_MODE_DISPLAY_P3;
constexpr int DisplayProto_ColorMode_ColorMode_ARRAYSIZE = DisplayProto_ColorMode_ColorMode_MAX + 1;

const std::string& DisplayProto_ColorMode_Name(DisplayProto_ColorMode value);
template<typename T>
inline const std::string& DisplayProto_ColorMode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DisplayProto_ColorMode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DisplayProto_ColorMode_Name.");
  return DisplayProto_ColorMode_Name(static_cast<DisplayProto_ColorMode>(enum_t_value));
}
bool DisplayProto_ColorMode_Parse(
    const std::string& name, DisplayProto_ColorMode* value);
// ===================================================================

class DisplayProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.view.DisplayProto) */ {
 public:
  DisplayProto();
  virtual ~DisplayProto();

  DisplayProto(const DisplayProto& from);
  DisplayProto(DisplayProto&& from) noexcept
    : DisplayProto() {
    *this = ::std::move(from);
  }

  inline DisplayProto& operator=(const DisplayProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline DisplayProto& operator=(DisplayProto&& from) noexcept {
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

  static const DisplayProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DisplayProto* internal_default_instance() {
    return reinterpret_cast<const DisplayProto*>(
               &_DisplayProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DisplayProto& a, DisplayProto& b) {
    a.Swap(&b);
  }
  inline void Swap(DisplayProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DisplayProto* New() const final {
    return CreateMaybeMessage<DisplayProto>(nullptr);
  }

  DisplayProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DisplayProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const DisplayProto& from);
  void MergeFrom(const DisplayProto& from);
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
  void InternalSwap(DisplayProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.view.DisplayProto";
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

  typedef DisplayProto_ColorMode ColorMode;
  static constexpr ColorMode COLOR_MODE_INVALID =
    DisplayProto_ColorMode_COLOR_MODE_INVALID;
  static constexpr ColorMode COLOR_MODE_DEFAULT =
    DisplayProto_ColorMode_COLOR_MODE_DEFAULT;
  static constexpr ColorMode COLOR_MODE_BT601_625 =
    DisplayProto_ColorMode_COLOR_MODE_BT601_625;
  static constexpr ColorMode COLOR_MODE_BT601_625_UNADJUSTED =
    DisplayProto_ColorMode_COLOR_MODE_BT601_625_UNADJUSTED;
  static constexpr ColorMode COLOR_MODE_BT601_525 =
    DisplayProto_ColorMode_COLOR_MODE_BT601_525;
  static constexpr ColorMode COLOR_MODE_BT601_525_UNADJUSTED =
    DisplayProto_ColorMode_COLOR_MODE_BT601_525_UNADJUSTED;
  static constexpr ColorMode COLOR_MODE_BT709 =
    DisplayProto_ColorMode_COLOR_MODE_BT709;
  static constexpr ColorMode COLOR_MODE_DCI_P3 =
    DisplayProto_ColorMode_COLOR_MODE_DCI_P3;
  static constexpr ColorMode COLOR_MODE_SRGB =
    DisplayProto_ColorMode_COLOR_MODE_SRGB;
  static constexpr ColorMode COLOR_MODE_ADOBE_RGB =
    DisplayProto_ColorMode_COLOR_MODE_ADOBE_RGB;
  static constexpr ColorMode COLOR_MODE_DISPLAY_P3 =
    DisplayProto_ColorMode_COLOR_MODE_DISPLAY_P3;
  static inline bool ColorMode_IsValid(int value) {
    return DisplayProto_ColorMode_IsValid(value);
  }
  static constexpr ColorMode ColorMode_MIN =
    DisplayProto_ColorMode_ColorMode_MIN;
  static constexpr ColorMode ColorMode_MAX =
    DisplayProto_ColorMode_ColorMode_MAX;
  static constexpr int ColorMode_ARRAYSIZE =
    DisplayProto_ColorMode_ColorMode_ARRAYSIZE;
  template<typename T>
  static inline const std::string& ColorMode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ColorMode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ColorMode_Name.");
    return DisplayProto_ColorMode_Name(enum_t_value);
  }
  static inline bool ColorMode_Parse(const std::string& name,
      ColorMode* value) {
    return DisplayProto_ColorMode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:android.view.DisplayProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2fdisplay_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DisplayProto

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace view
}  // namespace android

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::android::view::DisplayProto_ColorMode> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2fdisplay_2eproto

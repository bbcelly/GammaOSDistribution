// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/view/insetsanimationcontrolimpl.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto;
namespace android {
namespace view {
class InsetsAnimationControlImplProto;
class InsetsAnimationControlImplProtoDefaultTypeInternal;
extern InsetsAnimationControlImplProtoDefaultTypeInternal _InsetsAnimationControlImplProto_default_instance_;
}  // namespace view
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::view::InsetsAnimationControlImplProto* Arena::CreateMaybeMessage<::android::view::InsetsAnimationControlImplProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace view {

// ===================================================================

class InsetsAnimationControlImplProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:android.view.InsetsAnimationControlImplProto) */ {
 public:
  InsetsAnimationControlImplProto();
  virtual ~InsetsAnimationControlImplProto();

  InsetsAnimationControlImplProto(const InsetsAnimationControlImplProto& from);
  InsetsAnimationControlImplProto(InsetsAnimationControlImplProto&& from) noexcept
    : InsetsAnimationControlImplProto() {
    *this = ::std::move(from);
  }

  inline InsetsAnimationControlImplProto& operator=(const InsetsAnimationControlImplProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline InsetsAnimationControlImplProto& operator=(InsetsAnimationControlImplProto&& from) noexcept {
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
  static const InsetsAnimationControlImplProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InsetsAnimationControlImplProto* internal_default_instance() {
    return reinterpret_cast<const InsetsAnimationControlImplProto*>(
               &_InsetsAnimationControlImplProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InsetsAnimationControlImplProto& a, InsetsAnimationControlImplProto& b) {
    a.Swap(&b);
  }
  inline void Swap(InsetsAnimationControlImplProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InsetsAnimationControlImplProto* New() const final {
    return CreateMaybeMessage<InsetsAnimationControlImplProto>(nullptr);
  }

  InsetsAnimationControlImplProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InsetsAnimationControlImplProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InsetsAnimationControlImplProto& from);
  void MergeFrom(const InsetsAnimationControlImplProto& from);
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
  void InternalSwap(InsetsAnimationControlImplProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.view.InsetsAnimationControlImplProto";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTmpMatrixFieldNumber = 3,
    kPendingInsetsFieldNumber = 4,
    kIsCancelledFieldNumber = 1,
    kIsFinishedFieldNumber = 2,
    kShownOnFinishFieldNumber = 6,
    kPendingFractionFieldNumber = 5,
    kCurrentAlphaFieldNumber = 7,
    kPendingAlphaFieldNumber = 8,
  };
  // optional string tmp_matrix = 3;
  bool has_tmp_matrix() const;
  void clear_tmp_matrix();
  const std::string& tmp_matrix() const;
  void set_tmp_matrix(const std::string& value);
  void set_tmp_matrix(std::string&& value);
  void set_tmp_matrix(const char* value);
  void set_tmp_matrix(const char* value, size_t size);
  std::string* mutable_tmp_matrix();
  std::string* release_tmp_matrix();
  void set_allocated_tmp_matrix(std::string* tmp_matrix);

  // optional string pending_insets = 4;
  bool has_pending_insets() const;
  void clear_pending_insets();
  const std::string& pending_insets() const;
  void set_pending_insets(const std::string& value);
  void set_pending_insets(std::string&& value);
  void set_pending_insets(const char* value);
  void set_pending_insets(const char* value, size_t size);
  std::string* mutable_pending_insets();
  std::string* release_pending_insets();
  void set_allocated_pending_insets(std::string* pending_insets);

  // optional bool is_cancelled = 1;
  bool has_is_cancelled() const;
  void clear_is_cancelled();
  bool is_cancelled() const;
  void set_is_cancelled(bool value);

  // optional bool is_finished = 2;
  bool has_is_finished() const;
  void clear_is_finished();
  bool is_finished() const;
  void set_is_finished(bool value);

  // optional bool shown_on_finish = 6;
  bool has_shown_on_finish() const;
  void clear_shown_on_finish();
  bool shown_on_finish() const;
  void set_shown_on_finish(bool value);

  // optional float pending_fraction = 5;
  bool has_pending_fraction() const;
  void clear_pending_fraction();
  float pending_fraction() const;
  void set_pending_fraction(float value);

  // optional float current_alpha = 7;
  bool has_current_alpha() const;
  void clear_current_alpha();
  float current_alpha() const;
  void set_current_alpha(float value);

  // optional float pending_alpha = 8;
  bool has_pending_alpha() const;
  void clear_pending_alpha();
  float pending_alpha() const;
  void set_pending_alpha(float value);

  // @@protoc_insertion_point(class_scope:android.view.InsetsAnimationControlImplProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tmp_matrix_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr pending_insets_;
  bool is_cancelled_;
  bool is_finished_;
  bool shown_on_finish_;
  float pending_fraction_;
  float current_alpha_;
  float pending_alpha_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InsetsAnimationControlImplProto

// optional bool is_cancelled = 1;
inline bool InsetsAnimationControlImplProto::has_is_cancelled() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_is_cancelled() {
  is_cancelled_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool InsetsAnimationControlImplProto::is_cancelled() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.is_cancelled)
  return is_cancelled_;
}
inline void InsetsAnimationControlImplProto::set_is_cancelled(bool value) {
  _has_bits_[0] |= 0x00000004u;
  is_cancelled_ = value;
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.is_cancelled)
}

// optional bool is_finished = 2;
inline bool InsetsAnimationControlImplProto::has_is_finished() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_is_finished() {
  is_finished_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool InsetsAnimationControlImplProto::is_finished() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.is_finished)
  return is_finished_;
}
inline void InsetsAnimationControlImplProto::set_is_finished(bool value) {
  _has_bits_[0] |= 0x00000008u;
  is_finished_ = value;
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.is_finished)
}

// optional string tmp_matrix = 3;
inline bool InsetsAnimationControlImplProto::has_tmp_matrix() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_tmp_matrix() {
  tmp_matrix_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& InsetsAnimationControlImplProto::tmp_matrix() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.tmp_matrix)
  return tmp_matrix_.GetNoArena();
}
inline void InsetsAnimationControlImplProto::set_tmp_matrix(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  tmp_matrix_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.tmp_matrix)
}
inline void InsetsAnimationControlImplProto::set_tmp_matrix(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  tmp_matrix_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.view.InsetsAnimationControlImplProto.tmp_matrix)
}
inline void InsetsAnimationControlImplProto::set_tmp_matrix(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  tmp_matrix_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.view.InsetsAnimationControlImplProto.tmp_matrix)
}
inline void InsetsAnimationControlImplProto::set_tmp_matrix(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  tmp_matrix_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.view.InsetsAnimationControlImplProto.tmp_matrix)
}
inline std::string* InsetsAnimationControlImplProto::mutable_tmp_matrix() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:android.view.InsetsAnimationControlImplProto.tmp_matrix)
  return tmp_matrix_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* InsetsAnimationControlImplProto::release_tmp_matrix() {
  // @@protoc_insertion_point(field_release:android.view.InsetsAnimationControlImplProto.tmp_matrix)
  if (!has_tmp_matrix()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return tmp_matrix_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void InsetsAnimationControlImplProto::set_allocated_tmp_matrix(std::string* tmp_matrix) {
  if (tmp_matrix != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  tmp_matrix_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), tmp_matrix);
  // @@protoc_insertion_point(field_set_allocated:android.view.InsetsAnimationControlImplProto.tmp_matrix)
}

// optional string pending_insets = 4;
inline bool InsetsAnimationControlImplProto::has_pending_insets() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_pending_insets() {
  pending_insets_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& InsetsAnimationControlImplProto::pending_insets() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.pending_insets)
  return pending_insets_.GetNoArena();
}
inline void InsetsAnimationControlImplProto::set_pending_insets(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  pending_insets_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.pending_insets)
}
inline void InsetsAnimationControlImplProto::set_pending_insets(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  pending_insets_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.view.InsetsAnimationControlImplProto.pending_insets)
}
inline void InsetsAnimationControlImplProto::set_pending_insets(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  pending_insets_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.view.InsetsAnimationControlImplProto.pending_insets)
}
inline void InsetsAnimationControlImplProto::set_pending_insets(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  pending_insets_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.view.InsetsAnimationControlImplProto.pending_insets)
}
inline std::string* InsetsAnimationControlImplProto::mutable_pending_insets() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:android.view.InsetsAnimationControlImplProto.pending_insets)
  return pending_insets_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* InsetsAnimationControlImplProto::release_pending_insets() {
  // @@protoc_insertion_point(field_release:android.view.InsetsAnimationControlImplProto.pending_insets)
  if (!has_pending_insets()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return pending_insets_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void InsetsAnimationControlImplProto::set_allocated_pending_insets(std::string* pending_insets) {
  if (pending_insets != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  pending_insets_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), pending_insets);
  // @@protoc_insertion_point(field_set_allocated:android.view.InsetsAnimationControlImplProto.pending_insets)
}

// optional float pending_fraction = 5;
inline bool InsetsAnimationControlImplProto::has_pending_fraction() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_pending_fraction() {
  pending_fraction_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float InsetsAnimationControlImplProto::pending_fraction() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.pending_fraction)
  return pending_fraction_;
}
inline void InsetsAnimationControlImplProto::set_pending_fraction(float value) {
  _has_bits_[0] |= 0x00000020u;
  pending_fraction_ = value;
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.pending_fraction)
}

// optional bool shown_on_finish = 6;
inline bool InsetsAnimationControlImplProto::has_shown_on_finish() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_shown_on_finish() {
  shown_on_finish_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool InsetsAnimationControlImplProto::shown_on_finish() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.shown_on_finish)
  return shown_on_finish_;
}
inline void InsetsAnimationControlImplProto::set_shown_on_finish(bool value) {
  _has_bits_[0] |= 0x00000010u;
  shown_on_finish_ = value;
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.shown_on_finish)
}

// optional float current_alpha = 7;
inline bool InsetsAnimationControlImplProto::has_current_alpha() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_current_alpha() {
  current_alpha_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline float InsetsAnimationControlImplProto::current_alpha() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.current_alpha)
  return current_alpha_;
}
inline void InsetsAnimationControlImplProto::set_current_alpha(float value) {
  _has_bits_[0] |= 0x00000040u;
  current_alpha_ = value;
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.current_alpha)
}

// optional float pending_alpha = 8;
inline bool InsetsAnimationControlImplProto::has_pending_alpha() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void InsetsAnimationControlImplProto::clear_pending_alpha() {
  pending_alpha_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline float InsetsAnimationControlImplProto::pending_alpha() const {
  // @@protoc_insertion_point(field_get:android.view.InsetsAnimationControlImplProto.pending_alpha)
  return pending_alpha_;
}
inline void InsetsAnimationControlImplProto::set_pending_alpha(float value) {
  _has_bits_[0] |= 0x00000080u;
  pending_alpha_ = value;
  // @@protoc_insertion_point(field_set:android.view.InsetsAnimationControlImplProto.pending_alpha)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace view
}  // namespace android

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fview_2finsetsanimationcontrolimpl_2eproto

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/os/looper.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto

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
#include "frameworks/base/core/proto/android/os/messagequeue.pb.h"
#include "frameworks/base/core/proto/android/privacy.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto;
namespace android {
namespace os {
class LooperProto;
class LooperProtoDefaultTypeInternal;
extern LooperProtoDefaultTypeInternal _LooperProto_default_instance_;
}  // namespace os
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::os::LooperProto* Arena::CreateMaybeMessage<::android::os::LooperProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace os {

// ===================================================================

class LooperProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:android.os.LooperProto) */ {
 public:
  LooperProto();
  virtual ~LooperProto();

  LooperProto(const LooperProto& from);
  LooperProto(LooperProto&& from) noexcept
    : LooperProto() {
    *this = ::std::move(from);
  }

  inline LooperProto& operator=(const LooperProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline LooperProto& operator=(LooperProto&& from) noexcept {
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
  static const LooperProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LooperProto* internal_default_instance() {
    return reinterpret_cast<const LooperProto*>(
               &_LooperProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LooperProto& a, LooperProto& b) {
    a.Swap(&b);
  }
  inline void Swap(LooperProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LooperProto* New() const final {
    return CreateMaybeMessage<LooperProto>(nullptr);
  }

  LooperProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LooperProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LooperProto& from);
  void MergeFrom(const LooperProto& from);
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
  void InternalSwap(LooperProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.os.LooperProto";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kThreadNameFieldNumber = 1,
    kQueueFieldNumber = 3,
    kThreadIdFieldNumber = 2,
  };
  // optional string thread_name = 1;
  bool has_thread_name() const;
  void clear_thread_name();
  const std::string& thread_name() const;
  void set_thread_name(const std::string& value);
  void set_thread_name(std::string&& value);
  void set_thread_name(const char* value);
  void set_thread_name(const char* value, size_t size);
  std::string* mutable_thread_name();
  std::string* release_thread_name();
  void set_allocated_thread_name(std::string* thread_name);

  // optional .android.os.MessageQueueProto queue = 3;
  bool has_queue() const;
  void clear_queue();
  const ::android::os::MessageQueueProto& queue() const;
  ::android::os::MessageQueueProto* release_queue();
  ::android::os::MessageQueueProto* mutable_queue();
  void set_allocated_queue(::android::os::MessageQueueProto* queue);

  // optional int64 thread_id = 2;
  bool has_thread_id() const;
  void clear_thread_id();
  ::PROTOBUF_NAMESPACE_ID::int64 thread_id() const;
  void set_thread_id(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:android.os.LooperProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr thread_name_;
  ::android::os::MessageQueueProto* queue_;
  ::PROTOBUF_NAMESPACE_ID::int64 thread_id_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LooperProto

// optional string thread_name = 1;
inline bool LooperProto::has_thread_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LooperProto::clear_thread_name() {
  thread_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LooperProto::thread_name() const {
  // @@protoc_insertion_point(field_get:android.os.LooperProto.thread_name)
  return thread_name_.GetNoArena();
}
inline void LooperProto::set_thread_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  thread_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:android.os.LooperProto.thread_name)
}
inline void LooperProto::set_thread_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  thread_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:android.os.LooperProto.thread_name)
}
inline void LooperProto::set_thread_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  thread_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:android.os.LooperProto.thread_name)
}
inline void LooperProto::set_thread_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  thread_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:android.os.LooperProto.thread_name)
}
inline std::string* LooperProto::mutable_thread_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:android.os.LooperProto.thread_name)
  return thread_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LooperProto::release_thread_name() {
  // @@protoc_insertion_point(field_release:android.os.LooperProto.thread_name)
  if (!has_thread_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return thread_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LooperProto::set_allocated_thread_name(std::string* thread_name) {
  if (thread_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  thread_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), thread_name);
  // @@protoc_insertion_point(field_set_allocated:android.os.LooperProto.thread_name)
}

// optional int64 thread_id = 2;
inline bool LooperProto::has_thread_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LooperProto::clear_thread_id() {
  thread_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 LooperProto::thread_id() const {
  // @@protoc_insertion_point(field_get:android.os.LooperProto.thread_id)
  return thread_id_;
}
inline void LooperProto::set_thread_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000004u;
  thread_id_ = value;
  // @@protoc_insertion_point(field_set:android.os.LooperProto.thread_id)
}

// optional .android.os.MessageQueueProto queue = 3;
inline bool LooperProto::has_queue() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::android::os::MessageQueueProto& LooperProto::queue() const {
  const ::android::os::MessageQueueProto* p = queue_;
  // @@protoc_insertion_point(field_get:android.os.LooperProto.queue)
  return p != nullptr ? *p : *reinterpret_cast<const ::android::os::MessageQueueProto*>(
      &::android::os::_MessageQueueProto_default_instance_);
}
inline ::android::os::MessageQueueProto* LooperProto::release_queue() {
  // @@protoc_insertion_point(field_release:android.os.LooperProto.queue)
  _has_bits_[0] &= ~0x00000002u;
  ::android::os::MessageQueueProto* temp = queue_;
  queue_ = nullptr;
  return temp;
}
inline ::android::os::MessageQueueProto* LooperProto::mutable_queue() {
  _has_bits_[0] |= 0x00000002u;
  if (queue_ == nullptr) {
    auto* p = CreateMaybeMessage<::android::os::MessageQueueProto>(GetArenaNoVirtual());
    queue_ = p;
  }
  // @@protoc_insertion_point(field_mutable:android.os.LooperProto.queue)
  return queue_;
}
inline void LooperProto::set_allocated_queue(::android::os::MessageQueueProto* queue) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(queue_);
  }
  if (queue) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      queue = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, queue, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  queue_ = queue;
  // @@protoc_insertion_point(field_set_allocated:android.os.LooperProto.queue)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace os
}  // namespace android

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2flooper_2eproto

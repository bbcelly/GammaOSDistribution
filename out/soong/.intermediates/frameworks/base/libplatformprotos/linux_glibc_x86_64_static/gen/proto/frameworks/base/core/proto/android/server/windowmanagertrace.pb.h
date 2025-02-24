// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/server/windowmanagertrace.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto

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
#include "frameworks/base/core/proto/android/server/windowmanagerservice.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto;
namespace com {
namespace android {
namespace server {
namespace wm {
class WindowManagerTraceFileProto;
class WindowManagerTraceFileProtoDefaultTypeInternal;
extern WindowManagerTraceFileProtoDefaultTypeInternal _WindowManagerTraceFileProto_default_instance_;
class WindowManagerTraceProto;
class WindowManagerTraceProtoDefaultTypeInternal;
extern WindowManagerTraceProtoDefaultTypeInternal _WindowManagerTraceProto_default_instance_;
}  // namespace wm
}  // namespace server
}  // namespace android
}  // namespace com
PROTOBUF_NAMESPACE_OPEN
template<> ::com::android::server::wm::WindowManagerTraceFileProto* Arena::CreateMaybeMessage<::com::android::server::wm::WindowManagerTraceFileProto>(Arena*);
template<> ::com::android::server::wm::WindowManagerTraceProto* Arena::CreateMaybeMessage<::com::android::server::wm::WindowManagerTraceProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace com {
namespace android {
namespace server {
namespace wm {

enum WindowManagerTraceFileProto_MagicNumber : int {
  WindowManagerTraceFileProto_MagicNumber_INVALID = 0,
  WindowManagerTraceFileProto_MagicNumber_MAGIC_NUMBER_L = 1414416727,
  WindowManagerTraceFileProto_MagicNumber_MAGIC_NUMBER_H = 1162035538
};
bool WindowManagerTraceFileProto_MagicNumber_IsValid(int value);
constexpr WindowManagerTraceFileProto_MagicNumber WindowManagerTraceFileProto_MagicNumber_MagicNumber_MIN = WindowManagerTraceFileProto_MagicNumber_INVALID;
constexpr WindowManagerTraceFileProto_MagicNumber WindowManagerTraceFileProto_MagicNumber_MagicNumber_MAX = WindowManagerTraceFileProto_MagicNumber_MAGIC_NUMBER_L;
constexpr int WindowManagerTraceFileProto_MagicNumber_MagicNumber_ARRAYSIZE = WindowManagerTraceFileProto_MagicNumber_MagicNumber_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* WindowManagerTraceFileProto_MagicNumber_descriptor();
template<typename T>
inline const std::string& WindowManagerTraceFileProto_MagicNumber_Name(T enum_t_value) {
  static_assert(::std::is_same<T, WindowManagerTraceFileProto_MagicNumber>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function WindowManagerTraceFileProto_MagicNumber_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    WindowManagerTraceFileProto_MagicNumber_descriptor(), enum_t_value);
}
inline bool WindowManagerTraceFileProto_MagicNumber_Parse(
    const std::string& name, WindowManagerTraceFileProto_MagicNumber* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<WindowManagerTraceFileProto_MagicNumber>(
    WindowManagerTraceFileProto_MagicNumber_descriptor(), name, value);
}
// ===================================================================

class WindowManagerTraceFileProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.android.server.wm.WindowManagerTraceFileProto) */ {
 public:
  WindowManagerTraceFileProto();
  virtual ~WindowManagerTraceFileProto();

  WindowManagerTraceFileProto(const WindowManagerTraceFileProto& from);
  WindowManagerTraceFileProto(WindowManagerTraceFileProto&& from) noexcept
    : WindowManagerTraceFileProto() {
    *this = ::std::move(from);
  }

  inline WindowManagerTraceFileProto& operator=(const WindowManagerTraceFileProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline WindowManagerTraceFileProto& operator=(WindowManagerTraceFileProto&& from) noexcept {
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
  static const WindowManagerTraceFileProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WindowManagerTraceFileProto* internal_default_instance() {
    return reinterpret_cast<const WindowManagerTraceFileProto*>(
               &_WindowManagerTraceFileProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WindowManagerTraceFileProto& a, WindowManagerTraceFileProto& b) {
    a.Swap(&b);
  }
  inline void Swap(WindowManagerTraceFileProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WindowManagerTraceFileProto* New() const final {
    return CreateMaybeMessage<WindowManagerTraceFileProto>(nullptr);
  }

  WindowManagerTraceFileProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WindowManagerTraceFileProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WindowManagerTraceFileProto& from);
  void MergeFrom(const WindowManagerTraceFileProto& from);
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
  void InternalSwap(WindowManagerTraceFileProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.android.server.wm.WindowManagerTraceFileProto";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef WindowManagerTraceFileProto_MagicNumber MagicNumber;
  static constexpr MagicNumber INVALID =
    WindowManagerTraceFileProto_MagicNumber_INVALID;
  static constexpr MagicNumber MAGIC_NUMBER_L =
    WindowManagerTraceFileProto_MagicNumber_MAGIC_NUMBER_L;
  static constexpr MagicNumber MAGIC_NUMBER_H =
    WindowManagerTraceFileProto_MagicNumber_MAGIC_NUMBER_H;
  static inline bool MagicNumber_IsValid(int value) {
    return WindowManagerTraceFileProto_MagicNumber_IsValid(value);
  }
  static constexpr MagicNumber MagicNumber_MIN =
    WindowManagerTraceFileProto_MagicNumber_MagicNumber_MIN;
  static constexpr MagicNumber MagicNumber_MAX =
    WindowManagerTraceFileProto_MagicNumber_MagicNumber_MAX;
  static constexpr int MagicNumber_ARRAYSIZE =
    WindowManagerTraceFileProto_MagicNumber_MagicNumber_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  MagicNumber_descriptor() {
    return WindowManagerTraceFileProto_MagicNumber_descriptor();
  }
  template<typename T>
  static inline const std::string& MagicNumber_Name(T enum_t_value) {
    static_assert(::std::is_same<T, MagicNumber>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function MagicNumber_Name.");
    return WindowManagerTraceFileProto_MagicNumber_Name(enum_t_value);
  }
  static inline bool MagicNumber_Parse(const std::string& name,
      MagicNumber* value) {
    return WindowManagerTraceFileProto_MagicNumber_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kEntryFieldNumber = 2,
    kMagicNumberFieldNumber = 1,
  };
  // repeated .com.android.server.wm.WindowManagerTraceProto entry = 2;
  int entry_size() const;
  void clear_entry();
  ::com::android::server::wm::WindowManagerTraceProto* mutable_entry(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::wm::WindowManagerTraceProto >*
      mutable_entry();
  const ::com::android::server::wm::WindowManagerTraceProto& entry(int index) const;
  ::com::android::server::wm::WindowManagerTraceProto* add_entry();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::wm::WindowManagerTraceProto >&
      entry() const;

  // optional fixed64 magic_number = 1;
  bool has_magic_number() const;
  void clear_magic_number();
  ::PROTOBUF_NAMESPACE_ID::uint64 magic_number() const;
  void set_magic_number(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:com.android.server.wm.WindowManagerTraceFileProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::wm::WindowManagerTraceProto > entry_;
  ::PROTOBUF_NAMESPACE_ID::uint64 magic_number_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto;
};
// -------------------------------------------------------------------

class WindowManagerTraceProto :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:com.android.server.wm.WindowManagerTraceProto) */ {
 public:
  WindowManagerTraceProto();
  virtual ~WindowManagerTraceProto();

  WindowManagerTraceProto(const WindowManagerTraceProto& from);
  WindowManagerTraceProto(WindowManagerTraceProto&& from) noexcept
    : WindowManagerTraceProto() {
    *this = ::std::move(from);
  }

  inline WindowManagerTraceProto& operator=(const WindowManagerTraceProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline WindowManagerTraceProto& operator=(WindowManagerTraceProto&& from) noexcept {
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
  static const WindowManagerTraceProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WindowManagerTraceProto* internal_default_instance() {
    return reinterpret_cast<const WindowManagerTraceProto*>(
               &_WindowManagerTraceProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WindowManagerTraceProto& a, WindowManagerTraceProto& b) {
    a.Swap(&b);
  }
  inline void Swap(WindowManagerTraceProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WindowManagerTraceProto* New() const final {
    return CreateMaybeMessage<WindowManagerTraceProto>(nullptr);
  }

  WindowManagerTraceProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WindowManagerTraceProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const WindowManagerTraceProto& from);
  void MergeFrom(const WindowManagerTraceProto& from);
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
  void InternalSwap(WindowManagerTraceProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "com.android.server.wm.WindowManagerTraceProto";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto);
    return ::descriptor_table_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWhereFieldNumber = 2,
    kWindowManagerServiceFieldNumber = 3,
    kElapsedRealtimeNanosFieldNumber = 1,
  };
  // optional string where = 2;
  bool has_where() const;
  void clear_where();
  const std::string& where() const;
  void set_where(const std::string& value);
  void set_where(std::string&& value);
  void set_where(const char* value);
  void set_where(const char* value, size_t size);
  std::string* mutable_where();
  std::string* release_where();
  void set_allocated_where(std::string* where);

  // optional .com.android.server.wm.WindowManagerServiceDumpProto window_manager_service = 3;
  bool has_window_manager_service() const;
  void clear_window_manager_service();
  const ::com::android::server::wm::WindowManagerServiceDumpProto& window_manager_service() const;
  ::com::android::server::wm::WindowManagerServiceDumpProto* release_window_manager_service();
  ::com::android::server::wm::WindowManagerServiceDumpProto* mutable_window_manager_service();
  void set_allocated_window_manager_service(::com::android::server::wm::WindowManagerServiceDumpProto* window_manager_service);

  // optional fixed64 elapsed_realtime_nanos = 1;
  bool has_elapsed_realtime_nanos() const;
  void clear_elapsed_realtime_nanos();
  ::PROTOBUF_NAMESPACE_ID::uint64 elapsed_realtime_nanos() const;
  void set_elapsed_realtime_nanos(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:com.android.server.wm.WindowManagerTraceProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr where_;
  ::com::android::server::wm::WindowManagerServiceDumpProto* window_manager_service_;
  ::PROTOBUF_NAMESPACE_ID::uint64 elapsed_realtime_nanos_;
  friend struct ::TableStruct_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WindowManagerTraceFileProto

// optional fixed64 magic_number = 1;
inline bool WindowManagerTraceFileProto::has_magic_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WindowManagerTraceFileProto::clear_magic_number() {
  magic_number_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WindowManagerTraceFileProto::magic_number() const {
  // @@protoc_insertion_point(field_get:com.android.server.wm.WindowManagerTraceFileProto.magic_number)
  return magic_number_;
}
inline void WindowManagerTraceFileProto::set_magic_number(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  magic_number_ = value;
  // @@protoc_insertion_point(field_set:com.android.server.wm.WindowManagerTraceFileProto.magic_number)
}

// repeated .com.android.server.wm.WindowManagerTraceProto entry = 2;
inline int WindowManagerTraceFileProto::entry_size() const {
  return entry_.size();
}
inline void WindowManagerTraceFileProto::clear_entry() {
  entry_.Clear();
}
inline ::com::android::server::wm::WindowManagerTraceProto* WindowManagerTraceFileProto::mutable_entry(int index) {
  // @@protoc_insertion_point(field_mutable:com.android.server.wm.WindowManagerTraceFileProto.entry)
  return entry_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::wm::WindowManagerTraceProto >*
WindowManagerTraceFileProto::mutable_entry() {
  // @@protoc_insertion_point(field_mutable_list:com.android.server.wm.WindowManagerTraceFileProto.entry)
  return &entry_;
}
inline const ::com::android::server::wm::WindowManagerTraceProto& WindowManagerTraceFileProto::entry(int index) const {
  // @@protoc_insertion_point(field_get:com.android.server.wm.WindowManagerTraceFileProto.entry)
  return entry_.Get(index);
}
inline ::com::android::server::wm::WindowManagerTraceProto* WindowManagerTraceFileProto::add_entry() {
  // @@protoc_insertion_point(field_add:com.android.server.wm.WindowManagerTraceFileProto.entry)
  return entry_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::com::android::server::wm::WindowManagerTraceProto >&
WindowManagerTraceFileProto::entry() const {
  // @@protoc_insertion_point(field_list:com.android.server.wm.WindowManagerTraceFileProto.entry)
  return entry_;
}

// -------------------------------------------------------------------

// WindowManagerTraceProto

// optional fixed64 elapsed_realtime_nanos = 1;
inline bool WindowManagerTraceProto::has_elapsed_realtime_nanos() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WindowManagerTraceProto::clear_elapsed_realtime_nanos() {
  elapsed_realtime_nanos_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WindowManagerTraceProto::elapsed_realtime_nanos() const {
  // @@protoc_insertion_point(field_get:com.android.server.wm.WindowManagerTraceProto.elapsed_realtime_nanos)
  return elapsed_realtime_nanos_;
}
inline void WindowManagerTraceProto::set_elapsed_realtime_nanos(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  elapsed_realtime_nanos_ = value;
  // @@protoc_insertion_point(field_set:com.android.server.wm.WindowManagerTraceProto.elapsed_realtime_nanos)
}

// optional string where = 2;
inline bool WindowManagerTraceProto::has_where() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WindowManagerTraceProto::clear_where() {
  where_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& WindowManagerTraceProto::where() const {
  // @@protoc_insertion_point(field_get:com.android.server.wm.WindowManagerTraceProto.where)
  return where_.GetNoArena();
}
inline void WindowManagerTraceProto::set_where(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  where_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.android.server.wm.WindowManagerTraceProto.where)
}
inline void WindowManagerTraceProto::set_where(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  where_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.android.server.wm.WindowManagerTraceProto.where)
}
inline void WindowManagerTraceProto::set_where(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  where_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.android.server.wm.WindowManagerTraceProto.where)
}
inline void WindowManagerTraceProto::set_where(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  where_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.android.server.wm.WindowManagerTraceProto.where)
}
inline std::string* WindowManagerTraceProto::mutable_where() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:com.android.server.wm.WindowManagerTraceProto.where)
  return where_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* WindowManagerTraceProto::release_where() {
  // @@protoc_insertion_point(field_release:com.android.server.wm.WindowManagerTraceProto.where)
  if (!has_where()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return where_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void WindowManagerTraceProto::set_allocated_where(std::string* where) {
  if (where != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  where_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), where);
  // @@protoc_insertion_point(field_set_allocated:com.android.server.wm.WindowManagerTraceProto.where)
}

// optional .com.android.server.wm.WindowManagerServiceDumpProto window_manager_service = 3;
inline bool WindowManagerTraceProto::has_window_manager_service() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::com::android::server::wm::WindowManagerServiceDumpProto& WindowManagerTraceProto::window_manager_service() const {
  const ::com::android::server::wm::WindowManagerServiceDumpProto* p = window_manager_service_;
  // @@protoc_insertion_point(field_get:com.android.server.wm.WindowManagerTraceProto.window_manager_service)
  return p != nullptr ? *p : *reinterpret_cast<const ::com::android::server::wm::WindowManagerServiceDumpProto*>(
      &::com::android::server::wm::_WindowManagerServiceDumpProto_default_instance_);
}
inline ::com::android::server::wm::WindowManagerServiceDumpProto* WindowManagerTraceProto::release_window_manager_service() {
  // @@protoc_insertion_point(field_release:com.android.server.wm.WindowManagerTraceProto.window_manager_service)
  _has_bits_[0] &= ~0x00000002u;
  ::com::android::server::wm::WindowManagerServiceDumpProto* temp = window_manager_service_;
  window_manager_service_ = nullptr;
  return temp;
}
inline ::com::android::server::wm::WindowManagerServiceDumpProto* WindowManagerTraceProto::mutable_window_manager_service() {
  _has_bits_[0] |= 0x00000002u;
  if (window_manager_service_ == nullptr) {
    auto* p = CreateMaybeMessage<::com::android::server::wm::WindowManagerServiceDumpProto>(GetArenaNoVirtual());
    window_manager_service_ = p;
  }
  // @@protoc_insertion_point(field_mutable:com.android.server.wm.WindowManagerTraceProto.window_manager_service)
  return window_manager_service_;
}
inline void WindowManagerTraceProto::set_allocated_window_manager_service(::com::android::server::wm::WindowManagerServiceDumpProto* window_manager_service) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(window_manager_service_);
  }
  if (window_manager_service) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      window_manager_service = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, window_manager_service, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  window_manager_service_ = window_manager_service;
  // @@protoc_insertion_point(field_set_allocated:com.android.server.wm.WindowManagerTraceProto.window_manager_service)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace wm
}  // namespace server
}  // namespace android
}  // namespace com

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::com::android::server::wm::WindowManagerTraceFileProto_MagicNumber> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::android::server::wm::WindowManagerTraceFileProto_MagicNumber>() {
  return ::com::android::server::wm::WindowManagerTraceFileProto_MagicNumber_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_frameworks_2fbase_2fcore_2fproto_2fandroid_2fserver_2fwindowmanagertrace_2eproto

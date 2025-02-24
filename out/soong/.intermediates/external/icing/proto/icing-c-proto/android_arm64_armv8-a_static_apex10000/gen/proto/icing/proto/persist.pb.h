// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: icing/proto/persist.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_icing_2fproto_2fpersist_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_icing_2fproto_2fpersist_2eproto

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
#include "icing/proto/status.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_icing_2fproto_2fpersist_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_icing_2fproto_2fpersist_2eproto {
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
namespace icing {
namespace lib {
class PersistToDiskResultProto;
class PersistToDiskResultProtoDefaultTypeInternal;
extern PersistToDiskResultProtoDefaultTypeInternal _PersistToDiskResultProto_default_instance_;
class PersistType;
class PersistTypeDefaultTypeInternal;
extern PersistTypeDefaultTypeInternal _PersistType_default_instance_;
}  // namespace lib
}  // namespace icing
PROTOBUF_NAMESPACE_OPEN
template<> ::icing::lib::PersistToDiskResultProto* Arena::CreateMaybeMessage<::icing::lib::PersistToDiskResultProto>(Arena*);
template<> ::icing::lib::PersistType* Arena::CreateMaybeMessage<::icing::lib::PersistType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace icing {
namespace lib {

enum PersistType_Code : int {
  PersistType_Code_UNKNOWN = 0,
  PersistType_Code_LITE = 1,
  PersistType_Code_FULL = 2
};
bool PersistType_Code_IsValid(int value);
constexpr PersistType_Code PersistType_Code_Code_MIN = PersistType_Code_UNKNOWN;
constexpr PersistType_Code PersistType_Code_Code_MAX = PersistType_Code_FULL;
constexpr int PersistType_Code_Code_ARRAYSIZE = PersistType_Code_Code_MAX + 1;

const std::string& PersistType_Code_Name(PersistType_Code value);
template<typename T>
inline const std::string& PersistType_Code_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PersistType_Code>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PersistType_Code_Name.");
  return PersistType_Code_Name(static_cast<PersistType_Code>(enum_t_value));
}
bool PersistType_Code_Parse(
    const std::string& name, PersistType_Code* value);
// ===================================================================

class PersistType :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:icing.lib.PersistType) */ {
 public:
  PersistType();
  virtual ~PersistType();

  PersistType(const PersistType& from);
  PersistType(PersistType&& from) noexcept
    : PersistType() {
    *this = ::std::move(from);
  }

  inline PersistType& operator=(const PersistType& from) {
    CopyFrom(from);
    return *this;
  }
  inline PersistType& operator=(PersistType&& from) noexcept {
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

  static const PersistType& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PersistType* internal_default_instance() {
    return reinterpret_cast<const PersistType*>(
               &_PersistType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PersistType& a, PersistType& b) {
    a.Swap(&b);
  }
  inline void Swap(PersistType* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PersistType* New() const final {
    return CreateMaybeMessage<PersistType>(nullptr);
  }

  PersistType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PersistType>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const PersistType& from);
  void MergeFrom(const PersistType& from);
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
  void InternalSwap(PersistType* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "icing.lib.PersistType";
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

  typedef PersistType_Code Code;
  static constexpr Code UNKNOWN =
    PersistType_Code_UNKNOWN;
  static constexpr Code LITE =
    PersistType_Code_LITE;
  static constexpr Code FULL =
    PersistType_Code_FULL;
  static inline bool Code_IsValid(int value) {
    return PersistType_Code_IsValid(value);
  }
  static constexpr Code Code_MIN =
    PersistType_Code_Code_MIN;
  static constexpr Code Code_MAX =
    PersistType_Code_Code_MAX;
  static constexpr int Code_ARRAYSIZE =
    PersistType_Code_Code_ARRAYSIZE;
  template<typename T>
  static inline const std::string& Code_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Code>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Code_Name.");
    return PersistType_Code_Name(enum_t_value);
  }
  static inline bool Code_Parse(const std::string& name,
      Code* value) {
    return PersistType_Code_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 1,
  };
  // optional .icing.lib.PersistType.Code code = 1;
  bool has_code() const;
  void clear_code();
  ::icing::lib::PersistType_Code code() const;
  void set_code(::icing::lib::PersistType_Code value);

  // @@protoc_insertion_point(class_scope:icing.lib.PersistType)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int code_;
  friend struct ::TableStruct_icing_2fproto_2fpersist_2eproto;
};
// -------------------------------------------------------------------

class PersistToDiskResultProto :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:icing.lib.PersistToDiskResultProto) */ {
 public:
  PersistToDiskResultProto();
  virtual ~PersistToDiskResultProto();

  PersistToDiskResultProto(const PersistToDiskResultProto& from);
  PersistToDiskResultProto(PersistToDiskResultProto&& from) noexcept
    : PersistToDiskResultProto() {
    *this = ::std::move(from);
  }

  inline PersistToDiskResultProto& operator=(const PersistToDiskResultProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline PersistToDiskResultProto& operator=(PersistToDiskResultProto&& from) noexcept {
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

  static const PersistToDiskResultProto& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PersistToDiskResultProto* internal_default_instance() {
    return reinterpret_cast<const PersistToDiskResultProto*>(
               &_PersistToDiskResultProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PersistToDiskResultProto& a, PersistToDiskResultProto& b) {
    a.Swap(&b);
  }
  inline void Swap(PersistToDiskResultProto* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PersistToDiskResultProto* New() const final {
    return CreateMaybeMessage<PersistToDiskResultProto>(nullptr);
  }

  PersistToDiskResultProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PersistToDiskResultProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const PersistToDiskResultProto& from);
  void MergeFrom(const PersistToDiskResultProto& from);
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
  void InternalSwap(PersistToDiskResultProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "icing.lib.PersistToDiskResultProto";
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
    kStatusFieldNumber = 1,
  };
  // optional .icing.lib.StatusProto status = 1;
  bool has_status() const;
  void clear_status();
  const ::icing::lib::StatusProto& status() const;
  ::icing::lib::StatusProto* release_status();
  ::icing::lib::StatusProto* mutable_status();
  void set_allocated_status(::icing::lib::StatusProto* status);

  // @@protoc_insertion_point(class_scope:icing.lib.PersistToDiskResultProto)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::icing::lib::StatusProto* status_;
  friend struct ::TableStruct_icing_2fproto_2fpersist_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PersistType

// optional .icing.lib.PersistType.Code code = 1;
inline bool PersistType::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PersistType::clear_code() {
  code_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::icing::lib::PersistType_Code PersistType::code() const {
  // @@protoc_insertion_point(field_get:icing.lib.PersistType.code)
  return static_cast< ::icing::lib::PersistType_Code >(code_);
}
inline void PersistType::set_code(::icing::lib::PersistType_Code value) {
  assert(::icing::lib::PersistType_Code_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  code_ = value;
  // @@protoc_insertion_point(field_set:icing.lib.PersistType.code)
}

// -------------------------------------------------------------------

// PersistToDiskResultProto

// optional .icing.lib.StatusProto status = 1;
inline bool PersistToDiskResultProto::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::icing::lib::StatusProto& PersistToDiskResultProto::status() const {
  const ::icing::lib::StatusProto* p = status_;
  // @@protoc_insertion_point(field_get:icing.lib.PersistToDiskResultProto.status)
  return p != nullptr ? *p : *reinterpret_cast<const ::icing::lib::StatusProto*>(
      &::icing::lib::_StatusProto_default_instance_);
}
inline ::icing::lib::StatusProto* PersistToDiskResultProto::release_status() {
  // @@protoc_insertion_point(field_release:icing.lib.PersistToDiskResultProto.status)
  _has_bits_[0] &= ~0x00000001u;
  ::icing::lib::StatusProto* temp = status_;
  status_ = nullptr;
  return temp;
}
inline ::icing::lib::StatusProto* PersistToDiskResultProto::mutable_status() {
  _has_bits_[0] |= 0x00000001u;
  if (status_ == nullptr) {
    auto* p = CreateMaybeMessage<::icing::lib::StatusProto>(GetArenaNoVirtual());
    status_ = p;
  }
  // @@protoc_insertion_point(field_mutable:icing.lib.PersistToDiskResultProto.status)
  return status_;
}
inline void PersistToDiskResultProto::set_allocated_status(::icing::lib::StatusProto* status) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(status_);
  }
  if (status) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      status = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, status, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  status_ = status;
  // @@protoc_insertion_point(field_set_allocated:icing.lib.PersistToDiskResultProto.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace lib
}  // namespace icing

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::icing::lib::PersistType_Code> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_icing_2fproto_2fpersist_2eproto

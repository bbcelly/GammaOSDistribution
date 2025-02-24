// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packages/modules/StatsD/statsd/src/experiment_ids.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_packages_2fmodules_2fStatsD_2fstatsd_2fsrc_2fexperiment_5fids_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_packages_2fmodules_2fStatsD_2fstatsd_2fsrc_2fexperiment_5fids_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_packages_2fmodules_2fStatsD_2fstatsd_2fsrc_2fexperiment_5fids_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_packages_2fmodules_2fStatsD_2fstatsd_2fsrc_2fexperiment_5fids_2eproto {
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
namespace os {
namespace statsd {
class ExperimentIds;
class ExperimentIdsDefaultTypeInternal;
extern ExperimentIdsDefaultTypeInternal _ExperimentIds_default_instance_;
}  // namespace statsd
}  // namespace os
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> ::android::os::statsd::ExperimentIds* Arena::CreateMaybeMessage<::android::os::statsd::ExperimentIds>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace android {
namespace os {
namespace statsd {

// ===================================================================

class ExperimentIds :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:android.os.statsd.ExperimentIds) */ {
 public:
  ExperimentIds();
  virtual ~ExperimentIds();

  ExperimentIds(const ExperimentIds& from);
  ExperimentIds(ExperimentIds&& from) noexcept
    : ExperimentIds() {
    *this = ::std::move(from);
  }

  inline ExperimentIds& operator=(const ExperimentIds& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExperimentIds& operator=(ExperimentIds&& from) noexcept {
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

  static const ExperimentIds& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ExperimentIds* internal_default_instance() {
    return reinterpret_cast<const ExperimentIds*>(
               &_ExperimentIds_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExperimentIds& a, ExperimentIds& b) {
    a.Swap(&b);
  }
  inline void Swap(ExperimentIds* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ExperimentIds* New() const final {
    return CreateMaybeMessage<ExperimentIds>(nullptr);
  }

  ExperimentIds* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ExperimentIds>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ExperimentIds& from);
  void MergeFrom(const ExperimentIds& from);
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
  void InternalSwap(ExperimentIds* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "android.os.statsd.ExperimentIds";
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
    kExperimentIdFieldNumber = 1,
  };
  // repeated int64 experiment_id = 1;
  int experiment_id_size() const;
  void clear_experiment_id();
  ::PROTOBUF_NAMESPACE_ID::int64 experiment_id(int index) const;
  void set_experiment_id(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_experiment_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      experiment_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_experiment_id();

  // @@protoc_insertion_point(class_scope:android.os.statsd.ExperimentIds)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > experiment_id_;
  friend struct ::TableStruct_packages_2fmodules_2fStatsD_2fstatsd_2fsrc_2fexperiment_5fids_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExperimentIds

// repeated int64 experiment_id = 1;
inline int ExperimentIds::experiment_id_size() const {
  return experiment_id_.size();
}
inline void ExperimentIds::clear_experiment_id() {
  experiment_id_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ExperimentIds::experiment_id(int index) const {
  // @@protoc_insertion_point(field_get:android.os.statsd.ExperimentIds.experiment_id)
  return experiment_id_.Get(index);
}
inline void ExperimentIds::set_experiment_id(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  experiment_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:android.os.statsd.ExperimentIds.experiment_id)
}
inline void ExperimentIds::add_experiment_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  experiment_id_.Add(value);
  // @@protoc_insertion_point(field_add:android.os.statsd.ExperimentIds.experiment_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
ExperimentIds::experiment_id() const {
  // @@protoc_insertion_point(field_list:android.os.statsd.ExperimentIds.experiment_id)
  return experiment_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
ExperimentIds::mutable_experiment_id() {
  // @@protoc_insertion_point(field_mutable_list:android.os.statsd.ExperimentIds.experiment_id)
  return &experiment_id_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace statsd
}  // namespace os
}  // namespace android

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_packages_2fmodules_2fStatsD_2fstatsd_2fsrc_2fexperiment_5fids_2eproto

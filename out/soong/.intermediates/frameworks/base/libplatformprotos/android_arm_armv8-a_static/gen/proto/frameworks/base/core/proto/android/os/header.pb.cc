// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/core/proto/android/os/header.proto

#include "frameworks/base/core/proto/android/os/header.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_IncidentHeaderProto_StatsdConfigKey_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto;
namespace android {
namespace os {
class IncidentHeaderProto_StatsdConfigKeyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IncidentHeaderProto_StatsdConfigKey> _instance;
} _IncidentHeaderProto_StatsdConfigKey_default_instance_;
class IncidentHeaderProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<IncidentHeaderProto> _instance;
} _IncidentHeaderProto_default_instance_;
}  // namespace os
}  // namespace android
static void InitDefaultsscc_info_IncidentHeaderProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::android::os::_IncidentHeaderProto_default_instance_;
    new (ptr) ::android::os::IncidentHeaderProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::android::os::IncidentHeaderProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_IncidentHeaderProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_IncidentHeaderProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto}, {
      &scc_info_IncidentHeaderProto_StatsdConfigKey_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto.base,}};

static void InitDefaultsscc_info_IncidentHeaderProto_StatsdConfigKey_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::android::os::_IncidentHeaderProto_StatsdConfigKey_default_instance_;
    new (ptr) ::android::os::IncidentHeaderProto_StatsdConfigKey();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::android::os::IncidentHeaderProto_StatsdConfigKey::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_IncidentHeaderProto_StatsdConfigKey_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_IncidentHeaderProto_StatsdConfigKey_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto}, {}};

namespace android {
namespace os {

// ===================================================================

void IncidentHeaderProto_StatsdConfigKey::InitAsDefaultInstance() {
}
class IncidentHeaderProto_StatsdConfigKey::_Internal {
 public:
  using HasBits = decltype(std::declval<IncidentHeaderProto_StatsdConfigKey>()._has_bits_);
  static void set_has_uid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

IncidentHeaderProto_StatsdConfigKey::IncidentHeaderProto_StatsdConfigKey()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:android.os.IncidentHeaderProto.StatsdConfigKey)
}
IncidentHeaderProto_StatsdConfigKey::IncidentHeaderProto_StatsdConfigKey(const IncidentHeaderProto_StatsdConfigKey& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&uid_) -
    reinterpret_cast<char*>(&id_)) + sizeof(uid_));
  // @@protoc_insertion_point(copy_constructor:android.os.IncidentHeaderProto.StatsdConfigKey)
}

void IncidentHeaderProto_StatsdConfigKey::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&uid_) -
      reinterpret_cast<char*>(&id_)) + sizeof(uid_));
}

IncidentHeaderProto_StatsdConfigKey::~IncidentHeaderProto_StatsdConfigKey() {
  // @@protoc_insertion_point(destructor:android.os.IncidentHeaderProto.StatsdConfigKey)
  SharedDtor();
}

void IncidentHeaderProto_StatsdConfigKey::SharedDtor() {
}

void IncidentHeaderProto_StatsdConfigKey::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IncidentHeaderProto_StatsdConfigKey& IncidentHeaderProto_StatsdConfigKey::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IncidentHeaderProto_StatsdConfigKey_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto.base);
  return *internal_default_instance();
}


void IncidentHeaderProto_StatsdConfigKey::Clear() {
// @@protoc_insertion_point(message_clear_start:android.os.IncidentHeaderProto.StatsdConfigKey)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&uid_) -
        reinterpret_cast<char*>(&id_)) + sizeof(uid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* IncidentHeaderProto_StatsdConfigKey::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 uid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_uid(&has_bits);
          uid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int64 id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool IncidentHeaderProto_StatsdConfigKey::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  ::PROTOBUF_NAMESPACE_ID::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:android.os.IncidentHeaderProto.StatsdConfigKey)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 uid = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_uid(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT32>(
                 input, &uid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 id = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_id(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:android.os.IncidentHeaderProto.StatsdConfigKey)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:android.os.IncidentHeaderProto.StatsdConfigKey)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void IncidentHeaderProto_StatsdConfigKey::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:android.os.IncidentHeaderProto.StatsdConfigKey)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 uid = 1;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32(1, this->uid(), output);
  }

  // optional int64 id = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64(2, this->id(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:android.os.IncidentHeaderProto.StatsdConfigKey)
}

size_t IncidentHeaderProto_StatsdConfigKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:android.os.IncidentHeaderProto.StatsdConfigKey)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int64 id = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // optional int32 uid = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->uid());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IncidentHeaderProto_StatsdConfigKey::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const IncidentHeaderProto_StatsdConfigKey*>(
      &from));
}

void IncidentHeaderProto_StatsdConfigKey::MergeFrom(const IncidentHeaderProto_StatsdConfigKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:android.os.IncidentHeaderProto.StatsdConfigKey)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      uid_ = from.uid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void IncidentHeaderProto_StatsdConfigKey::CopyFrom(const IncidentHeaderProto_StatsdConfigKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:android.os.IncidentHeaderProto.StatsdConfigKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IncidentHeaderProto_StatsdConfigKey::IsInitialized() const {
  return true;
}

void IncidentHeaderProto_StatsdConfigKey::InternalSwap(IncidentHeaderProto_StatsdConfigKey* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(id_, other->id_);
  swap(uid_, other->uid_);
}

std::string IncidentHeaderProto_StatsdConfigKey::GetTypeName() const {
  return "android.os.IncidentHeaderProto.StatsdConfigKey";
}


// ===================================================================

void IncidentHeaderProto::InitAsDefaultInstance() {
  ::android::os::_IncidentHeaderProto_default_instance_._instance.get_mutable()->config_key_ = const_cast< ::android::os::IncidentHeaderProto_StatsdConfigKey*>(
      ::android::os::IncidentHeaderProto_StatsdConfigKey::internal_default_instance());
}
class IncidentHeaderProto::_Internal {
 public:
  using HasBits = decltype(std::declval<IncidentHeaderProto>()._has_bits_);
  static void set_has_alert_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_reason(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::android::os::IncidentHeaderProto_StatsdConfigKey& config_key(const IncidentHeaderProto* msg);
  static void set_has_config_key(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_trigger_details(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::android::os::IncidentHeaderProto_StatsdConfigKey&
IncidentHeaderProto::_Internal::config_key(const IncidentHeaderProto* msg) {
  return *msg->config_key_;
}
IncidentHeaderProto::IncidentHeaderProto()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:android.os.IncidentHeaderProto)
}
IncidentHeaderProto::IncidentHeaderProto(const IncidentHeaderProto& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_reason()) {
    reason_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.reason_);
  }
  trigger_details_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.has_trigger_details()) {
    trigger_details_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.trigger_details_);
  }
  if (from.has_config_key()) {
    config_key_ = new ::android::os::IncidentHeaderProto_StatsdConfigKey(*from.config_key_);
  } else {
    config_key_ = nullptr;
  }
  alert_id_ = from.alert_id_;
  // @@protoc_insertion_point(copy_constructor:android.os.IncidentHeaderProto)
}

void IncidentHeaderProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_IncidentHeaderProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto.base);
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  trigger_details_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&config_key_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&alert_id_) -
      reinterpret_cast<char*>(&config_key_)) + sizeof(alert_id_));
}

IncidentHeaderProto::~IncidentHeaderProto() {
  // @@protoc_insertion_point(destructor:android.os.IncidentHeaderProto)
  SharedDtor();
}

void IncidentHeaderProto::SharedDtor() {
  reason_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  trigger_details_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete config_key_;
}

void IncidentHeaderProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const IncidentHeaderProto& IncidentHeaderProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_IncidentHeaderProto_frameworks_2fbase_2fcore_2fproto_2fandroid_2fos_2fheader_2eproto.base);
  return *internal_default_instance();
}


void IncidentHeaderProto::Clear() {
// @@protoc_insertion_point(message_clear_start:android.os.IncidentHeaderProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      reason_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      trigger_details_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(config_key_ != nullptr);
      config_key_->Clear();
    }
  }
  alert_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* IncidentHeaderProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int64 alert_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_alert_id(&has_bits);
          alert_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(mutable_reason(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .android.os.IncidentHeaderProto.StatsdConfigKey config_key = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_config_key(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bytes trigger_details = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(mutable_trigger_details(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool IncidentHeaderProto::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  ::PROTOBUF_NAMESPACE_ID::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:android.os.IncidentHeaderProto)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 alert_id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_alert_id(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT64>(
                 input, &alert_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string reason = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_reason()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .android.os.IncidentHeaderProto.StatsdConfigKey config_key = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_config_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bytes trigger_details = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadBytes(
                input, this->mutable_trigger_details()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:android.os.IncidentHeaderProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:android.os.IncidentHeaderProto)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void IncidentHeaderProto::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:android.os.IncidentHeaderProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 alert_id = 1;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64(1, this->alert_id(), output);
  }

  // optional string reason = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->reason(), output);
  }

  // optional .android.os.IncidentHeaderProto.StatsdConfigKey config_key = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessage(
      3, _Internal::config_key(this), output);
  }

  // optional bytes trigger_details = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->trigger_details(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:android.os.IncidentHeaderProto)
}

size_t IncidentHeaderProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:android.os.IncidentHeaderProto)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string reason = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->reason());
    }

    // optional bytes trigger_details = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->trigger_details());
    }

    // optional .android.os.IncidentHeaderProto.StatsdConfigKey config_key = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *config_key_);
    }

    // optional int64 alert_id = 1;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
          this->alert_id());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IncidentHeaderProto::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const IncidentHeaderProto*>(
      &from));
}

void IncidentHeaderProto::MergeFrom(const IncidentHeaderProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:android.os.IncidentHeaderProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      reason_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.reason_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      trigger_details_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.trigger_details_);
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_config_key()->::android::os::IncidentHeaderProto_StatsdConfigKey::MergeFrom(from.config_key());
    }
    if (cached_has_bits & 0x00000008u) {
      alert_id_ = from.alert_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void IncidentHeaderProto::CopyFrom(const IncidentHeaderProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:android.os.IncidentHeaderProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IncidentHeaderProto::IsInitialized() const {
  return true;
}

void IncidentHeaderProto::InternalSwap(IncidentHeaderProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  reason_.Swap(&other->reason_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  trigger_details_.Swap(&other->trigger_details_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(config_key_, other->config_key_);
  swap(alert_id_, other->alert_id_);
}

std::string IncidentHeaderProto::GetTypeName() const {
  return "android.os.IncidentHeaderProto";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace os
}  // namespace android
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::android::os::IncidentHeaderProto_StatsdConfigKey* Arena::CreateMaybeMessage< ::android::os::IncidentHeaderProto_StatsdConfigKey >(Arena* arena) {
  return Arena::CreateInternal< ::android::os::IncidentHeaderProto_StatsdConfigKey >(arena);
}
template<> PROTOBUF_NOINLINE ::android::os::IncidentHeaderProto* Arena::CreateMaybeMessage< ::android::os::IncidentHeaderProto >(Arena* arena) {
  return Arena::CreateInternal< ::android::os::IncidentHeaderProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

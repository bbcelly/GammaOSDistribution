// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ui_state.proto

#include "protos/perfetto/trace/ui_state.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
namespace perfetto {
namespace protos {
class UiState_HighlightProcessDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UiState_HighlightProcess> _instance;
  ::PROTOBUF_NAMESPACE_ID::uint32 pid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr cmdline_;
} _UiState_HighlightProcess_default_instance_;
class UiStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UiState> _instance;
} _UiState_default_instance_;
}  // namespace protos
}  // namespace perfetto
static void InitDefaultsscc_info_UiState_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_UiState_default_instance_;
    new (ptr) ::perfetto::protos::UiState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::UiState::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_UiState_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_UiState_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto}, {
      &scc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto.base,}};

static void InitDefaultsscc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_UiState_HighlightProcess_default_instance_;
    new (ptr) ::perfetto::protos::UiState_HighlightProcess();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::UiState_HighlightProcess::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto}, {}};

namespace perfetto {
namespace protos {

// ===================================================================

void UiState_HighlightProcess::InitAsDefaultInstance() {
}
class UiState_HighlightProcess::_Internal {
 public:
  using HasBits = decltype(std::declval<UiState_HighlightProcess>()._has_bits_);
};

UiState_HighlightProcess::UiState_HighlightProcess()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.UiState.HighlightProcess)
}
UiState_HighlightProcess::UiState_HighlightProcess(const UiState_HighlightProcess& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_selector();
  switch (from.selector_case()) {
    case kPid: {
      set_pid(from.pid());
      break;
    }
    case kCmdline: {
      set_cmdline(from.cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UiState.HighlightProcess)
}

void UiState_HighlightProcess::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto.base);
  clear_has_selector();
}

UiState_HighlightProcess::~UiState_HighlightProcess() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UiState.HighlightProcess)
  SharedDtor();
}

void UiState_HighlightProcess::SharedDtor() {
  if (has_selector()) {
    clear_selector();
  }
}

void UiState_HighlightProcess::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UiState_HighlightProcess& UiState_HighlightProcess::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UiState_HighlightProcess_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto.base);
  return *internal_default_instance();
}


void UiState_HighlightProcess::clear_selector() {
// @@protoc_insertion_point(one_of_clear_start:perfetto.protos.UiState.HighlightProcess)
  switch (selector_case()) {
    case kPid: {
      // No need to clear
      break;
    }
    case kCmdline: {
      selector_.cmdline_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = SELECTOR_NOT_SET;
}


void UiState_HighlightProcess::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UiState.HighlightProcess)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_selector();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* UiState_HighlightProcess::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional uint32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          set_pid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string cmdline = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(mutable_cmdline(), ptr, ctx);
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool UiState_HighlightProcess::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  ::PROTOBUF_NAMESPACE_ID::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.UiState.HighlightProcess)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 pid = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          clear_selector();
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &selector_.pid_)));
          set_has_pid();
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string cmdline = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_cmdline()));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.UiState.HighlightProcess)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.UiState.HighlightProcess)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void UiState_HighlightProcess::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.UiState.HighlightProcess)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (selector_case()) {
    case kPid:
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(1, this->pid(), output);
      break;
    case kCmdline:
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
        2, this->cmdline(), output);
      break;
    default: ;
  }
  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.UiState.HighlightProcess)
}

size_t UiState_HighlightProcess::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UiState.HighlightProcess)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (selector_case()) {
    // optional uint32 pid = 1;
    case kPid: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
          this->pid());
      break;
    }
    // optional string cmdline = 2;
    case kCmdline: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UiState_HighlightProcess::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const UiState_HighlightProcess*>(
      &from));
}

void UiState_HighlightProcess::MergeFrom(const UiState_HighlightProcess& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UiState.HighlightProcess)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.selector_case()) {
    case kPid: {
      set_pid(from.pid());
      break;
    }
    case kCmdline: {
      set_cmdline(from.cmdline());
      break;
    }
    case SELECTOR_NOT_SET: {
      break;
    }
  }
}

void UiState_HighlightProcess::CopyFrom(const UiState_HighlightProcess& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UiState.HighlightProcess)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UiState_HighlightProcess::IsInitialized() const {
  return true;
}

void UiState_HighlightProcess::InternalSwap(UiState_HighlightProcess* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(selector_, other->selector_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
}

std::string UiState_HighlightProcess::GetTypeName() const {
  return "perfetto.protos.UiState.HighlightProcess";
}


// ===================================================================

void UiState::InitAsDefaultInstance() {
  ::perfetto::protos::_UiState_default_instance_._instance.get_mutable()->highlight_process_ = const_cast< ::perfetto::protos::UiState_HighlightProcess*>(
      ::perfetto::protos::UiState_HighlightProcess::internal_default_instance());
}
class UiState::_Internal {
 public:
  using HasBits = decltype(std::declval<UiState>()._has_bits_);
  static void set_has_timeline_start_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timeline_end_ts(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::perfetto::protos::UiState_HighlightProcess& highlight_process(const UiState* msg);
  static void set_has_highlight_process(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::perfetto::protos::UiState_HighlightProcess&
UiState::_Internal::highlight_process(const UiState* msg) {
  return *msg->highlight_process_;
}
UiState::UiState()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.UiState)
}
UiState::UiState(const UiState& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_highlight_process()) {
    highlight_process_ = new ::perfetto::protos::UiState_HighlightProcess(*from.highlight_process_);
  } else {
    highlight_process_ = nullptr;
  }
  ::memcpy(&timeline_start_ts_, &from.timeline_start_ts_,
    static_cast<size_t>(reinterpret_cast<char*>(&timeline_end_ts_) -
    reinterpret_cast<char*>(&timeline_start_ts_)) + sizeof(timeline_end_ts_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UiState)
}

void UiState::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UiState_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto.base);
  ::memset(&highlight_process_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timeline_end_ts_) -
      reinterpret_cast<char*>(&highlight_process_)) + sizeof(timeline_end_ts_));
}

UiState::~UiState() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UiState)
  SharedDtor();
}

void UiState::SharedDtor() {
  if (this != internal_default_instance()) delete highlight_process_;
}

void UiState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UiState& UiState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UiState_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto.base);
  return *internal_default_instance();
}


void UiState::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UiState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(highlight_process_ != nullptr);
    highlight_process_->Clear();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&timeline_start_ts_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&timeline_end_ts_) -
        reinterpret_cast<char*>(&timeline_start_ts_)) + sizeof(timeline_end_ts_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* UiState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int64 timeline_start_ts = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_timeline_start_ts(&has_bits);
          timeline_start_ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int64 timeline_end_ts = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_timeline_end_ts(&has_bits);
          timeline_end_ts_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(mutable_highlight_process(), ptr);
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
bool UiState::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  ::PROTOBUF_NAMESPACE_ID::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.UiState)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 timeline_start_ts = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          _Internal::set_has_timeline_start_ts(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT64>(
                 input, &timeline_start_ts_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 timeline_end_ts = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_timeline_end_ts(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::int64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_INT64>(
                 input, &timeline_end_ts_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_highlight_process()));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.UiState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.UiState)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void UiState::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.UiState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 timeline_start_ts = 1;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64(1, this->timeline_start_ts(), output);
  }

  // optional int64 timeline_end_ts = 2;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64(2, this->timeline_end_ts(), output);
  }

  // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessage(
      3, _Internal::highlight_process(this), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.UiState)
}

size_t UiState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UiState)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *highlight_process_);
    }

    // optional int64 timeline_start_ts = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
          this->timeline_start_ts());
    }

    // optional int64 timeline_end_ts = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
          this->timeline_end_ts());
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UiState::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const UiState*>(
      &from));
}

void UiState::MergeFrom(const UiState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UiState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_highlight_process()->::perfetto::protos::UiState_HighlightProcess::MergeFrom(from.highlight_process());
    }
    if (cached_has_bits & 0x00000002u) {
      timeline_start_ts_ = from.timeline_start_ts_;
    }
    if (cached_has_bits & 0x00000004u) {
      timeline_end_ts_ = from.timeline_end_ts_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void UiState::CopyFrom(const UiState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UiState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UiState::IsInitialized() const {
  return true;
}

void UiState::InternalSwap(UiState* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(highlight_process_, other->highlight_process_);
  swap(timeline_start_ts_, other->timeline_start_ts_);
  swap(timeline_end_ts_, other->timeline_end_ts_);
}

std::string UiState::GetTypeName() const {
  return "perfetto.protos.UiState";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::UiState_HighlightProcess* Arena::CreateMaybeMessage< ::perfetto::protos::UiState_HighlightProcess >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::UiState_HighlightProcess >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::UiState* Arena::CreateMaybeMessage< ::perfetto::protos::UiState >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::UiState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

// Generated by protoc-gen-cppstream. DO NOT MODIFY.
// source: frameworks/base/core/proto/android/server/windowmanagertrace.proto

#ifndef ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_SERVER_WINDOWMANAGERTRACE_PROTO_STREAM_H
#define ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_SERVER_WINDOWMANAGERTRACE_PROTO_STREAM_H

namespace com {
namespace android {
namespace server {
namespace wm {

// message WindowManagerTraceFileProto
namespace WindowManagerTraceFileProto {
    // enum MagicNumber
    const int INVALID = 0;
    const int MAGIC_NUMBER_L = 1414416727;
    const int MAGIC_NUMBER_H = 1162035538;
    static const int _ENUM_MAGIC_NUMBER_COUNT = 3;
    static const char* _ENUM_MAGIC_NUMBER_NAMES[3] = {
        "INVALID",
        "L",
        "H",
    };
    static const int _ENUM_MAGIC_NUMBER_VALUES[3] = {
        INVALID,
        MAGIC_NUMBER_L,
        MAGIC_NUMBER_H,
    };

    // optional fixed64 magic_number = 1;
    const uint64_t MAGIC_NUMBER = 0x0000010600000001LL;

    // repeated .com.android.server.wm.WindowManagerTraceProto entry = 2;
    const uint64_t ENTRY = 0x0000020b00000002LL;

    static const int _FIELD_COUNT = 2;
    static const char* _FIELD_NAMES[2] = {
        "magic_number",
        "entry",
    };
    static const uint64_t _FIELD_IDS[2] = {
        MAGIC_NUMBER,
        ENTRY,
    };

} //WindowManagerTraceFileProto

// message WindowManagerTraceProto
namespace WindowManagerTraceProto {
    // optional fixed64 elapsed_realtime_nanos = 1;
    const uint64_t ELAPSED_REALTIME_NANOS = 0x0000010600000001LL;

    // optional string where = 2;
    const uint64_t WHERE = 0x0000010900000002LL;

    // optional .com.android.server.wm.WindowManagerServiceDumpProto window_manager_service = 3;
    const uint64_t WINDOW_MANAGER_SERVICE = 0x0000010b00000003LL;

    static const int _FIELD_COUNT = 3;
    static const char* _FIELD_NAMES[3] = {
        "elapsed_realtime_nanos",
        "where",
        "window_manager_service",
    };
    static const uint64_t _FIELD_IDS[3] = {
        ELAPSED_REALTIME_NANOS,
        WHERE,
        WINDOW_MANAGER_SERVICE,
    };

} //WindowManagerTraceProto

} // wm
} // server
} // android
} // com

#endif // ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_SERVER_WINDOWMANAGERTRACE_PROTO_STREAM_H

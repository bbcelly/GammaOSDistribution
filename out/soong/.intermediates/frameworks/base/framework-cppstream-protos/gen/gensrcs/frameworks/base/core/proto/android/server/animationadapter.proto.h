// Generated by protoc-gen-cppstream. DO NOT MODIFY.
// source: frameworks/base/core/proto/android/server/animationadapter.proto

#ifndef ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_SERVER_ANIMATIONADAPTER_PROTO_STREAM_H
#define ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_SERVER_ANIMATIONADAPTER_PROTO_STREAM_H

namespace com {
namespace android {
namespace server {
namespace wm {

// message AnimationAdapterProto
namespace AnimationAdapterProto {
    // optional .com.android.server.wm.LocalAnimationAdapterProto local = 1;
    const uint64_t LOCAL = 0x0000010b00000001LL;

    // optional .com.android.server.wm.RemoteAnimationAdapterWrapperProto remote = 2;
    const uint64_t REMOTE = 0x0000010b00000002LL;

    static const int _FIELD_COUNT = 2;
    static const char* _FIELD_NAMES[2] = {
        "local",
        "remote",
    };
    static const uint64_t _FIELD_IDS[2] = {
        LOCAL,
        REMOTE,
    };

} //AnimationAdapterProto

// message RemoteAnimationAdapterWrapperProto
namespace RemoteAnimationAdapterWrapperProto {
    // optional .android.view.RemoteAnimationTargetProto target = 1;
    const uint64_t TARGET = 0x0000010b00000001LL;

    static const int _FIELD_COUNT = 1;
    static const char* _FIELD_NAMES[1] = {
        "target",
    };
    static const uint64_t _FIELD_IDS[1] = {
        TARGET,
    };

} //RemoteAnimationAdapterWrapperProto

// message LocalAnimationAdapterProto
namespace LocalAnimationAdapterProto {
    // optional .com.android.server.wm.AnimationSpecProto animation_spec = 1;
    const uint64_t ANIMATION_SPEC = 0x0000010b00000001LL;

    static const int _FIELD_COUNT = 1;
    static const char* _FIELD_NAMES[1] = {
        "animation_spec",
    };
    static const uint64_t _FIELD_IDS[1] = {
        ANIMATION_SPEC,
    };

} //LocalAnimationAdapterProto

// message AnimationSpecProto
namespace AnimationSpecProto {
    // optional .com.android.server.wm.WindowAnimationSpecProto window = 1;
    const uint64_t WINDOW = 0x0000010b00000001LL;

    // optional .com.android.server.wm.MoveAnimationSpecProto move = 2;
    const uint64_t MOVE = 0x0000010b00000002LL;

    // optional .com.android.server.wm.AlphaAnimationSpecProto alpha = 3;
    const uint64_t ALPHA = 0x0000010b00000003LL;

    // optional .com.android.server.wm.RotationAnimationSpecProto rotate = 4;
    const uint64_t ROTATE = 0x0000010b00000004LL;

    static const int _FIELD_COUNT = 4;
    static const char* _FIELD_NAMES[4] = {
        "window",
        "move",
        "alpha",
        "rotate",
    };
    static const uint64_t _FIELD_IDS[4] = {
        WINDOW,
        MOVE,
        ALPHA,
        ROTATE,
    };

} //AnimationSpecProto

// message WindowAnimationSpecProto
namespace WindowAnimationSpecProto {
    // optional string animation = 1;
    const uint64_t ANIMATION = 0x0000010900000001LL;

    static const int _FIELD_COUNT = 1;
    static const char* _FIELD_NAMES[1] = {
        "animation",
    };
    static const uint64_t _FIELD_IDS[1] = {
        ANIMATION,
    };

} //WindowAnimationSpecProto

// message MoveAnimationSpecProto
namespace MoveAnimationSpecProto {
    // optional .android.graphics.PointProto from = 1;
    const uint64_t FROM = 0x0000010b00000001LL;

    // optional .android.graphics.PointProto to = 2;
    const uint64_t TO = 0x0000010b00000002LL;

    // optional int64 duration_ms = 3;
    const uint64_t DURATION_MS = 0x0000010300000003LL;

    static const int _FIELD_COUNT = 3;
    static const char* _FIELD_NAMES[3] = {
        "from",
        "to",
        "duration_ms",
    };
    static const uint64_t _FIELD_IDS[3] = {
        FROM,
        TO,
        DURATION_MS,
    };

} //MoveAnimationSpecProto

// message AlphaAnimationSpecProto
namespace AlphaAnimationSpecProto {
    // optional float from = 1;
    const uint64_t FROM = 0x0000010200000001LL;

    // optional float to = 2;
    const uint64_t TO = 0x0000010200000002LL;

    // optional int64 duration_ms = 3;
    const uint64_t DURATION_MS = 0x0000010300000003LL;

    static const int _FIELD_COUNT = 3;
    static const char* _FIELD_NAMES[3] = {
        "from",
        "to",
        "duration_ms",
    };
    static const uint64_t _FIELD_IDS[3] = {
        FROM,
        TO,
        DURATION_MS,
    };

} //AlphaAnimationSpecProto

// message RotationAnimationSpecProto
namespace RotationAnimationSpecProto {
    // optional float start_luma = 1;
    const uint64_t START_LUMA = 0x0000010200000001LL;

    // optional float end_luma = 2;
    const uint64_t END_LUMA = 0x0000010200000002LL;

    // optional int64 duration_ms = 3;
    const uint64_t DURATION_MS = 0x0000010300000003LL;

    static const int _FIELD_COUNT = 3;
    static const char* _FIELD_NAMES[3] = {
        "start_luma",
        "end_luma",
        "duration_ms",
    };
    static const uint64_t _FIELD_IDS[3] = {
        START_LUMA,
        END_LUMA,
        DURATION_MS,
    };

} //RotationAnimationSpecProto

} // wm
} // server
} // android
} // com

#endif // ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_SERVER_ANIMATIONADAPTER_PROTO_STREAM_H

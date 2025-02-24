// Generated by protoc-gen-cppstream. DO NOT MODIFY.
// source: frameworks/base/core/proto/android/view/windowlayoutparams.proto

#ifndef ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_VIEW_WINDOWLAYOUTPARAMS_PROTO_STREAM_H
#define ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_VIEW_WINDOWLAYOUTPARAMS_PROTO_STREAM_H

namespace android {
namespace view {

// message WindowLayoutParamsProto
namespace WindowLayoutParamsProto {
    // enum RotationAnimation
    const int ROTATION_ANIMATION_UNSPECIFIED = -1;
    const int ROTATION_ANIMATION_CROSSFADE = 1;
    const int ROTATION_ANIMATION_JUMPCUT = 2;
    const int ROTATION_ANIMATION_SEAMLESS = 3;
    static const int _ENUM_ROTATION_ANIMATION_COUNT = 4;
    static const char* _ENUM_ROTATION_ANIMATION_NAMES[4] = {
        "UNSPECIFIED",
        "CROSSFADE",
        "JUMPCUT",
        "SEAMLESS",
    };
    static const int _ENUM_ROTATION_ANIMATION_VALUES[4] = {
        ROTATION_ANIMATION_UNSPECIFIED,
        ROTATION_ANIMATION_CROSSFADE,
        ROTATION_ANIMATION_JUMPCUT,
        ROTATION_ANIMATION_SEAMLESS,
    };

    // optional int32 type = 1;
    const uint64_t TYPE = 0x0000010500000001LL;

    // optional int32 x = 2;
    const uint64_t X = 0x0000010500000002LL;

    // optional int32 y = 3;
    const uint64_t Y = 0x0000010500000003LL;

    // optional int32 width = 4;
    const uint64_t WIDTH = 0x0000010500000004LL;

    // optional int32 height = 5;
    const uint64_t HEIGHT = 0x0000010500000005LL;

    // optional float horizontal_margin = 6;
    const uint64_t HORIZONTAL_MARGIN = 0x0000010200000006LL;

    // optional float vertical_margin = 7;
    const uint64_t VERTICAL_MARGIN = 0x0000010200000007LL;

    // optional int32 gravity = 8;
    const uint64_t GRAVITY = 0x0000010500000008LL;

    // optional int32 soft_input_mode = 9;
    const uint64_t SOFT_INPUT_MODE = 0x0000010500000009LL;

    // optional .android.graphics.PixelFormatProto.Format format = 10;
    const uint64_t FORMAT = 0x0000010e0000000aLL;

    // optional int32 window_animations = 11;
    const uint64_t WINDOW_ANIMATIONS = 0x000001050000000bLL;

    // optional float alpha = 12;
    const uint64_t ALPHA = 0x000001020000000cLL;

    // optional float screen_brightness = 13;
    const uint64_t SCREEN_BRIGHTNESS = 0x000001020000000dLL;

    // optional float button_brightness = 14;
    const uint64_t BUTTON_BRIGHTNESS = 0x000001020000000eLL;

    // optional .android.view.WindowLayoutParamsProto.RotationAnimation rotation_animation = 15;
    const uint64_t ROTATION_ANIMATION = 0x0000010e0000000fLL;

    // optional float preferred_refresh_rate = 16;
    const uint64_t PREFERRED_REFRESH_RATE = 0x0000010200000010LL;

    // optional int32 preferred_display_mode_id = 17;
    const uint64_t PREFERRED_DISPLAY_MODE_ID = 0x0000010500000011LL;

    // optional bool has_system_ui_listeners = 18;
    const uint64_t HAS_SYSTEM_UI_LISTENERS = 0x0000010800000012LL;

    // optional uint32 input_feature_flags = 19;
    const uint64_t INPUT_FEATURE_FLAGS = 0x0000010d00000013LL;

    // optional int64 user_activity_timeout = 20;
    const uint64_t USER_ACTIVITY_TIMEOUT = 0x0000010300000014LL;

    // optional .android.view.DisplayProto.ColorMode color_mode = 23;
    const uint64_t COLOR_MODE = 0x0000010e00000017LL;

    // optional uint32 flags = 24;
    const uint64_t FLAGS = 0x0000010d00000018LL;

    // optional uint32 private_flags = 26;
    const uint64_t PRIVATE_FLAGS = 0x0000010d0000001aLL;

    // optional uint32 system_ui_visibility_flags = 27;
    const uint64_t SYSTEM_UI_VISIBILITY_FLAGS = 0x0000010d0000001bLL;

    // optional uint32 subtree_system_ui_visibility_flags = 28;
    const uint64_t SUBTREE_SYSTEM_UI_VISIBILITY_FLAGS = 0x0000010d0000001cLL;

    // optional uint32 appearance = 29;
    const uint64_t APPEARANCE = 0x0000010d0000001dLL;

    // optional uint32 behavior = 30;
    const uint64_t BEHAVIOR = 0x0000010d0000001eLL;

    // optional uint32 fit_insets_types = 31;
    const uint64_t FIT_INSETS_TYPES = 0x0000010d0000001fLL;

    // optional uint32 fit_insets_sides = 32;
    const uint64_t FIT_INSETS_SIDES = 0x0000010d00000020LL;

    // optional bool fit_ignore_visibility = 33;
    const uint64_t FIT_IGNORE_VISIBILITY = 0x0000010800000021LL;

    static const int _FIELD_COUNT = 30;
    static const char* _FIELD_NAMES[30] = {
        "type",
        "x",
        "y",
        "width",
        "height",
        "horizontal_margin",
        "vertical_margin",
        "gravity",
        "soft_input_mode",
        "format",
        "window_animations",
        "alpha",
        "screen_brightness",
        "button_brightness",
        "rotation_animation",
        "preferred_refresh_rate",
        "preferred_display_mode_id",
        "has_system_ui_listeners",
        "input_feature_flags",
        "user_activity_timeout",
        "color_mode",
        "flags",
        "private_flags",
        "system_ui_visibility_flags",
        "subtree_system_ui_visibility_flags",
        "appearance",
        "behavior",
        "fit_insets_types",
        "fit_insets_sides",
        "fit_ignore_visibility",
    };
    static const uint64_t _FIELD_IDS[30] = {
        TYPE,
        X,
        Y,
        WIDTH,
        HEIGHT,
        HORIZONTAL_MARGIN,
        VERTICAL_MARGIN,
        GRAVITY,
        SOFT_INPUT_MODE,
        FORMAT,
        WINDOW_ANIMATIONS,
        ALPHA,
        SCREEN_BRIGHTNESS,
        BUTTON_BRIGHTNESS,
        ROTATION_ANIMATION,
        PREFERRED_REFRESH_RATE,
        PREFERRED_DISPLAY_MODE_ID,
        HAS_SYSTEM_UI_LISTENERS,
        INPUT_FEATURE_FLAGS,
        USER_ACTIVITY_TIMEOUT,
        COLOR_MODE,
        FLAGS,
        PRIVATE_FLAGS,
        SYSTEM_UI_VISIBILITY_FLAGS,
        SUBTREE_SYSTEM_UI_VISIBILITY_FLAGS,
        APPEARANCE,
        BEHAVIOR,
        FIT_INSETS_TYPES,
        FIT_INSETS_SIDES,
        FIT_IGNORE_VISIBILITY,
    };

} //WindowLayoutParamsProto

} // view
} // android

#endif // ANDROID_FRAMEWORKS_BASE_CORE_PROTO_ANDROID_VIEW_WINDOWLAYOUTPARAMS_PROTO_STREAM_H

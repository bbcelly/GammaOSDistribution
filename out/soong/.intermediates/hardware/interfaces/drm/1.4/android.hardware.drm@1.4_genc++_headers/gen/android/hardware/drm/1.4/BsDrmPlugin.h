#ifndef HIDL_GENERATED_ANDROID_HARDWARE_DRM_V1_4_BSDRMPLUGIN_H
#define HIDL_GENERATED_ANDROID_HARDWARE_DRM_V1_4_BSDRMPLUGIN_H

#include <android-base/macros.h>
#include <cutils/trace.h>
#include <future>
#include <android/hardware/drm/1.4/IDrmPlugin.h>

#include <hidl/HidlPassthroughSupport.h>
#include <hidl/TaskRunner.h>
namespace android {
namespace hardware {
namespace drm {
namespace V1_4 {

struct BsDrmPlugin : IDrmPlugin, ::android::hardware::details::HidlInstrumentor {
    explicit BsDrmPlugin(const ::android::sp<IDrmPlugin> impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IDrmPlugin Pure;

    typedef ::android::hardware::details::bs_tag _hidl_tag;

    // Methods from ::android::hardware::drm::V1_0::IDrmPlugin follow.
    ::android::hardware::Return<void> openSession(openSession_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::openSession::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "openSession", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->openSession([&](const auto &_hidl_out_status, const auto &_hidl_out_sessionId) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_sessionId);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "openSession", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_sessionId);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> closeSession(const ::android::hardware::hidl_vec<uint8_t>& sessionId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::closeSession::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "closeSession", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->closeSession(sessionId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "closeSession", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getKeyRequest(const ::android::hardware::hidl_vec<uint8_t>& scope, const ::android::hardware::hidl_vec<uint8_t>& initData, const ::android::hardware::hidl_string& mimeType, ::android::hardware::drm::V1_0::KeyType keyType, const ::android::hardware::hidl_vec<::android::hardware::drm::V1_0::KeyValue>& optionalParameters, getKeyRequest_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getKeyRequest::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&scope);
            _hidl_args.push_back((void *)&initData);
            _hidl_args.push_back((void *)&mimeType);
            _hidl_args.push_back((void *)&keyType);
            _hidl_args.push_back((void *)&optionalParameters);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "getKeyRequest", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getKeyRequest(scope, initData, mimeType, keyType, optionalParameters, [&](const auto &_hidl_out_status, const auto &_hidl_out_request, const auto &_hidl_out_requestType, const auto &_hidl_out_defaultUrl) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_request);
                _hidl_args.push_back((void *)&_hidl_out_requestType);
                _hidl_args.push_back((void *)&_hidl_out_defaultUrl);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "getKeyRequest", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_request, _hidl_out_requestType, _hidl_out_defaultUrl);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> provideKeyResponse(const ::android::hardware::hidl_vec<uint8_t>& scope, const ::android::hardware::hidl_vec<uint8_t>& response, provideKeyResponse_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::provideKeyResponse::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&scope);
            _hidl_args.push_back((void *)&response);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "provideKeyResponse", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->provideKeyResponse(scope, response, [&](const auto &_hidl_out_status, const auto &_hidl_out_keySetId) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_keySetId);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "provideKeyResponse", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_keySetId);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> removeKeys(const ::android::hardware::hidl_vec<uint8_t>& sessionId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::removeKeys::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "removeKeys", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->removeKeys(sessionId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "removeKeys", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> restoreKeys(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<uint8_t>& keySetId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::restoreKeys::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keySetId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "restoreKeys", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->restoreKeys(sessionId, keySetId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "restoreKeys", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> queryKeyStatus(const ::android::hardware::hidl_vec<uint8_t>& sessionId, queryKeyStatus_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::queryKeyStatus::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "queryKeyStatus", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->queryKeyStatus(sessionId, [&](const auto &_hidl_out_status, const auto &_hidl_out_infoList) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_infoList);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "queryKeyStatus", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_infoList);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getProvisionRequest(const ::android::hardware::hidl_string& certificateType, const ::android::hardware::hidl_string& certificateAuthority, getProvisionRequest_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getProvisionRequest::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&certificateType);
            _hidl_args.push_back((void *)&certificateAuthority);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "getProvisionRequest", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getProvisionRequest(certificateType, certificateAuthority, [&](const auto &_hidl_out_status, const auto &_hidl_out_request, const auto &_hidl_out_defaultUrl) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_request);
                _hidl_args.push_back((void *)&_hidl_out_defaultUrl);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "getProvisionRequest", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_request, _hidl_out_defaultUrl);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> provideProvisionResponse(const ::android::hardware::hidl_vec<uint8_t>& response, provideProvisionResponse_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::provideProvisionResponse::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&response);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "provideProvisionResponse", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->provideProvisionResponse(response, [&](const auto &_hidl_out_status, const auto &_hidl_out_certificate, const auto &_hidl_out_wrappedKey) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_certificate);
                _hidl_args.push_back((void *)&_hidl_out_wrappedKey);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "provideProvisionResponse", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_certificate, _hidl_out_wrappedKey);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getSecureStops(getSecureStops_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getSecureStops::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "getSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getSecureStops([&](const auto &_hidl_out_status, const auto &_hidl_out_secureStops) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_secureStops);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "getSecureStops", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_secureStops);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getSecureStop(const ::android::hardware::hidl_vec<uint8_t>& secureStopId, getSecureStop_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getSecureStop::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&secureStopId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "getSecureStop", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getSecureStop(secureStopId, [&](const auto &_hidl_out_status, const auto &_hidl_out_secureStop) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_secureStop);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "getSecureStop", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_secureStop);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> releaseAllSecureStops() override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::releaseAllSecureStops::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "releaseAllSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->releaseAllSecureStops();

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "releaseAllSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> releaseSecureStop(const ::android::hardware::hidl_vec<uint8_t>& secureStopId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::releaseSecureStop::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&secureStopId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "releaseSecureStop", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->releaseSecureStop(secureStopId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "releaseSecureStop", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getPropertyString(const ::android::hardware::hidl_string& propertyName, getPropertyString_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getPropertyString::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&propertyName);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "getPropertyString", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getPropertyString(propertyName, [&](const auto &_hidl_out_status, const auto &_hidl_out_value) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_value);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "getPropertyString", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_value);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getPropertyByteArray(const ::android::hardware::hidl_string& propertyName, getPropertyByteArray_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getPropertyByteArray::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&propertyName);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "getPropertyByteArray", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getPropertyByteArray(propertyName, [&](const auto &_hidl_out_status, const auto &_hidl_out_value) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_value);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "getPropertyByteArray", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_value);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> setPropertyString(const ::android::hardware::hidl_string& propertyName, const ::android::hardware::hidl_string& value) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::setPropertyString::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&propertyName);
            _hidl_args.push_back((void *)&value);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "setPropertyString", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->setPropertyString(propertyName, value);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "setPropertyString", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> setPropertyByteArray(const ::android::hardware::hidl_string& propertyName, const ::android::hardware::hidl_vec<uint8_t>& value) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::setPropertyByteArray::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&propertyName);
            _hidl_args.push_back((void *)&value);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "setPropertyByteArray", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->setPropertyByteArray(propertyName, value);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "setPropertyByteArray", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> setCipherAlgorithm(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_string& algorithm) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::setCipherAlgorithm::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&algorithm);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "setCipherAlgorithm", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->setCipherAlgorithm(sessionId, algorithm);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "setCipherAlgorithm", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> setMacAlgorithm(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_string& algorithm) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::setMacAlgorithm::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&algorithm);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "setMacAlgorithm", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->setMacAlgorithm(sessionId, algorithm);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "setMacAlgorithm", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> encrypt(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<uint8_t>& keyId, const ::android::hardware::hidl_vec<uint8_t>& input, const ::android::hardware::hidl_vec<uint8_t>& iv, encrypt_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::encrypt::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keyId);
            _hidl_args.push_back((void *)&input);
            _hidl_args.push_back((void *)&iv);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "encrypt", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->encrypt(sessionId, keyId, input, iv, [&](const auto &_hidl_out_status, const auto &_hidl_out_output) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_output);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "encrypt", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_output);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> decrypt(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<uint8_t>& keyId, const ::android::hardware::hidl_vec<uint8_t>& input, const ::android::hardware::hidl_vec<uint8_t>& iv, decrypt_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::decrypt::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keyId);
            _hidl_args.push_back((void *)&input);
            _hidl_args.push_back((void *)&iv);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "decrypt", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->decrypt(sessionId, keyId, input, iv, [&](const auto &_hidl_out_status, const auto &_hidl_out_output) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_output);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "decrypt", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_output);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> sign(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<uint8_t>& keyId, const ::android::hardware::hidl_vec<uint8_t>& message, sign_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::sign::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keyId);
            _hidl_args.push_back((void *)&message);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "sign", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->sign(sessionId, keyId, message, [&](const auto &_hidl_out_status, const auto &_hidl_out_signature) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_signature);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "sign", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_signature);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> verify(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<uint8_t>& keyId, const ::android::hardware::hidl_vec<uint8_t>& message, const ::android::hardware::hidl_vec<uint8_t>& signature, verify_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::verify::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keyId);
            _hidl_args.push_back((void *)&message);
            _hidl_args.push_back((void *)&signature);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "verify", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->verify(sessionId, keyId, message, signature, [&](const auto &_hidl_out_status, const auto &_hidl_out_match) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_match);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "verify", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_match);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> signRSA(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_string& algorithm, const ::android::hardware::hidl_vec<uint8_t>& message, const ::android::hardware::hidl_vec<uint8_t>& wrappedkey, signRSA_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::signRSA::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&algorithm);
            _hidl_args.push_back((void *)&message);
            _hidl_args.push_back((void *)&wrappedkey);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "signRSA", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->signRSA(sessionId, algorithm, message, wrappedkey, [&](const auto &_hidl_out_status, const auto &_hidl_out_signature) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_signature);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "signRSA", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_signature);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> setListener(const ::android::sp<::android::hardware::drm::V1_0::IDrmPluginListener>& listener) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::setListener::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&listener);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "setListener", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::sp<::android::hardware::drm::V1_0::IDrmPluginListener> _hidl_wrapped_listener;
        if (listener != nullptr && !listener->isRemote()) {
            _hidl_wrapped_listener = ::android::hardware::details::wrapPassthrough(listener);
            if (_hidl_wrapped_listener == nullptr) {
                return ::android::hardware::Status::fromExceptionCode(
                        ::android::hardware::Status::EX_TRANSACTION_FAILED,
                        "Cannot wrap passthrough interface.");
            }
        } else {
            _hidl_wrapped_listener = listener;
        }

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->setListener(_hidl_wrapped_listener);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "setListener", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> sendEvent(::android::hardware::drm::V1_0::EventType eventType, const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<uint8_t>& data) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::sendEvent::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&eventType);
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&data);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "sendEvent", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->sendEvent(eventType, sessionId, data);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "sendEvent", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> sendExpirationUpdate(const ::android::hardware::hidl_vec<uint8_t>& sessionId, int64_t expiryTimeInMS) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::sendExpirationUpdate::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&expiryTimeInMS);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "sendExpirationUpdate", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->sendExpirationUpdate(sessionId, expiryTimeInMS);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "sendExpirationUpdate", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> sendKeysChange(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<::android::hardware::drm::V1_0::KeyStatus>& keyStatusList, bool hasNewUsableKey) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::sendKeysChange::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keyStatusList);
            _hidl_args.push_back((void *)&hasNewUsableKey);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.0", "IDrmPlugin", "sendKeysChange", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->sendKeysChange(sessionId, keyStatusList, hasNewUsableKey);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.0", "IDrmPlugin", "sendKeysChange", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }

    // Methods from ::android::hardware::drm::V1_1::IDrmPlugin follow.
    ::android::hardware::Return<void> openSession_1_1(::android::hardware::drm::V1_1::SecurityLevel securityLevel, openSession_1_1_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::openSession_1_1::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&securityLevel);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "openSession_1_1", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->openSession_1_1(securityLevel, [&](const auto &_hidl_out_status, const auto &_hidl_out_sessionId) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_sessionId);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "openSession_1_1", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_sessionId);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getKeyRequest_1_1(const ::android::hardware::hidl_vec<uint8_t>& scope, const ::android::hardware::hidl_vec<uint8_t>& initData, const ::android::hardware::hidl_string& mimeType, ::android::hardware::drm::V1_0::KeyType keyType, const ::android::hardware::hidl_vec<::android::hardware::drm::V1_0::KeyValue>& optionalParameters, getKeyRequest_1_1_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getKeyRequest_1_1::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&scope);
            _hidl_args.push_back((void *)&initData);
            _hidl_args.push_back((void *)&mimeType);
            _hidl_args.push_back((void *)&keyType);
            _hidl_args.push_back((void *)&optionalParameters);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "getKeyRequest_1_1", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getKeyRequest_1_1(scope, initData, mimeType, keyType, optionalParameters, [&](const auto &_hidl_out_status, const auto &_hidl_out_request, const auto &_hidl_out_requestType, const auto &_hidl_out_defaultUrl) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_request);
                _hidl_args.push_back((void *)&_hidl_out_requestType);
                _hidl_args.push_back((void *)&_hidl_out_defaultUrl);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "getKeyRequest_1_1", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_request, _hidl_out_requestType, _hidl_out_defaultUrl);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getHdcpLevels(getHdcpLevels_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getHdcpLevels::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "getHdcpLevels", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getHdcpLevels([&](const auto &_hidl_out_status, const auto &_hidl_out_connectedLevel, const auto &_hidl_out_maxLevel) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_connectedLevel);
                _hidl_args.push_back((void *)&_hidl_out_maxLevel);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "getHdcpLevels", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_connectedLevel, _hidl_out_maxLevel);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getNumberOfSessions(getNumberOfSessions_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getNumberOfSessions::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "getNumberOfSessions", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getNumberOfSessions([&](const auto &_hidl_out_status, const auto &_hidl_out_currentSessions, const auto &_hidl_out_maxSessions) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_currentSessions);
                _hidl_args.push_back((void *)&_hidl_out_maxSessions);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "getNumberOfSessions", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_currentSessions, _hidl_out_maxSessions);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getSecurityLevel(const ::android::hardware::hidl_vec<uint8_t>& sessionId, getSecurityLevel_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getSecurityLevel::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "getSecurityLevel", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getSecurityLevel(sessionId, [&](const auto &_hidl_out_status, const auto &_hidl_out_level) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_level);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "getSecurityLevel", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_level);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getMetrics(getMetrics_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getMetrics::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "getMetrics", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getMetrics([&](const auto &_hidl_out_status, const auto &_hidl_out_metric_groups) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_metric_groups);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "getMetrics", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_metric_groups);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getSecureStopIds(getSecureStopIds_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getSecureStopIds::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "getSecureStopIds", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getSecureStopIds([&](const auto &_hidl_out_status, const auto &_hidl_out_secureStopIds) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_secureStopIds);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "getSecureStopIds", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_secureStopIds);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> releaseSecureStops(const ::android::hardware::drm::V1_1::SecureStopRelease& ssRelease) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::releaseSecureStops::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&ssRelease);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "releaseSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->releaseSecureStops(ssRelease);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "releaseSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> removeSecureStop(const ::android::hardware::hidl_vec<uint8_t>& secureStopId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::removeSecureStop::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&secureStopId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "removeSecureStop", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->removeSecureStop(secureStopId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "removeSecureStop", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> removeAllSecureStops() override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::removeAllSecureStops::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.1", "IDrmPlugin", "removeAllSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->removeAllSecureStops();

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.1", "IDrmPlugin", "removeAllSecureStops", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }

    // Methods from ::android::hardware::drm::V1_2::IDrmPlugin follow.
    ::android::hardware::Return<void> getOfflineLicenseKeySetIds(getOfflineLicenseKeySetIds_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getOfflineLicenseKeySetIds::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "getOfflineLicenseKeySetIds", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getOfflineLicenseKeySetIds([&](const auto &_hidl_out_status, const auto &_hidl_out_keySetIds) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_keySetIds);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "getOfflineLicenseKeySetIds", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_keySetIds);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> removeOfflineLicense(const ::android::hardware::hidl_vec<uint8_t>& keySetId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::removeOfflineLicense::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&keySetId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "removeOfflineLicense", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->removeOfflineLicense(keySetId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "removeOfflineLicense", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getOfflineLicenseState(const ::android::hardware::hidl_vec<uint8_t>& keySetId, getOfflineLicenseState_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getOfflineLicenseState::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&keySetId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "getOfflineLicenseState", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getOfflineLicenseState(keySetId, [&](const auto &_hidl_out_status, const auto &_hidl_out_state) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_state);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "getOfflineLicenseState", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_state);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getKeyRequest_1_2(const ::android::hardware::hidl_vec<uint8_t>& scope, const ::android::hardware::hidl_vec<uint8_t>& initData, const ::android::hardware::hidl_string& mimeType, ::android::hardware::drm::V1_0::KeyType keyType, const ::android::hardware::hidl_vec<::android::hardware::drm::V1_0::KeyValue>& optionalParameters, getKeyRequest_1_2_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getKeyRequest_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&scope);
            _hidl_args.push_back((void *)&initData);
            _hidl_args.push_back((void *)&mimeType);
            _hidl_args.push_back((void *)&keyType);
            _hidl_args.push_back((void *)&optionalParameters);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "getKeyRequest_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getKeyRequest_1_2(scope, initData, mimeType, keyType, optionalParameters, [&](const auto &_hidl_out_status, const auto &_hidl_out_request, const auto &_hidl_out_requestType, const auto &_hidl_out_defaultUrl) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_request);
                _hidl_args.push_back((void *)&_hidl_out_requestType);
                _hidl_args.push_back((void *)&_hidl_out_defaultUrl);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "getKeyRequest_1_2", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_request, _hidl_out_requestType, _hidl_out_defaultUrl);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getProvisionRequest_1_2(const ::android::hardware::hidl_string& certificateType, const ::android::hardware::hidl_string& certificateAuthority, getProvisionRequest_1_2_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getProvisionRequest_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&certificateType);
            _hidl_args.push_back((void *)&certificateAuthority);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "getProvisionRequest_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getProvisionRequest_1_2(certificateType, certificateAuthority, [&](const auto &_hidl_out_status, const auto &_hidl_out_request, const auto &_hidl_out_defaultUrl) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_request);
                _hidl_args.push_back((void *)&_hidl_out_defaultUrl);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "getProvisionRequest_1_2", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_request, _hidl_out_defaultUrl);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getHdcpLevels_1_2(getHdcpLevels_1_2_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getHdcpLevels_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "getHdcpLevels_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getHdcpLevels_1_2([&](const auto &_hidl_out_status, const auto &_hidl_out_connectedLevel, const auto &_hidl_out_maxLevel) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_connectedLevel);
                _hidl_args.push_back((void *)&_hidl_out_maxLevel);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "getHdcpLevels_1_2", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_connectedLevel, _hidl_out_maxLevel);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> sendSessionLostState(const ::android::hardware::hidl_vec<uint8_t>& sessionId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::sendSessionLostState::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "sendSessionLostState", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->sendSessionLostState(sessionId);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "sendSessionLostState", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> sendKeysChange_1_2(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_vec<::android::hardware::drm::V1_2::KeyStatus>& keyStatusList, bool hasNewUsableKey) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::sendKeysChange_1_2::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&keyStatusList);
            _hidl_args.push_back((void *)&hasNewUsableKey);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.2", "IDrmPlugin", "sendKeysChange_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->sendKeysChange_1_2(sessionId, keyStatusList, hasNewUsableKey);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.2", "IDrmPlugin", "sendKeysChange_1_2", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }

    // Methods from ::android::hardware::drm::V1_4::IDrmPlugin follow.
    ::android::hardware::Return<bool> requiresSecureDecoder(const ::android::hardware::hidl_string& mime, ::android::hardware::drm::V1_1::SecurityLevel level) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::requiresSecureDecoder::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&mime);
            _hidl_args.push_back((void *)&level);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.4", "IDrmPlugin", "requiresSecureDecoder", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->requiresSecureDecoder(mime, level);

        bool _hidl_out_secureRequired = _hidl_return;
        (void) _hidl_out_secureRequired;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_secureRequired);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.4", "IDrmPlugin", "requiresSecureDecoder", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<bool> requiresSecureDecoderDefault(const ::android::hardware::hidl_string& mime) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::requiresSecureDecoderDefault::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&mime);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.4", "IDrmPlugin", "requiresSecureDecoderDefault", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->requiresSecureDecoderDefault(mime);

        bool _hidl_out_secureRequired = _hidl_return;
        (void) _hidl_out_secureRequired;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_secureRequired);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.4", "IDrmPlugin", "requiresSecureDecoderDefault", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<::android::hardware::drm::V1_0::Status> setPlaybackId(const ::android::hardware::hidl_vec<uint8_t>& sessionId, const ::android::hardware::hidl_string& playbackId) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::setPlaybackId::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&sessionId);
            _hidl_args.push_back((void *)&playbackId);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.4", "IDrmPlugin", "setPlaybackId", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->setPlaybackId(sessionId, playbackId);

        ::android::hardware::drm::V1_0::Status _hidl_out_status = _hidl_return;
        (void) _hidl_out_status;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.4", "IDrmPlugin", "setPlaybackId", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getLogMessages(getLogMessages_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getLogMessages::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hardware.drm", "1.4", "IDrmPlugin", "getLogMessages", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getLogMessages([&](const auto &_hidl_out_status, const auto &_hidl_out_logMessages) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_status);
                _hidl_args.push_back((void *)&_hidl_out_logMessages);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hardware.drm", "1.4", "IDrmPlugin", "getLogMessages", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_status, _hidl_out_logMessages);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::interfaceChain::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "interfaceChain", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->interfaceChain([&](const auto &_hidl_out_descriptors) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptors);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "interfaceChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_descriptors);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::debug::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&fd);
            _hidl_args.push_back((void *)&options);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "debug", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->debug(fd, options);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "debug", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::interfaceDescriptor::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "interfaceDescriptor", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->interfaceDescriptor([&](const auto &_hidl_out_descriptor) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptor);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "interfaceDescriptor", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_descriptor);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getHashChain::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "getHashChain", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getHashChain([&](const auto &_hidl_out_hashchain) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_hashchain);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "getHashChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_hashchain);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> setHALInstrumentation() override {
        configureInstrumentation();
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::linkToDeath::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            _hidl_args.push_back((void *)&cookie);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "linkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->linkToDeath(recipient, cookie);

        bool _hidl_out_success = _hidl_return;
        (void) _hidl_out_success;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "linkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> ping() override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::ping::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "ping", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->ping();

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "ping", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::getDebugInfo::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "getDebugInfo", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->getDebugInfo([&](const auto &_hidl_out_info) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_info);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "getDebugInfo", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_info);
        });

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }
    ::android::hardware::Return<void> notifySyspropsChanged() override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::notifySyspropsChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "notifySyspropsChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "notifySyspropsChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IDrmPlugin::unlinkToDeath::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "android.hidl.base", "1.0", "IBase", "unlinkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        ::android::hardware::Status _hidl_error = ::android::hardware::Status::ok();
        auto _hidl_return = mImpl->unlinkToDeath(recipient);

        bool _hidl_out_success = _hidl_return;
        (void) _hidl_out_success;
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "android.hidl.base", "1.0", "IBase", "unlinkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (!_hidl_error.isOk()) return _hidl_error;
        return _hidl_return;
    }

private:
    const ::android::sp<IDrmPlugin> mImpl;
    ::android::hardware::details::TaskRunner mOnewayQueue;

    ::android::hardware::Return<void> addOnewayTask(std::function<void(void)>);

};

}  // namespace V1_4
}  // namespace drm
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_DRM_V1_4_BSDRMPLUGIN_H

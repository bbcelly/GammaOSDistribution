#ifndef HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_AUDIO_V2_1_IBLUETOOTHAUDIOPROVIDER_H
#define HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_AUDIO_V2_1_IBLUETOOTHAUDIOPROVIDER_H

#include <android/hardware/bluetooth/audio/2.0/IBluetoothAudioPort.h>
#include <android/hardware/bluetooth/audio/2.0/IBluetoothAudioProvider.h>
#include <android/hardware/bluetooth/audio/2.0/types.h>
#include <android/hardware/bluetooth/audio/2.1/types.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_1 {

/**
 * HAL interface from the Bluetooth stack to the Audio HAL
 *
 * The Bluetooth stack calls methods in this interface to start and end audio
 * sessions and sends callback events to the Audio HAL.
 *
 * Note: For HIDL APIs with a "generates" statement, the callback parameter used
 * for return value must be invoked synchronously before the API call returns.
 */
struct IBluetoothAudioProvider : public ::android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "android.hardware.bluetooth.audio@2.1::IBluetoothAudioProvider"
     */
    static const char* descriptor;

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * Return callback for startSession
     */
    using startSession_cb = std::function<void(::android::hardware::bluetooth::audio::V2_0::Status status, const ::android::hardware::MQDescriptorSync<uint8_t>& dataMQ)>;
    /**
     * This method indicates that the Bluetooth stack is ready to stream audio.
     * It registers an instance of IBluetoothAudioPort with and provides the
     * current negotiated codec to the Audio HAL. After this method is called,
     * the Audio HAL can invoke IBluetoothAudioPort.startStream().
     *
     * Note: endSession() must be called to unregister this IBluetoothAudioPort
     *
     * @param hostIf An instance of IBluetoothAudioPort for stream control
     * @param audioConfig The audio configuration negotiated with the remote
     *    device. The PCM parameters are set if software based encoding,
     *    otherwise the correct codec configuration is used for hardware
     *    encoding.
     *
     * @return status One of the following
     *    SUCCESS if this IBluetoothAudioPort was successfully registered with
     *        the Audio HAL
     *    UNSUPPORTED_CODEC_CONFIGURATION if the Audio HAL cannot register this
     *        IBluetoothAudioPort with the given codec configuration
     *    FAILURE if the Audio HAL cannot register this IBluetoothAudioPort for
     *        any other reason
     * @return dataMQ The fast message queue for audio data from this provider.
     *    Audio data will be in PCM format as specified by the
     *    audioConfig.pcmConfig parameter.
     *    Invalid if streaming is offloaded to hardware or on failure.
     */
    virtual ::android::hardware::Return<void> startSession(const ::android::sp<::android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort>& hostIf, const ::android::hardware::bluetooth::audio::V2_0::AudioConfiguration& audioConfig, startSession_cb _hidl_cb) = 0;

    /**
     * Callback for IBluetoothAudioPort.startStream()
     *
     * @param status SUCCESS or FAILURE
     */
    virtual ::android::hardware::Return<void> streamStarted(::android::hardware::bluetooth::audio::V2_0::Status status) = 0;

    /**
     * Callback for IBluetoothAudioPort.suspendStream()
     *
     * @param status SUCCESS or FAILURE
     */
    virtual ::android::hardware::Return<void> streamSuspended(::android::hardware::bluetooth::audio::V2_0::Status status) = 0;

    /**
     * Ends the current session and unregisters the IBluetoothAudioPort
     * interface.
     */
    virtual ::android::hardware::Return<void> endSession() = 0;

    /**
     * Return callback for startSession_2_1
     */
    using startSession_2_1_cb = std::function<void(::android::hardware::bluetooth::audio::V2_0::Status status, const ::android::hardware::MQDescriptorSync<uint8_t>& dataMQ)>;
    /**
     * This method indicates that the Bluetooth stack is ready to stream audio.
     * It registers an instance of IBluetoothAudioPort with and provides the
     * current negotiated codec to the Audio HAL. After this method is called,
     * the Audio HAL can invoke IBluetoothAudioPort.startStream().
     *
     * Note: endSession() must be called to unregister this IBluetoothAudioPort
     *
     * @param hostIf An instance of IBluetoothAudioPort for stream control
     * @param audioConfig The audio configuration negotiated with the remote
     *    device. The PCM parameters are set if software based encoding,
     *    otherwise the correct codec configuration is used for hardware
     *    encoding.
     *
     * @return status One of the following
     *    SUCCESS if this IBluetoothAudioPort was successfully registered with
     *        the Audio HAL
     *    UNSUPPORTED_CODEC_CONFIGURATION if the Audio HAL cannot register this
     *        IBluetoothAudioPort with the given codec configuration
     *    FAILURE if the Audio HAL cannot register this IBluetoothAudioPort for
     *        any other reason
     * @return dataMQ The fast message queue for audio data from/to this
     *    provider. Audio data will be in PCM format as specified by the
     *    audioConfig.pcmConfig parameter. Invalid if streaming is offloaded
     *    from/to hardware or on failure.
     */
    virtual ::android::hardware::Return<void> startSession_2_1(const ::android::sp<::android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort>& hostIf, const ::android::hardware::bluetooth::audio::V2_1::AudioConfiguration& audioConfig, startSession_2_1_cb _hidl_cb) = 0;

    /**
     * Return callback for interfaceChain
     */
    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     ["android.hardware.foo@1.0::IChild",
     *      "android.hardware.foo@1.0::IParent"
     *      "android.hidl.base@1.0::IBase"]
     *
     * @return descriptors a vector of descriptors of the run-time type of the
     *         object.
     */
    virtual ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;

    /*
     * Emit diagnostic information to the given file.
     *
     * Optionally overriden.
     *
     * @param fd      File descriptor to dump data to.
     *                Must only be used for the duration of this call.
     * @param options Arguments for debugging.
     *                Must support empty for default debug information.
     */
    virtual ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;

    /**
     * Return callback for interfaceDescriptor
     */
    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceDescriptor on an IChild object must yield
     *     "android.hardware.foo@1.0::IChild"
     *
     * @return descriptor a descriptor of the run-time type of the
     *         object (the first element of the vector returned by
     *         interfaceChain())
     */
    virtual ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;

    /**
     * Return callback for getHashChain
     */
    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    /*
     * Returns hashes of the source HAL files that define the interfaces of the
     * runtime type information on the object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     [(hash of IChild.hal),
     *      (hash of IParent.hal)
     *      (hash of IBase.hal)].
     *
     * SHA-256 is used as the hashing algorithm. Each hash has 32 bytes
     * according to SHA-256 standard.
     *
     * @return hashchain a vector of SHA-1 digests
     */
    virtual ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;

    /*
     * This method trigger the interface to enable/disable instrumentation based
     * on system property hal.instrumentation.enable.
     */
    virtual ::android::hardware::Return<void> setHALInstrumentation() override;

    /*
     * Registers a death recipient, to be called when the process hosting this
     * interface dies.
     *
     * @param recipient a hidl_death_recipient callback object
     * @param cookie a cookie that must be returned with the callback
     * @return success whether the death recipient was registered successfully.
     */
    virtual ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;

    /*
     * Provides way to determine if interface is running without requesting
     * any functionality.
     */
    virtual ::android::hardware::Return<void> ping() override;

    /**
     * Return callback for getDebugInfo
     */
    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    /*
     * Get debug information on references on this interface.
     * @return info debugging information. See comments of DebugInfo.
     */
    virtual ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;

    /*
     * This method notifies the interface that one or more system properties
     * have changed. The default implementation calls
     * (C++)  report_sysprop_change() in libcutils or
     * (Java) android.os.SystemProperties.reportSyspropChanged,
     * which in turn calls a set of registered callbacks (eg to update trace
     * tags).
     */
    virtual ::android::hardware::Return<void> notifySyspropsChanged() override;

    /*
     * Unregisters the registered death recipient. If this service was registered
     * multiple times with the same exact death recipient, this unlinks the most
     * recently registered one.
     *
     * @param recipient a previously registered hidl_death_recipient callback
     * @return success whether the death recipient was unregistered successfully.
     */
    virtual ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

    // cast static functions
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>> castFrom(const ::android::sp<::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>> castFrom(const ::android::sp<::android::hardware::bluetooth::audio::V2_0::IBluetoothAudioProvider>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

    // helper methods for interactions with the hwservicemanager
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is currently not available or not in the VINTF manifest on a Trebilized
     * device, this will return nullptr. This is useful when you don't want to block
     * during device boot. If getStub is true, this will try to return an unwrapped
     * passthrough implementation in the same process. This is useful when getting an
     * implementation from the same partition/compilation group.
     *
     * In general, prefer getService(std::string,bool)
     */
    static ::android::sp<IBluetoothAudioProvider> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudioProvider> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudioProvider> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IBluetoothAudioProvider> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<IBluetoothAudioProvider> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudioProvider> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudioProvider> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IBluetoothAudioProvider> getService(bool getStub) { return getService("default", getStub); }
    /**
     * Registers a service with the service manager. For Trebilized devices, the service
     * must also be in the VINTF manifest.
     */
    __attribute__ ((warn_unused_result))::android::status_t registerAsService(const std::string &serviceName="default");
    /**
     * Registers for notifications for when a service is registered.
     */
    static bool registerForNotifications(
            const std::string &serviceName,
            const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification);
};

//
// type declarations for package
//

static inline std::string toString(const ::android::sp<::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>& o);

//
// type header definitions for package
//

static inline std::string toString(const ::android::sp<::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>& o) {
    std::string os = "[class or subclass of ";
    os += ::android::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V2_1
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android

//
// global type declarations for package
//


#endif  // HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_AUDIO_V2_1_IBLUETOOTHAUDIOPROVIDER_H

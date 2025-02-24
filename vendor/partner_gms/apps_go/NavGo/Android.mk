###############################################################################
# NavGo
LOCAL_PATH := $(my-dir)

my_archs := arm64 arm
my_src_arch := $(call get-prebuilt-src-arch,$(my_archs))

include $(CLEAR_VARS)
LOCAL_MODULE := NavGo
LOCAL_MODULE_OWNER := google
LOCAL_MODULE_CLASS := APPS
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
#LOCAL_PRIVILEGED_MODULE :=
LOCAL_PRODUCT_MODULE := true
LOCAL_CERTIFICATE := PRESIGNED
LOCAL_SRC_FILES := $(LOCAL_MODULE)_$(my_src_arch).apk
#LOCAL_OVERRIDES_PACKAGES :=
LOCAL_OPTIONAL_USES_LIBRARIES := org.apache.http.legacy
LOCAL_REQUIRED_MODULES := MapsGo
LOCAL_MODULE_TARGET_ARCH := $(my_src_arch)
include $(BUILD_PREBUILT)

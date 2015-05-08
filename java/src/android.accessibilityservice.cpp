#include "java-core.hpp"
#include <memory>
#include "android.accessibilityservice.AccessibilityService.hpp"
#include "android.accessibilityservice.AccessibilityServiceInfo.hpp"
#include "android.content.Intent.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "java.lang.String.hpp"

jclass android::accessibilityservice::AccessibilityService::_class = nullptr;
jclass android::accessibilityservice::AccessibilityServiceInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accessibilityservice::AccessibilityService::AccessibilityService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::accessibilityservice::AccessibilityService::_class) ::android::accessibilityservice::AccessibilityService::_class = java::fetch_class("android/accessibilityservice/AccessibilityService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::accessibilityservice::AccessibilityService::onAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::accessibilityservice::AccessibilityService::_class) ::android::accessibilityservice::AccessibilityService::_class = java::fetch_class("android/accessibilityservice/AccessibilityService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::accessibilityservice::AccessibilityService::onInterrupt() const {
    if (!::android::accessibilityservice::AccessibilityService::_class) ::android::accessibilityservice::AccessibilityService::_class = java::fetch_class("android/accessibilityservice/AccessibilityService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterrupt", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::accessibilityservice::AccessibilityService::setServiceInfo(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::accessibilityservice::AccessibilityService::_class) ::android::accessibilityservice::AccessibilityService::_class = java::fetch_class("android/accessibilityservice/AccessibilityService");
    static jmethodID mid = java::jni->GetMethodID(_class, "setServiceInfo", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::IBinder android::accessibilityservice::AccessibilityService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::accessibilityservice::AccessibilityService::_class) ::android::accessibilityservice::AccessibilityService::_class = java::fetch_class("android/accessibilityservice/AccessibilityService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accessibilityservice::AccessibilityServiceInfo::AccessibilityServiceInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::accessibilityservice::AccessibilityServiceInfo::getId() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::accessibilityservice::AccessibilityServiceInfo::getResolveInfo() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResolveInfo", "()Landroid/content/pm/ResolveInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::lang::String android::accessibilityservice::AccessibilityServiceInfo::getSettingsActivityName() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivityName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::accessibilityservice::AccessibilityServiceInfo::getCanRetrieveWindowContent() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanRetrieveWindowContent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::accessibilityservice::AccessibilityServiceInfo::getDescription() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::accessibilityservice::AccessibilityServiceInfo::describeContents() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::accessibilityservice::AccessibilityServiceInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::accessibilityservice::AccessibilityServiceInfo::toString() const {
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::accessibilityservice::AccessibilityServiceInfo::feedbackTypeToString(int32_t arg0){
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "feedbackTypeToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::accessibilityservice::AccessibilityServiceInfo::flagToString(int32_t arg0){
    if (!::android::accessibilityservice::AccessibilityServiceInfo::_class) ::android::accessibilityservice::AccessibilityServiceInfo::_class = java::fetch_class("android/accessibilityservice/AccessibilityServiceInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "flagToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}


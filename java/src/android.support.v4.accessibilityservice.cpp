#include "java-core.hpp"
#include <memory>
#include "android.accessibilityservice.AccessibilityServiceInfo.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.support.v4.accessibilityservice.AccessibilityServiceInfoCompat.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = nullptr;
jclass android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = nullptr;
jclass android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2::_class = nullptr;
jclass android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = nullptr;
jclass android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = nullptr;

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::getId(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::getResolveInfo(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResolveInfo", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

bool android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::getCanRetrieveWindowContent(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanRetrieveWindowContent", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::getDescription(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::getSettingsActivityName(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivityName", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoVersionImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCapabilities", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::getCanRetrieveWindowContent(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanRetrieveWindowContent", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::getDescription(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::getId(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::getResolveInfo(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResolveInfo", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::getSettingsActivityName(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivityName", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoIcsImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCapabilities", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2::getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoJellyBeanMr2::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoJellyBeanMr2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCapabilities", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::getCanRetrieveWindowContent(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanRetrieveWindowContent", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::getDescription(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::getId(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::getResolveInfo(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResolveInfo", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::getSettingsActivityName(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivityName", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0) const {
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat_AccessibilityServiceInfoStubImpl::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat$AccessibilityServiceInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCapabilities", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::getId(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getId", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::getResolveInfo(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getResolveInfo", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::getSettingsActivityName(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSettingsActivityName", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::getCanRetrieveWindowContent(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCanRetrieveWindowContent", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::getDescription(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDescription", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::feedbackTypeToString(int32_t arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "feedbackTypeToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::flagToString(int32_t arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "flagToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::getCapabilities(const ::android::accessibilityservice::AccessibilityServiceInfo& arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCapabilities", "(Landroid/accessibilityservice/AccessibilityServiceInfo;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::lang::String android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::capabilityToString(int32_t arg0){
    if (!::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class) ::android::support::v4::accessibilityservice::AccessibilityServiceInfoCompat::_class = java::fetch_class("android/support/v4/accessibilityservice/AccessibilityServiceInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "capabilityToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}


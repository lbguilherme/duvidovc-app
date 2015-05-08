#include "java-core.hpp"
#include <memory>
#include "android.app.admin.DeviceAdminInfo.hpp"
#include "android.app.admin.DeviceAdminReceiver.hpp"
#include "android.app.admin.DevicePolicyManager.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.pm.ActivityInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Parcel.hpp"
#include "android.util.Printer.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::app::admin::DevicePolicyManager::_class = nullptr;
jclass android::app::admin::DeviceAdminInfo::_class = nullptr;
jclass android::app::admin::DeviceAdminReceiver::_class = nullptr;

bool android::app::admin::DevicePolicyManager::isAdminActive(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAdminActive", "(Landroid/content/ComponentName;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::List android::app::admin::DevicePolicyManager::getActiveAdmins() const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActiveAdmins", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::app::admin::DevicePolicyManager::removeActiveAdmin(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeActiveAdmin", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::app::admin::DevicePolicyManager::hasGrantedPolicy(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasGrantedPolicy", "(Landroid/content/ComponentName;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DevicePolicyManager::setPasswordQuality(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordQuality", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordQuality(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordQuality", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumLength(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumLength", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumLength(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumLength", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumUpperCase(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumUpperCase", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumUpperCase(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumUpperCase", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumLowerCase(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumLowerCase", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumLowerCase(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumLowerCase", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumLetters(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumLetters", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumLetters(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumLetters", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumNumeric(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumNumeric", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumNumeric(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumNumeric", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumSymbols(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumSymbols", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumSymbols(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumSymbols", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordMinimumNonLetter(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordMinimumNonLetter", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMinimumNonLetter(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMinimumNonLetter", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::setPasswordHistoryLength(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordHistoryLength", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DevicePolicyManager::setPasswordExpirationTimeout(const ::android::content::ComponentName& arg0, int64_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPasswordExpirationTimeout", "(Landroid/content/ComponentName;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::app::admin::DevicePolicyManager::getPasswordExpirationTimeout(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordExpirationTimeout", "(Landroid/content/ComponentName;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t android::app::admin::DevicePolicyManager::getPasswordExpiration(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordExpiration", "(Landroid/content/ComponentName;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordHistoryLength(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordHistoryLength", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::app::admin::DevicePolicyManager::getPasswordMaximumLength(int32_t arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPasswordMaximumLength", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::app::admin::DevicePolicyManager::isActivePasswordSufficient() const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActivePasswordSufficient", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::app::admin::DevicePolicyManager::getCurrentFailedPasswordAttempts() const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentFailedPasswordAttempts", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::admin::DevicePolicyManager::setMaximumFailedPasswordsForWipe(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumFailedPasswordsForWipe", "(Landroid/content/ComponentName;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DevicePolicyManager::getMaximumFailedPasswordsForWipe(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumFailedPasswordsForWipe", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::app::admin::DevicePolicyManager::resetPassword(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetPassword", "(Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DevicePolicyManager::setMaximumTimeToLock(const ::android::content::ComponentName& arg0, int64_t arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumTimeToLock", "(Landroid/content/ComponentName;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int64_t android::app::admin::DevicePolicyManager::getMaximumTimeToLock(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximumTimeToLock", "(Landroid/content/ComponentName;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::app::admin::DevicePolicyManager::lockNow() const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "lockNow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::admin::DevicePolicyManager::wipeData(int32_t arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "wipeData", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::admin::DevicePolicyManager::setStorageEncryption(const ::android::content::ComponentName& arg0, bool arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStorageEncryption", "(Landroid/content/ComponentName;Z)I");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool android::app::admin::DevicePolicyManager::getStorageEncryption(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageEncryption", "(Landroid/content/ComponentName;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::app::admin::DevicePolicyManager::getStorageEncryptionStatus() const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStorageEncryptionStatus", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::app::admin::DevicePolicyManager::setCameraDisabled(const ::android::content::ComponentName& arg0, bool arg1) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCameraDisabled", "(Landroid/content/ComponentName;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::app::admin::DevicePolicyManager::getCameraDisabled(const ::android::content::ComponentName& arg0) const {
    if (!::android::app::admin::DevicePolicyManager::_class) ::android::app::admin::DevicePolicyManager::_class = java::fetch_class("android/app/admin/DevicePolicyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCameraDisabled", "(Landroid/content/ComponentName;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::admin::DeviceAdminInfo::DeviceAdminInfo(const ::android::content::Context& arg0, const ::android::content::pm::ResolveInfo& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String android::app::admin::DeviceAdminInfo::getPackageName() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::app::admin::DeviceAdminInfo::getReceiverName() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiverName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::pm::ActivityInfo android::app::admin::DeviceAdminInfo::getActivityInfo() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityInfo", "()Landroid/content/pm/ActivityInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ActivityInfo _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::admin::DeviceAdminInfo::getComponent() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponent", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::admin::DeviceAdminInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::app::admin::DeviceAdminInfo::loadDescription(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadDescription", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::app::admin::DeviceAdminInfo::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

bool android::app::admin::DeviceAdminInfo::isVisible() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::app::admin::DeviceAdminInfo::usesPolicy(int32_t arg0) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "usesPolicy", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::app::admin::DeviceAdminInfo::getTagForPolicy(int32_t arg0) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTagForPolicy", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::app::admin::DeviceAdminInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::app::admin::DeviceAdminInfo::toString() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::app::admin::DeviceAdminInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::admin::DeviceAdminInfo::describeContents() const {
    if (!::android::app::admin::DeviceAdminInfo::_class) ::android::app::admin::DeviceAdminInfo::_class = java::fetch_class("android/app/admin/DeviceAdminInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::admin::DeviceAdminReceiver::DeviceAdminReceiver() : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::app::admin::DevicePolicyManager android::app::admin::DeviceAdminReceiver::getManager(const ::android::content::Context& arg0) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManager", "(Landroid/content/Context;)Landroid/app/admin/DevicePolicyManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::admin::DevicePolicyManager _ret(ret);
    return _ret;
}

::android::content::ComponentName android::app::admin::DeviceAdminReceiver::getWho(const ::android::content::Context& arg0) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWho", "(Landroid/content/Context;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

void android::app::admin::DeviceAdminReceiver::onEnabled(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEnabled", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::app::admin::DeviceAdminReceiver::onDisableRequested(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDisableRequested", "(Landroid/content/Context;Landroid/content/Intent;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::app::admin::DeviceAdminReceiver::onDisabled(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDisabled", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DeviceAdminReceiver::onPasswordChanged(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPasswordChanged", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DeviceAdminReceiver::onPasswordFailed(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPasswordFailed", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DeviceAdminReceiver::onPasswordSucceeded(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPasswordSucceeded", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DeviceAdminReceiver::onPasswordExpiring(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPasswordExpiring", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::admin::DeviceAdminReceiver::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::app::admin::DeviceAdminReceiver::_class) ::android::app::admin::DeviceAdminReceiver::_class = java::fetch_class("android/app/admin/DeviceAdminReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}


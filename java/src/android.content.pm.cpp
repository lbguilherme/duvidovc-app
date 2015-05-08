#include "java-core.hpp"
#include <memory>
#include "android.content.ComponentName.hpp"
#include "android.content.Intent.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.content.pm.ActivityInfo.hpp"
#include "android.content.pm.ApplicationInfo.hpp"
#include "android.content.pm.ComponentInfo.hpp"
#include "android.content.pm.ConfigurationInfo.hpp"
#include "android.content.pm.FeatureInfo.hpp"
#include "android.content.pm.InstrumentationInfo.hpp"
#include "android.content.pm.LabeledIntent.hpp"
#include "android.content.pm.PackageInfo.hpp"
#include "android.content.pm.PackageItemInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.PackageStats.hpp"
#include "android.content.pm.PathPermission.hpp"
#include "android.content.pm.PermissionGroupInfo.hpp"
#include "android.content.pm.PermissionInfo.hpp"
#include "android.content.pm.ProviderInfo.hpp"
#include "android.content.pm.ResolveInfo.hpp"
#include "android.content.pm.ServiceInfo.hpp"
#include "android.content.pm.Signature.hpp"
#include "android.content.res.Resources.hpp"
#include "android.content.res.XmlResourceParser.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Parcel.hpp"
#include "android.util.Printer.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::content::pm::ComponentInfo::_class = nullptr;
jclass android::content::pm::PackageStats::_class = nullptr;
jclass android::content::pm::ResolveInfo::_class = nullptr;
jclass android::content::pm::ConfigurationInfo::_class = nullptr;
jclass android::content::pm::InstrumentationInfo::_class = nullptr;
jclass android::content::pm::ApplicationInfo::_class = nullptr;
jclass android::content::pm::PermissionGroupInfo::_class = nullptr;
jclass android::content::pm::PackageManager::_class = nullptr;
jclass android::content::pm::FeatureInfo::_class = nullptr;
jclass android::content::pm::PermissionInfo::_class = nullptr;
jclass android::content::pm::PathPermission::_class = nullptr;
jclass android::content::pm::LabeledIntent::_class = nullptr;
jclass android::content::pm::ApplicationInfo_DisplayNameComparator::_class = nullptr;
jclass android::content::pm::PackageInfo::_class = nullptr;
jclass android::content::pm::PackageItemInfo_DisplayNameComparator::_class = nullptr;
jclass android::content::pm::Signature::_class = nullptr;
jclass android::content::pm::ResolveInfo_DisplayNameComparator::_class = nullptr;
jclass android::content::pm::ActivityInfo::_class = nullptr;
jclass android::content::pm::ProviderInfo::_class = nullptr;
jclass android::content::pm::PackageManager_NameNotFoundException::_class = nullptr;
jclass android::content::pm::ServiceInfo::_class = nullptr;
jclass android::content::pm::PackageItemInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ComponentInfo::ComponentInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0) {
    if (!::android::content::pm::ComponentInfo::_class) ::android::content::pm::ComponentInfo::_class = java::fetch_class("android/content/pm/ComponentInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::content::pm::ComponentInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::ComponentInfo::_class) ::android::content::pm::ComponentInfo::_class = java::fetch_class("android/content/pm/ComponentInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::content::pm::ComponentInfo::isEnabled() const {
    if (!::android::content::pm::ComponentInfo::_class) ::android::content::pm::ComponentInfo::_class = java::fetch_class("android/content/pm/ComponentInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::content::pm::ComponentInfo::getIconResource() const {
    if (!::android::content::pm::ComponentInfo::_class) ::android::content::pm::ComponentInfo::_class = java::fetch_class("android/content/pm/ComponentInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIconResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ComponentInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ComponentInfo::_class) ::android::content::pm::ComponentInfo::_class = java::fetch_class("android/content/pm/ComponentInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageStats::PackageStats(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::PackageStats::_class) ::android::content::pm::PackageStats::_class = java::fetch_class("android/content/pm/PackageStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageStats::PackageStats(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::PackageStats::_class) ::android::content::pm::PackageStats::_class = java::fetch_class("android/content/pm/PackageStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::PackageStats::toString() const {
    if (!::android::content::pm::PackageStats::_class) ::android::content::pm::PackageStats::_class = java::fetch_class("android/content/pm/PackageStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::PackageStats::describeContents() const {
    if (!::android::content::pm::PackageStats::_class) ::android::content::pm::PackageStats::_class = java::fetch_class("android/content/pm/PackageStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::PackageStats::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageStats::_class) ::android::content::pm::PackageStats::_class = java::fetch_class("android/content/pm/PackageStats");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ResolveInfo::ResolveInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::content::pm::ResolveInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::ResolveInfo::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::content::pm::ResolveInfo::getIconResource() const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIconResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ResolveInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::ResolveInfo::toString() const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::ResolveInfo::describeContents() const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ResolveInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ResolveInfo::_class) ::android::content::pm::ResolveInfo::_class = java::fetch_class("android/content/pm/ResolveInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ConfigurationInfo::ConfigurationInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::ConfigurationInfo::_class) ::android::content::pm::ConfigurationInfo::_class = java::fetch_class("android/content/pm/ConfigurationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::ConfigurationInfo::toString() const {
    if (!::android::content::pm::ConfigurationInfo::_class) ::android::content::pm::ConfigurationInfo::_class = java::fetch_class("android/content/pm/ConfigurationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::ConfigurationInfo::describeContents() const {
    if (!::android::content::pm::ConfigurationInfo::_class) ::android::content::pm::ConfigurationInfo::_class = java::fetch_class("android/content/pm/ConfigurationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ConfigurationInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ConfigurationInfo::_class) ::android::content::pm::ConfigurationInfo::_class = java::fetch_class("android/content/pm/ConfigurationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::ConfigurationInfo::getGlEsVersion() const {
    if (!::android::content::pm::ConfigurationInfo::_class) ::android::content::pm::ConfigurationInfo::_class = java::fetch_class("android/content/pm/ConfigurationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGlEsVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::InstrumentationInfo::InstrumentationInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::InstrumentationInfo::_class) ::android::content::pm::InstrumentationInfo::_class = java::fetch_class("android/content/pm/InstrumentationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::InstrumentationInfo::toString() const {
    if (!::android::content::pm::InstrumentationInfo::_class) ::android::content::pm::InstrumentationInfo::_class = java::fetch_class("android/content/pm/InstrumentationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::InstrumentationInfo::describeContents() const {
    if (!::android::content::pm::InstrumentationInfo::_class) ::android::content::pm::InstrumentationInfo::_class = java::fetch_class("android/content/pm/InstrumentationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::InstrumentationInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::InstrumentationInfo::_class) ::android::content::pm::InstrumentationInfo::_class = java::fetch_class("android/content/pm/InstrumentationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ApplicationInfo::ApplicationInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::ApplicationInfo::_class) ::android::content::pm::ApplicationInfo::_class = java::fetch_class("android/content/pm/ApplicationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::content::pm::ApplicationInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::ApplicationInfo::_class) ::android::content::pm::ApplicationInfo::_class = java::fetch_class("android/content/pm/ApplicationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::ApplicationInfo::toString() const {
    if (!::android::content::pm::ApplicationInfo::_class) ::android::content::pm::ApplicationInfo::_class = java::fetch_class("android/content/pm/ApplicationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::ApplicationInfo::describeContents() const {
    if (!::android::content::pm::ApplicationInfo::_class) ::android::content::pm::ApplicationInfo::_class = java::fetch_class("android/content/pm/ApplicationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ApplicationInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ApplicationInfo::_class) ::android::content::pm::ApplicationInfo::_class = java::fetch_class("android/content/pm/ApplicationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::content::pm::ApplicationInfo::loadDescription(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::ApplicationInfo::_class) ::android::content::pm::ApplicationInfo::_class = java::fetch_class("android/content/pm/ApplicationInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadDescription", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PermissionGroupInfo::PermissionGroupInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::PermissionGroupInfo::_class) ::android::content::pm::PermissionGroupInfo::_class = java::fetch_class("android/content/pm/PermissionGroupInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::content::pm::PermissionGroupInfo::loadDescription(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::PermissionGroupInfo::_class) ::android::content::pm::PermissionGroupInfo::_class = java::fetch_class("android/content/pm/PermissionGroupInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadDescription", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::content::pm::PermissionGroupInfo::toString() const {
    if (!::android::content::pm::PermissionGroupInfo::_class) ::android::content::pm::PermissionGroupInfo::_class = java::fetch_class("android/content/pm/PermissionGroupInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::PermissionGroupInfo::describeContents() const {
    if (!::android::content::pm::PermissionGroupInfo::_class) ::android::content::pm::PermissionGroupInfo::_class = java::fetch_class("android/content/pm/PermissionGroupInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::PermissionGroupInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::PermissionGroupInfo::_class) ::android::content::pm::PermissionGroupInfo::_class = java::fetch_class("android/content/pm/PermissionGroupInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageManager::PackageManager() : ::java::lang::Object((jobject)0) {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::pm::PackageInfo android::content::pm::PackageManager::getPackageInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageInfo", "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PackageInfo _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::pm::PackageManager::currentToCanonicalPackageNames(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "currentToCanonicalPackageNames", "([Ljava/lang/String;)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> android::content::pm::PackageManager::canonicalToCurrentPackageNames(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "canonicalToCurrentPackageNames", "([Ljava/lang/String;)[Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::content::Intent android::content::pm::PackageManager::getLaunchIntentForPackage(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLaunchIntentForPackage", "(Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

std::vector< int32_t> android::content::pm::PackageManager::getPackageGids(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageGids", "(Ljava/lang/String;)[I");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::android::content::pm::PermissionInfo android::content::pm::PackageManager::getPermissionInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissionInfo", "(Ljava/lang/String;I)Landroid/content/pm/PermissionInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PermissionInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryPermissionsByGroup(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryPermissionsByGroup", "(Ljava/lang/String;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::PermissionGroupInfo android::content::pm::PackageManager::getPermissionGroupInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissionGroupInfo", "(Ljava/lang/String;I)Landroid/content/pm/PermissionGroupInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PermissionGroupInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::getAllPermissionGroups(int32_t arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllPermissionGroups", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ApplicationInfo android::content::pm::PackageManager::getApplicationInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationInfo", "(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ApplicationInfo _ret(ret);
    return _ret;
}

::android::content::pm::ActivityInfo android::content::pm::PackageManager::getActivityInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ActivityInfo _ret(ret);
    return _ret;
}

::android::content::pm::ActivityInfo android::content::pm::PackageManager::getReceiverInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiverInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ActivityInfo _ret(ret);
    return _ret;
}

::android::content::pm::ServiceInfo android::content::pm::PackageManager::getServiceInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ServiceInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ServiceInfo _ret(ret);
    return _ret;
}

::android::content::pm::ProviderInfo android::content::pm::PackageManager::getProviderInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProviderInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/ProviderInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ProviderInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::getInstalledPackages(int32_t arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledPackages", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::content::pm::PackageManager::checkPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool android::content::pm::PackageManager::addPermission(const ::android::content::pm::PermissionInfo& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPermission", "(Landroid/content/pm/PermissionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::content::pm::PackageManager::addPermissionAsync(const ::android::content::pm::PermissionInfo& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPermissionAsync", "(Landroid/content/pm/PermissionInfo;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::content::pm::PackageManager::removePermission(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePermission", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::pm::PackageManager::checkSignatures(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSignatures", "(Ljava/lang/String;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::pm::PackageManager::checkSignatures(int32_t arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkSignatures", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::lang::String> android::content::pm::PackageManager::getPackagesForUid(int32_t arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackagesForUid", "(I)[Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String android::content::pm::PackageManager::getNameForUid(int32_t arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNameForUid", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::getInstalledApplications(int32_t arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledApplications", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> android::content::pm::PackageManager::getSystemSharedLibraryNames() const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemSharedLibraryNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::content::pm::FeatureInfo> android::content::pm::PackageManager::getSystemAvailableFeatures() const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemAvailableFeatures", "()[Landroid/content/pm/FeatureInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::content::pm::FeatureInfo> _ret(rets, ::android::content::pm::FeatureInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::content::pm::FeatureInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::content::pm::PackageManager::hasSystemFeature(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSystemFeature", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::content::pm::ResolveInfo android::content::pm::PackageManager::resolveActivity(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveActivity", "(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryIntentActivities(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryIntentActivities", "(Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryIntentActivityOptions(const ::android::content::ComponentName& arg0, const std::vector< ::android::content::Intent>& arg1, const ::android::content::Intent& arg2, int32_t arg3) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryIntentActivityOptions", "(Landroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryBroadcastReceivers(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryBroadcastReceivers", "(Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ResolveInfo android::content::pm::PackageManager::resolveService(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveService", "(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ResolveInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryIntentServices(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryIntentServices", "(Landroid/content/Intent;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::ProviderInfo android::content::pm::PackageManager::resolveContentProvider(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveContentProvider", "(Ljava/lang/String;I)Landroid/content/pm/ProviderInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::ProviderInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryContentProviders(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryContentProviders", "(Ljava/lang/String;II)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::content::pm::InstrumentationInfo android::content::pm::PackageManager::getInstrumentationInfo(const ::android::content::ComponentName& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstrumentationInfo", "(Landroid/content/ComponentName;I)Landroid/content/pm/InstrumentationInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::InstrumentationInfo _ret(ret);
    return _ret;
}

::java::util::List android::content::pm::PackageManager::queryInstrumentation(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryInstrumentation", "(Ljava/lang/String;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getDrawable(const ::java::lang::String& arg0, int32_t arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getActivityIcon(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityIcon", "(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getActivityIcon(const ::android::content::Intent& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityIcon", "(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getDefaultActivityIcon() const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultActivityIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getApplicationIcon(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationIcon", "(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getApplicationIcon(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationIcon", "(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getActivityLogo(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityLogo", "(Landroid/content/ComponentName;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getActivityLogo(const ::android::content::Intent& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityLogo", "(Landroid/content/Intent;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getApplicationLogo(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationLogo", "(Landroid/content/pm/ApplicationInfo;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageManager::getApplicationLogo(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationLogo", "(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::pm::PackageManager::getText(const ::java::lang::String& arg0, int32_t arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::content::pm::PackageManager::getXml(const ::java::lang::String& arg0, int32_t arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXml", "(Ljava/lang/String;ILandroid/content/pm/ApplicationInfo;)Landroid/content/res/XmlResourceParser;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::content::pm::PackageManager::getApplicationLabel(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationLabel", "(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::content::res::Resources android::content::pm::PackageManager::getResourcesForActivity(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcesForActivity", "(Landroid/content/ComponentName;)Landroid/content/res/Resources;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::res::Resources android::content::pm::PackageManager::getResourcesForApplication(const ::android::content::pm::ApplicationInfo& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcesForApplication", "(Landroid/content/pm/ApplicationInfo;)Landroid/content/res/Resources;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::res::Resources android::content::pm::PackageManager::getResourcesForApplication(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResourcesForApplication", "(Ljava/lang/String;)Landroid/content/res/Resources;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::res::Resources _ret(ret);
    return _ret;
}

::android::content::pm::PackageInfo android::content::pm::PackageManager::getPackageArchiveInfo(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageArchiveInfo", "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::pm::PackageInfo _ret(ret);
    return _ret;
}

void android::content::pm::PackageManager::verifyPendingInstall(int32_t arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "verifyPendingInstall", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::pm::PackageManager::setInstallerPackageName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInstallerPackageName", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::PackageManager::getInstallerPackageName(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstallerPackageName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::pm::PackageManager::addPackageToPreferred(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPackageToPreferred", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::content::pm::PackageManager::removePackageFromPreferred(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePackageFromPreferred", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::content::pm::PackageManager::getPreferredPackages(int32_t arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferredPackages", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::content::pm::PackageManager::addPreferredActivity(const ::android::content::IntentFilter& arg0, int32_t arg1, const std::vector< ::android::content::ComponentName>& arg2, const ::android::content::ComponentName& arg3) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferredActivity", "(Landroid/content/IntentFilter;I[Landroid/content/ComponentName;Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::android::content::ComponentName::_class) ::android::content::ComponentName::_class = java::fetch_class("android/content/ComponentName");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::android::content::ComponentName::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::android::content::ComponentName& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::content::pm::PackageManager::clearPackagePreferredActivities(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPackagePreferredActivities", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::content::pm::PackageManager::getPreferredActivities(const ::java::util::List& arg0, const ::java::util::List& arg1, const ::java::lang::String& arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferredActivities", "(Ljava/util/List;Ljava/util/List;Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::content::pm::PackageManager::setComponentEnabledSetting(const ::android::content::ComponentName& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComponentEnabledSetting", "(Landroid/content/ComponentName;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::content::pm::PackageManager::getComponentEnabledSetting(const ::android::content::ComponentName& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponentEnabledSetting", "(Landroid/content/ComponentName;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::content::pm::PackageManager::setApplicationEnabledSetting(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setApplicationEnabledSetting", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::content::pm::PackageManager::getApplicationEnabledSetting(const ::java::lang::String& arg0) const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationEnabledSetting", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::content::pm::PackageManager::isSafeMode() const {
    if (!::android::content::pm::PackageManager::_class) ::android::content::pm::PackageManager::_class = java::fetch_class("android/content/pm/PackageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSafeMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::FeatureInfo::FeatureInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::FeatureInfo::_class) ::android::content::pm::FeatureInfo::_class = java::fetch_class("android/content/pm/FeatureInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::FeatureInfo::toString() const {
    if (!::android::content::pm::FeatureInfo::_class) ::android::content::pm::FeatureInfo::_class = java::fetch_class("android/content/pm/FeatureInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::FeatureInfo::describeContents() const {
    if (!::android::content::pm::FeatureInfo::_class) ::android::content::pm::FeatureInfo::_class = java::fetch_class("android/content/pm/FeatureInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::FeatureInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::FeatureInfo::_class) ::android::content::pm::FeatureInfo::_class = java::fetch_class("android/content/pm/FeatureInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::FeatureInfo::getGlEsVersion() const {
    if (!::android::content::pm::FeatureInfo::_class) ::android::content::pm::FeatureInfo::_class = java::fetch_class("android/content/pm/FeatureInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGlEsVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PermissionInfo::PermissionInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::PermissionInfo::_class) ::android::content::pm::PermissionInfo::_class = java::fetch_class("android/content/pm/PermissionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::content::pm::PermissionInfo::loadDescription(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::PermissionInfo::_class) ::android::content::pm::PermissionInfo::_class = java::fetch_class("android/content/pm/PermissionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadDescription", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String android::content::pm::PermissionInfo::toString() const {
    if (!::android::content::pm::PermissionInfo::_class) ::android::content::pm::PermissionInfo::_class = java::fetch_class("android/content/pm/PermissionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::PermissionInfo::describeContents() const {
    if (!::android::content::pm::PermissionInfo::_class) ::android::content::pm::PermissionInfo::_class = java::fetch_class("android/content/pm/PermissionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::PermissionInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::PermissionInfo::_class) ::android::content::pm::PermissionInfo::_class = java::fetch_class("android/content/pm/PermissionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PathPermission::PathPermission(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::os::PatternMatcher((jobject)0) {
    if (!::android::content::pm::PathPermission::_class) ::android::content::pm::PathPermission::_class = java::fetch_class("android/content/pm/PathPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PathPermission::PathPermission(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::os::PatternMatcher((jobject)0) {
    if (!::android::content::pm::PathPermission::_class) ::android::content::pm::PathPermission::_class = java::fetch_class("android/content/pm/PathPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::PathPermission::getReadPermission() const {
    if (!::android::content::pm::PathPermission::_class) ::android::content::pm::PathPermission::_class = java::fetch_class("android/content/pm/PathPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadPermission", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::content::pm::PathPermission::getWritePermission() const {
    if (!::android::content::pm::PathPermission::_class) ::android::content::pm::PathPermission::_class = java::fetch_class("android/content/pm/PathPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWritePermission", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::content::pm::PathPermission::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::PathPermission::_class) ::android::content::pm::PathPermission::_class = java::fetch_class("android/content/pm/PathPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::LabeledIntent::LabeledIntent(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::content::Intent((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Intent;Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::LabeledIntent::LabeledIntent(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, const ::java::lang::CharSequence& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::content::Intent((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::LabeledIntent::LabeledIntent(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::content::Intent((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::LabeledIntent::LabeledIntent(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::content::Intent((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::LabeledIntent::getSourcePackage() const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSourcePackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::LabeledIntent::getLabelResource() const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabelResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::content::pm::LabeledIntent::getNonLocalizedLabel() const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNonLocalizedLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::content::pm::LabeledIntent::getIconResource() const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIconResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::content::pm::LabeledIntent::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::LabeledIntent::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::content::pm::LabeledIntent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::content::pm::LabeledIntent::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::content::pm::LabeledIntent::_class) ::android::content::pm::LabeledIntent::_class = java::fetch_class("android/content/pm/LabeledIntent");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ApplicationInfo_DisplayNameComparator::ApplicationInfo_DisplayNameComparator(const ::android::content::pm::PackageManager& arg0) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {
    if (!::android::content::pm::ApplicationInfo_DisplayNameComparator::_class) ::android::content::pm::ApplicationInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/ApplicationInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/pm/PackageManager;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::content::pm::ApplicationInfo_DisplayNameComparator::compare(const ::android::content::pm::ApplicationInfo& arg0, const ::android::content::pm::ApplicationInfo& arg1) const {
    if (!::android::content::pm::ApplicationInfo_DisplayNameComparator::_class) ::android::content::pm::ApplicationInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/ApplicationInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Landroid/content/pm/ApplicationInfo;Landroid/content/pm/ApplicationInfo;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::pm::ApplicationInfo_DisplayNameComparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::content::pm::ApplicationInfo_DisplayNameComparator::_class) ::android::content::pm::ApplicationInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/ApplicationInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageInfo::PackageInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::PackageInfo::_class) ::android::content::pm::PackageInfo::_class = java::fetch_class("android/content/pm/PackageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::content::pm::PackageInfo::toString() const {
    if (!::android::content::pm::PackageInfo::_class) ::android::content::pm::PackageInfo::_class = java::fetch_class("android/content/pm/PackageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::PackageInfo::describeContents() const {
    if (!::android::content::pm::PackageInfo::_class) ::android::content::pm::PackageInfo::_class = java::fetch_class("android/content/pm/PackageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::PackageInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageInfo::_class) ::android::content::pm::PackageInfo::_class = java::fetch_class("android/content/pm/PackageInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageItemInfo_DisplayNameComparator::PackageItemInfo_DisplayNameComparator(const ::android::content::pm::PackageManager& arg0) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {
    if (!::android::content::pm::PackageItemInfo_DisplayNameComparator::_class) ::android::content::pm::PackageItemInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/PackageItemInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/pm/PackageManager;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::content::pm::PackageItemInfo_DisplayNameComparator::compare(const ::android::content::pm::PackageItemInfo& arg0, const ::android::content::pm::PackageItemInfo& arg1) const {
    if (!::android::content::pm::PackageItemInfo_DisplayNameComparator::_class) ::android::content::pm::PackageItemInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/PackageItemInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Landroid/content/pm/PackageItemInfo;Landroid/content/pm/PackageItemInfo;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::pm::PackageItemInfo_DisplayNameComparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::content::pm::PackageItemInfo_DisplayNameComparator::_class) ::android::content::pm::PackageItemInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/PackageItemInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::Signature::Signature(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::Signature::Signature(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< uint16_t> android::content::pm::Signature::toChars() const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "toChars", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> android::content::pm::Signature::toChars(const std::vector< uint16_t>& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "toChars", "([C[I)[C");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String android::content::pm::Signature::toCharsString() const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "toCharsString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> android::content::pm::Signature::toByteArray() const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool android::content::pm::Signature::equals(const ::java::lang::Object& arg0) const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::content::pm::Signature::hashCode() const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::content::pm::Signature::describeContents() const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::Signature::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::Signature::_class) ::android::content::pm::Signature::_class = java::fetch_class("android/content/pm/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ResolveInfo_DisplayNameComparator::ResolveInfo_DisplayNameComparator(const ::android::content::pm::PackageManager& arg0) : ::java::lang::Object((jobject)0), ::java::util::Comparator((jobject)0) {
    if (!::android::content::pm::ResolveInfo_DisplayNameComparator::_class) ::android::content::pm::ResolveInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/ResolveInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/pm/PackageManager;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::content::pm::ResolveInfo_DisplayNameComparator::compare(const ::android::content::pm::ResolveInfo& arg0, const ::android::content::pm::ResolveInfo& arg1) const {
    if (!::android::content::pm::ResolveInfo_DisplayNameComparator::_class) ::android::content::pm::ResolveInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/ResolveInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Landroid/content/pm/ResolveInfo;Landroid/content/pm/ResolveInfo;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::content::pm::ResolveInfo_DisplayNameComparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::content::pm::ResolveInfo_DisplayNameComparator::_class) ::android::content::pm::ResolveInfo_DisplayNameComparator::_class = java::fetch_class("android/content/pm/ResolveInfo$DisplayNameComparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ActivityInfo::ActivityInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::ComponentInfo((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::ActivityInfo::_class) ::android::content::pm::ActivityInfo::_class = java::fetch_class("android/content/pm/ActivityInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::content::pm::ActivityInfo::getThemeResource() const {
    if (!::android::content::pm::ActivityInfo::_class) ::android::content::pm::ActivityInfo::_class = java::fetch_class("android/content/pm/ActivityInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThemeResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ActivityInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::ActivityInfo::_class) ::android::content::pm::ActivityInfo::_class = java::fetch_class("android/content/pm/ActivityInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::ActivityInfo::toString() const {
    if (!::android::content::pm::ActivityInfo::_class) ::android::content::pm::ActivityInfo::_class = java::fetch_class("android/content/pm/ActivityInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::ActivityInfo::describeContents() const {
    if (!::android::content::pm::ActivityInfo::_class) ::android::content::pm::ActivityInfo::_class = java::fetch_class("android/content/pm/ActivityInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ActivityInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ActivityInfo::_class) ::android::content::pm::ActivityInfo::_class = java::fetch_class("android/content/pm/ActivityInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ProviderInfo::ProviderInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::ComponentInfo((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::ProviderInfo::_class) ::android::content::pm::ProviderInfo::_class = java::fetch_class("android/content/pm/ProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::content::pm::ProviderInfo::describeContents() const {
    if (!::android::content::pm::ProviderInfo::_class) ::android::content::pm::ProviderInfo::_class = java::fetch_class("android/content/pm/ProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ProviderInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ProviderInfo::_class) ::android::content::pm::ProviderInfo::_class = java::fetch_class("android/content/pm/ProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::ProviderInfo::toString() const {
    if (!::android::content::pm::ProviderInfo::_class) ::android::content::pm::ProviderInfo::_class = java::fetch_class("android/content/pm/ProviderInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageManager_NameNotFoundException::PackageManager_NameNotFoundException() : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::pm::PackageManager_NameNotFoundException::_class) ::android::content::pm::PackageManager_NameNotFoundException::_class = java::fetch_class("android/content/pm/PackageManager$NameNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageManager_NameNotFoundException::PackageManager_NameNotFoundException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::content::pm::PackageManager_NameNotFoundException::_class) ::android::content::pm::PackageManager_NameNotFoundException::_class = java::fetch_class("android/content/pm/PackageManager$NameNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::ServiceInfo::ServiceInfo() : ::java::lang::Object((jobject)0), ::android::content::pm::ComponentInfo((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::content::pm::ServiceInfo::_class) ::android::content::pm::ServiceInfo::_class = java::fetch_class("android/content/pm/ServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::content::pm::ServiceInfo::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::ServiceInfo::_class) ::android::content::pm::ServiceInfo::_class = java::fetch_class("android/content/pm/ServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::content::pm::ServiceInfo::toString() const {
    if (!::android::content::pm::ServiceInfo::_class) ::android::content::pm::ServiceInfo::_class = java::fetch_class("android/content/pm/ServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::content::pm::ServiceInfo::describeContents() const {
    if (!::android::content::pm::ServiceInfo::_class) ::android::content::pm::ServiceInfo::_class = java::fetch_class("android/content/pm/ServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::content::pm::ServiceInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::ServiceInfo::_class) ::android::content::pm::ServiceInfo::_class = java::fetch_class("android/content/pm/ServiceInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::content::pm::PackageItemInfo::PackageItemInfo() : ::java::lang::Object((jobject)0) {
    if (!::android::content::pm::PackageItemInfo::_class) ::android::content::pm::PackageItemInfo::_class = java::fetch_class("android/content/pm/PackageItemInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::content::pm::PackageItemInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::PackageItemInfo::_class) ::android::content::pm::PackageItemInfo::_class = java::fetch_class("android/content/pm/PackageItemInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageItemInfo::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::PackageItemInfo::_class) ::android::content::pm::PackageItemInfo::_class = java::fetch_class("android/content/pm/PackageItemInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::content::pm::PackageItemInfo::loadLogo(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::content::pm::PackageItemInfo::_class) ::android::content::pm::PackageItemInfo::_class = java::fetch_class("android/content/pm/PackageItemInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLogo", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::content::res::XmlResourceParser android::content::pm::PackageItemInfo::loadXmlMetaData(const ::android::content::pm::PackageManager& arg0, const ::java::lang::String& arg1) const {
    if (!::android::content::pm::PackageItemInfo::_class) ::android::content::pm::PackageItemInfo::_class = java::fetch_class("android/content/pm/PackageItemInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadXmlMetaData", "(Landroid/content/pm/PackageManager;Ljava/lang/String;)Landroid/content/res/XmlResourceParser;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::res::XmlResourceParser _ret(ret);
    return _ret;
}

void android::content::pm::PackageItemInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::content::pm::PackageItemInfo::_class) ::android::content::pm::PackageItemInfo::_class = java::fetch_class("android/content/pm/PackageItemInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}


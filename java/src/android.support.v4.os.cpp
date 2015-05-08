#include "java-core.hpp"
#include <memory>
#include "android.os.AsyncTask.hpp"
#include "android.os.Parcel.hpp"
#include "android.support.v4.os.AsyncTaskCompat.hpp"
#include "android.support.v4.os.EnvironmentCompat.hpp"
#include "android.support.v4.os.ParcelableCompat.hpp"
#include "java.io.File.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::os::ParcelableCompat::_class = nullptr;
jclass android::support::v4::os::EnvironmentCompat::_class = nullptr;
jclass android::support::v4::os::ParcelableCompat_CompatCreator::_class = nullptr;
jclass android::support::v4::os::AsyncTaskCompat::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::os::ParcelableCompat::ParcelableCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::os::ParcelableCompat::_class) ::android::support::v4::os::ParcelableCompat::_class = java::fetch_class("android/support/v4/os/ParcelableCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::os::EnvironmentCompat::EnvironmentCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::os::EnvironmentCompat::_class) ::android::support::v4::os::EnvironmentCompat::_class = java::fetch_class("android/support/v4/os/EnvironmentCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::support::v4::os::EnvironmentCompat::getStorageState(const ::java::io::File& arg0){
    if (!::android::support::v4::os::EnvironmentCompat::_class) ::android::support::v4::os::EnvironmentCompat::_class = java::fetch_class("android/support/v4/os/EnvironmentCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getStorageState", "(Ljava/io/File;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::os::ParcelableCompat_CompatCreator::createFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::support::v4::os::ParcelableCompat_CompatCreator::_class) ::android::support::v4::os::ParcelableCompat_CompatCreator::_class = java::fetch_class("android/support/v4/os/ParcelableCompat$CompatCreator");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFromParcel", "(Landroid/os/Parcel;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> android::support::v4::os::ParcelableCompat_CompatCreator::newArray(int32_t arg0) const {
    if (!::android::support::v4::os::ParcelableCompat_CompatCreator::_class) ::android::support::v4::os::ParcelableCompat_CompatCreator::_class = java::fetch_class("android/support/v4/os/ParcelableCompat$CompatCreator");
    static jmethodID mid = java::jni->GetMethodID(_class, "newArray", "(I)[Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::os::AsyncTaskCompat::AsyncTaskCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::os::AsyncTaskCompat::_class) ::android::support::v4::os::AsyncTaskCompat::_class = java::fetch_class("android/support/v4/os/AsyncTaskCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::AsyncTask android::support::v4::os::AsyncTaskCompat::executeParallel(const ::android::os::AsyncTask& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::android::support::v4::os::AsyncTaskCompat::_class) ::android::support::v4::os::AsyncTaskCompat::_class = java::fetch_class("android/support/v4/os/AsyncTaskCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeParallel", "(Landroid/os/AsyncTask;[Ljava/lang/Object;)Landroid/os/AsyncTask;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::os::AsyncTask _ret(ret);
    return _ret;
}


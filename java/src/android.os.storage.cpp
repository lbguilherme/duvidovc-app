#include "java-core.hpp"
#include <memory>
#include "android.os.storage.OnObbStateChangeListener.hpp"
#include "android.os.storage.StorageManager.hpp"
#include "java.lang.String.hpp"

jclass android::os::storage::OnObbStateChangeListener::_class = nullptr;
jclass android::os::storage::StorageManager::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::storage::OnObbStateChangeListener::OnObbStateChangeListener() : ::java::lang::Object((jobject)0) {
    if (!::android::os::storage::OnObbStateChangeListener::_class) ::android::os::storage::OnObbStateChangeListener::_class = java::fetch_class("android/os/storage/OnObbStateChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::os::storage::OnObbStateChangeListener::onObbStateChange(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::os::storage::OnObbStateChangeListener::_class) ::android::os::storage::OnObbStateChangeListener::_class = java::fetch_class("android/os/storage/OnObbStateChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onObbStateChange", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::storage::StorageManager::mountObb(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::os::storage::OnObbStateChangeListener& arg2) const {
    if (!::android::os::storage::StorageManager::_class) ::android::os::storage::StorageManager::_class = java::fetch_class("android/os/storage/StorageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "mountObb", "(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::os::storage::StorageManager::unmountObb(const ::java::lang::String& arg0, bool arg1, const ::android::os::storage::OnObbStateChangeListener& arg2) const {
    if (!::android::os::storage::StorageManager::_class) ::android::os::storage::StorageManager::_class = java::fetch_class("android/os/storage/StorageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unmountObb", "(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::os::storage::StorageManager::isObbMounted(const ::java::lang::String& arg0) const {
    if (!::android::os::storage::StorageManager::_class) ::android::os::storage::StorageManager::_class = java::fetch_class("android/os/storage/StorageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isObbMounted", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::os::storage::StorageManager::getMountedObbPath(const ::java::lang::String& arg0) const {
    if (!::android::os::storage::StorageManager::_class) ::android::os::storage::StorageManager::_class = java::fetch_class("android/os/storage/StorageManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMountedObbPath", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}


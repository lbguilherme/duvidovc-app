#include "java-core.hpp"
#include <memory>
#include "android.app.backup.BackupAgent.hpp"
#include "android.app.backup.BackupAgentHelper.hpp"
#include "android.app.backup.BackupDataInput.hpp"
#include "android.app.backup.BackupDataInputStream.hpp"
#include "android.app.backup.BackupDataOutput.hpp"
#include "android.app.backup.BackupHelper.hpp"
#include "android.app.backup.BackupManager.hpp"
#include "android.app.backup.FileBackupHelper.hpp"
#include "android.app.backup.FileBackupHelperBase.hpp"
#include "android.app.backup.FullBackupDataOutput.hpp"
#include "android.app.backup.RestoreObserver.hpp"
#include "android.app.backup.SharedPreferencesBackupHelper.hpp"
#include "android.content.Context.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "java.io.File.hpp"
#include "java.lang.String.hpp"

jclass android::app::backup::BackupDataInput::_class = nullptr;
jclass android::app::backup::RestoreObserver::_class = nullptr;
jclass android::app::backup::BackupAgent::_class = nullptr;
jclass android::app::backup::FileBackupHelper::_class = nullptr;
jclass android::app::backup::BackupDataInputStream::_class = nullptr;
jclass android::app::backup::FullBackupDataOutput::_class = nullptr;
jclass android::app::backup::BackupDataOutput::_class = nullptr;
jclass android::app::backup::BackupAgentHelper::_class = nullptr;
jclass android::app::backup::BackupHelper::_class = nullptr;
jclass android::app::backup::FileBackupHelperBase::_class = nullptr;
jclass android::app::backup::BackupManager::_class = nullptr;
jclass android::app::backup::SharedPreferencesBackupHelper::_class = nullptr;

bool android::app::backup::BackupDataInput::readNextHeader() const {
    if (!::android::app::backup::BackupDataInput::_class) ::android::app::backup::BackupDataInput::_class = java::fetch_class("android/app/backup/BackupDataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readNextHeader", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::app::backup::BackupDataInput::getKey() const {
    if (!::android::app::backup::BackupDataInput::_class) ::android::app::backup::BackupDataInput::_class = java::fetch_class("android/app/backup/BackupDataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::app::backup::BackupDataInput::getDataSize() const {
    if (!::android::app::backup::BackupDataInput::_class) ::android::app::backup::BackupDataInput::_class = java::fetch_class("android/app/backup/BackupDataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDataSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::backup::BackupDataInput::readEntityData(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::backup::BackupDataInput::_class) ::android::app::backup::BackupDataInput::_class = java::fetch_class("android/app/backup/BackupDataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "readEntityData", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::BackupDataInput::skipEntityData() const {
    if (!::android::app::backup::BackupDataInput::_class) ::android::app::backup::BackupDataInput::_class = java::fetch_class("android/app/backup/BackupDataInput");
    static jmethodID mid = java::jni->GetMethodID(_class, "skipEntityData", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::backup::RestoreObserver::RestoreObserver() : ::java::lang::Object((jobject)0) {
    if (!::android::app::backup::RestoreObserver::_class) ::android::app::backup::RestoreObserver::_class = java::fetch_class("android/app/backup/RestoreObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::backup::RestoreObserver::restoreStarting(int32_t arg0) const {
    if (!::android::app::backup::RestoreObserver::_class) ::android::app::backup::RestoreObserver::_class = java::fetch_class("android/app/backup/RestoreObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreStarting", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::backup::RestoreObserver::onUpdate(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::app::backup::RestoreObserver::_class) ::android::app::backup::RestoreObserver::_class = java::fetch_class("android/app/backup/RestoreObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUpdate", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::backup::RestoreObserver::restoreFinished(int32_t arg0) const {
    if (!::android::app::backup::RestoreObserver::_class) ::android::app::backup::RestoreObserver::_class = java::fetch_class("android/app/backup/RestoreObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreFinished", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::backup::BackupAgent::BackupAgent() : ::java::lang::Object((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::backup::BackupAgent::onCreate() const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::backup::BackupAgent::onDestroy() const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::backup::BackupAgent::onBackup(const ::android::os::ParcelFileDescriptor& arg0, const ::android::app::backup::BackupDataOutput& arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackup", "(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::BackupAgent::onRestore(const ::android::app::backup::BackupDataInput& arg0, int32_t arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestore", "(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::BackupAgent::onFullBackup(const ::android::app::backup::FullBackupDataOutput& arg0) const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFullBackup", "(Landroid/app/backup/FullBackupDataOutput;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::backup::BackupAgent::fullBackupFile(const ::java::io::File& arg0, const ::android::app::backup::FullBackupDataOutput& arg1) const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "fullBackupFile", "(Ljava/io/File;Landroid/app/backup/FullBackupDataOutput;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::backup::BackupAgent::onRestoreFile(const ::android::os::ParcelFileDescriptor& arg0, int64_t arg1, const ::java::io::File& arg2, int32_t arg3, int64_t arg4, int64_t arg5) const {
    if (!::android::app::backup::BackupAgent::_class) ::android::app::backup::BackupAgent::_class = java::fetch_class("android/app/backup/BackupAgent");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreFile", "(Landroid/os/ParcelFileDescriptor;JLjava/io/File;IJJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int64_t _arg4 = arg4;
    int64_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::backup::FileBackupHelper::FileBackupHelper(const ::android::content::Context& arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0), ::android::app::backup::BackupHelper((jobject)0), ::android::app::backup::FileBackupHelperBase((jobject)0) {
    if (!::android::app::backup::FileBackupHelper::_class) ::android::app::backup::FileBackupHelper::_class = java::fetch_class("android/app/backup/FileBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::app::backup::FileBackupHelper::performBackup(const ::android::os::ParcelFileDescriptor& arg0, const ::android::app::backup::BackupDataOutput& arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::FileBackupHelper::_class) ::android::app::backup::FileBackupHelper::_class = java::fetch_class("android/app/backup/FileBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "performBackup", "(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::FileBackupHelper::restoreEntity(const ::android::app::backup::BackupDataInputStream& arg0) const {
    if (!::android::app::backup::FileBackupHelper::_class) ::android::app::backup::FileBackupHelper::_class = java::fetch_class("android/app/backup/FileBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreEntity", "(Landroid/app/backup/BackupDataInputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::backup::FileBackupHelper::writeNewStateDescription(const ::android::os::ParcelFileDescriptor& arg0) const {
    if (!::android::app::backup::FileBackupHelper::_class) ::android::app::backup::FileBackupHelper::_class = java::fetch_class("android/app/backup/FileBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNewStateDescription", "(Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::app::backup::BackupDataInputStream::read() const {
    if (!::android::app::backup::BackupDataInputStream::_class) ::android::app::backup::BackupDataInputStream::_class = java::fetch_class("android/app/backup/BackupDataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::backup::BackupDataInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::app::backup::BackupDataInputStream::_class) ::android::app::backup::BackupDataInputStream::_class = java::fetch_class("android/app/backup/BackupDataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::app::backup::BackupDataInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::android::app::backup::BackupDataInputStream::_class) ::android::app::backup::BackupDataInputStream::_class = java::fetch_class("android/app/backup/BackupDataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::app::backup::BackupDataInputStream::getKey() const {
    if (!::android::app::backup::BackupDataInputStream::_class) ::android::app::backup::BackupDataInputStream::_class = java::fetch_class("android/app/backup/BackupDataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::app::backup::BackupDataInputStream::size() const {
    if (!::android::app::backup::BackupDataInputStream::_class) ::android::app::backup::BackupDataInputStream::_class = java::fetch_class("android/app/backup/BackupDataInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::app::backup::BackupDataOutput::writeEntityHeader(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::app::backup::BackupDataOutput::_class) ::android::app::backup::BackupDataOutput::_class = java::fetch_class("android/app/backup/BackupDataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeEntityHeader", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::app::backup::BackupDataOutput::writeEntityData(const std::vector< int8_t>& arg0, int32_t arg1) const {
    if (!::android::app::backup::BackupDataOutput::_class) ::android::app::backup::BackupDataOutput::_class = java::fetch_class("android/app/backup/BackupDataOutput");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeEntityData", "([BI)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::backup::BackupAgentHelper::BackupAgentHelper() : ::java::lang::Object((jobject)0), ::android::app::backup::BackupAgent((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::app::backup::BackupAgentHelper::_class) ::android::app::backup::BackupAgentHelper::_class = java::fetch_class("android/app/backup/BackupAgentHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::app::backup::BackupAgentHelper::onBackup(const ::android::os::ParcelFileDescriptor& arg0, const ::android::app::backup::BackupDataOutput& arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::BackupAgentHelper::_class) ::android::app::backup::BackupAgentHelper::_class = java::fetch_class("android/app/backup/BackupAgentHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackup", "(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::BackupAgentHelper::onRestore(const ::android::app::backup::BackupDataInput& arg0, int32_t arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::BackupAgentHelper::_class) ::android::app::backup::BackupAgentHelper::_class = java::fetch_class("android/app/backup/BackupAgentHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestore", "(Landroid/app/backup/BackupDataInput;ILandroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::BackupAgentHelper::addHelper(const ::java::lang::String& arg0, const ::android::app::backup::BackupHelper& arg1) const {
    if (!::android::app::backup::BackupAgentHelper::_class) ::android::app::backup::BackupAgentHelper::_class = java::fetch_class("android/app/backup/BackupAgentHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHelper", "(Ljava/lang/String;Landroid/app/backup/BackupHelper;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::app::backup::BackupHelper::performBackup(const ::android::os::ParcelFileDescriptor& arg0, const ::android::app::backup::BackupDataOutput& arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::BackupHelper::_class) ::android::app::backup::BackupHelper::_class = java::fetch_class("android/app/backup/BackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "performBackup", "(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::BackupHelper::restoreEntity(const ::android::app::backup::BackupDataInputStream& arg0) const {
    if (!::android::app::backup::BackupHelper::_class) ::android::app::backup::BackupHelper::_class = java::fetch_class("android/app/backup/BackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreEntity", "(Landroid/app/backup/BackupDataInputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::backup::BackupHelper::writeNewStateDescription(const ::android::os::ParcelFileDescriptor& arg0) const {
    if (!::android::app::backup::BackupHelper::_class) ::android::app::backup::BackupHelper::_class = java::fetch_class("android/app/backup/BackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNewStateDescription", "(Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::backup::FileBackupHelperBase::writeNewStateDescription(const ::android::os::ParcelFileDescriptor& arg0) const {
    if (!::android::app::backup::FileBackupHelperBase::_class) ::android::app::backup::FileBackupHelperBase::_class = java::fetch_class("android/app/backup/FileBackupHelperBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNewStateDescription", "(Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::backup::BackupManager::BackupManager(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::app::backup::BackupManager::_class) ::android::app::backup::BackupManager::_class = java::fetch_class("android/app/backup/BackupManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::app::backup::BackupManager::dataChanged() const {
    if (!::android::app::backup::BackupManager::_class) ::android::app::backup::BackupManager::_class = java::fetch_class("android/app/backup/BackupManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::app::backup::BackupManager::dataChanged(const ::java::lang::String& arg0){
    if (!::android::app::backup::BackupManager::_class) ::android::app::backup::BackupManager::_class = java::fetch_class("android/app/backup/BackupManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dataChanged", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::app::backup::BackupManager::requestRestore(const ::android::app::backup::RestoreObserver& arg0) const {
    if (!::android::app::backup::BackupManager::_class) ::android::app::backup::BackupManager::_class = java::fetch_class("android/app/backup/BackupManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestRestore", "(Landroid/app/backup/RestoreObserver;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::app::backup::SharedPreferencesBackupHelper::SharedPreferencesBackupHelper(const ::android::content::Context& arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0), ::android::app::backup::BackupHelper((jobject)0), ::android::app::backup::FileBackupHelperBase((jobject)0) {
    if (!::android::app::backup::SharedPreferencesBackupHelper::_class) ::android::app::backup::SharedPreferencesBackupHelper::_class = java::fetch_class("android/app/backup/SharedPreferencesBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::app::backup::SharedPreferencesBackupHelper::performBackup(const ::android::os::ParcelFileDescriptor& arg0, const ::android::app::backup::BackupDataOutput& arg1, const ::android::os::ParcelFileDescriptor& arg2) const {
    if (!::android::app::backup::SharedPreferencesBackupHelper::_class) ::android::app::backup::SharedPreferencesBackupHelper::_class = java::fetch_class("android/app/backup/SharedPreferencesBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "performBackup", "(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::app::backup::SharedPreferencesBackupHelper::restoreEntity(const ::android::app::backup::BackupDataInputStream& arg0) const {
    if (!::android::app::backup::SharedPreferencesBackupHelper::_class) ::android::app::backup::SharedPreferencesBackupHelper::_class = java::fetch_class("android/app/backup/SharedPreferencesBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreEntity", "(Landroid/app/backup/BackupDataInputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::app::backup::SharedPreferencesBackupHelper::writeNewStateDescription(const ::android::os::ParcelFileDescriptor& arg0) const {
    if (!::android::app::backup::SharedPreferencesBackupHelper::_class) ::android::app::backup::SharedPreferencesBackupHelper::_class = java::fetch_class("android/app/backup/SharedPreferencesBackupHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNewStateDescription", "(Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}


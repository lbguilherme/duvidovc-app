#include "java-core.hpp"
#include <memory>
#include "android.content.BroadcastReceiver.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.IntentFilter.hpp"
#include "android.content.pm.ProviderInfo.hpp"
#include "android.database.Cursor.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Message.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.support.v4.content.AsyncTaskLoader.hpp"
#include "android.support.v4.content.ContextCompat.hpp"
#include "android.support.v4.content.CursorLoader.hpp"
#include "android.support.v4.content.FileProvider.hpp"
#include "android.support.v4.content.IntentCompat.hpp"
#include "android.support.v4.content.Loader.hpp"
#include "android.support.v4.content.LocalBroadcastManager.hpp"
#include "android.support.v4.content.ModernAsyncTask.hpp"
#include "android.support.v4.content.WakefulBroadcastReceiver.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.util.concurrent.Executor.hpp"
#include "java.util.concurrent.TimeUnit.hpp"

jclass android::support::v4::content::ModernAsyncTask::_class = nullptr;
jclass android::support::v4::content::AsyncTaskLoader::_class = nullptr;
jclass android::support::v4::content::Loader::_class = nullptr;
jclass android::support::v4::content::ModernAsyncTask_WorkerRunnable::_class = nullptr;
jclass android::support::v4::content::IntentCompat::_class = nullptr;
jclass android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1::_class = nullptr;
jclass android::support::v4::content::IntentCompat_IntentCompatImplHC::_class = nullptr;
jclass android::support::v4::content::ContextCompat::_class = nullptr;
jclass android::support::v4::content::AsyncTaskLoader_LoadTask::_class = nullptr;
jclass android::support::v4::content::ModernAsyncTask_AsyncTaskResult::_class = nullptr;
jclass android::support::v4::content::LocalBroadcastManager_ReceiverRecord::_class = nullptr;
jclass android::support::v4::content::LocalBroadcastManager_BroadcastRecord::_class = nullptr;
jclass android::support::v4::content::ModernAsyncTask_InternalHandler::_class = nullptr;
jclass android::support::v4::content::Loader_ForceLoadContentObserver::_class = nullptr;
jclass android::support::v4::content::FileProvider_SimplePathStrategy::_class = nullptr;
jclass android::support::v4::content::FileProvider::_class = nullptr;
jclass android::support::v4::content::LocalBroadcastManager::_class = nullptr;
jclass android::support::v4::content::Loader_OnLoadCompleteListener::_class = nullptr;
jclass android::support::v4::content::IntentCompat_IntentCompatImplBase::_class = nullptr;
jclass android::support::v4::content::WakefulBroadcastReceiver::_class = nullptr;
jclass android::support::v4::content::IntentCompat_IntentCompatImpl::_class = nullptr;
jclass android::support::v4::content::CursorLoader::_class = nullptr;
jclass android::support::v4::content::ModernAsyncTask_Status::_class = nullptr;
jclass android::support::v4::content::FileProvider_PathStrategy::_class = nullptr;

void android::support::v4::content::ModernAsyncTask::init(){
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "init", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::support::v4::content::ModernAsyncTask::setDefaultExecutor(const ::java::util::concurrent::Executor& arg0){
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultExecutor", "(Ljava/util/concurrent/Executor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::ModernAsyncTask::ModernAsyncTask() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::support::v4::content::ModernAsyncTask_Status android::support::v4::content::ModernAsyncTask::getStatus() const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatus", "()Landroid/support/v4/content/ModernAsyncTask$Status;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::content::ModernAsyncTask_Status _ret(ret);
    return _ret;
}

bool android::support::v4::content::ModernAsyncTask::isCancelled() const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::content::ModernAsyncTask::cancel(bool arg0) const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::content::ModernAsyncTask::get() const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::content::ModernAsyncTask::get(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::content::ModernAsyncTask android::support::v4::content::ModernAsyncTask::execute(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "([Ljava/lang/Object;)Landroid/support/v4/content/ModernAsyncTask;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::content::ModernAsyncTask _ret(ret);
    return _ret;
}

::android::support::v4::content::ModernAsyncTask android::support::v4::content::ModernAsyncTask::executeOnExecutor(const ::java::util::concurrent::Executor& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeOnExecutor", "(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/support/v4/content/ModernAsyncTask;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::content::ModernAsyncTask _ret(ret);
    return _ret;
}

void android::support::v4::content::ModernAsyncTask::execute(const ::java::lang::Runnable& arg0){
    if (!::android::support::v4::content::ModernAsyncTask::_class) ::android::support::v4::content::ModernAsyncTask::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::AsyncTaskLoader::AsyncTaskLoader(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::content::Loader((jobject)0) {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::content::AsyncTaskLoader::setUpdateThrottle(int64_t arg0) const {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUpdateThrottle", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::content::AsyncTaskLoader::cancelLoad() const {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelLoad", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::content::AsyncTaskLoader::onCanceled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCanceled", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::content::AsyncTaskLoader::loadInBackground() const {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadInBackground", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::content::AsyncTaskLoader::waitForLoader() const {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForLoader", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::AsyncTaskLoader::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::content::AsyncTaskLoader::_class) ::android::support::v4::content::AsyncTaskLoader::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::Loader::Loader(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::content::Loader::deliverResult(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverResult", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Context android::support::v4::content::Loader::getContext() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

int32_t android::support::v4::content::Loader::getId() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::content::Loader::registerListener(int32_t arg0, const ::android::support::v4::content::Loader_OnLoadCompleteListener& arg1) const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerListener", "(ILandroid/support/v4/content/Loader$OnLoadCompleteListener;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::content::Loader::unregisterListener(const ::android::support::v4::content::Loader_OnLoadCompleteListener& arg0) const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterListener", "(Landroid/support/v4/content/Loader$OnLoadCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::content::Loader::isStarted() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStarted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::content::Loader::isAbandoned() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAbandoned", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::content::Loader::isReset() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::content::Loader::startLoading() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "startLoading", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::Loader::forceLoad() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "forceLoad", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::Loader::stopLoading() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopLoading", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::Loader::abandon() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "abandon", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::Loader::reset() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::content::Loader::takeContentChanged() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "takeContentChanged", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::content::Loader::commitContentChanged() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "commitContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::Loader::rollbackContentChanged() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "rollbackContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::content::Loader::onContentChanged() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::support::v4::content::Loader::dataToString(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataToString", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::content::Loader::toString() const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::content::Loader::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::content::Loader::_class) ::android::support::v4::content::Loader::_class = java::fetch_class("android/support/v4/content/Loader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::content::Intent android::support::v4::content::IntentCompat::makeMainActivity(const ::android::content::ComponentName& arg0){
    if (!::android::support::v4::content::IntentCompat::_class) ::android::support::v4::content::IntentCompat::_class = java::fetch_class("android/support/v4/content/IntentCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeMainActivity", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat::makeMainSelectorActivity(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::android::support::v4::content::IntentCompat::_class) ::android::support::v4::content::IntentCompat::_class = java::fetch_class("android/support/v4/content/IntentCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeMainSelectorActivity", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat::makeRestartActivityTask(const ::android::content::ComponentName& arg0){
    if (!::android::support::v4::content::IntentCompat::_class) ::android::support::v4::content::IntentCompat::_class = java::fetch_class("android/support/v4/content/IntentCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeRestartActivityTask", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1::makeMainSelectorActivity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1::_class) ::android::support::v4::content::IntentCompat_IntentCompatImplIcsMr1::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImplIcsMr1");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeMainSelectorActivity", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImplHC::makeMainActivity(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImplHC::_class) ::android::support::v4::content::IntentCompat_IntentCompatImplHC::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImplHC");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeMainActivity", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImplHC::makeRestartActivityTask(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImplHC::_class) ::android::support::v4::content::IntentCompat_IntentCompatImplHC::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImplHC");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeRestartActivityTask", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::ContextCompat::ContextCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::content::ContextCompat::startActivities(const ::android::content::Context& arg0, const std::vector< ::android::content::Intent>& arg1){
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startActivities", "(Landroid/content/Context;[Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::content::Intent::_class) ::android::content::Intent::_class = java::fetch_class("android/content/Intent");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::content::Intent::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::content::Intent& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::content::ContextCompat::startActivities(const ::android::content::Context& arg0, const std::vector< ::android::content::Intent>& arg1, const ::android::os::Bundle& arg2){
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startActivities", "(Landroid/content/Context;[Landroid/content/Intent;Landroid/os/Bundle;)Z");
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
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

std::vector< ::java::io::File> android::support::v4::content::ContextCompat::getObbDirs(const ::android::content::Context& arg0){
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getObbDirs", "(Landroid/content/Context;)[Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::io::File> android::support::v4::content::ContextCompat::getExternalFilesDirs(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExternalFilesDirs", "(Landroid/content/Context;Ljava/lang/String;)[Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::io::File> android::support::v4::content::ContextCompat::getExternalCacheDirs(const ::android::content::Context& arg0){
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExternalCacheDirs", "(Landroid/content/Context;)[Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::io::File> _ret(rets, ::java::io::File((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::io::File retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::graphics::drawable::Drawable android::support::v4::content::ContextCompat::getDrawable(const ::android::content::Context& arg0, int32_t arg1){
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDrawable", "(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::io::File android::support::v4::content::ContextCompat::getNoBackupFilesDir(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNoBackupFilesDir", "(Landroid/content/Context;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::support::v4::content::ContextCompat::getCodeCacheDir(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::content::ContextCompat::_class) ::android::support::v4::content::ContextCompat::_class = java::fetch_class("android/support/v4/content/ContextCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCodeCacheDir", "(Landroid/content/Context;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

void android::support::v4::content::AsyncTaskLoader_LoadTask::run() const {
    if (!::android::support::v4::content::AsyncTaskLoader_LoadTask::_class) ::android::support::v4::content::AsyncTaskLoader_LoadTask::_class = java::fetch_class("android/support/v4/content/AsyncTaskLoader$LoadTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::support::v4::content::LocalBroadcastManager_ReceiverRecord::toString() const {
    if (!::android::support::v4::content::LocalBroadcastManager_ReceiverRecord::_class) ::android::support::v4::content::LocalBroadcastManager_ReceiverRecord::_class = java::fetch_class("android/support/v4/content/LocalBroadcastManager$ReceiverRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::content::ModernAsyncTask_InternalHandler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::support::v4::content::ModernAsyncTask_InternalHandler::_class) ::android::support::v4::content::ModernAsyncTask_InternalHandler::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask$InternalHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::Loader_ForceLoadContentObserver::Loader_ForceLoadContentObserver(const ::android::support::v4::content::Loader& arg0) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {
    if (!::android::support::v4::content::Loader_ForceLoadContentObserver::_class) ::android::support::v4::content::Loader_ForceLoadContentObserver::_class = java::fetch_class("android/support/v4/content/Loader$ForceLoadContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/content/Loader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::support::v4::content::Loader_ForceLoadContentObserver::deliverSelfNotifications() const {
    if (!::android::support::v4::content::Loader_ForceLoadContentObserver::_class) ::android::support::v4::content::Loader_ForceLoadContentObserver::_class = java::fetch_class("android/support/v4/content/Loader$ForceLoadContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverSelfNotifications", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::content::Loader_ForceLoadContentObserver::onChange(bool arg0) const {
    if (!::android::support::v4::content::Loader_ForceLoadContentObserver::_class) ::android::support::v4::content::Loader_ForceLoadContentObserver::_class = java::fetch_class("android/support/v4/content/Loader$ForceLoadContentObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::FileProvider_SimplePathStrategy::FileProvider_SimplePathStrategy(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::content::FileProvider_PathStrategy((jobject)0) {
    if (!::android::support::v4::content::FileProvider_SimplePathStrategy::_class) ::android::support::v4::content::FileProvider_SimplePathStrategy::_class = java::fetch_class("android/support/v4/content/FileProvider$SimplePathStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::content::FileProvider_SimplePathStrategy::addRoot(const ::java::lang::String& arg0, const ::java::io::File& arg1) const {
    if (!::android::support::v4::content::FileProvider_SimplePathStrategy::_class) ::android::support::v4::content::FileProvider_SimplePathStrategy::_class = java::fetch_class("android/support/v4/content/FileProvider$SimplePathStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRoot", "(Ljava/lang/String;Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::net::Uri android::support::v4::content::FileProvider_SimplePathStrategy::getUriForFile(const ::java::io::File& arg0) const {
    if (!::android::support::v4::content::FileProvider_SimplePathStrategy::_class) ::android::support::v4::content::FileProvider_SimplePathStrategy::_class = java::fetch_class("android/support/v4/content/FileProvider$SimplePathStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUriForFile", "(Ljava/io/File;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::io::File android::support::v4::content::FileProvider_SimplePathStrategy::getFileForUri(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::content::FileProvider_SimplePathStrategy::_class) ::android::support::v4::content::FileProvider_SimplePathStrategy::_class = java::fetch_class("android/support/v4/content/FileProvider$SimplePathStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileForUri", "(Landroid/net/Uri;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::FileProvider::FileProvider() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::content::FileProvider::onCreate() const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::content::FileProvider::attachInfo(const ::android::content::Context& arg0, const ::android::content::pm::ProviderInfo& arg1) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachInfo", "(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::net::Uri android::support::v4::content::FileProvider::getUriForFile(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::io::File& arg2){
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUriForFile", "(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::database::Cursor android::support::v4::content::FileProvider::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::java::lang::String android::support::v4::content::FileProvider::getType(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::content::FileProvider::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t android::support::v4::content::FileProvider::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::support::v4::content::FileProvider::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::os::ParcelFileDescriptor android::support::v4::content::FileProvider::openFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::content::FileProvider::_class) ::android::support::v4::content::FileProvider::_class = java::fetch_class("android/support/v4/content/FileProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFile", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::support::v4::content::LocalBroadcastManager android::support::v4::content::LocalBroadcastManager::getInstance(const ::android::content::Context& arg0){
    if (!::android::support::v4::content::LocalBroadcastManager::_class) ::android::support::v4::content::LocalBroadcastManager::_class = java::fetch_class("android/support/v4/content/LocalBroadcastManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Landroid/content/Context;)Landroid/support/v4/content/LocalBroadcastManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::content::LocalBroadcastManager _ret(ret);
    return _ret;
}

void android::support::v4::content::LocalBroadcastManager::registerReceiver(const ::android::content::BroadcastReceiver& arg0, const ::android::content::IntentFilter& arg1) const {
    if (!::android::support::v4::content::LocalBroadcastManager::_class) ::android::support::v4::content::LocalBroadcastManager::_class = java::fetch_class("android/support/v4/content/LocalBroadcastManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerReceiver", "(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::content::LocalBroadcastManager::unregisterReceiver(const ::android::content::BroadcastReceiver& arg0) const {
    if (!::android::support::v4::content::LocalBroadcastManager::_class) ::android::support::v4::content::LocalBroadcastManager::_class = java::fetch_class("android/support/v4/content/LocalBroadcastManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterReceiver", "(Landroid/content/BroadcastReceiver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::content::LocalBroadcastManager::sendBroadcast(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::content::LocalBroadcastManager::_class) ::android::support::v4::content::LocalBroadcastManager::_class = java::fetch_class("android/support/v4/content/LocalBroadcastManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcast", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::content::LocalBroadcastManager::sendBroadcastSync(const ::android::content::Intent& arg0) const {
    if (!::android::support::v4::content::LocalBroadcastManager::_class) ::android::support::v4::content::LocalBroadcastManager::_class = java::fetch_class("android/support/v4/content/LocalBroadcastManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendBroadcastSync", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::content::Loader_OnLoadCompleteListener::onLoadComplete(const ::android::support::v4::content::Loader& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::content::Loader_OnLoadCompleteListener::_class) ::android::support::v4::content::Loader_OnLoadCompleteListener::_class = java::fetch_class("android/support/v4/content/Loader$OnLoadCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadComplete", "(Landroid/support/v4/content/Loader;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImplBase::makeMainActivity(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImplBase::_class) ::android::support::v4::content::IntentCompat_IntentCompatImplBase::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeMainActivity", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImplBase::makeMainSelectorActivity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImplBase::_class) ::android::support::v4::content::IntentCompat_IntentCompatImplBase::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeMainSelectorActivity", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImplBase::makeRestartActivityTask(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImplBase::_class) ::android::support::v4::content::IntentCompat_IntentCompatImplBase::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeRestartActivityTask", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::WakefulBroadcastReceiver::WakefulBroadcastReceiver() : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {
    if (!::android::support::v4::content::WakefulBroadcastReceiver::_class) ::android::support::v4::content::WakefulBroadcastReceiver::_class = java::fetch_class("android/support/v4/content/WakefulBroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::ComponentName android::support::v4::content::WakefulBroadcastReceiver::startWakefulService(const ::android::content::Context& arg0, const ::android::content::Intent& arg1){
    if (!::android::support::v4::content::WakefulBroadcastReceiver::_class) ::android::support::v4::content::WakefulBroadcastReceiver::_class = java::fetch_class("android/support/v4/content/WakefulBroadcastReceiver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startWakefulService", "(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

bool android::support::v4::content::WakefulBroadcastReceiver::completeWakefulIntent(const ::android::content::Intent& arg0){
    if (!::android::support::v4::content::WakefulBroadcastReceiver::_class) ::android::support::v4::content::WakefulBroadcastReceiver::_class = java::fetch_class("android/support/v4/content/WakefulBroadcastReceiver");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "completeWakefulIntent", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImpl::makeMainActivity(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImpl::_class) ::android::support::v4::content::IntentCompat_IntentCompatImpl::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeMainActivity", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImpl::makeMainSelectorActivity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImpl::_class) ::android::support::v4::content::IntentCompat_IntentCompatImpl::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeMainSelectorActivity", "(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent android::support::v4::content::IntentCompat_IntentCompatImpl::makeRestartActivityTask(const ::android::content::ComponentName& arg0) const {
    if (!::android::support::v4::content::IntentCompat_IntentCompatImpl::_class) ::android::support::v4::content::IntentCompat_IntentCompatImpl::_class = java::fetch_class("android/support/v4/content/IntentCompat$IntentCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeRestartActivityTask", "(Landroid/content/ComponentName;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::database::Cursor android::support::v4::content::CursorLoader::loadInBackground() const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadInBackground", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::support::v4::content::CursorLoader::deliverResult(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverResult", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::CursorLoader::CursorLoader(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::content::AsyncTaskLoader((jobject)0), ::android::support::v4::content::Loader((jobject)0) {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::content::CursorLoader::CursorLoader(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, const std::vector< ::java::lang::String>& arg2, const ::java::lang::String& arg3, const std::vector< ::java::lang::String>& arg4, const ::java::lang::String& arg5) : ::java::lang::Object((jobject)0), ::android::support::v4::content::AsyncTaskLoader((jobject)0), ::android::support::v4::content::Loader((jobject)0) {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject _arg3 = arg3.obj;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

void android::support::v4::content::CursorLoader::onCanceled(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCanceled", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::Uri android::support::v4::content::CursorLoader::getUri() const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

void android::support::v4::content::CursorLoader::setUri(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUri", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::support::v4::content::CursorLoader::getProjection() const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProjection", "()[Ljava/lang/String;");
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

void android::support::v4::content::CursorLoader::setProjection(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProjection", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::content::CursorLoader::getSelection() const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelection", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::content::CursorLoader::setSelection(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::support::v4::content::CursorLoader::getSelectionArgs() const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectionArgs", "()[Ljava/lang/String;");
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

void android::support::v4::content::CursorLoader::setSelectionArgs(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectionArgs", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::content::CursorLoader::getSortOrder() const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSortOrder", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::content::CursorLoader::setSortOrder(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSortOrder", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::content::CursorLoader::dump(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const ::java::io::PrintWriter& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::content::CursorLoader::onCanceled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCanceled", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::content::CursorLoader::deliverResult(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::content::CursorLoader::_class) ::android::support::v4::content::CursorLoader::_class = java::fetch_class("android/support/v4/content/CursorLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverResult", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::support::v4::content::ModernAsyncTask_Status> android::support::v4::content::ModernAsyncTask_Status::values(){
    if (!::android::support::v4::content::ModernAsyncTask_Status::_class) ::android::support::v4::content::ModernAsyncTask_Status::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/support/v4/content/ModernAsyncTask$Status;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::support::v4::content::ModernAsyncTask_Status> _ret(rets, ::android::support::v4::content::ModernAsyncTask_Status((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::support::v4::content::ModernAsyncTask_Status retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::support::v4::content::ModernAsyncTask_Status android::support::v4::content::ModernAsyncTask_Status::valueOf(const ::java::lang::String& arg0){
    if (!::android::support::v4::content::ModernAsyncTask_Status::_class) ::android::support::v4::content::ModernAsyncTask_Status::_class = java::fetch_class("android/support/v4/content/ModernAsyncTask$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/support/v4/content/ModernAsyncTask$Status;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::content::ModernAsyncTask_Status _ret(ret);
    return _ret;
}

::android::net::Uri android::support::v4::content::FileProvider_PathStrategy::getUriForFile(const ::java::io::File& arg0) const {
    if (!::android::support::v4::content::FileProvider_PathStrategy::_class) ::android::support::v4::content::FileProvider_PathStrategy::_class = java::fetch_class("android/support/v4/content/FileProvider$PathStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUriForFile", "(Ljava/io/File;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::io::File android::support::v4::content::FileProvider_PathStrategy::getFileForUri(const ::android::net::Uri& arg0) const {
    if (!::android::support::v4::content::FileProvider_PathStrategy::_class) ::android::support::v4::content::FileProvider_PathStrategy::_class = java::fetch_class("android/support/v4/content/FileProvider$PathStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileForUri", "(Landroid/net/Uri;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}


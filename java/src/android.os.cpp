#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.os.AsyncTask.hpp"
#include "android.os.BadParcelableException.hpp"
#include "android.os.BatteryManager.hpp"
#include "android.os.Binder.hpp"
#include "android.os.Build.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.ConditionVariable.hpp"
#include "android.os.CountDownTimer.hpp"
#include "android.os.DeadObjectException.hpp"
#include "android.os.Debug.hpp"
#include "android.os.DropBoxManager.hpp"
#include "android.os.Environment.hpp"
#include "android.os.FileObserver.hpp"
#include "android.os.Handler.hpp"
#include "android.os.HandlerThread.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.IInterface.hpp"
#include "android.os.Looper.hpp"
#include "android.os.MemoryFile.hpp"
#include "android.os.Message.hpp"
#include "android.os.MessageQueue.hpp"
#include "android.os.Messenger.hpp"
#include "android.os.NetworkOnMainThreadException.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.os.ParcelFormatException.hpp"
#include "android.os.ParcelUuid.hpp"
#include "android.os.Parcelable.hpp"
#include "android.os.PatternMatcher.hpp"
#include "android.os.PowerManager.hpp"
#include "android.os.Process.hpp"
#include "android.os.RecoverySystem.hpp"
#include "android.os.RemoteCallbackList.hpp"
#include "android.os.RemoteException.hpp"
#include "android.os.ResultReceiver.hpp"
#include "android.os.StatFs.hpp"
#include "android.os.StrictMode.hpp"
#include "android.os.SystemClock.hpp"
#include "android.os.TokenWatcher.hpp"
#include "android.os.TransactionTooLargeException.hpp"
#include "android.os.Vibrator.hpp"
#include "android.os.WorkSource.hpp"
#include "android.util.Printer.hpp"
#include "android.util.SparseArray.hpp"
#include "android.util.SparseBooleanArray.hpp"
#include "java.io.File.hpp"
#include "java.io.FileDescriptor.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Byte.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Thread.hpp"
#include "java.net.DatagramSocket.hpp"
#include "java.net.Socket.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.HashMap.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "java.util.UUID.hpp"
#include "java.util.concurrent.Executor.hpp"
#include "java.util.concurrent.TimeUnit.hpp"

jclass android::os::NetworkOnMainThreadException::_class = nullptr;
jclass android::os::RecoverySystem_ProgressListener::_class = nullptr;
jclass android::os::Debug_InstructionCount::_class = nullptr;
jclass android::os::ParcelFileDescriptor::_class = nullptr;
jclass android::os::StrictMode::_class = nullptr;
jclass android::os::HandlerThread::_class = nullptr;
jclass android::os::Binder::_class = nullptr;
jclass android::os::Looper::_class = nullptr;
jclass android::os::TokenWatcher::_class = nullptr;
jclass android::os::Debug::_class = nullptr;
jclass android::os::Debug_MemoryInfo::_class = nullptr;
jclass android::os::ParcelUuid::_class = nullptr;
jclass android::os::Parcel::_class = nullptr;
jclass android::os::Build::_class = nullptr;
jclass android::os::AsyncTask::_class = nullptr;
jclass android::os::WorkSource::_class = nullptr;
jclass android::os::Environment::_class = nullptr;
jclass android::os::Vibrator::_class = nullptr;
jclass android::os::BadParcelableException::_class = nullptr;
jclass android::os::ParcelFileDescriptor_AutoCloseOutputStream::_class = nullptr;
jclass android::os::Parcelable_Creator::_class = nullptr;
jclass android::os::ParcelFormatException::_class = nullptr;
jclass android::os::Build_VERSION_CODES::_class = nullptr;
jclass android::os::PatternMatcher::_class = nullptr;
jclass android::os::Process::_class = nullptr;
jclass android::os::IBinder_DeathRecipient::_class = nullptr;
jclass android::os::Parcelable::_class = nullptr;
jclass android::os::FileObserver::_class = nullptr;
jclass android::os::ConditionVariable::_class = nullptr;
jclass android::os::RecoverySystem::_class = nullptr;
jclass android::os::CountDownTimer::_class = nullptr;
jclass android::os::SystemClock::_class = nullptr;
jclass android::os::TransactionTooLargeException::_class = nullptr;
jclass android::os::StrictMode_ThreadPolicy_Builder::_class = nullptr;
jclass android::os::ResultReceiver::_class = nullptr;
jclass android::os::IBinder::_class = nullptr;
jclass android::os::StatFs::_class = nullptr;
jclass android::os::BatteryManager::_class = nullptr;
jclass android::os::Handler::_class = nullptr;
jclass android::os::AsyncTask_Status::_class = nullptr;
jclass android::os::StrictMode_VmPolicy_Builder::_class = nullptr;
jclass android::os::RemoteException::_class = nullptr;
jclass android::os::Message::_class = nullptr;
jclass android::os::DeadObjectException::_class = nullptr;
jclass android::os::Handler_Callback::_class = nullptr;
jclass android::os::PowerManager_WakeLock::_class = nullptr;
jclass android::os::StrictMode_VmPolicy::_class = nullptr;
jclass android::os::MessageQueue::_class = nullptr;
jclass android::os::Build_VERSION::_class = nullptr;
jclass android::os::MessageQueue_IdleHandler::_class = nullptr;
jclass android::os::RemoteCallbackList::_class = nullptr;
jclass android::os::ParcelFileDescriptor_AutoCloseInputStream::_class = nullptr;
jclass android::os::DropBoxManager::_class = nullptr;
jclass android::os::Messenger::_class = nullptr;
jclass android::os::Parcelable_ClassLoaderCreator::_class = nullptr;
jclass android::os::DropBoxManager_Entry::_class = nullptr;
jclass android::os::Bundle::_class = nullptr;
jclass android::os::PowerManager::_class = nullptr;
jclass android::os::IInterface::_class = nullptr;
jclass android::os::StrictMode_ThreadPolicy::_class = nullptr;
jclass android::os::MemoryFile::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::NetworkOnMainThreadException::NetworkOnMainThreadException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::NetworkOnMainThreadException::_class) ::android::os::NetworkOnMainThreadException::_class = java::fetch_class("android/os/NetworkOnMainThreadException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::os::RecoverySystem_ProgressListener::onProgress(int32_t arg0) const {
    if (!::android::os::RecoverySystem_ProgressListener::_class) ::android::os::RecoverySystem_ProgressListener::_class = java::fetch_class("android/os/RecoverySystem$ProgressListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Debug_InstructionCount::Debug_InstructionCount() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Debug_InstructionCount::_class) ::android::os::Debug_InstructionCount::_class = java::fetch_class("android/os/Debug$InstructionCount");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::os::Debug_InstructionCount::resetAndStart() const {
    if (!::android::os::Debug_InstructionCount::_class) ::android::os::Debug_InstructionCount::_class = java::fetch_class("android/os/Debug$InstructionCount");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetAndStart", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::os::Debug_InstructionCount::collect() const {
    if (!::android::os::Debug_InstructionCount::_class) ::android::os::Debug_InstructionCount::_class = java::fetch_class("android/os/Debug$InstructionCount");
    static jmethodID mid = java::jni->GetMethodID(_class, "collect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::os::Debug_InstructionCount::globalTotal() const {
    if (!::android::os::Debug_InstructionCount::_class) ::android::os::Debug_InstructionCount::_class = java::fetch_class("android/os/Debug$InstructionCount");
    static jmethodID mid = java::jni->GetMethodID(_class, "globalTotal", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Debug_InstructionCount::globalMethodInvocations() const {
    if (!::android::os::Debug_InstructionCount::_class) ::android::os::Debug_InstructionCount::_class = java::fetch_class("android/os/Debug$InstructionCount");
    static jmethodID mid = java::jni->GetMethodID(_class, "globalMethodInvocations", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::open(const ::java::io::File& arg0, int32_t arg1){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::dup(const ::java::io::FileDescriptor& arg0){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dup", "(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::dup() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "dup", "()Landroid/os/ParcelFileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::fromFd(int32_t arg0){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromFd", "(I)Landroid/os/ParcelFileDescriptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::adoptFd(int32_t arg0){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "adoptFd", "(I)Landroid/os/ParcelFileDescriptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::fromSocket(const ::java::net::Socket& arg0){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromSocket", "(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::ParcelFileDescriptor::fromDatagramSocket(const ::java::net::DatagramSocket& arg0){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromDatagramSocket", "(Ljava/net/DatagramSocket;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

std::vector< ::android::os::ParcelFileDescriptor> android::os::ParcelFileDescriptor::createPipe(){
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createPipe", "()[Landroid/os/ParcelFileDescriptor;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::ParcelFileDescriptor> _ret(rets, ::android::os::ParcelFileDescriptor((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::ParcelFileDescriptor retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::io::FileDescriptor android::os::ParcelFileDescriptor::getFileDescriptor() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFileDescriptor", "()Ljava/io/FileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::FileDescriptor _ret(ret);
    return _ret;
}

int64_t android::os::ParcelFileDescriptor::getStatSize() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatSize", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t android::os::ParcelFileDescriptor::getFd() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFd", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::ParcelFileDescriptor::detachFd() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "detachFd", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::ParcelFileDescriptor::close() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::os::ParcelFileDescriptor::toString() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::os::ParcelFileDescriptor::describeContents() const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::ParcelFileDescriptor::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::ParcelFileDescriptor::_class) ::android::os::ParcelFileDescriptor::_class = java::fetch_class("android/os/ParcelFileDescriptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::StrictMode::setThreadPolicy(const ::android::os::StrictMode_ThreadPolicy& arg0){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setThreadPolicy", "(Landroid/os/StrictMode$ThreadPolicy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::android::os::StrictMode_ThreadPolicy android::os::StrictMode::getThreadPolicy(){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadPolicy", "()Landroid/os/StrictMode$ThreadPolicy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::StrictMode_ThreadPolicy _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy android::os::StrictMode::allowThreadDiskWrites(){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allowThreadDiskWrites", "()Landroid/os/StrictMode$ThreadPolicy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::StrictMode_ThreadPolicy _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy android::os::StrictMode::allowThreadDiskReads(){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allowThreadDiskReads", "()Landroid/os/StrictMode$ThreadPolicy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::StrictMode_ThreadPolicy _ret(ret);
    return _ret;
}

void android::os::StrictMode::setVmPolicy(const ::android::os::StrictMode_VmPolicy& arg0){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setVmPolicy", "(Landroid/os/StrictMode$VmPolicy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::android::os::StrictMode_VmPolicy android::os::StrictMode::getVmPolicy(){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getVmPolicy", "()Landroid/os/StrictMode$VmPolicy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::StrictMode_VmPolicy _ret(ret);
    return _ret;
}

void android::os::StrictMode::enableDefaults(){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enableDefaults", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::StrictMode::noteSlowCall(const ::java::lang::String& arg0){
    if (!::android::os::StrictMode::_class) ::android::os::StrictMode::_class = java::fetch_class("android/os/StrictMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "noteSlowCall", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::HandlerThread::HandlerThread(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::lang::Thread((jobject)0) {
    if (!::android::os::HandlerThread::_class) ::android::os::HandlerThread::_class = java::fetch_class("android/os/HandlerThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::HandlerThread::HandlerThread(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0), ::java::lang::Thread((jobject)0) {
    if (!::android::os::HandlerThread::_class) ::android::os::HandlerThread::_class = java::fetch_class("android/os/HandlerThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::os::HandlerThread::run() const {
    if (!::android::os::HandlerThread::_class) ::android::os::HandlerThread::_class = java::fetch_class("android/os/HandlerThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::Looper android::os::HandlerThread::getLooper() const {
    if (!::android::os::HandlerThread::_class) ::android::os::HandlerThread::_class = java::fetch_class("android/os/HandlerThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

bool android::os::HandlerThread::quit() const {
    if (!::android::os::HandlerThread::_class) ::android::os::HandlerThread::_class = java::fetch_class("android/os/HandlerThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "quit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::os::HandlerThread::getThreadId() const {
    if (!::android::os::HandlerThread::_class) ::android::os::HandlerThread::_class = java::fetch_class("android/os/HandlerThread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreadId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Binder::Binder() : ::java::lang::Object((jobject)0), ::android::os::IBinder((jobject)0) {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::os::Binder::getCallingPid(){
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallingPid", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Binder::getCallingUid(){
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallingUid", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int64_t android::os::Binder::clearCallingIdentity(){
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearCallingIdentity", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

void android::os::Binder::restoreCallingIdentity(int64_t arg0){
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "restoreCallingIdentity", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::os::Binder::flushPendingCommands(){
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "flushPendingCommands", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Binder::joinThreadPool(){
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "joinThreadPool", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Binder::attachInterface(const ::android::os::IInterface& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachInterface", "(Landroid/os/IInterface;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::os::Binder::getInterfaceDescriptor() const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::os::Binder::pingBinder() const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "pingBinder", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::os::Binder::isBinderAlive() const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBinderAlive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::IInterface android::os::Binder::queryLocalInterface(const ::java::lang::String& arg0) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryLocalInterface", "(Ljava/lang/String;)Landroid/os/IInterface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IInterface _ret(ret);
    return _ret;
}

void android::os::Binder::dump(const ::java::io::FileDescriptor& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/io/FileDescriptor;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Binder::dumpAsync(const ::java::io::FileDescriptor& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "dumpAsync", "(Ljava/io/FileDescriptor;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Binder::transact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "transact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::os::Binder::linkToDeath(const ::android::os::IBinder_DeathRecipient& arg0, int32_t arg1) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "linkToDeath", "(Landroid/os/IBinder$DeathRecipient;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Binder::unlinkToDeath(const ::android::os::IBinder_DeathRecipient& arg0, int32_t arg1) const {
    if (!::android::os::Binder::_class) ::android::os::Binder::_class = java::fetch_class("android/os/Binder");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlinkToDeath", "(Landroid/os/IBinder$DeathRecipient;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::os::Looper::prepare(){
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "prepare", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Looper::prepareMainLooper(){
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "prepareMainLooper", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

::android::os::Looper android::os::Looper::getMainLooper(){
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMainLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

void android::os::Looper::loop(){
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loop", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

::android::os::Looper android::os::Looper::myLooper(){
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "myLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

void android::os::Looper::setMessageLogging(const ::android::util::Printer& arg0) const {
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessageLogging", "(Landroid/util/Printer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::MessageQueue android::os::Looper::myQueue(){
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "myQueue", "()Landroid/os/MessageQueue;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::MessageQueue _ret(ret);
    return _ret;
}

void android::os::Looper::quit() const {
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetMethodID(_class, "quit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Thread android::os::Looper::getThread() const {
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThread", "()Ljava/lang/Thread;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Thread _ret(ret);
    return _ret;
}

void android::os::Looper::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::os::Looper::toString() const {
    if (!::android::os::Looper::_class) ::android::os::Looper::_class = java::fetch_class("android/os/Looper");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::TokenWatcher::TokenWatcher(const ::android::os::Handler& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Handler;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::os::TokenWatcher::acquired() const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquired", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::TokenWatcher::released() const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "released", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::TokenWatcher::acquire(const ::android::os::IBinder& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "(Landroid/os/IBinder;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::TokenWatcher::cleanup(const ::android::os::IBinder& arg0, bool arg1) const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "cleanup", "(Landroid/os/IBinder;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::TokenWatcher::release(const ::android::os::IBinder& arg0) const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::os::TokenWatcher::isAcquired() const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAcquired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::TokenWatcher::dump() const {
    if (!::android::os::TokenWatcher::_class) ::android::os::TokenWatcher::_class = java::fetch_class("android/os/TokenWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::Debug::waitForDebugger(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "waitForDebugger", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

bool android::os::Debug::waitingForDebugger(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "waitingForDebugger", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool android::os::Debug::isDebuggerConnected(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDebuggerConnected", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void android::os::Debug::changeDebugPort(int32_t arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "changeDebugPort", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::os::Debug::startNativeTracing(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startNativeTracing", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::stopNativeTracing(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stopNativeTracing", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::enableEmulatorTraceOutput(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enableEmulatorTraceOutput", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::startMethodTracing(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startMethodTracing", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::startMethodTracing(const ::java::lang::String& arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startMethodTracing", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::os::Debug::startMethodTracing(const ::java::lang::String& arg0, int32_t arg1){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startMethodTracing", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::os::Debug::startMethodTracing(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startMethodTracing", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::os::Debug::stopMethodTracing(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stopMethodTracing", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

int64_t android::os::Debug::threadCpuTimeNanos(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "threadCpuTimeNanos", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

void android::os::Debug::startAllocCounting(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startAllocCounting", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::stopAllocCounting(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stopAllocCounting", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalAllocCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalAllocSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalFreedCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalFreedCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalFreedSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalFreedSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalClassInitCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalClassInitCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalClassInitTime(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalClassInitTime", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalExternalAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalExternalAllocCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalExternalAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalExternalAllocSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalExternalFreedCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalExternalFreedCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalExternalFreedSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalExternalFreedSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getGlobalGcInvocationCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGlobalGcInvocationCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getThreadAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadAllocCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getThreadAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadAllocSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getThreadExternalAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadExternalAllocCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getThreadExternalAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadExternalAllocSize", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getThreadGcInvocationCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadGcInvocationCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::os::Debug::resetGlobalAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalAllocCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalAllocSize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalFreedCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalFreedCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalFreedSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalFreedSize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalClassInitCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalClassInitCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalClassInitTime(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalClassInitTime", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalExternalAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalExternalAllocCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalExternalAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalExternalAllocSize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalExternalFreedCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalExternalFreedCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalExternalFreedSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalExternalFreedSize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetGlobalGcInvocationCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetGlobalGcInvocationCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetThreadAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetThreadAllocCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetThreadAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetThreadAllocSize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetThreadExternalAllocCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetThreadExternalAllocCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetThreadExternalAllocSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetThreadExternalAllocSize", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetThreadGcInvocationCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetThreadGcInvocationCount", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::os::Debug::resetAllCounts(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "resetAllCounts", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

int64_t android::os::Debug::getNativeHeapSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNativeHeapSize", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::os::Debug::getNativeHeapAllocatedSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNativeHeapAllocatedSize", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::os::Debug::getNativeHeapFreeSize(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNativeHeapFreeSize", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

void android::os::Debug::getMemoryInfo(const ::android::os::Debug_MemoryInfo& arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMemoryInfo", "(Landroid/os/Debug$MemoryInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int64_t android::os::Debug::getPss(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPss", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int32_t android::os::Debug::setAllocationLimit(int32_t arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAllocationLimit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::os::Debug::setGlobalAllocationLimit(int32_t arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setGlobalAllocationLimit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::os::Debug::printLoadedClasses(int32_t arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "printLoadedClasses", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::os::Debug::getLoadedClassCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLoadedClassCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void android::os::Debug::dumpHprofData(const ::java::lang::String& arg0){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpHprofData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::os::Debug::getBinderSentTransactions(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBinderSentTransactions", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getBinderReceivedTransactions(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBinderReceivedTransactions", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getBinderLocalObjectCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBinderLocalObjectCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getBinderProxyObjectCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBinderProxyObjectCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Debug::getBinderDeathObjectCount(){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBinderDeathObjectCount", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool android::os::Debug::dumpService(const ::java::lang::String& arg0, const ::java::io::FileDescriptor& arg1, const std::vector< ::java::lang::String>& arg2){
    if (!::android::os::Debug::_class) ::android::os::Debug::_class = java::fetch_class("android/os/Debug");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "dumpService", "(Ljava/lang/String;Ljava/io/FileDescriptor;[Ljava/lang/String;)Z");
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
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Debug_MemoryInfo::Debug_MemoryInfo() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::os::Debug_MemoryInfo::getTotalPss() const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalPss", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Debug_MemoryInfo::getTotalPrivateDirty() const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalPrivateDirty", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Debug_MemoryInfo::getTotalSharedDirty() const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalSharedDirty", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Debug_MemoryInfo::getOtherPss(int32_t arg0) const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOtherPss", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::os::Debug_MemoryInfo::getOtherPrivateDirty(int32_t arg0) const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOtherPrivateDirty", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::os::Debug_MemoryInfo::getOtherSharedDirty(int32_t arg0) const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOtherSharedDirty", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::os::Debug_MemoryInfo::getOtherLabel(int32_t arg0){
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOtherLabel", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::os::Debug_MemoryInfo::describeContents() const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::Debug_MemoryInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Debug_MemoryInfo::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::os::Debug_MemoryInfo::_class) ::android::os::Debug_MemoryInfo::_class = java::fetch_class("android/os/Debug$MemoryInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ParcelUuid::ParcelUuid(const ::java::util::UUID& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/UUID;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::ParcelUuid android::os::ParcelUuid::fromString(const ::java::lang::String& arg0){
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromString", "(Ljava/lang/String;)Landroid/os/ParcelUuid;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::ParcelUuid _ret(ret);
    return _ret;
}

::java::util::UUID android::os::ParcelUuid::getUuid() const {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUuid", "()Ljava/util/UUID;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::UUID _ret(ret);
    return _ret;
}

::java::lang::String android::os::ParcelUuid::toString() const {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::os::ParcelUuid::hashCode() const {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::os::ParcelUuid::equals(const ::java::lang::Object& arg0) const {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::os::ParcelUuid::describeContents() const {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::ParcelUuid::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::ParcelUuid::_class) ::android::os::ParcelUuid::_class = java::fetch_class("android/os/ParcelUuid");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcel android::os::Parcel::obtain(){
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/os/Parcel;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::Parcel _ret(ret);
    return _ret;
}

void android::os::Parcel::recycle() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::os::Parcel::dataSize() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Parcel::dataAvail() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataAvail", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Parcel::dataPosition() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Parcel::dataCapacity() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "dataCapacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::Parcel::setDataSize(int32_t arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::setDataPosition(int32_t arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::setDataCapacity(int32_t arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDataCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> android::os::Parcel::marshall() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "marshall", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::unmarshall(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "unmarshall", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::os::Parcel::appendFrom(const ::android::os::Parcel& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendFrom", "(Landroid/os/Parcel;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::os::Parcel::hasFileDescriptors() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFileDescriptors", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::Parcel::writeInterfaceToken(const ::java::lang::String& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInterfaceToken", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::enforceInterface(const ::java::lang::String& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "enforceInterface", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeByteArray(const std::vector< int8_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByteArray", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeByteArray(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByteArray", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::os::Parcel::writeInt(int32_t arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeInt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeLong(int64_t arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLong", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeFloat(float arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloat", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeDouble(double arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDouble", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeString(const ::java::lang::String& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeStrongBinder(const ::android::os::IBinder& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeStrongBinder", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeStrongInterface(const ::android::os::IInterface& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeStrongInterface", "(Landroid/os/IInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeFileDescriptor(const ::java::io::FileDescriptor& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFileDescriptor", "(Ljava/io/FileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeByte(int8_t arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeByte", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeMap(const ::java::util::Map& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeMap", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeBundle(const ::android::os::Bundle& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBundle", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeList(const ::java::util::List& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeList", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeArray", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeSparseArray(const ::android::util::SparseArray& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeSparseArray", "(Landroid/util/SparseArray;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeSparseBooleanArray(const ::android::util::SparseBooleanArray& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeSparseBooleanArray", "(Landroid/util/SparseBooleanArray;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeBooleanArray(const std::vector< bool>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBooleanArray", "([Z)V");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< bool> android::os::Parcel::createBooleanArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createBooleanArray", "()[Z");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readBooleanArray(const std::vector< bool>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBooleanArray", "([Z)V");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeCharArray(const std::vector< uint16_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeCharArray", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< uint16_t> android::os::Parcel::createCharArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createCharArray", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readCharArray(const std::vector< uint16_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readCharArray", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeIntArray(const std::vector< int32_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeIntArray", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int32_t> android::os::Parcel::createIntArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createIntArray", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readIntArray(const std::vector< int32_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readIntArray", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeLongArray(const std::vector< int64_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLongArray", "([J)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int64_t> android::os::Parcel::createLongArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createLongArray", "()[J");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readLongArray(const std::vector< int64_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLongArray", "([J)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeFloatArray(const std::vector< float>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFloatArray", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< float> android::os::Parcel::createFloatArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFloatArray", "()[F");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readFloatArray(const std::vector< float>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloatArray", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeDoubleArray(const std::vector< double>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeDoubleArray", "([D)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< double> android::os::Parcel::createDoubleArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDoubleArray", "()[D");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readDoubleArray(const std::vector< double>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDoubleArray", "([D)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeStringArray(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeStringArray", "([Ljava/lang/String;)V");
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

std::vector< ::java::lang::String> android::os::Parcel::createStringArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createStringArray", "()[Ljava/lang/String;");
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

void android::os::Parcel::readStringArray(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readStringArray", "([Ljava/lang/String;)V");
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

void android::os::Parcel::writeBinderArray(const std::vector< ::android::os::IBinder>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBinderArray", "([Landroid/os/IBinder;)V");
    unsigned arg0s = arg0.size();
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::os::IBinder::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::os::IBinder& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::os::IBinder> android::os::Parcel::createBinderArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createBinderArray", "()[Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::IBinder> _ret(rets, ::android::os::IBinder((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::IBinder retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::os::Parcel::readBinderArray(const std::vector< ::android::os::IBinder>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBinderArray", "([Landroid/os/IBinder;)V");
    unsigned arg0s = arg0.size();
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::os::IBinder::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::os::IBinder& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeTypedList(const ::java::util::List& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTypedList", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeStringList(const ::java::util::List& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeStringList", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeBinderList(const ::java::util::List& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBinderList", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeTypedArray(const std::vector< ::android::os::Parcelable>& arg0, int32_t arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTypedArray", "([Landroid/os/Parcelable;I)V");
    unsigned arg0s = arg0.size();
    if (!::android::os::Parcelable::_class) ::android::os::Parcelable::_class = java::fetch_class("android/os/Parcelable");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::os::Parcelable::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::os::Parcelable& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Parcel::writeValue(const ::java::lang::Object& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeValue", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeParcelable(const ::android::os::Parcelable& arg0, int32_t arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeParcelable", "(Landroid/os/Parcelable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Parcel::writeSerializable(const ::java::io::Serializable& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeSerializable", "(Ljava/io/Serializable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeException(const ::java::lang::Exception& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeException", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::writeNoException() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeNoException", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::Parcel::readException() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readException", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::Parcel::readException(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readException", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::os::Parcel::readInt() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::os::Parcel::readLong() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float android::os::Parcel::readFloat() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double android::os::Parcel::readDouble() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::lang::String android::os::Parcel::readString() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::IBinder android::os::Parcel::readStrongBinder() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readStrongBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::android::os::ParcelFileDescriptor android::os::Parcel::readFileDescriptor() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFileDescriptor", "()Landroid/os/ParcelFileDescriptor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

int8_t android::os::Parcel::readByte() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

void android::os::Parcel::readMap(const ::java::util::Map& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readMap", "(Ljava/util/Map;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Parcel::readList(const ::java::util::List& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readList", "(Ljava/util/List;Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::HashMap android::os::Parcel::readHashMap(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readHashMap", "(Ljava/lang/ClassLoader;)Ljava/util/HashMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::HashMap _ret(ret);
    return _ret;
}

::android::os::Bundle android::os::Parcel::readBundle() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::os::Parcel::readBundle(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBundle", "(Ljava/lang/ClassLoader;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

std::vector< int8_t> android::os::Parcel::createByteArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::os::Parcel::readByteArray(const std::vector< int8_t>& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readByteArray", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::ArrayList android::os::Parcel::readArrayList(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readArrayList", "(Ljava/lang/ClassLoader;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> android::os::Parcel::readArray(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readArray", "(Ljava/lang/ClassLoader;)[Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
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

::android::util::SparseArray android::os::Parcel::readSparseArray(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readSparseArray", "(Ljava/lang/ClassLoader;)Landroid/util/SparseArray;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::SparseArray _ret(ret);
    return _ret;
}

::android::util::SparseBooleanArray android::os::Parcel::readSparseBooleanArray() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readSparseBooleanArray", "()Landroid/util/SparseBooleanArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::SparseBooleanArray _ret(ret);
    return _ret;
}

::java::util::ArrayList android::os::Parcel::createTypedArrayList(const ::android::os::Parcelable_Creator& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createTypedArrayList", "(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::os::Parcel::readTypedList(const ::java::util::List& arg0, const ::android::os::Parcelable_Creator& arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readTypedList", "(Ljava/util/List;Landroid/os/Parcelable$Creator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::ArrayList android::os::Parcel::createStringArrayList() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createStringArrayList", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::ArrayList android::os::Parcel::createBinderArrayList() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createBinderArrayList", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

void android::os::Parcel::readStringList(const ::java::util::List& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readStringList", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Parcel::readBinderList(const ::java::util::List& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBinderList", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> android::os::Parcel::createTypedArray(const ::android::os::Parcelable_Creator& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "createTypedArray", "(Landroid/os/Parcelable$Creator;)[Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
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

void android::os::Parcel::readTypedArray(const std::vector< ::java::lang::Object>& arg0, const ::android::os::Parcelable_Creator& arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readTypedArray", "([Ljava/lang/Object;Landroid/os/Parcelable$Creator;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Parcel::writeParcelableArray(const std::vector< ::android::os::Parcelable>& arg0, int32_t arg1) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeParcelableArray", "([Landroid/os/Parcelable;I)V");
    unsigned arg0s = arg0.size();
    if (!::android::os::Parcelable::_class) ::android::os::Parcelable::_class = java::fetch_class("android/os/Parcelable");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::os::Parcelable::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::os::Parcelable& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::os::Parcel::readValue(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readValue", "(Ljava/lang/ClassLoader;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::os::Parcelable android::os::Parcel::readParcelable(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readParcelable", "(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

std::vector< ::android::os::Parcelable> android::os::Parcel::readParcelableArray(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readParcelableArray", "(Ljava/lang/ClassLoader;)[Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::Parcelable> _ret(rets, ::android::os::Parcelable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::Parcelable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::io::Serializable android::os::Parcel::readSerializable() const {
    if (!::android::os::Parcel::_class) ::android::os::Parcel::_class = java::fetch_class("android/os/Parcel");
    static jmethodID mid = java::jni->GetMethodID(_class, "readSerializable", "()Ljava/io/Serializable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::Serializable _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Build::Build() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Build::_class) ::android::os::Build::_class = java::fetch_class("android/os/Build");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::os::Build::getRadioVersion(){
    if (!::android::os::Build::_class) ::android::os::Build::_class = java::fetch_class("android/os/Build");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRadioVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::AsyncTask::AsyncTask() : ::java::lang::Object((jobject)0) {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::AsyncTask_Status android::os::AsyncTask::getStatus() const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatus", "()Landroid/os/AsyncTask$Status;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::AsyncTask_Status _ret(ret);
    return _ret;
}

bool android::os::AsyncTask::isCancelled() const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::os::AsyncTask::cancel(bool arg0) const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::os::AsyncTask::get() const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::os::AsyncTask::get(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::os::AsyncTask android::os::AsyncTask::execute(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "([Ljava/lang/Object;)Landroid/os/AsyncTask;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::AsyncTask _ret(ret);
    return _ret;
}

::android::os::AsyncTask android::os::AsyncTask::executeOnExecutor(const ::java::util::concurrent::Executor& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeOnExecutor", "(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;");
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
    ::android::os::AsyncTask _ret(ret);
    return _ret;
}

void android::os::AsyncTask::execute(const ::java::lang::Runnable& arg0){
    if (!::android::os::AsyncTask::_class) ::android::os::AsyncTask::_class = java::fetch_class("android/os/AsyncTask");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::WorkSource::WorkSource() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::os::WorkSource::clear() const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::os::WorkSource::diff(const ::android::os::WorkSource& arg0) const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "diff", "(Landroid/os/WorkSource;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::os::WorkSource::set(const ::android::os::WorkSource& arg0) const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Landroid/os/WorkSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::os::WorkSource::add(const ::android::os::WorkSource& arg0) const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Landroid/os/WorkSource;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::WorkSource::remove(const ::android::os::WorkSource& arg0) const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Landroid/os/WorkSource;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::os::WorkSource::describeContents() const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::WorkSource::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::WorkSource::_class) ::android::os::WorkSource::_class = java::fetch_class("android/os/WorkSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Environment::Environment() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::io::File android::os::Environment::getRootDirectory(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRootDirectory", "()Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::os::Environment::getDataDirectory(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDataDirectory", "()Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::os::Environment::getExternalStorageDirectory(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExternalStorageDirectory", "()Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::os::Environment::getExternalStoragePublicDirectory(const ::java::lang::String& arg0){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExternalStoragePublicDirectory", "(Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::io::File android::os::Environment::getDownloadCacheDirectory(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDownloadCacheDirectory", "()Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

::java::lang::String android::os::Environment::getExternalStorageState(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExternalStorageState", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::os::Environment::isExternalStorageRemovable(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isExternalStorageRemovable", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool android::os::Environment::isExternalStorageEmulated(){
    if (!::android::os::Environment::_class) ::android::os::Environment::_class = java::fetch_class("android/os/Environment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isExternalStorageEmulated", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool android::os::Vibrator::hasVibrator() const {
    if (!::android::os::Vibrator::_class) ::android::os::Vibrator::_class = java::fetch_class("android/os/Vibrator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasVibrator", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::Vibrator::vibrate(int64_t arg0) const {
    if (!::android::os::Vibrator::_class) ::android::os::Vibrator::_class = java::fetch_class("android/os/Vibrator");
    static jmethodID mid = java::jni->GetMethodID(_class, "vibrate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Vibrator::vibrate(const std::vector< int64_t>& arg0, int32_t arg1) const {
    if (!::android::os::Vibrator::_class) ::android::os::Vibrator::_class = java::fetch_class("android/os/Vibrator");
    static jmethodID mid = java::jni->GetMethodID(_class, "vibrate", "([JI)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Vibrator::cancel() const {
    if (!::android::os::Vibrator::_class) ::android::os::Vibrator::_class = java::fetch_class("android/os/Vibrator");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::BadParcelableException::BadParcelableException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::BadParcelableException::_class) ::android::os::BadParcelableException::_class = java::fetch_class("android/os/BadParcelableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::BadParcelableException::BadParcelableException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidRuntimeException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::BadParcelableException::_class) ::android::os::BadParcelableException::_class = java::fetch_class("android/os/BadParcelableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ParcelFileDescriptor_AutoCloseOutputStream::ParcelFileDescriptor_AutoCloseOutputStream(const ::android::os::ParcelFileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::android::os::ParcelFileDescriptor_AutoCloseOutputStream::_class) ::android::os::ParcelFileDescriptor_AutoCloseOutputStream::_class = java::fetch_class("android/os/ParcelFileDescriptor$AutoCloseOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::ParcelFileDescriptor_AutoCloseOutputStream::close() const {
    if (!::android::os::ParcelFileDescriptor_AutoCloseOutputStream::_class) ::android::os::ParcelFileDescriptor_AutoCloseOutputStream::_class = java::fetch_class("android/os/ParcelFileDescriptor$AutoCloseOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object android::os::Parcelable_Creator::createFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::os::Parcelable_Creator::_class) ::android::os::Parcelable_Creator::_class = java::fetch_class("android/os/Parcelable$Creator");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFromParcel", "(Landroid/os/Parcel;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> android::os::Parcelable_Creator::newArray(int32_t arg0) const {
    if (!::android::os::Parcelable_Creator::_class) ::android::os::Parcelable_Creator::_class = java::fetch_class("android/os/Parcelable$Creator");
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
::android::os::ParcelFormatException::ParcelFormatException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::ParcelFormatException::_class) ::android::os::ParcelFormatException::_class = java::fetch_class("android/os/ParcelFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ParcelFormatException::ParcelFormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::ParcelFormatException::_class) ::android::os::ParcelFormatException::_class = java::fetch_class("android/os/ParcelFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Build_VERSION_CODES::Build_VERSION_CODES() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Build_VERSION_CODES::_class) ::android::os::Build_VERSION_CODES::_class = java::fetch_class("android/os/Build$VERSION_CODES");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::PatternMatcher::PatternMatcher(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::PatternMatcher::PatternMatcher(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::os::PatternMatcher::getPath() const {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::os::PatternMatcher::getType() const {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::os::PatternMatcher::match(const ::java::lang::String& arg0) const {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::os::PatternMatcher::toString() const {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::os::PatternMatcher::describeContents() const {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::PatternMatcher::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::PatternMatcher::_class) ::android::os::PatternMatcher::_class = java::fetch_class("android/os/PatternMatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Process::Process() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t android::os::Process::getElapsedCpuTime(){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getElapsedCpuTime", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int32_t android::os::Process::myPid(){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "myPid", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Process::myTid(){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "myTid", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Process::myUid(){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "myUid", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

int32_t android::os::Process::getUidForName(const ::java::lang::String& arg0){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUidForName", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::os::Process::getGidForName(const ::java::lang::String& arg0){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGidForName", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::os::Process::setThreadPriority(int32_t arg0, int32_t arg1){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setThreadPriority", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::os::Process::setThreadPriority(int32_t arg0){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setThreadPriority", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t android::os::Process::getThreadPriority(int32_t arg0){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getThreadPriority", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool android::os::Process::supportsProcesses(){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "supportsProcesses", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void android::os::Process::killProcess(int32_t arg0){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "killProcess", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::os::Process::sendSignal(int32_t arg0, int32_t arg1){
    if (!::android::os::Process::_class) ::android::os::Process::_class = java::fetch_class("android/os/Process");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sendSignal", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::os::IBinder_DeathRecipient::binderDied() const {
    if (!::android::os::IBinder_DeathRecipient::_class) ::android::os::IBinder_DeathRecipient::_class = java::fetch_class("android/os/IBinder$DeathRecipient");
    static jmethodID mid = java::jni->GetMethodID(_class, "binderDied", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::os::Parcelable::describeContents() const {
    if (!::android::os::Parcelable::_class) ::android::os::Parcelable::_class = java::fetch_class("android/os/Parcelable");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::Parcelable::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::Parcelable::_class) ::android::os::Parcelable::_class = java::fetch_class("android/os/Parcelable");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::FileObserver::FileObserver(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::FileObserver::_class) ::android::os::FileObserver::_class = java::fetch_class("android/os/FileObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::FileObserver::FileObserver(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::os::FileObserver::_class) ::android::os::FileObserver::_class = java::fetch_class("android/os/FileObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::os::FileObserver::startWatching() const {
    if (!::android::os::FileObserver::_class) ::android::os::FileObserver::_class = java::fetch_class("android/os/FileObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "startWatching", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::FileObserver::stopWatching() const {
    if (!::android::os::FileObserver::_class) ::android::os::FileObserver::_class = java::fetch_class("android/os/FileObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopWatching", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::FileObserver::onEvent(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::FileObserver::_class) ::android::os::FileObserver::_class = java::fetch_class("android/os/FileObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEvent", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ConditionVariable::ConditionVariable() : ::java::lang::Object((jobject)0) {
    if (!::android::os::ConditionVariable::_class) ::android::os::ConditionVariable::_class = java::fetch_class("android/os/ConditionVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ConditionVariable::ConditionVariable(bool arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::ConditionVariable::_class) ::android::os::ConditionVariable::_class = java::fetch_class("android/os/ConditionVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::ConditionVariable::open() const {
    if (!::android::os::ConditionVariable::_class) ::android::os::ConditionVariable::_class = java::fetch_class("android/os/ConditionVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::ConditionVariable::close() const {
    if (!::android::os::ConditionVariable::_class) ::android::os::ConditionVariable::_class = java::fetch_class("android/os/ConditionVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::ConditionVariable::block() const {
    if (!::android::os::ConditionVariable::_class) ::android::os::ConditionVariable::_class = java::fetch_class("android/os/ConditionVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "block", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::os::ConditionVariable::block(int64_t arg0) const {
    if (!::android::os::ConditionVariable::_class) ::android::os::ConditionVariable::_class = java::fetch_class("android/os/ConditionVariable");
    static jmethodID mid = java::jni->GetMethodID(_class, "block", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::RecoverySystem::RecoverySystem() : ::java::lang::Object((jobject)0) {
    if (!::android::os::RecoverySystem::_class) ::android::os::RecoverySystem::_class = java::fetch_class("android/os/RecoverySystem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::os::RecoverySystem::verifyPackage(const ::java::io::File& arg0, const ::android::os::RecoverySystem_ProgressListener& arg1, const ::java::io::File& arg2){
    if (!::android::os::RecoverySystem::_class) ::android::os::RecoverySystem::_class = java::fetch_class("android/os/RecoverySystem");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "verifyPackage", "(Ljava/io/File;Landroid/os/RecoverySystem$ProgressListener;Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::os::RecoverySystem::installPackage(const ::android::content::Context& arg0, const ::java::io::File& arg1){
    if (!::android::os::RecoverySystem::_class) ::android::os::RecoverySystem::_class = java::fetch_class("android/os/RecoverySystem");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "installPackage", "(Landroid/content/Context;Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::os::RecoverySystem::rebootWipeUserData(const ::android::content::Context& arg0){
    if (!::android::os::RecoverySystem::_class) ::android::os::RecoverySystem::_class = java::fetch_class("android/os/RecoverySystem");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rebootWipeUserData", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::os::RecoverySystem::rebootWipeCache(const ::android::content::Context& arg0){
    if (!::android::os::RecoverySystem::_class) ::android::os::RecoverySystem::_class = java::fetch_class("android/os/RecoverySystem");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rebootWipeCache", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::CountDownTimer::CountDownTimer(int64_t arg0, int64_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::os::CountDownTimer::_class) ::android::os::CountDownTimer::_class = java::fetch_class("android/os/CountDownTimer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::os::CountDownTimer::cancel() const {
    if (!::android::os::CountDownTimer::_class) ::android::os::CountDownTimer::_class = java::fetch_class("android/os/CountDownTimer");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::CountDownTimer android::os::CountDownTimer::start() const {
    if (!::android::os::CountDownTimer::_class) ::android::os::CountDownTimer::_class = java::fetch_class("android/os/CountDownTimer");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()Landroid/os/CountDownTimer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::CountDownTimer _ret(ret);
    return _ret;
}

void android::os::CountDownTimer::onTick(int64_t arg0) const {
    if (!::android::os::CountDownTimer::_class) ::android::os::CountDownTimer::_class = java::fetch_class("android/os/CountDownTimer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTick", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::CountDownTimer::onFinish() const {
    if (!::android::os::CountDownTimer::_class) ::android::os::CountDownTimer::_class = java::fetch_class("android/os/CountDownTimer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::SystemClock::sleep(int64_t arg0){
    if (!::android::os::SystemClock::_class) ::android::os::SystemClock::_class = java::fetch_class("android/os/SystemClock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sleep", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool android::os::SystemClock::setCurrentTimeMillis(int64_t arg0){
    if (!::android::os::SystemClock::_class) ::android::os::SystemClock::_class = java::fetch_class("android/os/SystemClock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCurrentTimeMillis", "(J)Z");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

int64_t android::os::SystemClock::uptimeMillis(){
    if (!::android::os::SystemClock::_class) ::android::os::SystemClock::_class = java::fetch_class("android/os/SystemClock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "uptimeMillis", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::os::SystemClock::elapsedRealtime(){
    if (!::android::os::SystemClock::_class) ::android::os::SystemClock::_class = java::fetch_class("android/os/SystemClock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "elapsedRealtime", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

int64_t android::os::SystemClock::currentThreadTimeMillis(){
    if (!::android::os::SystemClock::_class) ::android::os::SystemClock::_class = java::fetch_class("android/os/SystemClock");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "currentThreadTimeMillis", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::TransactionTooLargeException::TransactionTooLargeException() : ::java::lang::Object((jobject)0), ::android::os::RemoteException((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::TransactionTooLargeException::_class) ::android::os::TransactionTooLargeException::_class = java::fetch_class("android/os/TransactionTooLargeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::StrictMode_ThreadPolicy_Builder::StrictMode_ThreadPolicy_Builder(const ::android::os::StrictMode_ThreadPolicy& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/StrictMode$ThreadPolicy;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::detectAll() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectAll", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::permitAll() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "permitAll", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::detectNetwork() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectNetwork", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::permitNetwork() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "permitNetwork", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::detectDiskReads() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectDiskReads", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::permitDiskReads() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "permitDiskReads", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::detectCustomSlowCalls() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectCustomSlowCalls", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::permitCustomSlowCalls() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "permitCustomSlowCalls", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::detectDiskWrites() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectDiskWrites", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::permitDiskWrites() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "permitDiskWrites", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::penaltyDialog() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyDialog", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::penaltyDeath() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyDeath", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::penaltyDeathOnNetwork() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyDeathOnNetwork", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::penaltyFlashScreen() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyFlashScreen", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::penaltyLog() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyLog", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy_Builder android::os::StrictMode_ThreadPolicy_Builder::penaltyDropBox() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyDropBox", "()Landroid/os/StrictMode$ThreadPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_ThreadPolicy android::os::StrictMode_ThreadPolicy_Builder::build() const {
    if (!::android::os::StrictMode_ThreadPolicy_Builder::_class) ::android::os::StrictMode_ThreadPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/os/StrictMode$ThreadPolicy;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_ThreadPolicy _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ResultReceiver::ResultReceiver(const ::android::os::Handler& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::ResultReceiver::_class) ::android::os::ResultReceiver::_class = java::fetch_class("android/os/ResultReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::ResultReceiver::send(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::os::ResultReceiver::_class) ::android::os::ResultReceiver::_class = java::fetch_class("android/os/ResultReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(ILandroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::os::ResultReceiver::describeContents() const {
    if (!::android::os::ResultReceiver::_class) ::android::os::ResultReceiver::_class = java::fetch_class("android/os/ResultReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::ResultReceiver::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::ResultReceiver::_class) ::android::os::ResultReceiver::_class = java::fetch_class("android/os/ResultReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::os::IBinder::getInterfaceDescriptor() const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceDescriptor", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::os::IBinder::pingBinder() const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "pingBinder", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::os::IBinder::isBinderAlive() const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBinderAlive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::os::IInterface android::os::IBinder::queryLocalInterface(const ::java::lang::String& arg0) const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "queryLocalInterface", "(Ljava/lang/String;)Landroid/os/IInterface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IInterface _ret(ret);
    return _ret;
}

void android::os::IBinder::dump(const ::java::io::FileDescriptor& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Ljava/io/FileDescriptor;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::IBinder::dumpAsync(const ::java::io::FileDescriptor& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "dumpAsync", "(Ljava/io/FileDescriptor;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::IBinder::transact(int32_t arg0, const ::android::os::Parcel& arg1, const ::android::os::Parcel& arg2, int32_t arg3) const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "transact", "(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::os::IBinder::linkToDeath(const ::android::os::IBinder_DeathRecipient& arg0, int32_t arg1) const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "linkToDeath", "(Landroid/os/IBinder$DeathRecipient;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::IBinder::unlinkToDeath(const ::android::os::IBinder_DeathRecipient& arg0, int32_t arg1) const {
    if (!::android::os::IBinder::_class) ::android::os::IBinder::_class = java::fetch_class("android/os/IBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlinkToDeath", "(Landroid/os/IBinder$DeathRecipient;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::StatFs::StatFs(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::StatFs::_class) ::android::os::StatFs::_class = java::fetch_class("android/os/StatFs");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::StatFs::restat(const ::java::lang::String& arg0) const {
    if (!::android::os::StatFs::_class) ::android::os::StatFs::_class = java::fetch_class("android/os/StatFs");
    static jmethodID mid = java::jni->GetMethodID(_class, "restat", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::os::StatFs::getBlockSize() const {
    if (!::android::os::StatFs::_class) ::android::os::StatFs::_class = java::fetch_class("android/os/StatFs");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::StatFs::getBlockCount() const {
    if (!::android::os::StatFs::_class) ::android::os::StatFs::_class = java::fetch_class("android/os/StatFs");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::StatFs::getFreeBlocks() const {
    if (!::android::os::StatFs::_class) ::android::os::StatFs::_class = java::fetch_class("android/os/StatFs");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFreeBlocks", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::StatFs::getAvailableBlocks() const {
    if (!::android::os::StatFs::_class) ::android::os::StatFs::_class = java::fetch_class("android/os/StatFs");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAvailableBlocks", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::BatteryManager::BatteryManager() : ::java::lang::Object((jobject)0) {
    if (!::android::os::BatteryManager::_class) ::android::os::BatteryManager::_class = java::fetch_class("android/os/BatteryManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Handler::Handler() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Handler::Handler(const ::android::os::Handler_Callback& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Handler$Callback;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Handler::Handler(const ::android::os::Looper& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Looper;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Handler::Handler(const ::android::os::Looper& arg0, const ::android::os::Handler_Callback& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Looper;Landroid/os/Handler$Callback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::os::Handler::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Handler::dispatchMessage(const ::android::os::Message& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchMessage", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::os::Handler::getMessageName(const ::android::os::Message& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageName", "(Landroid/os/Message;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Message android::os::Handler::obtainMessage() const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainMessage", "()Landroid/os/Message;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Handler::obtainMessage(int32_t arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainMessage", "(I)Landroid/os/Message;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Handler::obtainMessage(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainMessage", "(ILjava/lang/Object;)Landroid/os/Message;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Handler::obtainMessage(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainMessage", "(III)Landroid/os/Message;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Handler::obtainMessage(int32_t arg0, int32_t arg1, int32_t arg2, const ::java::lang::Object& arg3) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainMessage", "(IIILjava/lang/Object;)Landroid/os/Message;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::os::Message _ret(ret);
    return _ret;
}

bool android::os::Handler::post(const ::java::lang::Runnable& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "post", "(Ljava/lang/Runnable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::Handler::postAtTime(const ::java::lang::Runnable& arg0, int64_t arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "postAtTime", "(Ljava/lang/Runnable;J)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::postAtTime(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1, int64_t arg2) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "postAtTime", "(Ljava/lang/Runnable;Ljava/lang/Object;J)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::os::Handler::postDelayed(const ::java::lang::Runnable& arg0, int64_t arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "postDelayed", "(Ljava/lang/Runnable;J)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::postAtFrontOfQueue(const ::java::lang::Runnable& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "postAtFrontOfQueue", "(Ljava/lang/Runnable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::os::Handler::removeCallbacks(const ::java::lang::Runnable& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallbacks", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Handler::removeCallbacks(const ::java::lang::Runnable& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallbacks", "(Ljava/lang/Runnable;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::sendMessage(const ::android::os::Message& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMessage", "(Landroid/os/Message;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::Handler::sendEmptyMessage(int32_t arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendEmptyMessage", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::Handler::sendEmptyMessageDelayed(int32_t arg0, int64_t arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendEmptyMessageDelayed", "(IJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::sendEmptyMessageAtTime(int32_t arg0, int64_t arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendEmptyMessageAtTime", "(IJ)Z");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::sendMessageDelayed(const ::android::os::Message& arg0, int64_t arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMessageDelayed", "(Landroid/os/Message;J)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::sendMessageAtTime(const ::android::os::Message& arg0, int64_t arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMessageAtTime", "(Landroid/os/Message;J)Z");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Handler::sendMessageAtFrontOfQueue(const ::android::os::Message& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendMessageAtFrontOfQueue", "(Landroid/os/Message;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::os::Handler::removeMessages(int32_t arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeMessages", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Handler::removeMessages(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeMessages", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Handler::removeCallbacksAndMessages(const ::java::lang::Object& arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallbacksAndMessages", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::os::Handler::hasMessages(int32_t arg0) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMessages", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::Handler::hasMessages(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMessages", "(ILjava/lang/Object;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::os::Looper android::os::Handler::getLooper() const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLooper", "()Landroid/os/Looper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Looper _ret(ret);
    return _ret;
}

void android::os::Handler::dump(const ::android::util::Printer& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "dump", "(Landroid/util/Printer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::os::Handler::toString() const {
    if (!::android::os::Handler::_class) ::android::os::Handler::_class = java::fetch_class("android/os/Handler");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::android::os::AsyncTask_Status> android::os::AsyncTask_Status::values(){
    if (!::android::os::AsyncTask_Status::_class) ::android::os::AsyncTask_Status::_class = java::fetch_class("android/os/AsyncTask$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/os/AsyncTask$Status;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::AsyncTask_Status> _ret(rets, ::android::os::AsyncTask_Status((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::AsyncTask_Status retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::os::AsyncTask_Status android::os::AsyncTask_Status::valueOf(const ::java::lang::String& arg0){
    if (!::android::os::AsyncTask_Status::_class) ::android::os::AsyncTask_Status::_class = java::fetch_class("android/os/AsyncTask$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/os/AsyncTask$Status;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::AsyncTask_Status _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::StrictMode_VmPolicy_Builder::StrictMode_VmPolicy_Builder() : ::java::lang::Object((jobject)0) {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::StrictMode_VmPolicy_Builder::StrictMode_VmPolicy_Builder(const ::android::os::StrictMode_VmPolicy& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/StrictMode$VmPolicy;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::setClassInstanceLimit(const ::java::lang::Class& arg0, int32_t arg1) const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassInstanceLimit", "(Ljava/lang/Class;I)Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::detectActivityLeaks() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectActivityLeaks", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::detectAll() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectAll", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::detectLeakedSqlLiteObjects() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectLeakedSqlLiteObjects", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::detectLeakedClosableObjects() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectLeakedClosableObjects", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::penaltyDeath() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyDeath", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::penaltyLog() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyLog", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy_Builder android::os::StrictMode_VmPolicy_Builder::penaltyDropBox() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "penaltyDropBox", "()Landroid/os/StrictMode$VmPolicy$Builder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy_Builder _ret(ret);
    return _ret;
}

::android::os::StrictMode_VmPolicy android::os::StrictMode_VmPolicy_Builder::build() const {
    if (!::android::os::StrictMode_VmPolicy_Builder::_class) ::android::os::StrictMode_VmPolicy_Builder::_class = java::fetch_class("android/os/StrictMode$VmPolicy$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Landroid/os/StrictMode$VmPolicy;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::StrictMode_VmPolicy _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::RemoteException::RemoteException() : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::RemoteException::_class) ::android::os::RemoteException::_class = java::fetch_class("android/os/RemoteException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::RemoteException::RemoteException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::RemoteException::_class) ::android::os::RemoteException::_class = java::fetch_class("android/os/RemoteException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Message::Message() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::Message android::os::Message::obtain(){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/os/Message;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Message& arg0){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Message;)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Handler& arg0){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Handler;)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Handler& arg0, const ::java::lang::Runnable& arg1){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Handler& arg0, int32_t arg1){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Handler;I)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Handler& arg0, int32_t arg1, const ::java::lang::Object& arg2){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Handler& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Handler;III)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::os::Message _ret(ret);
    return _ret;
}

::android::os::Message android::os::Message::obtain(const ::android::os::Handler& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::java::lang::Object& arg4){
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/os/Handler;IIILjava/lang/Object;)Landroid/os/Message;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::os::Message _ret(ret);
    return _ret;
}

void android::os::Message::recycle() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::Message::copyFrom(const ::android::os::Message& arg0) const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyFrom", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::os::Message::getWhen() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWhen", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::os::Message::setTarget(const ::android::os::Handler& arg0) const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTarget", "(Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Handler android::os::Message::getTarget() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTarget", "()Landroid/os/Handler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Handler _ret(ret);
    return _ret;
}

::java::lang::Runnable android::os::Message::getCallback() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallback", "()Ljava/lang/Runnable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Runnable _ret(ret);
    return _ret;
}

::android::os::Bundle android::os::Message::getData() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::os::Message::peekData() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekData", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::os::Message::setData(const ::android::os::Bundle& arg0) const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Message::sendToTarget() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendToTarget", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::os::Message::toString() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::os::Message::describeContents() const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::Message::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::Message::_class) ::android::os::Message::_class = java::fetch_class("android/os/Message");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::DeadObjectException::DeadObjectException() : ::java::lang::Object((jobject)0), ::android::os::RemoteException((jobject)0), ::android::util::AndroidException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::os::DeadObjectException::_class) ::android::os::DeadObjectException::_class = java::fetch_class("android/os/DeadObjectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::os::Handler_Callback::handleMessage(const ::android::os::Message& arg0) const {
    if (!::android::os::Handler_Callback::_class) ::android::os::Handler_Callback::_class = java::fetch_class("android/os/Handler$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleMessage", "(Landroid/os/Message;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::os::PowerManager_WakeLock::setReferenceCounted(bool arg0) const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReferenceCounted", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::PowerManager_WakeLock::acquire() const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::PowerManager_WakeLock::acquire(int64_t arg0) const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "acquire", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::PowerManager_WakeLock::release() const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::os::PowerManager_WakeLock::isHeld() const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHeld", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::PowerManager_WakeLock::setWorkSource(const ::android::os::WorkSource& arg0) const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWorkSource", "(Landroid/os/WorkSource;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::os::PowerManager_WakeLock::toString() const {
    if (!::android::os::PowerManager_WakeLock::_class) ::android::os::PowerManager_WakeLock::_class = java::fetch_class("android/os/PowerManager$WakeLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::os::StrictMode_VmPolicy::toString() const {
    if (!::android::os::StrictMode_VmPolicy::_class) ::android::os::StrictMode_VmPolicy::_class = java::fetch_class("android/os/StrictMode$VmPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::os::MessageQueue::addIdleHandler(const ::android::os::MessageQueue_IdleHandler& arg0) const {
    if (!::android::os::MessageQueue::_class) ::android::os::MessageQueue::_class = java::fetch_class("android/os/MessageQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIdleHandler", "(Landroid/os/MessageQueue$IdleHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::MessageQueue::removeIdleHandler(const ::android::os::MessageQueue_IdleHandler& arg0) const {
    if (!::android::os::MessageQueue::_class) ::android::os::MessageQueue::_class = java::fetch_class("android/os/MessageQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeIdleHandler", "(Landroid/os/MessageQueue$IdleHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Build_VERSION::Build_VERSION() : ::java::lang::Object((jobject)0) {
    if (!::android::os::Build_VERSION::_class) ::android::os::Build_VERSION::_class = java::fetch_class("android/os/Build$VERSION");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::os::MessageQueue_IdleHandler::queueIdle() const {
    if (!::android::os::MessageQueue_IdleHandler::_class) ::android::os::MessageQueue_IdleHandler::_class = java::fetch_class("android/os/MessageQueue$IdleHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "queueIdle", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::RemoteCallbackList::RemoteCallbackList() : ::java::lang::Object((jobject)0) {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::os::RemoteCallbackList::register_(const ::android::os::IInterface& arg0) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Landroid/os/IInterface;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::RemoteCallbackList::register_(const ::android::os::IInterface& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Landroid/os/IInterface;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::os::RemoteCallbackList::unregister(const ::android::os::IInterface& arg0) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Landroid/os/IInterface;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::os::RemoteCallbackList::kill() const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "kill", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::RemoteCallbackList::onCallbackDied(const ::android::os::IInterface& arg0) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallbackDied", "(Landroid/os/IInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::RemoteCallbackList::onCallbackDied(const ::android::os::IInterface& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCallbackDied", "(Landroid/os/IInterface;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::os::RemoteCallbackList::beginBroadcast() const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginBroadcast", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::IInterface android::os::RemoteCallbackList::getBroadcastItem(int32_t arg0) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBroadcastItem", "(I)Landroid/os/IInterface;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IInterface _ret(ret);
    return _ret;
}

::java::lang::Object android::os::RemoteCallbackList::getBroadcastCookie(int32_t arg0) const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBroadcastCookie", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::os::RemoteCallbackList::finishBroadcast() const {
    if (!::android::os::RemoteCallbackList::_class) ::android::os::RemoteCallbackList::_class = java::fetch_class("android/os/RemoteCallbackList");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishBroadcast", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::ParcelFileDescriptor_AutoCloseInputStream::ParcelFileDescriptor_AutoCloseInputStream(const ::android::os::ParcelFileDescriptor& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FileInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::android::os::ParcelFileDescriptor_AutoCloseInputStream::_class) ::android::os::ParcelFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/os/ParcelFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/ParcelFileDescriptor;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::ParcelFileDescriptor_AutoCloseInputStream::close() const {
    if (!::android::os::ParcelFileDescriptor_AutoCloseInputStream::_class) ::android::os::ParcelFileDescriptor_AutoCloseInputStream::_class = java::fetch_class("android/os/ParcelFileDescriptor$AutoCloseInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::os::DropBoxManager::addText(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::DropBoxManager::_class) ::android::os::DropBoxManager::_class = java::fetch_class("android/os/DropBoxManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addText", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::DropBoxManager::addData(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1, int32_t arg2) const {
    if (!::android::os::DropBoxManager::_class) ::android::os::DropBoxManager::_class = java::fetch_class("android/os/DropBoxManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addData", "(Ljava/lang/String;[BI)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::os::DropBoxManager::addFile(const ::java::lang::String& arg0, const ::java::io::File& arg1, int32_t arg2) const {
    if (!::android::os::DropBoxManager::_class) ::android::os::DropBoxManager::_class = java::fetch_class("android/os/DropBoxManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFile", "(Ljava/lang/String;Ljava/io/File;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::os::DropBoxManager::isTagEnabled(const ::java::lang::String& arg0) const {
    if (!::android::os::DropBoxManager::_class) ::android::os::DropBoxManager::_class = java::fetch_class("android/os/DropBoxManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTagEnabled", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::os::DropBoxManager_Entry android::os::DropBoxManager::getNextEntry(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::os::DropBoxManager::_class) ::android::os::DropBoxManager::_class = java::fetch_class("android/os/DropBoxManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextEntry", "(Ljava/lang/String;J)Landroid/os/DropBoxManager$Entry;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::DropBoxManager_Entry _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Messenger::Messenger(const ::android::os::Handler& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Handler;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Messenger::Messenger(const ::android::os::IBinder& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::Messenger::send(const ::android::os::Message& arg0) const {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::IBinder android::os::Messenger::getBinder() const {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

bool android::os::Messenger::equals(const ::java::lang::Object& arg0) const {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::os::Messenger::hashCode() const {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::os::Messenger::describeContents() const {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::Messenger::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Messenger::writeMessengerOrNullToParcel(const ::android::os::Messenger& arg0, const ::android::os::Parcel& arg1){
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeMessengerOrNullToParcel", "(Landroid/os/Messenger;Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::os::Messenger android::os::Messenger::readMessengerOrNullFromParcel(const ::android::os::Parcel& arg0){
    if (!::android::os::Messenger::_class) ::android::os::Messenger::_class = java::fetch_class("android/os/Messenger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readMessengerOrNullFromParcel", "(Landroid/os/Parcel;)Landroid/os/Messenger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Messenger _ret(ret);
    return _ret;
}

::java::lang::Object android::os::Parcelable_ClassLoaderCreator::createFromParcel(const ::android::os::Parcel& arg0, const ::java::lang::ClassLoader& arg1) const {
    if (!::android::os::Parcelable_ClassLoaderCreator::_class) ::android::os::Parcelable_ClassLoaderCreator::_class = java::fetch_class("android/os/Parcelable$ClassLoaderCreator");
    static jmethodID mid = java::jni->GetMethodID(_class, "createFromParcel", "(Landroid/os/Parcel;Ljava/lang/ClassLoader;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::DropBoxManager_Entry::DropBoxManager_Entry(const ::java::lang::String& arg0, int64_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::DropBoxManager_Entry::DropBoxManager_Entry(const ::java::lang::String& arg0, int64_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;JLjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::DropBoxManager_Entry::DropBoxManager_Entry(const ::java::lang::String& arg0, int64_t arg1, const std::vector< int8_t>& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;J[BI)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::DropBoxManager_Entry::DropBoxManager_Entry(const ::java::lang::String& arg0, int64_t arg1, const ::android::os::ParcelFileDescriptor& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;JLandroid/os/ParcelFileDescriptor;I)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::DropBoxManager_Entry::DropBoxManager_Entry(const ::java::lang::String& arg0, int64_t arg1, const ::java::io::File& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::io::Closeable((jobject)0) {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;JLjava/io/File;I)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::os::DropBoxManager_Entry::close() const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::os::DropBoxManager_Entry::getTag() const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::os::DropBoxManager_Entry::getTimeMillis() const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeMillis", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t android::os::DropBoxManager_Entry::getFlags() const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::os::DropBoxManager_Entry::getText(int32_t arg0) const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::InputStream android::os::DropBoxManager_Entry::getInputStream() const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

int32_t android::os::DropBoxManager_Entry::describeContents() const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::DropBoxManager_Entry::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::DropBoxManager_Entry::_class) ::android::os::DropBoxManager_Entry::_class = java::fetch_class("android/os/DropBoxManager$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Bundle::Bundle() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Bundle::Bundle(const ::java::lang::ClassLoader& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::Bundle::Bundle(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::os::Bundle::setClassLoader(const ::java::lang::ClassLoader& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassLoader", "(Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::ClassLoader android::os::Bundle::getClassLoader() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::lang::Object android::os::Bundle::clone() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::os::Bundle::size() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::os::Bundle::isEmpty() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::Bundle::clear() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::os::Bundle::containsKey(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::os::Bundle::get(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::os::Bundle::remove(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::os::Bundle::putAll(const ::android::os::Bundle& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set android::os::Bundle::keySet() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

bool android::os::Bundle::hasFileDescriptors() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFileDescriptors", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::Bundle::putBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBoolean", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putByte(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putByte", "(Ljava/lang/String;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putChar(const ::java::lang::String& arg0, uint16_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putChar", "(Ljava/lang/String;C)V");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putShort(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putShort", "(Ljava/lang/String;S)V");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloat", "(Ljava/lang/String;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(Ljava/lang/String;D)V");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putCharSequence(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCharSequence", "(Ljava/lang/String;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putParcelable(const ::java::lang::String& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putParcelable", "(Ljava/lang/String;Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putParcelableArray(const ::java::lang::String& arg0, const std::vector< ::android::os::Parcelable>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putParcelableArray", "(Ljava/lang/String;[Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::android::os::Parcelable::_class) ::android::os::Parcelable::_class = java::fetch_class("android/os/Parcelable");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::android::os::Parcelable::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::android::os::Parcelable& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putParcelableArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putParcelableArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putSparseParcelableArray(const ::java::lang::String& arg0, const ::android::util::SparseArray& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putSparseParcelableArray", "(Ljava/lang/String;Landroid/util/SparseArray;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putIntegerArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIntegerArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putStringArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putStringArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putCharSequenceArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCharSequenceArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putSerializable(const ::java::lang::String& arg0, const ::java::io::Serializable& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putSerializable", "(Ljava/lang/String;Ljava/io/Serializable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putBooleanArray(const ::java::lang::String& arg0, const std::vector< bool>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBooleanArray", "(Ljava/lang/String;[Z)V");
    jobject _arg0 = arg0.obj;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putByteArray(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putByteArray", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putShortArray(const ::java::lang::String& arg0, const std::vector< int16_t>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putShortArray", "(Ljava/lang/String;[S)V");
    jobject _arg0 = arg0.obj;
    jshortArray _arg1 = java::jni->NewShortArray(arg1.size());
    java::jni->SetShortArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putCharArray(const ::java::lang::String& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCharArray", "(Ljava/lang/String;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putIntArray(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIntArray", "(Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putLongArray(const ::java::lang::String& arg0, const std::vector< int64_t>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLongArray", "(Ljava/lang/String;[J)V");
    jobject _arg0 = arg0.obj;
    jlongArray _arg1 = java::jni->NewLongArray(arg1.size());
    java::jni->SetLongArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putFloatArray(const ::java::lang::String& arg0, const std::vector< float>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloatArray", "(Ljava/lang/String;[F)V");
    jobject _arg0 = arg0.obj;
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putDoubleArray(const ::java::lang::String& arg0, const std::vector< double>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDoubleArray", "(Ljava/lang/String;[D)V");
    jobject _arg0 = arg0.obj;
    jdoubleArray _arg1 = java::jni->NewDoubleArray(arg1.size());
    java::jni->SetDoubleArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putStringArray(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putStringArray", "(Ljava/lang/String;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putCharSequenceArray(const ::java::lang::String& arg0, const std::vector< ::java::lang::CharSequence>& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putCharSequenceArray", "(Ljava/lang/String;[Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::CharSequence& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::putBundle(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBundle", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::os::Bundle::getBoolean(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::os::Bundle::getBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int8_t android::os::Bundle::getByte(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(Ljava/lang/String;)B");
    jobject _arg0 = arg0.obj;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

::java::lang::Byte android::os::Bundle::getByte(const ::java::lang::String& arg0, int8_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByte", "(Ljava/lang/String;B)Ljava/lang/Byte;");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Byte _ret(ret);
    return _ret;
}

uint16_t android::os::Bundle::getChar(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChar", "(Ljava/lang/String;)C");
    jobject _arg0 = arg0.obj;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

uint16_t android::os::Bundle::getChar(const ::java::lang::String& arg0, uint16_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChar", "(Ljava/lang/String;C)C");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    return java::jni->CallCharMethod(obj, mid, _arg0, _arg1);
}

int16_t android::os::Bundle::getShort(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(Ljava/lang/String;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int16_t android::os::Bundle::getShort(const ::java::lang::String& arg0, int16_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(Ljava/lang/String;S)S");
    jobject _arg0 = arg0.obj;
    int16_t _arg1 = arg1;
    return java::jni->CallShortMethod(obj, mid, _arg0, _arg1);
}

int32_t android::os::Bundle::getInt(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::os::Bundle::getInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t android::os::Bundle::getLong(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t android::os::Bundle::getLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

float android::os::Bundle::getFloat(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

float android::os::Bundle::getFloat(const ::java::lang::String& arg0, float arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(Ljava/lang/String;F)F");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallFloatMethod(obj, mid, _arg0, _arg1);
}

double android::os::Bundle::getDouble(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;)D");
    jobject _arg0 = arg0.obj;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

double android::os::Bundle::getDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::os::Bundle::getString(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::os::Bundle::getString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::os::Bundle::getCharSequence(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequence", "(Ljava/lang/String;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::os::Bundle::getCharSequence(const ::java::lang::String& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequence", "(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::os::Bundle android::os::Bundle::getBundle(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBundle", "(Ljava/lang/String;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Parcelable android::os::Bundle::getParcelable(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelable", "(Ljava/lang/String;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

std::vector< ::android::os::Parcelable> android::os::Bundle::getParcelableArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArray", "(Ljava/lang/String;)[Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::os::Parcelable> _ret(rets, ::android::os::Parcelable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::os::Parcelable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayList android::os::Bundle::getParcelableArrayList(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::android::util::SparseArray android::os::Bundle::getSparseParcelableArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSparseParcelableArray", "(Ljava/lang/String;)Landroid/util/SparseArray;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::util::SparseArray _ret(ret);
    return _ret;
}

::java::io::Serializable android::os::Bundle::getSerializable(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerializable", "(Ljava/lang/String;)Ljava/io/Serializable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::Serializable _ret(ret);
    return _ret;
}

::java::util::ArrayList android::os::Bundle::getIntegerArrayList(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntegerArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::ArrayList android::os::Bundle::getStringArrayList(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::ArrayList android::os::Bundle::getCharSequenceArrayList(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequenceArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

std::vector< bool> android::os::Bundle::getBooleanArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanArray", "(Ljava/lang/String;)[Z");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> android::os::Bundle::getByteArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteArray", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int16_t> android::os::Bundle::getShortArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShortArray", "(Ljava/lang/String;)[S");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jshort* reta = java::jni->GetShortArrayElements((jshortArray)ret, nullptr);
    std::vector< int16_t> _ret(reta, reta+rets);
    java::jni->ReleaseShortArrayElements((jshortArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> android::os::Bundle::getCharArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharArray", "(Ljava/lang/String;)[C");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int32_t> android::os::Bundle::getIntArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntArray", "(Ljava/lang/String;)[I");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int64_t> android::os::Bundle::getLongArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongArray", "(Ljava/lang/String;)[J");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< float> android::os::Bundle::getFloatArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloatArray", "(Ljava/lang/String;)[F");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< double> android::os::Bundle::getDoubleArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoubleArray", "(Ljava/lang/String;)[D");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::lang::String> android::os::Bundle::getStringArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
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

std::vector< ::java::lang::CharSequence> android::os::Bundle::getCharSequenceArray(const ::java::lang::String& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharSequenceArray", "(Ljava/lang/String;)[Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::os::Bundle::describeContents() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::os::Bundle::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::Bundle::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::os::Bundle::toString() const {
    if (!::android::os::Bundle::_class) ::android::os::Bundle::_class = java::fetch_class("android/os/Bundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::PowerManager_WakeLock android::os::PowerManager::newWakeLock(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::os::PowerManager::_class) ::android::os::PowerManager::_class = java::fetch_class("android/os/PowerManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "newWakeLock", "(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::PowerManager_WakeLock _ret(ret);
    return _ret;
}

void android::os::PowerManager::userActivity(int64_t arg0, bool arg1) const {
    if (!::android::os::PowerManager::_class) ::android::os::PowerManager::_class = java::fetch_class("android/os/PowerManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "userActivity", "(JZ)V");
    int64_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::os::PowerManager::goToSleep(int64_t arg0) const {
    if (!::android::os::PowerManager::_class) ::android::os::PowerManager::_class = java::fetch_class("android/os/PowerManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "goToSleep", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::os::PowerManager::isScreenOn() const {
    if (!::android::os::PowerManager::_class) ::android::os::PowerManager::_class = java::fetch_class("android/os/PowerManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScreenOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::os::PowerManager::reboot(const ::java::lang::String& arg0) const {
    if (!::android::os::PowerManager::_class) ::android::os::PowerManager::_class = java::fetch_class("android/os/PowerManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "reboot", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::IBinder android::os::IInterface::asBinder() const {
    if (!::android::os::IInterface::_class) ::android::os::IInterface::_class = java::fetch_class("android/os/IInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "asBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::java::lang::String android::os::StrictMode_ThreadPolicy::toString() const {
    if (!::android::os::StrictMode_ThreadPolicy::_class) ::android::os::StrictMode_ThreadPolicy::_class = java::fetch_class("android/os/StrictMode$ThreadPolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::os::MemoryFile::MemoryFile(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::os::MemoryFile::close() const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::os::MemoryFile::length() const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::os::MemoryFile::isPurgingAllowed() const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPurgingAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::os::MemoryFile::allowPurging(bool arg0) const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "allowPurging", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::InputStream android::os::MemoryFile::getInputStream() const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream android::os::MemoryFile::getOutputStream() const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

int32_t android::os::MemoryFile::readBytes(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "readBytes", "([BIII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::os::MemoryFile::writeBytes(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::os::MemoryFile::_class) ::android::os::MemoryFile::_class = java::fetch_class("android/os/MemoryFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "([BIII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}


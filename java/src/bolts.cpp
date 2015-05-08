#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "bolts.AggregateException.hpp"
#include "bolts.AndroidExecutors.hpp"
#include "bolts.AppLink.hpp"
#include "bolts.AppLinkNavigation.hpp"
#include "bolts.AppLinkResolver.hpp"
#include "bolts.AppLinks.hpp"
#include "bolts.Bolts.hpp"
#include "bolts.BoltsExecutors.hpp"
#include "bolts.CancellationToken.hpp"
#include "bolts.CancellationTokenSource.hpp"
#include "bolts.Capture.hpp"
#include "bolts.Continuation.hpp"
#include "bolts.MeasurementEvent.hpp"
#include "bolts.Task.hpp"
#include "bolts.WebViewAppLinkResolver.hpp"
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.URL.hpp"
#include "java.util.Collection.hpp"
#include "java.util.List.hpp"
#include "java.util.concurrent.Callable.hpp"
#include "java.util.concurrent.Executor.hpp"
#include "java.util.concurrent.ExecutorService.hpp"
#include "java.util.concurrent.ThreadFactory.hpp"
#include "java.util.concurrent.ThreadPoolExecutor.hpp"

jclass bolts::AggregateException::_class = nullptr;
jclass bolts::AndroidExecutors_UIThreadExecutor::_class = nullptr;
jclass bolts::AndroidExecutors::_class = nullptr;
jclass bolts::AppLink_Target::_class = nullptr;
jclass bolts::AppLink::_class = nullptr;
jclass bolts::AppLinkNavigation_NavigationResult::_class = nullptr;
jclass bolts::AppLinkNavigation::_class = nullptr;
jclass bolts::AppLinkResolver::_class = nullptr;
jclass bolts::AppLinks::_class = nullptr;
jclass bolts::Bolts::_class = nullptr;
jclass bolts::BoltsExecutors_ImmediateExecutor::_class = nullptr;
jclass bolts::BoltsExecutors::_class = nullptr;
jclass bolts::CancellationToken::_class = nullptr;
jclass bolts::CancellationTokenSource::_class = nullptr;
jclass bolts::Capture::_class = nullptr;
jclass bolts::Continuation::_class = nullptr;
jclass bolts::MeasurementEvent::_class = nullptr;
jclass bolts::Task_TaskCompletionSource::_class = nullptr;
jclass bolts::Task::_class = nullptr;
jclass bolts::WebViewAppLinkResolver::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AggregateException::AggregateException(const ::java::lang::String& arg0, const std::vector< ::java::lang::Throwable>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;[Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Throwable::_class) ::java::lang::Throwable::_class = java::fetch_class("java/lang/Throwable");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Throwable::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Throwable& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AggregateException::AggregateException(const ::java::lang::String& arg0, const ::java::util::List& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AggregateException::AggregateException(const ::java::util::List& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::List bolts::AggregateException::getInnerThrowables() const {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInnerThrowables", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void bolts::AggregateException::printStackTrace(const ::java::io::PrintStream& arg0) const {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void bolts::AggregateException::printStackTrace(const ::java::io::PrintWriter& arg0) const {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "printStackTrace", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List bolts::AggregateException::getErrors() const {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrors", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Throwable> bolts::AggregateException::getCauses() const {
    if (!::bolts::AggregateException::_class) ::bolts::AggregateException::_class = java::fetch_class("bolts/AggregateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCauses", "()[Ljava/lang/Throwable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Throwable> _ret(rets, ::java::lang::Throwable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Throwable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void bolts::AndroidExecutors_UIThreadExecutor::execute(const ::java::lang::Runnable& arg0) const {
    if (!::bolts::AndroidExecutors_UIThreadExecutor::_class) ::bolts::AndroidExecutors_UIThreadExecutor::_class = java::fetch_class("bolts/AndroidExecutors$UIThreadExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::concurrent::ExecutorService bolts::AndroidExecutors::newCachedThreadPool(){
    if (!::bolts::AndroidExecutors::_class) ::bolts::AndroidExecutors::_class = java::fetch_class("bolts/AndroidExecutors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newCachedThreadPool", "()Ljava/util/concurrent/ExecutorService;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

::java::util::concurrent::ExecutorService bolts::AndroidExecutors::newCachedThreadPool(const ::java::util::concurrent::ThreadFactory& arg0){
    if (!::bolts::AndroidExecutors::_class) ::bolts::AndroidExecutors::_class = java::fetch_class("bolts/AndroidExecutors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newCachedThreadPool", "(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ExecutorService;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

void bolts::AndroidExecutors::allowCoreThreadTimeout(const ::java::util::concurrent::ThreadPoolExecutor& arg0, bool arg1){
    if (!::bolts::AndroidExecutors::_class) ::bolts::AndroidExecutors::_class = java::fetch_class("bolts/AndroidExecutors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allowCoreThreadTimeout", "(Ljava/util/concurrent/ThreadPoolExecutor;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::concurrent::Executor bolts::AndroidExecutors::uiThread(){
    if (!::bolts::AndroidExecutors::_class) ::bolts::AndroidExecutors::_class = java::fetch_class("bolts/AndroidExecutors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "uiThread", "()Ljava/util/concurrent/Executor;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::Executor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AppLink_Target::AppLink_Target(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::net::Uri& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0) {
    if (!::bolts::AppLink_Target::_class) ::bolts::AppLink_Target::_class = java::fetch_class("bolts/AppLink$Target");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::net::Uri bolts::AppLink_Target::getUrl() const {
    if (!::bolts::AppLink_Target::_class) ::bolts::AppLink_Target::_class = java::fetch_class("bolts/AppLink$Target");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String bolts::AppLink_Target::getAppName() const {
    if (!::bolts::AppLink_Target::_class) ::bolts::AppLink_Target::_class = java::fetch_class("bolts/AppLink$Target");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String bolts::AppLink_Target::getClassName() const {
    if (!::bolts::AppLink_Target::_class) ::bolts::AppLink_Target::_class = java::fetch_class("bolts/AppLink$Target");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String bolts::AppLink_Target::getPackageName() const {
    if (!::bolts::AppLink_Target::_class) ::bolts::AppLink_Target::_class = java::fetch_class("bolts/AppLink$Target");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AppLink::AppLink(const ::android::net::Uri& arg0, const ::java::util::List& arg1, const ::android::net::Uri& arg2) : ::java::lang::Object((jobject)0) {
    if (!::bolts::AppLink::_class) ::bolts::AppLink::_class = java::fetch_class("bolts/AppLink");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/net/Uri;Ljava/util/List;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::net::Uri bolts::AppLink::getSourceUrl() const {
    if (!::bolts::AppLink::_class) ::bolts::AppLink::_class = java::fetch_class("bolts/AppLink");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSourceUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::util::List bolts::AppLink::getTargets() const {
    if (!::bolts::AppLink::_class) ::bolts::AppLink::_class = java::fetch_class("bolts/AppLink");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargets", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::net::Uri bolts::AppLink::getWebUrl() const {
    if (!::bolts::AppLink::_class) ::bolts::AppLink::_class = java::fetch_class("bolts/AppLink");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWebUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

std::vector< ::bolts::AppLinkNavigation_NavigationResult> bolts::AppLinkNavigation_NavigationResult::values(){
    if (!::bolts::AppLinkNavigation_NavigationResult::_class) ::bolts::AppLinkNavigation_NavigationResult::_class = java::fetch_class("bolts/AppLinkNavigation$NavigationResult");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lbolts/AppLinkNavigation$NavigationResult;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::bolts::AppLinkNavigation_NavigationResult> _ret(rets, ::bolts::AppLinkNavigation_NavigationResult((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::bolts::AppLinkNavigation_NavigationResult retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::bolts::AppLinkNavigation_NavigationResult bolts::AppLinkNavigation_NavigationResult::valueOf(const ::java::lang::String& arg0){
    if (!::bolts::AppLinkNavigation_NavigationResult::_class) ::bolts::AppLinkNavigation_NavigationResult::_class = java::fetch_class("bolts/AppLinkNavigation$NavigationResult");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lbolts/AppLinkNavigation$NavigationResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::AppLinkNavigation_NavigationResult _ret(ret);
    return _ret;
}

::java::lang::String bolts::AppLinkNavigation_NavigationResult::getCode() const {
    if (!::bolts::AppLinkNavigation_NavigationResult::_class) ::bolts::AppLinkNavigation_NavigationResult::_class = java::fetch_class("bolts/AppLinkNavigation$NavigationResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool bolts::AppLinkNavigation_NavigationResult::isSucceeded() const {
    if (!::bolts::AppLinkNavigation_NavigationResult::_class) ::bolts::AppLinkNavigation_NavigationResult::_class = java::fetch_class("bolts/AppLinkNavigation$NavigationResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSucceeded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AppLinkNavigation::AppLinkNavigation(const ::bolts::AppLink& arg0, const ::android::os::Bundle& arg1, const ::android::os::Bundle& arg2) : ::java::lang::Object((jobject)0) {
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lbolts/AppLink;Landroid/os/Bundle;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::bolts::AppLink bolts::AppLinkNavigation::getAppLink() const {
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppLink", "()Lbolts/AppLink;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::bolts::AppLink _ret(ret);
    return _ret;
}

::android::os::Bundle bolts::AppLinkNavigation::getAppLinkData() const {
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppLinkData", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle bolts::AppLinkNavigation::getExtras() const {
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::bolts::AppLinkNavigation_NavigationResult bolts::AppLinkNavigation::navigate(const ::android::content::Context& arg0) const {
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigate", "(Landroid/content/Context;)Lbolts/AppLinkNavigation$NavigationResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::AppLinkNavigation_NavigationResult _ret(ret);
    return _ret;
}

void bolts::AppLinkNavigation::setDefaultResolver(const ::bolts::AppLinkResolver& arg0){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultResolver", "(Lbolts/AppLinkResolver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::bolts::AppLinkResolver bolts::AppLinkNavigation::getDefaultResolver(){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultResolver", "()Lbolts/AppLinkResolver;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::bolts::AppLinkResolver _ret(ret);
    return _ret;
}

::bolts::AppLinkNavigation_NavigationResult bolts::AppLinkNavigation::navigate(const ::android::content::Context& arg0, const ::bolts::AppLink& arg1){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigate", "(Landroid/content/Context;Lbolts/AppLink;)Lbolts/AppLinkNavigation$NavigationResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::AppLinkNavigation_NavigationResult _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkNavigation::navigateInBackground(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, const ::bolts::AppLinkResolver& arg2){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateInBackground", "(Landroid/content/Context;Landroid/net/Uri;Lbolts/AppLinkResolver;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkNavigation::navigateInBackground(const ::android::content::Context& arg0, const ::java::net::URL& arg1, const ::bolts::AppLinkResolver& arg2){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateInBackground", "(Landroid/content/Context;Ljava/net/URL;Lbolts/AppLinkResolver;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkNavigation::navigateInBackground(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::bolts::AppLinkResolver& arg2){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateInBackground", "(Landroid/content/Context;Ljava/lang/String;Lbolts/AppLinkResolver;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkNavigation::navigateInBackground(const ::android::content::Context& arg0, const ::android::net::Uri& arg1){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateInBackground", "(Landroid/content/Context;Landroid/net/Uri;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkNavigation::navigateInBackground(const ::android::content::Context& arg0, const ::java::net::URL& arg1){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateInBackground", "(Landroid/content/Context;Ljava/net/URL;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkNavigation::navigateInBackground(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::bolts::AppLinkNavigation::_class) ::bolts::AppLinkNavigation::_class = java::fetch_class("bolts/AppLinkNavigation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "navigateInBackground", "(Landroid/content/Context;Ljava/lang/String;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::AppLinkResolver::getAppLinkFromUrlInBackground(const ::android::net::Uri& arg0) const {
    if (!::bolts::AppLinkResolver::_class) ::bolts::AppLinkResolver::_class = java::fetch_class("bolts/AppLinkResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppLinkFromUrlInBackground", "(Landroid/net/Uri;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::AppLinks::AppLinks() : ::java::lang::Object((jobject)0) {
    if (!::bolts::AppLinks::_class) ::bolts::AppLinks::_class = java::fetch_class("bolts/AppLinks");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::Bundle bolts::AppLinks::getAppLinkData(const ::android::content::Intent& arg0){
    if (!::bolts::AppLinks::_class) ::bolts::AppLinks::_class = java::fetch_class("bolts/AppLinks");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAppLinkData", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle bolts::AppLinks::getAppLinkExtras(const ::android::content::Intent& arg0){
    if (!::bolts::AppLinks::_class) ::bolts::AppLinks::_class = java::fetch_class("bolts/AppLinks");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAppLinkExtras", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::net::Uri bolts::AppLinks::getTargetUrl(const ::android::content::Intent& arg0){
    if (!::bolts::AppLinks::_class) ::bolts::AppLinks::_class = java::fetch_class("bolts/AppLinks");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTargetUrl", "(Landroid/content/Intent;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::net::Uri bolts::AppLinks::getTargetUrlFromInboundIntent(const ::android::content::Context& arg0, const ::android::content::Intent& arg1){
    if (!::bolts::AppLinks::_class) ::bolts::AppLinks::_class = java::fetch_class("bolts/AppLinks");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTargetUrlFromInboundIntent", "(Landroid/content/Context;Landroid/content/Intent;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::Bolts::Bolts() : ::java::lang::Object((jobject)0) {
    if (!::bolts::Bolts::_class) ::bolts::Bolts::_class = java::fetch_class("bolts/Bolts");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void bolts::BoltsExecutors_ImmediateExecutor::execute(const ::java::lang::Runnable& arg0) const {
    if (!::bolts::BoltsExecutors_ImmediateExecutor::_class) ::bolts::BoltsExecutors_ImmediateExecutor::_class = java::fetch_class("bolts/BoltsExecutors$ImmediateExecutor");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Ljava/lang/Runnable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::concurrent::ExecutorService bolts::BoltsExecutors::background(){
    if (!::bolts::BoltsExecutors::_class) ::bolts::BoltsExecutors::_class = java::fetch_class("bolts/BoltsExecutors");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "background", "()Ljava/util/concurrent/ExecutorService;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::ExecutorService _ret(ret);
    return _ret;
}

bool bolts::CancellationToken::isCancellationRequested() const {
    if (!::bolts::CancellationToken::_class) ::bolts::CancellationToken::_class = java::fetch_class("bolts/CancellationToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancellationRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void bolts::CancellationToken::throwIfCancellationRequested() const {
    if (!::bolts::CancellationToken::_class) ::bolts::CancellationToken::_class = java::fetch_class("bolts/CancellationToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "throwIfCancellationRequested", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String bolts::CancellationToken::toString() const {
    if (!::bolts::CancellationToken::_class) ::bolts::CancellationToken::_class = java::fetch_class("bolts/CancellationToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::CancellationTokenSource::CancellationTokenSource() : ::java::lang::Object((jobject)0) {
    if (!::bolts::CancellationTokenSource::_class) ::bolts::CancellationTokenSource::_class = java::fetch_class("bolts/CancellationTokenSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool bolts::CancellationTokenSource::isCancellationRequested() const {
    if (!::bolts::CancellationTokenSource::_class) ::bolts::CancellationTokenSource::_class = java::fetch_class("bolts/CancellationTokenSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancellationRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::bolts::CancellationToken bolts::CancellationTokenSource::getToken() const {
    if (!::bolts::CancellationTokenSource::_class) ::bolts::CancellationTokenSource::_class = java::fetch_class("bolts/CancellationTokenSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToken", "()Lbolts/CancellationToken;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::bolts::CancellationToken _ret(ret);
    return _ret;
}

void bolts::CancellationTokenSource::cancel() const {
    if (!::bolts::CancellationTokenSource::_class) ::bolts::CancellationTokenSource::_class = java::fetch_class("bolts/CancellationTokenSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String bolts::CancellationTokenSource::toString() const {
    if (!::bolts::CancellationTokenSource::_class) ::bolts::CancellationTokenSource::_class = java::fetch_class("bolts/CancellationTokenSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::Capture::Capture() : ::java::lang::Object((jobject)0) {
    if (!::bolts::Capture::_class) ::bolts::Capture::_class = java::fetch_class("bolts/Capture");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::Capture::Capture(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0) {
    if (!::bolts::Capture::_class) ::bolts::Capture::_class = java::fetch_class("bolts/Capture");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object bolts::Capture::get() const {
    if (!::bolts::Capture::_class) ::bolts::Capture::_class = java::fetch_class("bolts/Capture");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void bolts::Capture::set(const ::java::lang::Object& arg0) const {
    if (!::bolts::Capture::_class) ::bolts::Capture::_class = java::fetch_class("bolts/Capture");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object bolts::Continuation::then(const ::bolts::Task& arg0) const {
    if (!::bolts::Continuation::_class) ::bolts::Continuation::_class = java::fetch_class("bolts/Continuation");
    static jmethodID mid = java::jni->GetMethodID(_class, "then", "(Lbolts/Task;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task_TaskCompletionSource::getTask() const {
    if (!::bolts::Task_TaskCompletionSource::_class) ::bolts::Task_TaskCompletionSource::_class = java::fetch_class("bolts/Task$TaskCompletionSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTask", "()Lbolts/Task;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::bolts::Task _ret(ret);
    return _ret;
}

bool bolts::Task_TaskCompletionSource::trySetCancelled() const {
    if (!::bolts::Task_TaskCompletionSource::_class) ::bolts::Task_TaskCompletionSource::_class = java::fetch_class("bolts/Task$TaskCompletionSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "trySetCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool bolts::Task_TaskCompletionSource::trySetError(const ::java::lang::Exception& arg0) const {
    if (!::bolts::Task_TaskCompletionSource::_class) ::bolts::Task_TaskCompletionSource::_class = java::fetch_class("bolts/Task$TaskCompletionSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "trySetError", "(Ljava/lang/Exception;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void bolts::Task_TaskCompletionSource::setCancelled() const {
    if (!::bolts::Task_TaskCompletionSource::_class) ::bolts::Task_TaskCompletionSource::_class = java::fetch_class("bolts/Task$TaskCompletionSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCancelled", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void bolts::Task_TaskCompletionSource::setError(const ::java::lang::Exception& arg0) const {
    if (!::bolts::Task_TaskCompletionSource::_class) ::bolts::Task_TaskCompletionSource::_class = java::fetch_class("bolts/Task$TaskCompletionSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::bolts::Task_TaskCompletionSource bolts::Task::create(){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "()Lbolts/Task$TaskCompletionSource;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::bolts::Task_TaskCompletionSource _ret(ret);
    return _ret;
}

bool bolts::Task::isCompleted() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCompleted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool bolts::Task::isCancelled() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool bolts::Task::isFaulted() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFaulted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object bolts::Task::getResult() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResult", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Exception bolts::Task::getError() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "()Ljava/lang/Exception;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Exception _ret(ret);
    return _ret;
}

void bolts::Task::waitForCompletion() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "waitForCompletion", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::bolts::Task bolts::Task::forResult(const ::java::lang::Object& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forResult", "(Ljava/lang/Object;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::forError(const ::java::lang::Exception& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forError", "(Ljava/lang/Exception;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::cancelled(){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelled", "()Lbolts/Task;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::delay(int64_t arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "delay", "(J)Lbolts/Task;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::cast() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "cast", "()Lbolts/Task;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::makeVoid() const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeVoid", "()Lbolts/Task;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::callInBackground(const ::java::util::concurrent::Callable& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "callInBackground", "(Ljava/util/concurrent/Callable;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::callInBackground(const ::java::util::concurrent::Callable& arg0, const ::bolts::CancellationToken& arg1){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "callInBackground", "(Ljava/util/concurrent/Callable;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::call(const ::java::util::concurrent::Callable& arg0, const ::java::util::concurrent::Executor& arg1){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "call", "(Ljava/util/concurrent/Callable;Ljava/util/concurrent/Executor;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::call(const ::java::util::concurrent::Callable& arg0, const ::java::util::concurrent::Executor& arg1, const ::bolts::CancellationToken& arg2){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "call", "(Ljava/util/concurrent/Callable;Ljava/util/concurrent/Executor;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::call(const ::java::util::concurrent::Callable& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "call", "(Ljava/util/concurrent/Callable;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::call(const ::java::util::concurrent::Callable& arg0, const ::bolts::CancellationToken& arg1){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "call", "(Ljava/util/concurrent/Callable;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::whenAnyResult(const ::java::util::Collection& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "whenAnyResult", "(Ljava/util/Collection;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::whenAny(const ::java::util::Collection& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "whenAny", "(Ljava/util/Collection;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::whenAllResult(const ::java::util::Collection& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "whenAllResult", "(Ljava/util/Collection;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::whenAll(const ::java::util::Collection& arg0){
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "whenAll", "(Ljava/util/Collection;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWhile(const ::java::util::concurrent::Callable& arg0, const ::bolts::Continuation& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWhile", "(Ljava/util/concurrent/Callable;Lbolts/Continuation;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWhile(const ::java::util::concurrent::Callable& arg0, const ::bolts::Continuation& arg1, const ::bolts::CancellationToken& arg2) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWhile", "(Ljava/util/concurrent/Callable;Lbolts/Continuation;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWhile(const ::java::util::concurrent::Callable& arg0, const ::bolts::Continuation& arg1, const ::java::util::concurrent::Executor& arg2) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWhile", "(Ljava/util/concurrent/Callable;Lbolts/Continuation;Ljava/util/concurrent/Executor;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWhile(const ::java::util::concurrent::Callable& arg0, const ::bolts::Continuation& arg1, const ::java::util::concurrent::Executor& arg2, const ::bolts::CancellationToken& arg3) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWhile", "(Ljava/util/concurrent/Callable;Lbolts/Continuation;Ljava/util/concurrent/Executor;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWith(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWith", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWith(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1, const ::bolts::CancellationToken& arg2) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWith", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWith(const ::bolts::Continuation& arg0) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWith", "(Lbolts/Continuation;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWith(const ::bolts::Continuation& arg0, const ::bolts::CancellationToken& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWith", "(Lbolts/Continuation;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWithTask(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWithTask", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWithTask(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1, const ::bolts::CancellationToken& arg2) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWithTask", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWithTask(const ::bolts::Continuation& arg0) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWithTask", "(Lbolts/Continuation;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::continueWithTask(const ::bolts::Continuation& arg0, const ::bolts::CancellationToken& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueWithTask", "(Lbolts/Continuation;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccess(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccess(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1, const ::bolts::CancellationToken& arg2) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccess(const ::bolts::Continuation& arg0) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lbolts/Continuation;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccess(const ::bolts::Continuation& arg0, const ::bolts::CancellationToken& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lbolts/Continuation;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccessTask(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccessTask", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccessTask(const ::bolts::Continuation& arg0, const ::java::util::concurrent::Executor& arg1, const ::bolts::CancellationToken& arg2) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccessTask", "(Lbolts/Continuation;Ljava/util/concurrent/Executor;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccessTask(const ::bolts::Continuation& arg0) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccessTask", "(Lbolts/Continuation;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task bolts::Task::onSuccessTask(const ::bolts::Continuation& arg0, const ::bolts::CancellationToken& arg1) const {
    if (!::bolts::Task::_class) ::bolts::Task::_class = java::fetch_class("bolts/Task");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccessTask", "(Lbolts/Continuation;Lbolts/CancellationToken;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::bolts::Task _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::bolts::WebViewAppLinkResolver::WebViewAppLinkResolver(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::bolts::AppLinkResolver((jobject)0) {
    if (!::bolts::WebViewAppLinkResolver::_class) ::bolts::WebViewAppLinkResolver::_class = java::fetch_class("bolts/WebViewAppLinkResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::bolts::Task bolts::WebViewAppLinkResolver::getAppLinkFromUrlInBackground(const ::android::net::Uri& arg0) const {
    if (!::bolts::WebViewAppLinkResolver::_class) ::bolts::WebViewAppLinkResolver::_class = java::fetch_class("bolts/WebViewAppLinkResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppLinkFromUrlInBackground", "(Landroid/net/Uri;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}


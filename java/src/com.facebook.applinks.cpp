#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "bolts.Task.hpp"
#include "com.facebook.applinks.AppLinkData.hpp"
#include "com.facebook.applinks.FacebookAppLinkResolver.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass com::facebook::applinks::AppLinkData_CompletionHandler::_class = nullptr;
jclass com::facebook::applinks::AppLinkData::_class = nullptr;
jclass com::facebook::applinks::FacebookAppLinkResolver::_class = nullptr;

void com::facebook::applinks::AppLinkData_CompletionHandler::onDeferredAppLinkDataFetched(const ::com::facebook::applinks::AppLinkData& arg0) const {
    if (!::com::facebook::applinks::AppLinkData_CompletionHandler::_class) ::com::facebook::applinks::AppLinkData_CompletionHandler::_class = java::fetch_class("com/facebook/applinks/AppLinkData$CompletionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDeferredAppLinkDataFetched", "(Lcom/facebook/applinks/AppLinkData;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::applinks::AppLinkData::fetchDeferredAppLinkData(const ::android::content::Context& arg0, const ::com::facebook::applinks::AppLinkData_CompletionHandler& arg1){
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fetchDeferredAppLinkData", "(Landroid/content/Context;Lcom/facebook/applinks/AppLinkData$CompletionHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::applinks::AppLinkData::fetchDeferredAppLinkData(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::com::facebook::applinks::AppLinkData_CompletionHandler& arg2){
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fetchDeferredAppLinkData", "(Landroid/content/Context;Ljava/lang/String;Lcom/facebook/applinks/AppLinkData$CompletionHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::com::facebook::applinks::AppLinkData com::facebook::applinks::AppLinkData::createFromActivity(const ::android::app::Activity& arg0){
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromActivity", "(Landroid/app/Activity;)Lcom/facebook/applinks/AppLinkData;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::applinks::AppLinkData _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::applinks::AppLinkData::getTargetUri() const {
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::applinks::AppLinkData::getRef() const {
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::applinks::AppLinkData::getArgumentBundle() const {
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArgumentBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::applinks::AppLinkData::getRefererData() const {
    if (!::com::facebook::applinks::AppLinkData::_class) ::com::facebook::applinks::AppLinkData::_class = java::fetch_class("com/facebook/applinks/AppLinkData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRefererData", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::applinks::FacebookAppLinkResolver::FacebookAppLinkResolver() : ::java::lang::Object((jobject)0), ::bolts::AppLinkResolver((jobject)0) {
    if (!::com::facebook::applinks::FacebookAppLinkResolver::_class) ::com::facebook::applinks::FacebookAppLinkResolver::_class = java::fetch_class("com/facebook/applinks/FacebookAppLinkResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::bolts::Task com::facebook::applinks::FacebookAppLinkResolver::getAppLinkFromUrlInBackground(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::applinks::FacebookAppLinkResolver::_class) ::com::facebook::applinks::FacebookAppLinkResolver::_class = java::fetch_class("com/facebook/applinks/FacebookAppLinkResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppLinkFromUrlInBackground", "(Landroid/net/Uri;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}

::bolts::Task com::facebook::applinks::FacebookAppLinkResolver::getAppLinkFromUrlsInBackground(const ::java::util::List& arg0) const {
    if (!::com::facebook::applinks::FacebookAppLinkResolver::_class) ::com::facebook::applinks::FacebookAppLinkResolver::_class = java::fetch_class("com/facebook/applinks/FacebookAppLinkResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppLinkFromUrlsInBackground", "(Ljava/util/List;)Lbolts/Task;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::bolts::Task _ret(ret);
    return _ret;
}


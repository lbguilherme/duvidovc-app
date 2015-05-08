#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.net.Uri.hpp"
#include "com.facebook.messenger.MessengerThreadParams.hpp"
#include "com.facebook.messenger.MessengerUtils.hpp"
#include "com.facebook.messenger.ShareToMessengerParams.hpp"
#include "com.facebook.messenger.ShareToMessengerParamsBuilder.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass com::facebook::messenger::MessengerThreadParams_Origin::_class = nullptr;
jclass com::facebook::messenger::MessengerThreadParams::_class = nullptr;
jclass com::facebook::messenger::MessengerUtils::_class = nullptr;
jclass com::facebook::messenger::ShareToMessengerParams::_class = nullptr;
jclass com::facebook::messenger::ShareToMessengerParamsBuilder::_class = nullptr;

std::vector< ::com::facebook::messenger::MessengerThreadParams_Origin> com::facebook::messenger::MessengerThreadParams_Origin::values(){
    if (!::com::facebook::messenger::MessengerThreadParams_Origin::_class) ::com::facebook::messenger::MessengerThreadParams_Origin::_class = java::fetch_class("com/facebook/messenger/MessengerThreadParams$Origin");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/messenger/MessengerThreadParams$Origin;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::messenger::MessengerThreadParams_Origin> _ret(rets, ::com::facebook::messenger::MessengerThreadParams_Origin((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::messenger::MessengerThreadParams_Origin retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::messenger::MessengerThreadParams_Origin com::facebook::messenger::MessengerThreadParams_Origin::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::messenger::MessengerThreadParams_Origin::_class) ::com::facebook::messenger::MessengerThreadParams_Origin::_class = java::fetch_class("com/facebook/messenger/MessengerThreadParams$Origin");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/messenger/MessengerThreadParams$Origin;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::messenger::MessengerThreadParams_Origin _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::messenger::MessengerThreadParams::MessengerThreadParams(const ::com::facebook::messenger::MessengerThreadParams_Origin& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::util::List& arg3) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::messenger::MessengerThreadParams::_class) ::com::facebook::messenger::MessengerThreadParams::_class = java::fetch_class("com/facebook/messenger/MessengerThreadParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/messenger/MessengerThreadParams$Origin;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::messenger::MessengerUtils::MessengerUtils() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::messenger::MessengerUtils::_class) ::com::facebook::messenger::MessengerUtils::_class = java::fetch_class("com/facebook/messenger/MessengerUtils");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::messenger::MessengerUtils::shareToMessenger(const ::android::app::Activity& arg0, int32_t arg1, const ::com::facebook::messenger::ShareToMessengerParams& arg2){
    if (!::com::facebook::messenger::MessengerUtils::_class) ::com::facebook::messenger::MessengerUtils::_class = java::fetch_class("com/facebook/messenger/MessengerUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "shareToMessenger", "(Landroid/app/Activity;ILcom/facebook/messenger/ShareToMessengerParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::com::facebook::messenger::MessengerThreadParams com::facebook::messenger::MessengerUtils::getMessengerThreadParamsForIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::messenger::MessengerUtils::_class) ::com::facebook::messenger::MessengerUtils::_class = java::fetch_class("com/facebook/messenger/MessengerUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMessengerThreadParamsForIntent", "(Landroid/content/Intent;)Lcom/facebook/messenger/MessengerThreadParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::messenger::MessengerThreadParams _ret(ret);
    return _ret;
}

void com::facebook::messenger::MessengerUtils::finishShareToMessenger(const ::android::app::Activity& arg0, const ::com::facebook::messenger::ShareToMessengerParams& arg1){
    if (!::com::facebook::messenger::MessengerUtils::_class) ::com::facebook::messenger::MessengerUtils::_class = java::fetch_class("com/facebook/messenger/MessengerUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "finishShareToMessenger", "(Landroid/app/Activity;Lcom/facebook/messenger/ShareToMessengerParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::messenger::MessengerUtils::hasMessengerInstalled(const ::android::content::Context& arg0){
    if (!::com::facebook::messenger::MessengerUtils::_class) ::com::facebook::messenger::MessengerUtils::_class = java::fetch_class("com/facebook/messenger/MessengerUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasMessengerInstalled", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void com::facebook::messenger::MessengerUtils::openMessengerInPlayStore(const ::android::content::Context& arg0){
    if (!::com::facebook::messenger::MessengerUtils::_class) ::com::facebook::messenger::MessengerUtils::_class = java::fetch_class("com/facebook/messenger/MessengerUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openMessengerInPlayStore", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::com::facebook::messenger::ShareToMessengerParamsBuilder com::facebook::messenger::ShareToMessengerParams::newBuilder(const ::android::net::Uri& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::messenger::ShareToMessengerParams::_class) ::com::facebook::messenger::ShareToMessengerParams::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParams");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newBuilder", "(Landroid/net/Uri;Ljava/lang/String;)Lcom/facebook/messenger/ShareToMessengerParamsBuilder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::messenger::ShareToMessengerParamsBuilder _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::messenger::ShareToMessengerParamsBuilder::getUri() const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::messenger::ShareToMessengerParamsBuilder::getMimeType() const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::messenger::ShareToMessengerParamsBuilder com::facebook::messenger::ShareToMessengerParamsBuilder::setMetaData(const ::java::lang::String& arg0) const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetaData", "(Ljava/lang/String;)Lcom/facebook/messenger/ShareToMessengerParamsBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::messenger::ShareToMessengerParamsBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::messenger::ShareToMessengerParamsBuilder::getMetaData() const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetaData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::messenger::ShareToMessengerParamsBuilder com::facebook::messenger::ShareToMessengerParamsBuilder::setExternalUri(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExternalUri", "(Landroid/net/Uri;)Lcom/facebook/messenger/ShareToMessengerParamsBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::messenger::ShareToMessengerParamsBuilder _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::messenger::ShareToMessengerParamsBuilder::getExternalUri() const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExternalUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::com::facebook::messenger::ShareToMessengerParams com::facebook::messenger::ShareToMessengerParamsBuilder::build() const {
    if (!::com::facebook::messenger::ShareToMessengerParamsBuilder::_class) ::com::facebook::messenger::ShareToMessengerParamsBuilder::_class = java::fetch_class("com/facebook/messenger/ShareToMessengerParamsBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/messenger/ShareToMessengerParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::messenger::ShareToMessengerParams _ret(ret);
    return _ret;
}


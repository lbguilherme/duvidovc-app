#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.support.v4.app.Fragment.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "com.facebook.AccessToken.hpp"
#include "com.facebook.AccessTokenSource.hpp"
#include "com.facebook.CallbackManager.hpp"
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.GraphResponse.hpp"
#include "com.facebook.internal.WebDialog.hpp"
#include "com.facebook.login.DefaultAudience.hpp"
#include "com.facebook.login.GetTokenClient.hpp"
#include "com.facebook.login.GetTokenLoginMethodHandler.hpp"
#include "com.facebook.login.KatanaProxyLoginMethodHandler.hpp"
#include "com.facebook.login.LoginBehavior.hpp"
#include "com.facebook.login.LoginClient.hpp"
#include "com.facebook.login.LoginFragment.hpp"
#include "com.facebook.login.LoginLogger.hpp"
#include "com.facebook.login.LoginManager.hpp"
#include "com.facebook.login.LoginMethodHandler.hpp"
#include "com.facebook.login.LoginResult.hpp"
#include "com.facebook.login.StartActivityDelegate.hpp"
#include "com.facebook.login.WebViewLoginMethodHandler.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.String.hpp"
#include "java.util.Collection.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"

jclass com::facebook::login::DefaultAudience::_class = nullptr;
jclass com::facebook::login::GetTokenClient::_class = nullptr;
jclass com::facebook::login::GetTokenLoginMethodHandler::_class = nullptr;
jclass com::facebook::login::KatanaProxyLoginMethodHandler::_class = nullptr;
jclass com::facebook::login::LoginBehavior::_class = nullptr;
jclass com::facebook::login::LoginClient_BackgroundProcessingListener::_class = nullptr;
jclass com::facebook::login::LoginClient_OnCompletedListener::_class = nullptr;
jclass com::facebook::login::LoginClient_PermissionsPair::_class = nullptr;
jclass com::facebook::login::LoginClient_Request::_class = nullptr;
jclass com::facebook::login::LoginClient_Result_Code::_class = nullptr;
jclass com::facebook::login::LoginClient_Result::_class = nullptr;
jclass com::facebook::login::LoginClient::_class = nullptr;
jclass com::facebook::login::LoginFragment::_class = nullptr;
jclass com::facebook::login::LoginLogger::_class = nullptr;
jclass com::facebook::login::LoginManager_ActivityStartActivityDelegate::_class = nullptr;
jclass com::facebook::login::LoginManager_FragmentStartActivityDelegate::_class = nullptr;
jclass com::facebook::login::LoginManager::_class = nullptr;
jclass com::facebook::login::LoginMethodHandler::_class = nullptr;
jclass com::facebook::login::LoginResult::_class = nullptr;
jclass com::facebook::login::StartActivityDelegate::_class = nullptr;
jclass com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class = nullptr;
jclass com::facebook::login::WebViewLoginMethodHandler::_class = nullptr;

std::vector< ::com::facebook::login::DefaultAudience> com::facebook::login::DefaultAudience::values(){
    if (!::com::facebook::login::DefaultAudience::_class) ::com::facebook::login::DefaultAudience::_class = java::fetch_class("com/facebook/login/DefaultAudience");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/login/DefaultAudience;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::login::DefaultAudience> _ret(rets, ::com::facebook::login::DefaultAudience((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::login::DefaultAudience retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::login::DefaultAudience com::facebook::login::DefaultAudience::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::login::DefaultAudience::_class) ::com::facebook::login::DefaultAudience::_class = java::fetch_class("com/facebook/login/DefaultAudience");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/login/DefaultAudience;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::login::DefaultAudience _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::login::DefaultAudience::getNativeProtocolAudience() const {
    if (!::com::facebook::login::DefaultAudience::_class) ::com::facebook::login::DefaultAudience::_class = java::fetch_class("com/facebook/login/DefaultAudience");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNativeProtocolAudience", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::login::GetTokenLoginMethodHandler::describeContents() const {
    if (!::com::facebook::login::GetTokenLoginMethodHandler::_class) ::com::facebook::login::GetTokenLoginMethodHandler::_class = java::fetch_class("com/facebook/login/GetTokenLoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::GetTokenLoginMethodHandler::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::GetTokenLoginMethodHandler::_class) ::com::facebook::login::GetTokenLoginMethodHandler::_class = java::fetch_class("com/facebook/login/GetTokenLoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t com::facebook::login::KatanaProxyLoginMethodHandler::describeContents() const {
    if (!::com::facebook::login::KatanaProxyLoginMethodHandler::_class) ::com::facebook::login::KatanaProxyLoginMethodHandler::_class = java::fetch_class("com/facebook/login/KatanaProxyLoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::KatanaProxyLoginMethodHandler::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::KatanaProxyLoginMethodHandler::_class) ::com::facebook::login::KatanaProxyLoginMethodHandler::_class = java::fetch_class("com/facebook/login/KatanaProxyLoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::login::LoginBehavior> com::facebook::login::LoginBehavior::values(){
    if (!::com::facebook::login::LoginBehavior::_class) ::com::facebook::login::LoginBehavior::_class = java::fetch_class("com/facebook/login/LoginBehavior");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/login/LoginBehavior;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::login::LoginBehavior> _ret(rets, ::com::facebook::login::LoginBehavior((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::login::LoginBehavior retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::login::LoginBehavior com::facebook::login::LoginBehavior::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::login::LoginBehavior::_class) ::com::facebook::login::LoginBehavior::_class = java::fetch_class("com/facebook/login/LoginBehavior");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/login/LoginBehavior;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::login::LoginBehavior _ret(ret);
    return _ret;
}

void com::facebook::login::LoginClient_BackgroundProcessingListener::onBackgroundProcessingStarted() const {
    if (!::com::facebook::login::LoginClient_BackgroundProcessingListener::_class) ::com::facebook::login::LoginClient_BackgroundProcessingListener::_class = java::fetch_class("com/facebook/login/LoginClient$BackgroundProcessingListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackgroundProcessingStarted", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::LoginClient_BackgroundProcessingListener::onBackgroundProcessingStopped() const {
    if (!::com::facebook::login::LoginClient_BackgroundProcessingListener::_class) ::com::facebook::login::LoginClient_BackgroundProcessingListener::_class = java::fetch_class("com/facebook/login/LoginClient$BackgroundProcessingListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackgroundProcessingStopped", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::LoginClient_OnCompletedListener::onCompleted(const ::com::facebook::login::LoginClient_Result& arg0) const {
    if (!::com::facebook::login::LoginClient_OnCompletedListener::_class) ::com::facebook::login::LoginClient_OnCompletedListener::_class = java::fetch_class("com/facebook/login/LoginClient$OnCompletedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCompleted", "(Lcom/facebook/login/LoginClient$Result;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::LoginClient_PermissionsPair::LoginClient_PermissionsPair(const ::java::util::List& arg0, const ::java::util::List& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::login::LoginClient_PermissionsPair::_class) ::com::facebook::login::LoginClient_PermissionsPair::_class = java::fetch_class("com/facebook/login/LoginClient$PermissionsPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::List com::facebook::login::LoginClient_PermissionsPair::getGrantedPermissions() const {
    if (!::com::facebook::login::LoginClient_PermissionsPair::_class) ::com::facebook::login::LoginClient_PermissionsPair::_class = java::fetch_class("com/facebook/login/LoginClient$PermissionsPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGrantedPermissions", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List com::facebook::login::LoginClient_PermissionsPair::getDeclinedPermissions() const {
    if (!::com::facebook::login::LoginClient_PermissionsPair::_class) ::com::facebook::login::LoginClient_PermissionsPair::_class = java::fetch_class("com/facebook/login/LoginClient$PermissionsPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclinedPermissions", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t com::facebook::login::LoginClient_Request::describeContents() const {
    if (!::com::facebook::login::LoginClient_Request::_class) ::com::facebook::login::LoginClient_Request::_class = java::fetch_class("com/facebook/login/LoginClient$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::LoginClient_Request::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::LoginClient_Request::_class) ::com::facebook::login::LoginClient_Request::_class = java::fetch_class("com/facebook/login/LoginClient$Request");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::login::LoginClient_Result_Code> com::facebook::login::LoginClient_Result_Code::values(){
    if (!::com::facebook::login::LoginClient_Result_Code::_class) ::com::facebook::login::LoginClient_Result_Code::_class = java::fetch_class("com/facebook/login/LoginClient$Result$Code");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/login/LoginClient$Result$Code;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::login::LoginClient_Result_Code> _ret(rets, ::com::facebook::login::LoginClient_Result_Code((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::login::LoginClient_Result_Code retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::login::LoginClient_Result_Code com::facebook::login::LoginClient_Result_Code::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::login::LoginClient_Result_Code::_class) ::com::facebook::login::LoginClient_Result_Code::_class = java::fetch_class("com/facebook/login/LoginClient$Result$Code");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/login/LoginClient$Result$Code;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::login::LoginClient_Result_Code _ret(ret);
    return _ret;
}

int32_t com::facebook::login::LoginClient_Result::describeContents() const {
    if (!::com::facebook::login::LoginClient_Result::_class) ::com::facebook::login::LoginClient_Result::_class = java::fetch_class("com/facebook/login/LoginClient$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::LoginClient_Result::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::LoginClient_Result::_class) ::com::facebook::login::LoginClient_Result::_class = java::fetch_class("com/facebook/login/LoginClient$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::LoginClient::LoginClient(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::app::Fragment com::facebook::login::LoginClient::getFragment() const {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "()Landroid/support/v4/app/Fragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

::com::facebook::login::LoginClient_Request com::facebook::login::LoginClient::getPendingRequest() const {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPendingRequest", "()Lcom/facebook/login/LoginClient$Request;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::LoginClient_Request _ret(ret);
    return _ret;
}

int32_t com::facebook::login::LoginClient::getLoginRequestCode(){
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLoginRequestCode", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool com::facebook::login::LoginClient::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::LoginClient::LoginClient(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t com::facebook::login::LoginClient::describeContents() const {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::LoginClient::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::LoginClient::_class) ::com::facebook::login::LoginClient::_class = java::fetch_class("com/facebook/login/LoginClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::LoginFragment::LoginFragment() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::login::LoginFragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::LoginFragment::onDestroy() const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View com::facebook::login::LoginFragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void com::facebook::login::LoginFragment::onResume() const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::LoginFragment::onPause() const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::LoginFragment::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::login::LoginFragment::onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::login::LoginFragment::_class) ::com::facebook::login::LoginFragment::_class = java::fetch_class("com/facebook/login/LoginFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::login::LoginLogger::getApplicationId() const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::login::LoginLogger::logStartLogin(const ::com::facebook::login::LoginClient_Request& arg0) const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logStartLogin", "(Lcom/facebook/login/LoginClient$Request;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::LoginLogger::logCompleteLogin(const ::java::lang::String& arg0, const ::java::util::Map& arg1, const ::com::facebook::login::LoginClient_Result_Code& arg2, const ::java::util::Map& arg3, const ::java::lang::Exception& arg4) const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logCompleteLogin", "(Ljava/lang/String;Ljava/util/Map;Lcom/facebook/login/LoginClient$Result$Code;Ljava/util/Map;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void com::facebook::login::LoginLogger::logAuthorizationMethodStart(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logAuthorizationMethodStart", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginLogger::logAuthorizationMethodComplete(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::util::Map& arg5) const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logAuthorizationMethodComplete", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void com::facebook::login::LoginLogger::logUnexpectedError(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logUnexpectedError", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginLogger::logUnexpectedError(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::com::facebook::login::LoginLogger::_class) ::com::facebook::login::LoginLogger::_class = java::fetch_class("com/facebook/login/LoginLogger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logUnexpectedError", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::login::LoginManager_ActivityStartActivityDelegate::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::com::facebook::login::LoginManager_ActivityStartActivityDelegate::_class) ::com::facebook::login::LoginManager_ActivityStartActivityDelegate::_class = java::fetch_class("com/facebook/login/LoginManager$ActivityStartActivityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::app::Activity com::facebook::login::LoginManager_ActivityStartActivityDelegate::getActivityContext() const {
    if (!::com::facebook::login::LoginManager_ActivityStartActivityDelegate::_class) ::com::facebook::login::LoginManager_ActivityStartActivityDelegate::_class = java::fetch_class("com/facebook/login/LoginManager$ActivityStartActivityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityContext", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

void com::facebook::login::LoginManager_FragmentStartActivityDelegate::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::com::facebook::login::LoginManager_FragmentStartActivityDelegate::_class) ::com::facebook::login::LoginManager_FragmentStartActivityDelegate::_class = java::fetch_class("com/facebook/login/LoginManager$FragmentStartActivityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::app::Activity com::facebook::login::LoginManager_FragmentStartActivityDelegate::getActivityContext() const {
    if (!::com::facebook::login::LoginManager_FragmentStartActivityDelegate::_class) ::com::facebook::login::LoginManager_FragmentStartActivityDelegate::_class = java::fetch_class("com/facebook/login/LoginManager$FragmentStartActivityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityContext", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

::com::facebook::login::LoginManager com::facebook::login::LoginManager::getInstance(){
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Lcom/facebook/login/LoginManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::login::LoginManager _ret(ret);
    return _ret;
}

void com::facebook::login::LoginManager::resolveError(const ::android::app::Activity& arg0, const ::com::facebook::GraphResponse& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveError", "(Landroid/app/Activity;Lcom/facebook/GraphResponse;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginManager::resolveError(const ::android::support::v4::app::Fragment& arg0, const ::com::facebook::GraphResponse& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveError", "(Landroid/support/v4/app/Fragment;Lcom/facebook/GraphResponse;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginManager::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::com::facebook::login::LoginBehavior com::facebook::login::LoginManager::getLoginBehavior() const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoginBehavior", "()Lcom/facebook/login/LoginBehavior;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::LoginBehavior _ret(ret);
    return _ret;
}

::com::facebook::login::LoginManager com::facebook::login::LoginManager::setLoginBehavior(const ::com::facebook::login::LoginBehavior& arg0) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoginBehavior", "(Lcom/facebook/login/LoginBehavior;)Lcom/facebook/login/LoginManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::login::LoginManager _ret(ret);
    return _ret;
}

::com::facebook::login::DefaultAudience com::facebook::login::LoginManager::getDefaultAudience() const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultAudience", "()Lcom/facebook/login/DefaultAudience;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::DefaultAudience _ret(ret);
    return _ret;
}

::com::facebook::login::LoginManager com::facebook::login::LoginManager::setDefaultAudience(const ::com::facebook::login::DefaultAudience& arg0) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultAudience", "(Lcom/facebook/login/DefaultAudience;)Lcom/facebook/login/LoginManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::login::LoginManager _ret(ret);
    return _ret;
}

void com::facebook::login::LoginManager::logOut() const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "logOut", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::LoginManager::logInWithReadPermissions(const ::android::support::v4::app::Fragment& arg0, const ::java::util::Collection& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "logInWithReadPermissions", "(Landroid/support/v4/app/Fragment;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginManager::logInWithReadPermissions(const ::android::app::Activity& arg0, const ::java::util::Collection& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "logInWithReadPermissions", "(Landroid/app/Activity;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginManager::logInWithPublishPermissions(const ::android::support::v4::app::Fragment& arg0, const ::java::util::Collection& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "logInWithPublishPermissions", "(Landroid/support/v4/app/Fragment;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::LoginManager::logInWithPublishPermissions(const ::android::app::Activity& arg0, const ::java::util::Collection& arg1) const {
    if (!::com::facebook::login::LoginManager::_class) ::com::facebook::login::LoginManager::_class = java::fetch_class("com/facebook/login/LoginManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "logInWithPublishPermissions", "(Landroid/app/Activity;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::com::facebook::AccessToken com::facebook::login::LoginMethodHandler::createAccessTokenFromWebBundle(const ::java::util::Collection& arg0, const ::android::os::Bundle& arg1, const ::com::facebook::AccessTokenSource& arg2, const ::java::lang::String& arg3){
    if (!::com::facebook::login::LoginMethodHandler::_class) ::com::facebook::login::LoginMethodHandler::_class = java::fetch_class("com/facebook/login/LoginMethodHandler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createAccessTokenFromWebBundle", "(Ljava/util/Collection;Landroid/os/Bundle;Lcom/facebook/AccessTokenSource;Ljava/lang/String;)Lcom/facebook/AccessToken;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

void com::facebook::login::LoginMethodHandler::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::LoginMethodHandler::_class) ::com::facebook::login::LoginMethodHandler::_class = java::fetch_class("com/facebook/login/LoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::LoginResult::LoginResult(const ::com::facebook::AccessToken& arg0, const ::java::util::Set& arg1, const ::java::util::Set& arg2) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::login::LoginResult::_class) ::com::facebook::login::LoginResult::_class = java::fetch_class("com/facebook/login/LoginResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/AccessToken;Ljava/util/Set;Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::com::facebook::AccessToken com::facebook::login::LoginResult::getAccessToken() const {
    if (!::com::facebook::login::LoginResult::_class) ::com::facebook::login::LoginResult::_class = java::fetch_class("com/facebook/login/LoginResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessToken", "()Lcom/facebook/AccessToken;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

::java::util::Set com::facebook::login::LoginResult::getRecentlyGrantedPermissions() const {
    if (!::com::facebook::login::LoginResult::_class) ::com::facebook::login::LoginResult::_class = java::fetch_class("com/facebook/login/LoginResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecentlyGrantedPermissions", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set com::facebook::login::LoginResult::getRecentlyDeniedPermissions() const {
    if (!::com::facebook::login::LoginResult::_class) ::com::facebook::login::LoginResult::_class = java::fetch_class("com/facebook/login/LoginResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecentlyDeniedPermissions", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void com::facebook::login::StartActivityDelegate::startActivityForResult(const ::android::content::Intent& arg0, int32_t arg1) const {
    if (!::com::facebook::login::StartActivityDelegate::_class) ::com::facebook::login::StartActivityDelegate::_class = java::fetch_class("com/facebook/login/StartActivityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "startActivityForResult", "(Landroid/content/Intent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::app::Activity com::facebook::login::StartActivityDelegate::getActivityContext() const {
    if (!::com::facebook::login::StartActivityDelegate::_class) ::com::facebook::login::StartActivityDelegate::_class = java::fetch_class("com/facebook/login/StartActivityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivityContext", "()Landroid/app/Activity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Activity _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::WebViewLoginMethodHandler_AuthDialogBuilder(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) : ::java::lang::Object((jobject)0), ::com::facebook::internal::WebDialog_Builder((jobject)0) {
    if (!::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class) ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class = java::fetch_class("com/facebook/login/WebViewLoginMethodHandler$AuthDialogBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::setE2E(const ::java::lang::String& arg0) const {
    if (!::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class) ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class = java::fetch_class("com/facebook/login/WebViewLoginMethodHandler$AuthDialogBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setE2E", "(Ljava/lang/String;)Lcom/facebook/login/WebViewLoginMethodHandler$AuthDialogBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder _ret(ret);
    return _ret;
}

::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::setIsRerequest(bool arg0) const {
    if (!::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class) ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class = java::fetch_class("com/facebook/login/WebViewLoginMethodHandler$AuthDialogBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsRerequest", "(Z)Lcom/facebook/login/WebViewLoginMethodHandler$AuthDialogBuilder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder _ret(ret);
    return _ret;
}

::com::facebook::internal::WebDialog com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::build() const {
    if (!::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class) ::com::facebook::login::WebViewLoginMethodHandler_AuthDialogBuilder::_class = java::fetch_class("com/facebook/login/WebViewLoginMethodHandler$AuthDialogBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/internal/WebDialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::WebDialog _ret(ret);
    return _ret;
}

int32_t com::facebook::login::WebViewLoginMethodHandler::describeContents() const {
    if (!::com::facebook::login::WebViewLoginMethodHandler::_class) ::com::facebook::login::WebViewLoginMethodHandler::_class = java::fetch_class("com/facebook/login/WebViewLoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::WebViewLoginMethodHandler::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::login::WebViewLoginMethodHandler::_class) ::com::facebook::login::WebViewLoginMethodHandler::_class = java::fetch_class("com/facebook/login/WebViewLoginMethodHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}


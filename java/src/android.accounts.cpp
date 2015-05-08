#include "java-core.hpp"
#include <memory>
#include "android.accounts.AbstractAccountAuthenticator.hpp"
#include "android.accounts.Account.hpp"
#include "android.accounts.AccountAuthenticatorActivity.hpp"
#include "android.accounts.AccountAuthenticatorResponse.hpp"
#include "android.accounts.AccountManager.hpp"
#include "android.accounts.AccountManagerCallback.hpp"
#include "android.accounts.AccountManagerFuture.hpp"
#include "android.accounts.AccountsException.hpp"
#include "android.accounts.AuthenticatorDescription.hpp"
#include "android.accounts.AuthenticatorException.hpp"
#include "android.accounts.NetworkErrorException.hpp"
#include "android.accounts.OnAccountsUpdateListener.hpp"
#include "android.accounts.OperationCanceledException.hpp"
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.concurrent.TimeUnit.hpp"

jclass android::accounts::AccountsException::_class = nullptr;
jclass android::accounts::AccountAuthenticatorActivity::_class = nullptr;
jclass android::accounts::AccountManager::_class = nullptr;
jclass android::accounts::AccountAuthenticatorResponse::_class = nullptr;
jclass android::accounts::OperationCanceledException::_class = nullptr;
jclass android::accounts::AuthenticatorDescription::_class = nullptr;
jclass android::accounts::AccountManagerFuture::_class = nullptr;
jclass android::accounts::Account::_class = nullptr;
jclass android::accounts::AbstractAccountAuthenticator::_class = nullptr;
jclass android::accounts::AccountManagerCallback::_class = nullptr;
jclass android::accounts::AuthenticatorException::_class = nullptr;
jclass android::accounts::NetworkErrorException::_class = nullptr;
jclass android::accounts::OnAccountsUpdateListener::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AccountsException::AccountsException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AccountsException::_class) ::android::accounts::AccountsException::_class = java::fetch_class("android/accounts/AccountsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AccountsException::AccountsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AccountsException::_class) ::android::accounts::AccountsException::_class = java::fetch_class("android/accounts/AccountsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AccountsException::AccountsException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AccountsException::_class) ::android::accounts::AccountsException::_class = java::fetch_class("android/accounts/AccountsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AccountsException::AccountsException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AccountsException::_class) ::android::accounts::AccountsException::_class = java::fetch_class("android/accounts/AccountsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AccountAuthenticatorActivity::AccountAuthenticatorActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::accounts::AccountAuthenticatorActivity::_class) ::android::accounts::AccountAuthenticatorActivity::_class = java::fetch_class("android/accounts/AccountAuthenticatorActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::accounts::AccountAuthenticatorActivity::setAccountAuthenticatorResult(const ::android::os::Bundle& arg0) const {
    if (!::android::accounts::AccountAuthenticatorActivity::_class) ::android::accounts::AccountAuthenticatorActivity::_class = java::fetch_class("android/accounts/AccountAuthenticatorActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccountAuthenticatorResult", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::accounts::AccountAuthenticatorActivity::finish() const {
    if (!::android::accounts::AccountAuthenticatorActivity::_class) ::android::accounts::AccountAuthenticatorActivity::_class = java::fetch_class("android/accounts/AccountAuthenticatorActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::accounts::AccountManager android::accounts::AccountManager::get(const ::android::content::Context& arg0){
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "get", "(Landroid/content/Context;)Landroid/accounts/AccountManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::accounts::AccountManager _ret(ret);
    return _ret;
}

::java::lang::String android::accounts::AccountManager::getPassword(const ::android::accounts::Account& arg0) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "(Landroid/accounts/Account;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::accounts::AccountManager::getUserData(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserData", "(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::android::accounts::AuthenticatorDescription> android::accounts::AccountManager::getAuthenticatorTypes() const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthenticatorTypes", "()[Landroid/accounts/AuthenticatorDescription;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::accounts::AuthenticatorDescription> _ret(rets, ::android::accounts::AuthenticatorDescription((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::accounts::AuthenticatorDescription retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::accounts::Account> android::accounts::AccountManager::getAccounts() const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccounts", "()[Landroid/accounts/Account;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::accounts::Account> _ret(rets, ::android::accounts::Account((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::accounts::Account retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::android::accounts::Account> android::accounts::AccountManager::getAccountsByType(const ::java::lang::String& arg0) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccountsByType", "(Ljava/lang/String;)[Landroid/accounts/Account;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::accounts::Account> _ret(rets, ::android::accounts::Account((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::accounts::Account retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::hasFeatures(const ::android::accounts::Account& arg0, const std::vector< ::java::lang::String>& arg1, const ::android::accounts::AccountManagerCallback& arg2, const ::android::os::Handler& arg3) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFeatures", "(Landroid/accounts/Account;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
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
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::getAccountsByTypeAndFeatures(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const ::android::accounts::AccountManagerCallback& arg2, const ::android::os::Handler& arg3) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccountsByTypeAndFeatures", "(Ljava/lang/String;[Ljava/lang/String;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
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
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

bool android::accounts::AccountManager::addAccountExplicitly(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccountExplicitly", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::removeAccount(const ::android::accounts::Account& arg0, const ::android::accounts::AccountManagerCallback& arg1, const ::android::os::Handler& arg2) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAccount", "(Landroid/accounts/Account;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

void android::accounts::AccountManager::invalidateAuthToken(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateAuthToken", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::accounts::AccountManager::peekAuthToken(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekAuthToken", "(Landroid/accounts/Account;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::accounts::AccountManager::setPassword(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Landroid/accounts/Account;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::accounts::AccountManager::clearPassword(const ::android::accounts::Account& arg0) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPassword", "(Landroid/accounts/Account;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::accounts::AccountManager::setUserData(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserData", "(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::accounts::AccountManager::setAuthToken(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthToken", "(Landroid/accounts/Account;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::accounts::AccountManager::blockingGetAuthToken(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, bool arg2) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "blockingGetAuthToken", "(Landroid/accounts/Account;Ljava/lang/String;Z)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::getAuthToken(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, const ::android::app::Activity& arg3, const ::android::accounts::AccountManagerCallback& arg4, const ::android::os::Handler& arg5) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthToken", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::getAuthToken(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, bool arg2, const ::android::accounts::AccountManagerCallback& arg3, const ::android::os::Handler& arg4) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthToken", "(Landroid/accounts/Account;Ljava/lang/String;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::getAuthToken(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, bool arg3, const ::android::accounts::AccountManagerCallback& arg4, const ::android::os::Handler& arg5) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthToken", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;ZLandroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::addAccount(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, const ::android::os::Bundle& arg3, const ::android::app::Activity& arg4, const ::android::accounts::AccountManagerCallback& arg5, const ::android::os::Handler& arg6) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccount", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
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
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::confirmCredentials(const ::android::accounts::Account& arg0, const ::android::os::Bundle& arg1, const ::android::app::Activity& arg2, const ::android::accounts::AccountManagerCallback& arg3, const ::android::os::Handler& arg4) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "confirmCredentials", "(Landroid/accounts/Account;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::updateCredentials(const ::android::accounts::Account& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, const ::android::app::Activity& arg3, const ::android::accounts::AccountManagerCallback& arg4, const ::android::os::Handler& arg5) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCredentials", "(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::editProperties(const ::java::lang::String& arg0, const ::android::app::Activity& arg1, const ::android::accounts::AccountManagerCallback& arg2, const ::android::os::Handler& arg3) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "editProperties", "(Ljava/lang/String;Landroid/app/Activity;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::accounts::AccountManagerFuture android::accounts::AccountManager::getAuthTokenByFeatures(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2, const ::android::app::Activity& arg3, const ::android::os::Bundle& arg4, const ::android::os::Bundle& arg5, const ::android::accounts::AccountManagerCallback& arg6, const ::android::os::Handler& arg7) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthTokenByFeatures", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/app/Activity;Landroid/os/Bundle;Landroid/os/Bundle;Landroid/accounts/AccountManagerCallback;Landroid/os/Handler;)Landroid/accounts/AccountManagerFuture;");
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
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::android::accounts::AccountManagerFuture _ret(ret);
    return _ret;
}

::android::content::Intent android::accounts::AccountManager::newChooseAccountIntent(const ::android::accounts::Account& arg0, const ::java::util::ArrayList& arg1, const std::vector< ::java::lang::String>& arg2, bool arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const std::vector< ::java::lang::String>& arg6, const ::android::os::Bundle& arg7){
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newChooseAccountIntent", "(Landroid/accounts/Account;Ljava/util/ArrayList;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;");
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
    bool _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    unsigned arg6s = arg6.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg6 = java::jni->NewObjectArray(arg6s, ::java::lang::String::_class, nullptr);
    for (unsigned arg6i = 0; arg6i < arg6s; ++arg6i) {
      const ::java::lang::String& arg6e = arg6[arg6i];
        jobject arg6d = arg6e.obj;
      java::jni->SetObjectArrayElement(_arg6, arg6i, arg6d);
    }
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::accounts::AccountManager::addOnAccountsUpdatedListener(const ::android::accounts::OnAccountsUpdateListener& arg0, const ::android::os::Handler& arg1, bool arg2) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOnAccountsUpdatedListener", "(Landroid/accounts/OnAccountsUpdateListener;Landroid/os/Handler;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::accounts::AccountManager::removeOnAccountsUpdatedListener(const ::android::accounts::OnAccountsUpdateListener& arg0) const {
    if (!::android::accounts::AccountManager::_class) ::android::accounts::AccountManager::_class = java::fetch_class("android/accounts/AccountManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeOnAccountsUpdatedListener", "(Landroid/accounts/OnAccountsUpdateListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AccountAuthenticatorResponse::AccountAuthenticatorResponse(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::accounts::AccountAuthenticatorResponse::_class) ::android::accounts::AccountAuthenticatorResponse::_class = java::fetch_class("android/accounts/AccountAuthenticatorResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::accounts::AccountAuthenticatorResponse::onResult(const ::android::os::Bundle& arg0) const {
    if (!::android::accounts::AccountAuthenticatorResponse::_class) ::android::accounts::AccountAuthenticatorResponse::_class = java::fetch_class("android/accounts/AccountAuthenticatorResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResult", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::accounts::AccountAuthenticatorResponse::onRequestContinued() const {
    if (!::android::accounts::AccountAuthenticatorResponse::_class) ::android::accounts::AccountAuthenticatorResponse::_class = java::fetch_class("android/accounts/AccountAuthenticatorResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestContinued", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::accounts::AccountAuthenticatorResponse::onError(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::android::accounts::AccountAuthenticatorResponse::_class) ::android::accounts::AccountAuthenticatorResponse::_class = java::fetch_class("android/accounts/AccountAuthenticatorResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::accounts::AccountAuthenticatorResponse::describeContents() const {
    if (!::android::accounts::AccountAuthenticatorResponse::_class) ::android::accounts::AccountAuthenticatorResponse::_class = java::fetch_class("android/accounts/AccountAuthenticatorResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::accounts::AccountAuthenticatorResponse::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::accounts::AccountAuthenticatorResponse::_class) ::android::accounts::AccountAuthenticatorResponse::_class = java::fetch_class("android/accounts/AccountAuthenticatorResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::OperationCanceledException::OperationCanceledException() : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::OperationCanceledException::_class) ::android::accounts::OperationCanceledException::_class = java::fetch_class("android/accounts/OperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::OperationCanceledException::OperationCanceledException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::OperationCanceledException::_class) ::android::accounts::OperationCanceledException::_class = java::fetch_class("android/accounts/OperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::OperationCanceledException::OperationCanceledException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::OperationCanceledException::_class) ::android::accounts::OperationCanceledException::_class = java::fetch_class("android/accounts/OperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::OperationCanceledException::OperationCanceledException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::OperationCanceledException::_class) ::android::accounts::OperationCanceledException::_class = java::fetch_class("android/accounts/OperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AuthenticatorDescription::AuthenticatorDescription(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, bool arg6) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;IIIIZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    bool _arg6 = arg6;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AuthenticatorDescription::AuthenticatorDescription(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;IIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

::android::accounts::AuthenticatorDescription android::accounts::AuthenticatorDescription::newKey(const ::java::lang::String& arg0){
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newKey", "(Ljava/lang/String;)Landroid/accounts/AuthenticatorDescription;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::accounts::AuthenticatorDescription _ret(ret);
    return _ret;
}

int32_t android::accounts::AuthenticatorDescription::describeContents() const {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::accounts::AuthenticatorDescription::hashCode() const {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::accounts::AuthenticatorDescription::equals(const ::java::lang::Object& arg0) const {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::accounts::AuthenticatorDescription::toString() const {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::accounts::AuthenticatorDescription::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::accounts::AuthenticatorDescription::_class) ::android::accounts::AuthenticatorDescription::_class = java::fetch_class("android/accounts/AuthenticatorDescription");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::accounts::AccountManagerFuture::cancel(bool arg0) const {
    if (!::android::accounts::AccountManagerFuture::_class) ::android::accounts::AccountManagerFuture::_class = java::fetch_class("android/accounts/AccountManagerFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::accounts::AccountManagerFuture::isCancelled() const {
    if (!::android::accounts::AccountManagerFuture::_class) ::android::accounts::AccountManagerFuture::_class = java::fetch_class("android/accounts/AccountManagerFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCancelled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::accounts::AccountManagerFuture::isDone() const {
    if (!::android::accounts::AccountManagerFuture::_class) ::android::accounts::AccountManagerFuture::_class = java::fetch_class("android/accounts/AccountManagerFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object android::accounts::AccountManagerFuture::getResult() const {
    if (!::android::accounts::AccountManagerFuture::_class) ::android::accounts::AccountManagerFuture::_class = java::fetch_class("android/accounts/AccountManagerFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResult", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::accounts::AccountManagerFuture::getResult(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::android::accounts::AccountManagerFuture::_class) ::android::accounts::AccountManagerFuture::_class = java::fetch_class("android/accounts/AccountManagerFuture");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResult", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::Account::Account(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::Account::Account(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::accounts::Account::equals(const ::java::lang::Object& arg0) const {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::accounts::Account::hashCode() const {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::accounts::Account::describeContents() const {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::accounts::Account::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::accounts::Account::toString() const {
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AbstractAccountAuthenticator::AbstractAccountAuthenticator(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::IBinder android::accounts::AbstractAccountAuthenticator::getIBinder() const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIBinder", "()Landroid/os/IBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::editProperties(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::java::lang::String& arg1) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "editProperties", "(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::addAccount(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::android::os::Bundle& arg4) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccount", "(Landroid/accounts/AccountAuthenticatorResponse;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;");
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
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::confirmCredentials(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::android::accounts::Account& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "confirmCredentials", "(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::getAuthToken(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::android::accounts::Account& arg1, const ::java::lang::String& arg2, const ::android::os::Bundle& arg3) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthToken", "(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::java::lang::String android::accounts::AbstractAccountAuthenticator::getAuthTokenLabel(const ::java::lang::String& arg0) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthTokenLabel", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::updateCredentials(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::android::accounts::Account& arg1, const ::java::lang::String& arg2, const ::android::os::Bundle& arg3) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateCredentials", "(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::hasFeatures(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::android::accounts::Account& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFeatures", "(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;[Ljava/lang/String;)Landroid/os/Bundle;");
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
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::accounts::AbstractAccountAuthenticator::getAccountRemovalAllowed(const ::android::accounts::AccountAuthenticatorResponse& arg0, const ::android::accounts::Account& arg1) const {
    if (!::android::accounts::AbstractAccountAuthenticator::_class) ::android::accounts::AbstractAccountAuthenticator::_class = java::fetch_class("android/accounts/AbstractAccountAuthenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccountRemovalAllowed", "(Landroid/accounts/AccountAuthenticatorResponse;Landroid/accounts/Account;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::accounts::AccountManagerCallback::run(const ::android::accounts::AccountManagerFuture& arg0) const {
    if (!::android::accounts::AccountManagerCallback::_class) ::android::accounts::AccountManagerCallback::_class = java::fetch_class("android/accounts/AccountManagerCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "(Landroid/accounts/AccountManagerFuture;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AuthenticatorException::AuthenticatorException() : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AuthenticatorException::_class) ::android::accounts::AuthenticatorException::_class = java::fetch_class("android/accounts/AuthenticatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AuthenticatorException::AuthenticatorException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AuthenticatorException::_class) ::android::accounts::AuthenticatorException::_class = java::fetch_class("android/accounts/AuthenticatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AuthenticatorException::AuthenticatorException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AuthenticatorException::_class) ::android::accounts::AuthenticatorException::_class = java::fetch_class("android/accounts/AuthenticatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::AuthenticatorException::AuthenticatorException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::AuthenticatorException::_class) ::android::accounts::AuthenticatorException::_class = java::fetch_class("android/accounts/AuthenticatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::NetworkErrorException::NetworkErrorException() : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::NetworkErrorException::_class) ::android::accounts::NetworkErrorException::_class = java::fetch_class("android/accounts/NetworkErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::NetworkErrorException::NetworkErrorException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::NetworkErrorException::_class) ::android::accounts::NetworkErrorException::_class = java::fetch_class("android/accounts/NetworkErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::NetworkErrorException::NetworkErrorException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::NetworkErrorException::_class) ::android::accounts::NetworkErrorException::_class = java::fetch_class("android/accounts/NetworkErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::accounts::NetworkErrorException::NetworkErrorException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::android::accounts::AccountsException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::accounts::NetworkErrorException::_class) ::android::accounts::NetworkErrorException::_class = java::fetch_class("android/accounts/NetworkErrorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::accounts::OnAccountsUpdateListener::onAccountsUpdated(const std::vector< ::android::accounts::Account>& arg0) const {
    if (!::android::accounts::OnAccountsUpdateListener::_class) ::android::accounts::OnAccountsUpdateListener::_class = java::fetch_class("android/accounts/OnAccountsUpdateListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccountsUpdated", "([Landroid/accounts/Account;)V");
    unsigned arg0s = arg0.size();
    if (!::android::accounts::Account::_class) ::android::accounts::Account::_class = java::fetch_class("android/accounts/Account");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::accounts::Account::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::accounts::Account& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}


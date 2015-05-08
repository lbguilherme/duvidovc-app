#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.security.KeyChain.hpp"
#include "android.security.KeyChainAliasCallback.hpp"
#include "android.security.KeyChainException.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.security.Principal.hpp"
#include "java.security.PrivateKey.hpp"
#include "java.security.cert.X509Certificate.hpp"

jclass android::security::KeyChainException::_class = nullptr;
jclass android::security::KeyChain::_class = nullptr;
jclass android::security::KeyChainAliasCallback::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::security::KeyChainException::KeyChainException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::security::KeyChainException::_class) ::android::security::KeyChainException::_class = java::fetch_class("android/security/KeyChainException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::security::KeyChainException::KeyChainException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::security::KeyChainException::_class) ::android::security::KeyChainException::_class = java::fetch_class("android/security/KeyChainException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::security::KeyChainException::KeyChainException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::security::KeyChainException::_class) ::android::security::KeyChainException::_class = java::fetch_class("android/security/KeyChainException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::security::KeyChainException::KeyChainException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::security::KeyChainException::_class) ::android::security::KeyChainException::_class = java::fetch_class("android/security/KeyChainException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::security::KeyChain::KeyChain() : ::java::lang::Object((jobject)0) {
    if (!::android::security::KeyChain::_class) ::android::security::KeyChain::_class = java::fetch_class("android/security/KeyChain");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Intent android::security::KeyChain::createInstallIntent(){
    if (!::android::security::KeyChain::_class) ::android::security::KeyChain::_class = java::fetch_class("android/security/KeyChain");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createInstallIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::security::KeyChain::choosePrivateKeyAlias(const ::android::app::Activity& arg0, const ::android::security::KeyChainAliasCallback& arg1, const std::vector< ::java::lang::String>& arg2, const std::vector< ::java::security::Principal>& arg3, const ::java::lang::String& arg4, int32_t arg5, const ::java::lang::String& arg6){
    if (!::android::security::KeyChain::_class) ::android::security::KeyChain::_class = java::fetch_class("android/security/KeyChain");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "choosePrivateKeyAlias", "(Landroid/app/Activity;Landroid/security/KeyChainAliasCallback;[Ljava/lang/String;[Ljava/security/Principal;Ljava/lang/String;ILjava/lang/String;)V");
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
    unsigned arg3s = arg3.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::security::Principal& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    jobject _arg6 = arg6.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

::java::security::PrivateKey android::security::KeyChain::getPrivateKey(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::security::KeyChain::_class) ::android::security::KeyChain::_class = java::fetch_class("android/security/KeyChain");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPrivateKey", "(Landroid/content/Context;Ljava/lang/String;)Ljava/security/PrivateKey;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::PrivateKey _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::X509Certificate> android::security::KeyChain::getCertificateChain(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::android::security::KeyChain::_class) ::android::security::KeyChain::_class = java::fetch_class("android/security/KeyChain");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCertificateChain", "(Landroid/content/Context;Ljava/lang/String;)[Ljava/security/cert/X509Certificate;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::X509Certificate> _ret(rets, ::java::security::cert::X509Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::X509Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::security::KeyChainAliasCallback::alias(const ::java::lang::String& arg0) const {
    if (!::android::security::KeyChainAliasCallback::_class) ::android::security::KeyChainAliasCallback::_class = java::fetch_class("android/security/KeyChainAliasCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "alias", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}


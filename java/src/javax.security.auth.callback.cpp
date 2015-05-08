#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "javax.security.auth.callback.Callback.hpp"
#include "javax.security.auth.callback.CallbackHandler.hpp"
#include "javax.security.auth.callback.PasswordCallback.hpp"
#include "javax.security.auth.callback.UnsupportedCallbackException.hpp"

jclass javax::security::auth::callback::CallbackHandler::_class = nullptr;
jclass javax::security::auth::callback::PasswordCallback::_class = nullptr;
jclass javax::security::auth::callback::Callback::_class = nullptr;
jclass javax::security::auth::callback::UnsupportedCallbackException::_class = nullptr;

void javax::security::auth::callback::CallbackHandler::handle(const std::vector< ::javax::security::auth::callback::Callback>& arg0) const {
    if (!::javax::security::auth::callback::CallbackHandler::_class) ::javax::security::auth::callback::CallbackHandler::_class = java::fetch_class("javax/security/auth/callback/CallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handle", "([Ljavax/security/auth/callback/Callback;)V");
    unsigned arg0s = arg0.size();
    if (!::javax::security::auth::callback::Callback::_class) ::javax::security::auth::callback::Callback::_class = java::fetch_class("javax/security/auth/callback/Callback");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::javax::security::auth::callback::Callback::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::javax::security::auth::callback::Callback& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::callback::PasswordCallback::PasswordCallback(const ::java::lang::String& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::javax::security::auth::callback::Callback((jobject)0) {
    if (!::javax::security::auth::callback::PasswordCallback::_class) ::javax::security::auth::callback::PasswordCallback::_class = java::fetch_class("javax/security/auth/callback/PasswordCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::security::auth::callback::PasswordCallback::getPrompt() const {
    if (!::javax::security::auth::callback::PasswordCallback::_class) ::javax::security::auth::callback::PasswordCallback::_class = java::fetch_class("javax/security/auth/callback/PasswordCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrompt", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::security::auth::callback::PasswordCallback::isEchoOn() const {
    if (!::javax::security::auth::callback::PasswordCallback::_class) ::javax::security::auth::callback::PasswordCallback::_class = java::fetch_class("javax/security/auth/callback/PasswordCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEchoOn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::security::auth::callback::PasswordCallback::setPassword(const std::vector< uint16_t>& arg0) const {
    if (!::javax::security::auth::callback::PasswordCallback::_class) ::javax::security::auth::callback::PasswordCallback::_class = java::fetch_class("javax/security/auth/callback/PasswordCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< uint16_t> javax::security::auth::callback::PasswordCallback::getPassword() const {
    if (!::javax::security::auth::callback::PasswordCallback::_class) ::javax::security::auth::callback::PasswordCallback::_class = java::fetch_class("javax/security/auth/callback/PasswordCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

void javax::security::auth::callback::PasswordCallback::clearPassword() const {
    if (!::javax::security::auth::callback::PasswordCallback::_class) ::javax::security::auth::callback::PasswordCallback::_class = java::fetch_class("javax/security/auth/callback/PasswordCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPassword", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::callback::UnsupportedCallbackException::UnsupportedCallbackException(const ::javax::security::auth::callback::Callback& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::security::auth::callback::UnsupportedCallbackException::_class) ::javax::security::auth::callback::UnsupportedCallbackException::_class = java::fetch_class("javax/security/auth/callback/UnsupportedCallbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/security/auth/callback/Callback;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::callback::UnsupportedCallbackException::UnsupportedCallbackException(const ::javax::security::auth::callback::Callback& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::security::auth::callback::UnsupportedCallbackException::_class) ::javax::security::auth::callback::UnsupportedCallbackException::_class = java::fetch_class("javax/security/auth/callback/UnsupportedCallbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::javax::security::auth::callback::Callback javax::security::auth::callback::UnsupportedCallbackException::getCallback() const {
    if (!::javax::security::auth::callback::UnsupportedCallbackException::_class) ::javax::security::auth::callback::UnsupportedCallbackException::_class = java::fetch_class("javax/security/auth/callback/UnsupportedCallbackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallback", "()Ljavax/security/auth/callback/Callback;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::callback::Callback _ret(ret);
    return _ret;
}


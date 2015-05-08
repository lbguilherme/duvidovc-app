#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "javax.security.auth.login.LoginException.hpp"

jclass javax::security::auth::login::LoginException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::login::LoginException::LoginException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::security::auth::login::LoginException::_class) ::javax::security::auth::login::LoginException::_class = java::fetch_class("javax/security/auth/login/LoginException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::login::LoginException::LoginException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::security::auth::login::LoginException::_class) ::javax::security::auth::login::LoginException::_class = java::fetch_class("javax/security/auth/login/LoginException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop


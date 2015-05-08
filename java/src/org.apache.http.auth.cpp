#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.security.Principal.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.auth.AUTH.hpp"
#include "org.apache.http.auth.AuthScheme.hpp"
#include "org.apache.http.auth.AuthSchemeFactory.hpp"
#include "org.apache.http.auth.AuthSchemeRegistry.hpp"
#include "org.apache.http.auth.AuthScope.hpp"
#include "org.apache.http.auth.AuthState.hpp"
#include "org.apache.http.auth.AuthenticationException.hpp"
#include "org.apache.http.auth.BasicUserPrincipal.hpp"
#include "org.apache.http.auth.Credentials.hpp"
#include "org.apache.http.auth.InvalidCredentialsException.hpp"
#include "org.apache.http.auth.MalformedChallengeException.hpp"
#include "org.apache.http.auth.NTCredentials.hpp"
#include "org.apache.http.auth.NTUserPrincipal.hpp"
#include "org.apache.http.auth.UsernamePasswordCredentials.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::auth::UsernamePasswordCredentials::_class = nullptr;
jclass org::apache::http::auth::Credentials::_class = nullptr;
jclass org::apache::http::auth::AuthSchemeFactory::_class = nullptr;
jclass org::apache::http::auth::NTCredentials::_class = nullptr;
jclass org::apache::http::auth::AuthScheme::_class = nullptr;
jclass org::apache::http::auth::AuthenticationException::_class = nullptr;
jclass org::apache::http::auth::NTUserPrincipal::_class = nullptr;
jclass org::apache::http::auth::BasicUserPrincipal::_class = nullptr;
jclass org::apache::http::auth::AUTH::_class = nullptr;
jclass org::apache::http::auth::InvalidCredentialsException::_class = nullptr;
jclass org::apache::http::auth::MalformedChallengeException::_class = nullptr;
jclass org::apache::http::auth::AuthState::_class = nullptr;
jclass org::apache::http::auth::AuthSchemeRegistry::_class = nullptr;
jclass org::apache::http::auth::AuthScope::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::UsernamePasswordCredentials::UsernamePasswordCredentials(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::Credentials((jobject)0) {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::UsernamePasswordCredentials::UsernamePasswordCredentials(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::Credentials((jobject)0) {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::Principal org::apache::http::auth::UsernamePasswordCredentials::getUserPrincipal() const {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::UsernamePasswordCredentials::getUserName() const {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::UsernamePasswordCredentials::getPassword() const {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::UsernamePasswordCredentials::hashCode() const {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::auth::UsernamePasswordCredentials::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::UsernamePasswordCredentials::toString() const {
    if (!::org::apache::http::auth::UsernamePasswordCredentials::_class) ::org::apache::http::auth::UsernamePasswordCredentials::_class = java::fetch_class("org/apache/http/auth/UsernamePasswordCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Principal org::apache::http::auth::Credentials::getUserPrincipal() const {
    if (!::org::apache::http::auth::Credentials::_class) ::org::apache::http::auth::Credentials::_class = java::fetch_class("org/apache/http/auth/Credentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::Credentials::getPassword() const {
    if (!::org::apache::http::auth::Credentials::_class) ::org::apache::http::auth::Credentials::_class = java::fetch_class("org/apache/http/auth/Credentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::auth::AuthScheme org::apache::http::auth::AuthSchemeFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::auth::AuthSchemeFactory::_class) ::org::apache::http::auth::AuthSchemeFactory::_class = java::fetch_class("org/apache/http/auth/AuthSchemeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::auth::AuthScheme _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::NTCredentials::NTCredentials(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::Credentials((jobject)0) {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::NTCredentials::NTCredentials(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::Credentials((jobject)0) {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::security::Principal org::apache::http::auth::NTCredentials::getUserPrincipal() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::NTCredentials::getUserName() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::NTCredentials::getPassword() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::NTCredentials::getDomain() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::NTCredentials::getWorkstation() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWorkstation", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::NTCredentials::hashCode() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::auth::NTCredentials::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::NTCredentials::toString() const {
    if (!::org::apache::http::auth::NTCredentials::_class) ::org::apache::http::auth::NTCredentials::_class = java::fetch_class("org/apache/http/auth/NTCredentials");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::auth::AuthScheme::processChallenge(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "processChallenge", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::AuthScheme::getSchemeName() const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::AuthScheme::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::AuthScheme::getRealm() const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRealm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::auth::AuthScheme::isConnectionBased() const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectionBased", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::auth::AuthScheme::isComplete() const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComplete", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::auth::AuthScheme::authenticate(const ::org::apache::http::auth::Credentials& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::org::apache::http::auth::AuthScheme::_class) ::org::apache::http::auth::AuthScheme::_class = java::fetch_class("org/apache/http/auth/AuthScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "authenticate", "(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthenticationException::AuthenticationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::auth::AuthenticationException::_class) ::org::apache::http::auth::AuthenticationException::_class = java::fetch_class("org/apache/http/auth/AuthenticationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthenticationException::AuthenticationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::auth::AuthenticationException::_class) ::org::apache::http::auth::AuthenticationException::_class = java::fetch_class("org/apache/http/auth/AuthenticationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthenticationException::AuthenticationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::auth::AuthenticationException::_class) ::org::apache::http::auth::AuthenticationException::_class = java::fetch_class("org/apache/http/auth/AuthenticationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::NTUserPrincipal::NTUserPrincipal(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::auth::NTUserPrincipal::getName() const {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::NTUserPrincipal::getDomain() const {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::NTUserPrincipal::getUsername() const {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUsername", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::NTUserPrincipal::hashCode() const {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::auth::NTUserPrincipal::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::NTUserPrincipal::toString() const {
    if (!::org::apache::http::auth::NTUserPrincipal::_class) ::org::apache::http::auth::NTUserPrincipal::_class = java::fetch_class("org/apache/http/auth/NTUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::BasicUserPrincipal::BasicUserPrincipal(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::org::apache::http::auth::BasicUserPrincipal::_class) ::org::apache::http::auth::BasicUserPrincipal::_class = java::fetch_class("org/apache/http/auth/BasicUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::auth::BasicUserPrincipal::getName() const {
    if (!::org::apache::http::auth::BasicUserPrincipal::_class) ::org::apache::http::auth::BasicUserPrincipal::_class = java::fetch_class("org/apache/http/auth/BasicUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::BasicUserPrincipal::hashCode() const {
    if (!::org::apache::http::auth::BasicUserPrincipal::_class) ::org::apache::http::auth::BasicUserPrincipal::_class = java::fetch_class("org/apache/http/auth/BasicUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::auth::BasicUserPrincipal::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::auth::BasicUserPrincipal::_class) ::org::apache::http::auth::BasicUserPrincipal::_class = java::fetch_class("org/apache/http/auth/BasicUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::BasicUserPrincipal::toString() const {
    if (!::org::apache::http::auth::BasicUserPrincipal::_class) ::org::apache::http::auth::BasicUserPrincipal::_class = java::fetch_class("org/apache/http/auth/BasicUserPrincipal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::InvalidCredentialsException::InvalidCredentialsException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {
    if (!::org::apache::http::auth::InvalidCredentialsException::_class) ::org::apache::http::auth::InvalidCredentialsException::_class = java::fetch_class("org/apache/http/auth/InvalidCredentialsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::InvalidCredentialsException::InvalidCredentialsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {
    if (!::org::apache::http::auth::InvalidCredentialsException::_class) ::org::apache::http::auth::InvalidCredentialsException::_class = java::fetch_class("org/apache/http/auth/InvalidCredentialsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::InvalidCredentialsException::InvalidCredentialsException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {
    if (!::org::apache::http::auth::InvalidCredentialsException::_class) ::org::apache::http::auth::InvalidCredentialsException::_class = java::fetch_class("org/apache/http/auth/InvalidCredentialsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::MalformedChallengeException::MalformedChallengeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::auth::MalformedChallengeException::_class) ::org::apache::http::auth::MalformedChallengeException::_class = java::fetch_class("org/apache/http/auth/MalformedChallengeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::MalformedChallengeException::MalformedChallengeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::auth::MalformedChallengeException::_class) ::org::apache::http::auth::MalformedChallengeException::_class = java::fetch_class("org/apache/http/auth/MalformedChallengeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::MalformedChallengeException::MalformedChallengeException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::auth::MalformedChallengeException::_class) ::org::apache::http::auth::MalformedChallengeException::_class = java::fetch_class("org/apache/http/auth/MalformedChallengeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthState::AuthState() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::auth::AuthState::invalidate() const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::auth::AuthState::isValid() const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::auth::AuthState::setAuthScheme(const ::org::apache::http::auth::AuthScheme& arg0) const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthScheme", "(Lorg/apache/http/auth/AuthScheme;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::auth::AuthScheme org::apache::http::auth::AuthState::getAuthScheme() const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthScheme", "()Lorg/apache/http/auth/AuthScheme;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::auth::AuthScheme _ret(ret);
    return _ret;
}

::org::apache::http::auth::Credentials org::apache::http::auth::AuthState::getCredentials() const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCredentials", "()Lorg/apache/http/auth/Credentials;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::auth::Credentials _ret(ret);
    return _ret;
}

void org::apache::http::auth::AuthState::setCredentials(const ::org::apache::http::auth::Credentials& arg0) const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCredentials", "(Lorg/apache/http/auth/Credentials;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::auth::AuthScope org::apache::http::auth::AuthState::getAuthScope() const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthScope", "()Lorg/apache/http/auth/AuthScope;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::auth::AuthScope _ret(ret);
    return _ret;
}

void org::apache::http::auth::AuthState::setAuthScope(const ::org::apache::http::auth::AuthScope& arg0) const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthScope", "(Lorg/apache/http/auth/AuthScope;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::AuthState::toString() const {
    if (!::org::apache::http::auth::AuthState::_class) ::org::apache::http::auth::AuthState::_class = java::fetch_class("org/apache/http/auth/AuthState");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthSchemeRegistry::AuthSchemeRegistry() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::auth::AuthSchemeRegistry::_class) ::org::apache::http::auth::AuthSchemeRegistry::_class = java::fetch_class("org/apache/http/auth/AuthSchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::auth::AuthSchemeRegistry::register_(const ::java::lang::String& arg0, const ::org::apache::http::auth::AuthSchemeFactory& arg1) const {
    if (!::org::apache::http::auth::AuthSchemeRegistry::_class) ::org::apache::http::auth::AuthSchemeRegistry::_class = java::fetch_class("org/apache/http/auth/AuthSchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/lang/String;Lorg/apache/http/auth/AuthSchemeFactory;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::auth::AuthSchemeRegistry::unregister(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::auth::AuthSchemeRegistry::_class) ::org::apache::http::auth::AuthSchemeRegistry::_class = java::fetch_class("org/apache/http/auth/AuthSchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::auth::AuthScheme org::apache::http::auth::AuthSchemeRegistry::getAuthScheme(const ::java::lang::String& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::auth::AuthSchemeRegistry::_class) ::org::apache::http::auth::AuthSchemeRegistry::_class = java::fetch_class("org/apache/http/auth/AuthSchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthScheme", "(Ljava/lang/String;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::auth::AuthScheme _ret(ret);
    return _ret;
}

::java::util::List org::apache::http::auth::AuthSchemeRegistry::getSchemeNames() const {
    if (!::org::apache::http::auth::AuthSchemeRegistry::_class) ::org::apache::http::auth::AuthSchemeRegistry::_class = java::fetch_class("org/apache/http/auth/AuthSchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeNames", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::auth::AuthSchemeRegistry::setItems(const ::java::util::Map& arg0) const {
    if (!::org::apache::http::auth::AuthSchemeRegistry::_class) ::org::apache::http::auth::AuthSchemeRegistry::_class = java::fetch_class("org/apache/http/auth/AuthSchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItems", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthScope::AuthScope(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthScope::AuthScope(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::auth::AuthScope::AuthScope(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::auth::AuthScope::getHost() const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::AuthScope::getPort() const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::apache::http::auth::AuthScope::getRealm() const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRealm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::auth::AuthScope::getScheme() const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScheme", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::AuthScope::match(const ::org::apache::http::auth::AuthScope& arg0) const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Lorg/apache/http/auth/AuthScope;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool org::apache::http::auth::AuthScope::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::auth::AuthScope::toString() const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::auth::AuthScope::hashCode() const {
    if (!::org::apache::http::auth::AuthScope::_class) ::org::apache::http::auth::AuthScope::_class = java::fetch_class("org/apache/http/auth/AuthScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}


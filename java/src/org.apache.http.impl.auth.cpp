#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.auth.AuthScheme.hpp"
#include "org.apache.http.auth.Credentials.hpp"
#include "org.apache.http.impl.auth.AuthSchemeBase.hpp"
#include "org.apache.http.impl.auth.BasicScheme.hpp"
#include "org.apache.http.impl.auth.BasicSchemeFactory.hpp"
#include "org.apache.http.impl.auth.DigestScheme.hpp"
#include "org.apache.http.impl.auth.DigestSchemeFactory.hpp"
#include "org.apache.http.impl.auth.NTLMEngine.hpp"
#include "org.apache.http.impl.auth.NTLMEngineException.hpp"
#include "org.apache.http.impl.auth.NTLMScheme.hpp"
#include "org.apache.http.impl.auth.RFC2617Scheme.hpp"
#include "org.apache.http.impl.auth.UnsupportedDigestAlgorithmException.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class = nullptr;
jclass org::apache::http::impl::auth::DigestSchemeFactory::_class = nullptr;
jclass org::apache::http::impl::auth::NTLMEngine::_class = nullptr;
jclass org::apache::http::impl::auth::NTLMEngineException::_class = nullptr;
jclass org::apache::http::impl::auth::NTLMScheme::_class = nullptr;
jclass org::apache::http::impl::auth::RFC2617Scheme::_class = nullptr;
jclass org::apache::http::impl::auth::BasicScheme::_class = nullptr;
jclass org::apache::http::impl::auth::BasicSchemeFactory::_class = nullptr;
jclass org::apache::http::impl::auth::AuthSchemeBase::_class = nullptr;
jclass org::apache::http::impl::auth::DigestScheme::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::UnsupportedDigestAlgorithmException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class) ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class = java::fetch_class("org/apache/http/impl/auth/UnsupportedDigestAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::UnsupportedDigestAlgorithmException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class) ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class = java::fetch_class("org/apache/http/impl/auth/UnsupportedDigestAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::UnsupportedDigestAlgorithmException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class) ::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException::_class = java::fetch_class("org/apache/http/impl/auth/UnsupportedDigestAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::DigestSchemeFactory::DigestSchemeFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthSchemeFactory((jobject)0) {
    if (!::org::apache::http::impl::auth::DigestSchemeFactory::_class) ::org::apache::http::impl::auth::DigestSchemeFactory::_class = java::fetch_class("org/apache/http/impl/auth/DigestSchemeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::auth::AuthScheme org::apache::http::impl::auth::DigestSchemeFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::auth::DigestSchemeFactory::_class) ::org::apache::http::impl::auth::DigestSchemeFactory::_class = java::fetch_class("org/apache/http/impl/auth/DigestSchemeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::auth::AuthScheme _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::auth::NTLMEngine::generateType1Msg(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::auth::NTLMEngine::_class) ::org::apache::http::impl::auth::NTLMEngine::_class = java::fetch_class("org/apache/http/impl/auth/NTLMEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateType1Msg", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::auth::NTLMEngine::generateType3Msg(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::org::apache::http::impl::auth::NTLMEngine::_class) ::org::apache::http::impl::auth::NTLMEngine::_class = java::fetch_class("org/apache/http/impl/auth/NTLMEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateType3Msg", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::NTLMEngineException::NTLMEngineException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {
    if (!::org::apache::http::impl::auth::NTLMEngineException::_class) ::org::apache::http::impl::auth::NTLMEngineException::_class = java::fetch_class("org/apache/http/impl/auth/NTLMEngineException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::NTLMEngineException::NTLMEngineException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {
    if (!::org::apache::http::impl::auth::NTLMEngineException::_class) ::org::apache::http::impl::auth::NTLMEngineException::_class = java::fetch_class("org/apache/http/impl/auth/NTLMEngineException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::NTLMEngineException::NTLMEngineException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {
    if (!::org::apache::http::impl::auth::NTLMEngineException::_class) ::org::apache::http::impl::auth::NTLMEngineException::_class = java::fetch_class("org/apache/http/impl/auth/NTLMEngineException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::NTLMScheme::NTLMScheme(const ::org::apache::http::impl::auth::NTLMEngine& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0) {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/impl/auth/NTLMEngine;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::impl::auth::NTLMScheme::getSchemeName() const {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::auth::NTLMScheme::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::auth::NTLMScheme::getRealm() const {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRealm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::impl::auth::NTLMScheme::isConnectionBased() const {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectionBased", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::auth::NTLMScheme::authenticate(const ::org::apache::http::auth::Credentials& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "authenticate", "(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

bool org::apache::http::impl::auth::NTLMScheme::isComplete() const {
    if (!::org::apache::http::impl::auth::NTLMScheme::_class) ::org::apache::http::impl::auth::NTLMScheme::_class = java::fetch_class("org/apache/http/impl/auth/NTLMScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComplete", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::RFC2617Scheme::RFC2617Scheme() : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0) {
    if (!::org::apache::http::impl::auth::RFC2617Scheme::_class) ::org::apache::http::impl::auth::RFC2617Scheme::_class = java::fetch_class("org/apache/http/impl/auth/RFC2617Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::impl::auth::RFC2617Scheme::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::auth::RFC2617Scheme::_class) ::org::apache::http::impl::auth::RFC2617Scheme::_class = java::fetch_class("org/apache/http/impl/auth/RFC2617Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::auth::RFC2617Scheme::getRealm() const {
    if (!::org::apache::http::impl::auth::RFC2617Scheme::_class) ::org::apache::http::impl::auth::RFC2617Scheme::_class = java::fetch_class("org/apache/http/impl/auth/RFC2617Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRealm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::BasicScheme::BasicScheme() : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0), ::org::apache::http::impl::auth::RFC2617Scheme((jobject)0) {
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::impl::auth::BasicScheme::getSchemeName() const {
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::auth::BasicScheme::processChallenge(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "processChallenge", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::auth::BasicScheme::isComplete() const {
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComplete", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::impl::auth::BasicScheme::isConnectionBased() const {
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectionBased", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::impl::auth::BasicScheme::authenticate(const ::org::apache::http::auth::Credentials& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "authenticate", "(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::impl::auth::BasicScheme::authenticate(const ::org::apache::http::auth::Credentials& arg0, const ::java::lang::String& arg1, bool arg2){
    if (!::org::apache::http::impl::auth::BasicScheme::_class) ::org::apache::http::impl::auth::BasicScheme::_class = java::fetch_class("org/apache/http/impl/auth/BasicScheme");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "authenticate", "(Lorg/apache/http/auth/Credentials;Ljava/lang/String;Z)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::BasicSchemeFactory::BasicSchemeFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthSchemeFactory((jobject)0) {
    if (!::org::apache::http::impl::auth::BasicSchemeFactory::_class) ::org::apache::http::impl::auth::BasicSchemeFactory::_class = java::fetch_class("org/apache/http/impl/auth/BasicSchemeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::auth::AuthScheme org::apache::http::impl::auth::BasicSchemeFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::auth::BasicSchemeFactory::_class) ::org::apache::http::impl::auth::BasicSchemeFactory::_class = java::fetch_class("org/apache/http/impl/auth/BasicSchemeFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::auth::AuthScheme _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::AuthSchemeBase::AuthSchemeBase() : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0) {
    if (!::org::apache::http::impl::auth::AuthSchemeBase::_class) ::org::apache::http::impl::auth::AuthSchemeBase::_class = java::fetch_class("org/apache/http/impl/auth/AuthSchemeBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::auth::AuthSchemeBase::processChallenge(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::impl::auth::AuthSchemeBase::_class) ::org::apache::http::impl::auth::AuthSchemeBase::_class = java::fetch_class("org/apache/http/impl/auth/AuthSchemeBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "processChallenge", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::auth::AuthSchemeBase::isProxy() const {
    if (!::org::apache::http::impl::auth::AuthSchemeBase::_class) ::org::apache::http::impl::auth::AuthSchemeBase::_class = java::fetch_class("org/apache/http/impl/auth/AuthSchemeBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isProxy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::auth::DigestScheme::DigestScheme() : ::java::lang::Object((jobject)0), ::org::apache::http::auth::AuthScheme((jobject)0), ::org::apache::http::impl::auth::AuthSchemeBase((jobject)0), ::org::apache::http::impl::auth::RFC2617Scheme((jobject)0) {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::auth::DigestScheme::processChallenge(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "processChallenge", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::auth::DigestScheme::isComplete() const {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComplete", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::impl::auth::DigestScheme::getSchemeName() const {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::impl::auth::DigestScheme::isConnectionBased() const {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectionBased", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::impl::auth::DigestScheme::overrideParamter(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "overrideParamter", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::Header org::apache::http::impl::auth::DigestScheme::authenticate(const ::org::apache::http::auth::Credentials& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "authenticate", "(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::auth::DigestScheme::createCnonce(){
    if (!::org::apache::http::impl::auth::DigestScheme::_class) ::org::apache::http::impl::auth::DigestScheme::_class = java::fetch_class("org/apache/http/impl/auth/DigestScheme");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createCnonce", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}


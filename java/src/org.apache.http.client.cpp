#include "java-core.hpp"
#include <memory>
#include "java.io.IOException.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.URI.hpp"
#include "java.util.Date.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.auth.AuthScheme.hpp"
#include "org.apache.http.auth.AuthScope.hpp"
#include "org.apache.http.auth.Credentials.hpp"
#include "org.apache.http.client.AuthenticationHandler.hpp"
#include "org.apache.http.client.CircularRedirectException.hpp"
#include "org.apache.http.client.ClientProtocolException.hpp"
#include "org.apache.http.client.CookieStore.hpp"
#include "org.apache.http.client.CredentialsProvider.hpp"
#include "org.apache.http.client.HttpClient.hpp"
#include "org.apache.http.client.HttpRequestRetryHandler.hpp"
#include "org.apache.http.client.HttpResponseException.hpp"
#include "org.apache.http.client.NonRepeatableRequestException.hpp"
#include "org.apache.http.client.RedirectException.hpp"
#include "org.apache.http.client.RedirectHandler.hpp"
#include "org.apache.http.client.RequestDirector.hpp"
#include "org.apache.http.client.ResponseHandler.hpp"
#include "org.apache.http.client.UserTokenHandler.hpp"
#include "org.apache.http.client.methods.HttpUriRequest.hpp"
#include "org.apache.http.conn.ClientConnectionManager.hpp"
#include "org.apache.http.cookie.Cookie.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

jclass org::apache::http::client::HttpRequestRetryHandler::_class = nullptr;
jclass org::apache::http::client::AuthenticationHandler::_class = nullptr;
jclass org::apache::http::client::NonRepeatableRequestException::_class = nullptr;
jclass org::apache::http::client::RedirectHandler::_class = nullptr;
jclass org::apache::http::client::RedirectException::_class = nullptr;
jclass org::apache::http::client::CredentialsProvider::_class = nullptr;
jclass org::apache::http::client::CookieStore::_class = nullptr;
jclass org::apache::http::client::ResponseHandler::_class = nullptr;
jclass org::apache::http::client::HttpResponseException::_class = nullptr;
jclass org::apache::http::client::ClientProtocolException::_class = nullptr;
jclass org::apache::http::client::RequestDirector::_class = nullptr;
jclass org::apache::http::client::UserTokenHandler::_class = nullptr;
jclass org::apache::http::client::CircularRedirectException::_class = nullptr;
jclass org::apache::http::client::HttpClient::_class = nullptr;

bool org::apache::http::client::HttpRequestRetryHandler::retryRequest(const ::java::io::IOException& arg0, int32_t arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::client::HttpRequestRetryHandler::_class) ::org::apache::http::client::HttpRequestRetryHandler::_class = java::fetch_class("org/apache/http/client/HttpRequestRetryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "retryRequest", "(Ljava/io/IOException;ILorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool org::apache::http::client::AuthenticationHandler::isAuthenticationRequested(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::AuthenticationHandler::_class) ::org::apache::http::client::AuthenticationHandler::_class = java::fetch_class("org/apache/http/client/AuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAuthenticationRequested", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::Map org::apache::http::client::AuthenticationHandler::getChallenges(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::AuthenticationHandler::_class) ::org::apache::http::client::AuthenticationHandler::_class = java::fetch_class("org/apache/http/client/AuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChallenges", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Map _ret(ret);
    return _ret;
}

::org::apache::http::auth::AuthScheme org::apache::http::client::AuthenticationHandler::selectScheme(const ::java::util::Map& arg0, const ::org::apache::http::HttpResponse& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::client::AuthenticationHandler::_class) ::org::apache::http::client::AuthenticationHandler::_class = java::fetch_class("org/apache/http/client/AuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "selectScheme", "(Ljava/util/Map;Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/auth/AuthScheme;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::auth::AuthScheme _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::NonRepeatableRequestException::NonRepeatableRequestException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::client::NonRepeatableRequestException::_class) ::org::apache::http::client::NonRepeatableRequestException::_class = java::fetch_class("org/apache/http/client/NonRepeatableRequestException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::NonRepeatableRequestException::NonRepeatableRequestException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::client::NonRepeatableRequestException::_class) ::org::apache::http::client::NonRepeatableRequestException::_class = java::fetch_class("org/apache/http/client/NonRepeatableRequestException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::client::RedirectHandler::isRedirectRequested(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::RedirectHandler::_class) ::org::apache::http::client::RedirectHandler::_class = java::fetch_class("org/apache/http/client/RedirectHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRedirectRequested", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::net::URI org::apache::http::client::RedirectHandler::getLocationURI(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::RedirectHandler::_class) ::org::apache::http::client::RedirectHandler::_class = java::fetch_class("org/apache/http/client/RedirectHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocationURI", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::URI _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::RedirectException::RedirectException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::client::RedirectException::_class) ::org::apache::http::client::RedirectException::_class = java::fetch_class("org/apache/http/client/RedirectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::RedirectException::RedirectException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::client::RedirectException::_class) ::org::apache::http::client::RedirectException::_class = java::fetch_class("org/apache/http/client/RedirectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::RedirectException::RedirectException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::client::RedirectException::_class) ::org::apache::http::client::RedirectException::_class = java::fetch_class("org/apache/http/client/RedirectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void org::apache::http::client::CredentialsProvider::setCredentials(const ::org::apache::http::auth::AuthScope& arg0, const ::org::apache::http::auth::Credentials& arg1) const {
    if (!::org::apache::http::client::CredentialsProvider::_class) ::org::apache::http::client::CredentialsProvider::_class = java::fetch_class("org/apache/http/client/CredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCredentials", "(Lorg/apache/http/auth/AuthScope;Lorg/apache/http/auth/Credentials;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::auth::Credentials org::apache::http::client::CredentialsProvider::getCredentials(const ::org::apache::http::auth::AuthScope& arg0) const {
    if (!::org::apache::http::client::CredentialsProvider::_class) ::org::apache::http::client::CredentialsProvider::_class = java::fetch_class("org/apache/http/client/CredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCredentials", "(Lorg/apache/http/auth/AuthScope;)Lorg/apache/http/auth/Credentials;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::auth::Credentials _ret(ret);
    return _ret;
}

void org::apache::http::client::CredentialsProvider::clear() const {
    if (!::org::apache::http::client::CredentialsProvider::_class) ::org::apache::http::client::CredentialsProvider::_class = java::fetch_class("org/apache/http/client/CredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::client::CookieStore::addCookie(const ::org::apache::http::cookie::Cookie& arg0) const {
    if (!::org::apache::http::client::CookieStore::_class) ::org::apache::http::client::CookieStore::_class = java::fetch_class("org/apache/http/client/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCookie", "(Lorg/apache/http/cookie/Cookie;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List org::apache::http::client::CookieStore::getCookies() const {
    if (!::org::apache::http::client::CookieStore::_class) ::org::apache::http::client::CookieStore::_class = java::fetch_class("org/apache/http/client/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookies", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool org::apache::http::client::CookieStore::clearExpired(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::client::CookieStore::_class) ::org::apache::http::client::CookieStore::_class = java::fetch_class("org/apache/http/client/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearExpired", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::client::CookieStore::clear() const {
    if (!::org::apache::http::client::CookieStore::_class) ::org::apache::http::client::CookieStore::_class = java::fetch_class("org/apache/http/client/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object org::apache::http::client::ResponseHandler::handleResponse(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::client::ResponseHandler::_class) ::org::apache::http::client::ResponseHandler::_class = java::fetch_class("org/apache/http/client/ResponseHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleResponse", "(Lorg/apache/http/HttpResponse;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::HttpResponseException::HttpResponseException(int32_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::client::ClientProtocolException((jobject)0) {
    if (!::org::apache::http::client::HttpResponseException::_class) ::org::apache::http::client::HttpResponseException::_class = java::fetch_class("org/apache/http/client/HttpResponseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::client::HttpResponseException::getStatusCode() const {
    if (!::org::apache::http::client::HttpResponseException::_class) ::org::apache::http::client::HttpResponseException::_class = java::fetch_class("org/apache/http/client/HttpResponseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::ClientProtocolException::ClientProtocolException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::client::ClientProtocolException::_class) ::org::apache::http::client::ClientProtocolException::_class = java::fetch_class("org/apache/http/client/ClientProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::ClientProtocolException::ClientProtocolException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::client::ClientProtocolException::_class) ::org::apache::http::client::ClientProtocolException::_class = java::fetch_class("org/apache/http/client/ClientProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::ClientProtocolException::ClientProtocolException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::client::ClientProtocolException::_class) ::org::apache::http::client::ClientProtocolException::_class = java::fetch_class("org/apache/http/client/ClientProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::ClientProtocolException::ClientProtocolException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::client::ClientProtocolException::_class) ::org::apache::http::client::ClientProtocolException::_class = java::fetch_class("org/apache/http/client/ClientProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpResponse org::apache::http::client::RequestDirector::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::client::RequestDirector::_class) ::org::apache::http::client::RequestDirector::_class = java::fetch_class("org/apache/http/client/RequestDirector");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::client::UserTokenHandler::getUserToken(const ::org::apache::http::protocol::HttpContext& arg0) const {
    if (!::org::apache::http::client::UserTokenHandler::_class) ::org::apache::http::client::UserTokenHandler::_class = java::fetch_class("org/apache/http/client/UserTokenHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserToken", "(Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::CircularRedirectException::CircularRedirectException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::client::RedirectException((jobject)0) {
    if (!::org::apache::http::client::CircularRedirectException::_class) ::org::apache::http::client::CircularRedirectException::_class = java::fetch_class("org/apache/http/client/CircularRedirectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::CircularRedirectException::CircularRedirectException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::client::RedirectException((jobject)0) {
    if (!::org::apache::http::client::CircularRedirectException::_class) ::org::apache::http::client::CircularRedirectException::_class = java::fetch_class("org/apache/http/client/CircularRedirectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::CircularRedirectException::CircularRedirectException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::client::RedirectException((jobject)0) {
    if (!::org::apache::http::client::CircularRedirectException::_class) ::org::apache::http::client::CircularRedirectException::_class = java::fetch_class("org/apache/http/client/CircularRedirectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::params::HttpParams org::apache::http::client::HttpClient::getParams() const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::conn::ClientConnectionManager org::apache::http::client::HttpClient::getConnectionManager() const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionManager", "()Lorg/apache/http/conn/ClientConnectionManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::ClientConnectionManager _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::client::HttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::client::HttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::client::HttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::client::HttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::client::HttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::client::ResponseHandler& arg1) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::client::HttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::client::ResponseHandler& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::client::HttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::client::ResponseHandler& arg2) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::client::HttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::client::ResponseHandler& arg2, const ::org::apache::http::protocol::HttpContext& arg3) const {
    if (!::org::apache::http::client::HttpClient::_class) ::org::apache::http::client::HttpClient::_class = java::fetch_class("org/apache/http/client/HttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}


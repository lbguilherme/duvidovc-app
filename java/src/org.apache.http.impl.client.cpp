#include "java-core.hpp"
#include <memory>
#include "java.io.IOException.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.URI.hpp"
#include "java.util.Date.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.ConnectionReuseStrategy.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpRequestInterceptor.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.HttpResponseInterceptor.hpp"
#include "org.apache.http.ProtocolVersion.hpp"
#include "org.apache.http.RequestLine.hpp"
#include "org.apache.http.auth.AuthScheme.hpp"
#include "org.apache.http.auth.AuthSchemeRegistry.hpp"
#include "org.apache.http.auth.AuthScope.hpp"
#include "org.apache.http.auth.Credentials.hpp"
#include "org.apache.http.client.AuthenticationHandler.hpp"
#include "org.apache.http.client.CookieStore.hpp"
#include "org.apache.http.client.CredentialsProvider.hpp"
#include "org.apache.http.client.HttpRequestRetryHandler.hpp"
#include "org.apache.http.client.RedirectHandler.hpp"
#include "org.apache.http.client.ResponseHandler.hpp"
#include "org.apache.http.client.UserTokenHandler.hpp"
#include "org.apache.http.client.methods.HttpUriRequest.hpp"
#include "org.apache.http.conn.ClientConnectionManager.hpp"
#include "org.apache.http.conn.ConnectionKeepAliveStrategy.hpp"
#include "org.apache.http.conn.routing.HttpRoute.hpp"
#include "org.apache.http.conn.routing.HttpRoutePlanner.hpp"
#include "org.apache.http.cookie.Cookie.hpp"
#include "org.apache.http.cookie.CookieSpecRegistry.hpp"
#include "org.apache.http.impl.client.AbstractAuthenticationHandler.hpp"
#include "org.apache.http.impl.client.AbstractHttpClient.hpp"
#include "org.apache.http.impl.client.BasicCookieStore.hpp"
#include "org.apache.http.impl.client.BasicCredentialsProvider.hpp"
#include "org.apache.http.impl.client.BasicResponseHandler.hpp"
#include "org.apache.http.impl.client.ClientParamsStack.hpp"
#include "org.apache.http.impl.client.DefaultConnectionKeepAliveStrategy.hpp"
#include "org.apache.http.impl.client.DefaultHttpClient.hpp"
#include "org.apache.http.impl.client.DefaultHttpRequestRetryHandler.hpp"
#include "org.apache.http.impl.client.DefaultProxyAuthenticationHandler.hpp"
#include "org.apache.http.impl.client.DefaultRedirectHandler.hpp"
#include "org.apache.http.impl.client.DefaultRequestDirector.hpp"
#include "org.apache.http.impl.client.DefaultTargetAuthenticationHandler.hpp"
#include "org.apache.http.impl.client.DefaultUserTokenHandler.hpp"
#include "org.apache.http.impl.client.EntityEnclosingRequestWrapper.hpp"
#include "org.apache.http.impl.client.RedirectLocations.hpp"
#include "org.apache.http.impl.client.RequestWrapper.hpp"
#include "org.apache.http.impl.client.RoutedRequest.hpp"
#include "org.apache.http.impl.client.TunnelRefusedException.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"
#include "org.apache.http.protocol.HttpProcessor.hpp"
#include "org.apache.http.protocol.HttpRequestExecutor.hpp"

jclass org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class = nullptr;
jclass org::apache::http::impl::client::DefaultUserTokenHandler::_class = nullptr;
jclass org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class = nullptr;
jclass org::apache::http::impl::client::DefaultHttpClient::_class = nullptr;
jclass org::apache::http::impl::client::RoutedRequest::_class = nullptr;
jclass org::apache::http::impl::client::TunnelRefusedException::_class = nullptr;
jclass org::apache::http::impl::client::AbstractAuthenticationHandler::_class = nullptr;
jclass org::apache::http::impl::client::DefaultRequestDirector::_class = nullptr;
jclass org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::_class = nullptr;
jclass org::apache::http::impl::client::DefaultRedirectHandler::_class = nullptr;
jclass org::apache::http::impl::client::BasicResponseHandler::_class = nullptr;
jclass org::apache::http::impl::client::BasicCookieStore::_class = nullptr;
jclass org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class = nullptr;
jclass org::apache::http::impl::client::RedirectLocations::_class = nullptr;
jclass org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class = nullptr;
jclass org::apache::http::impl::client::ClientParamsStack::_class = nullptr;
jclass org::apache::http::impl::client::BasicCredentialsProvider::_class = nullptr;
jclass org::apache::http::impl::client::AbstractHttpClient::_class = nullptr;
jclass org::apache::http::impl::client::RequestWrapper::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::EntityEnclosingRequestWrapper::EntityEnclosingRequestWrapper(const ::org::apache::http::HttpEntityEnclosingRequest& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::impl::client::RequestWrapper((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class) ::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/EntityEnclosingRequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpEntityEnclosingRequest;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpEntity org::apache::http::impl::client::EntityEnclosingRequestWrapper::getEntity() const {
    if (!::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class) ::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/EntityEnclosingRequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntity", "()Lorg/apache/http/HttpEntity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::EntityEnclosingRequestWrapper::setEntity(const ::org::apache::http::HttpEntity& arg0) const {
    if (!::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class) ::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/EntityEnclosingRequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntity", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::client::EntityEnclosingRequestWrapper::expectContinue() const {
    if (!::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class) ::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/EntityEnclosingRequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "expectContinue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::impl::client::EntityEnclosingRequestWrapper::isRepeatable() const {
    if (!::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class) ::org::apache::http::impl::client::EntityEnclosingRequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/EntityEnclosingRequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultUserTokenHandler::DefaultUserTokenHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::UserTokenHandler((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultUserTokenHandler::_class) ::org::apache::http::impl::client::DefaultUserTokenHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultUserTokenHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object org::apache::http::impl::client::DefaultUserTokenHandler::getUserToken(const ::org::apache::http::protocol::HttpContext& arg0) const {
    if (!::org::apache::http::impl::client::DefaultUserTokenHandler::_class) ::org::apache::http::impl::client::DefaultUserTokenHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultUserTokenHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserToken", "(Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::DefaultTargetAuthenticationHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0), ::org::apache::http::impl::client::AbstractAuthenticationHandler((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class) ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultTargetAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::client::DefaultTargetAuthenticationHandler::isAuthenticationRequested(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class) ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultTargetAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAuthenticationRequested", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::Map org::apache::http::impl::client::DefaultTargetAuthenticationHandler::getChallenges(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class) ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultTargetAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChallenges", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Map _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultHttpClient::DefaultHttpClient(const ::org::apache::http::conn::ClientConnectionManager& arg0, const ::org::apache::http::params::HttpParams& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0), ::org::apache::http::impl::client::AbstractHttpClient((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultHttpClient::_class) ::org::apache::http::impl::client::DefaultHttpClient::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/ClientConnectionManager;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultHttpClient::DefaultHttpClient(const ::org::apache::http::params::HttpParams& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0), ::org::apache::http::impl::client::AbstractHttpClient((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultHttpClient::_class) ::org::apache::http::impl::client::DefaultHttpClient::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultHttpClient::DefaultHttpClient() : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpClient((jobject)0), ::org::apache::http::impl::client::AbstractHttpClient((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultHttpClient::_class) ::org::apache::http::impl::client::DefaultHttpClient::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::RoutedRequest::RoutedRequest(const ::org::apache::http::impl::client::RequestWrapper& arg0, const ::org::apache::http::conn::routing::HttpRoute& arg1) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::client::RoutedRequest::_class) ::org::apache::http::impl::client::RoutedRequest::_class = java::fetch_class("org/apache/http/impl/client/RoutedRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/impl/client/RequestWrapper;Lorg/apache/http/conn/routing/HttpRoute;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::impl::client::RequestWrapper org::apache::http::impl::client::RoutedRequest::getRequest() const {
    if (!::org::apache::http::impl::client::RoutedRequest::_class) ::org::apache::http::impl::client::RoutedRequest::_class = java::fetch_class("org/apache/http/impl/client/RoutedRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequest", "()Lorg/apache/http/impl/client/RequestWrapper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::impl::client::RequestWrapper _ret(ret);
    return _ret;
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::impl::client::RoutedRequest::getRoute() const {
    if (!::org::apache::http::impl::client::RoutedRequest::_class) ::org::apache::http::impl::client::RoutedRequest::_class = java::fetch_class("org/apache/http/impl/client/RoutedRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoute", "()Lorg/apache/http/conn/routing/HttpRoute;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::TunnelRefusedException::TunnelRefusedException(const ::java::lang::String& arg0, const ::org::apache::http::HttpResponse& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {
    if (!::org::apache::http::impl::client::TunnelRefusedException::_class) ::org::apache::http::impl::client::TunnelRefusedException::_class = java::fetch_class("org/apache/http/impl/client/TunnelRefusedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpResponse org::apache::http::impl::client::TunnelRefusedException::getResponse() const {
    if (!::org::apache::http::impl::client::TunnelRefusedException::_class) ::org::apache::http::impl::client::TunnelRefusedException::_class = java::fetch_class("org/apache/http/impl/client/TunnelRefusedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponse", "()Lorg/apache/http/HttpResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::AbstractAuthenticationHandler::AbstractAuthenticationHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0) {
    if (!::org::apache::http::impl::client::AbstractAuthenticationHandler::_class) ::org::apache::http::impl::client::AbstractAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/AbstractAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::auth::AuthScheme org::apache::http::impl::client::AbstractAuthenticationHandler::selectScheme(const ::java::util::Map& arg0, const ::org::apache::http::HttpResponse& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::client::AbstractAuthenticationHandler::_class) ::org::apache::http::impl::client::AbstractAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/AbstractAuthenticationHandler");
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
::org::apache::http::impl::client::DefaultRequestDirector::DefaultRequestDirector(const ::org::apache::http::protocol::HttpRequestExecutor& arg0, const ::org::apache::http::conn::ClientConnectionManager& arg1, const ::org::apache::http::ConnectionReuseStrategy& arg2, const ::org::apache::http::conn::ConnectionKeepAliveStrategy& arg3, const ::org::apache::http::conn::routing::HttpRoutePlanner& arg4, const ::org::apache::http::protocol::HttpProcessor& arg5, const ::org::apache::http::client::HttpRequestRetryHandler& arg6, const ::org::apache::http::client::RedirectHandler& arg7, const ::org::apache::http::client::AuthenticationHandler& arg8, const ::org::apache::http::client::AuthenticationHandler& arg9, const ::org::apache::http::client::UserTokenHandler& arg10, const ::org::apache::http::params::HttpParams& arg11) : ::java::lang::Object((jobject)0), ::org::apache::http::client::RequestDirector((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultRequestDirector::_class) ::org::apache::http::impl::client::DefaultRequestDirector::_class = java::fetch_class("org/apache/http/impl/client/DefaultRequestDirector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/protocol/HttpRequestExecutor;Lorg/apache/http/conn/ClientConnectionManager;Lorg/apache/http/ConnectionReuseStrategy;Lorg/apache/http/conn/ConnectionKeepAliveStrategy;Lorg/apache/http/conn/routing/HttpRoutePlanner;Lorg/apache/http/protocol/HttpProcessor;Lorg/apache/http/client/HttpRequestRetryHandler;Lorg/apache/http/client/RedirectHandler;Lorg/apache/http/client/AuthenticationHandler;Lorg/apache/http/client/AuthenticationHandler;Lorg/apache/http/client/UserTokenHandler;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject _arg8 = arg8.obj;
    jobject _arg9 = arg9.obj;
    jobject _arg10 = arg10.obj;
    jobject _arg11 = arg11.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpResponse org::apache::http::impl::client::DefaultRequestDirector::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::client::DefaultRequestDirector::_class) ::org::apache::http::impl::client::DefaultRequestDirector::_class = java::fetch_class("org/apache/http/impl/client/DefaultRequestDirector");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::DefaultConnectionKeepAliveStrategy() : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ConnectionKeepAliveStrategy((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::_class) ::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::_class = java::fetch_class("org/apache/http/impl/client/DefaultConnectionKeepAliveStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::getKeepAliveDuration(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::_class) ::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy::_class = java::fetch_class("org/apache/http/impl/client/DefaultConnectionKeepAliveStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeepAliveDuration", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultRedirectHandler::DefaultRedirectHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::RedirectHandler((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultRedirectHandler::_class) ::org::apache::http::impl::client::DefaultRedirectHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultRedirectHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::client::DefaultRedirectHandler::isRedirectRequested(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultRedirectHandler::_class) ::org::apache::http::impl::client::DefaultRedirectHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultRedirectHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRedirectRequested", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::net::URI org::apache::http::impl::client::DefaultRedirectHandler::getLocationURI(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultRedirectHandler::_class) ::org::apache::http::impl::client::DefaultRedirectHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultRedirectHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocationURI", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::URI _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::BasicResponseHandler::BasicResponseHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::ResponseHandler((jobject)0) {
    if (!::org::apache::http::impl::client::BasicResponseHandler::_class) ::org::apache::http::impl::client::BasicResponseHandler::_class = java::fetch_class("org/apache/http/impl/client/BasicResponseHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::impl::client::BasicResponseHandler::handleResponse(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::impl::client::BasicResponseHandler::_class) ::org::apache::http::impl::client::BasicResponseHandler::_class = java::fetch_class("org/apache/http/impl/client/BasicResponseHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleResponse", "(Lorg/apache/http/HttpResponse;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::BasicCookieStore::BasicCookieStore() : ::java::lang::Object((jobject)0), ::org::apache::http::client::CookieStore((jobject)0) {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::client::BasicCookieStore::addCookie(const ::org::apache::http::cookie::Cookie& arg0) const {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCookie", "(Lorg/apache/http/cookie/Cookie;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::client::BasicCookieStore::addCookies(const std::vector< ::org::apache::http::cookie::Cookie>& arg0) const {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCookies", "([Lorg/apache/http/cookie/Cookie;)V");
    unsigned arg0s = arg0.size();
    if (!::org::apache::http::cookie::Cookie::_class) ::org::apache::http::cookie::Cookie::_class = java::fetch_class("org/apache/http/cookie/Cookie");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::org::apache::http::cookie::Cookie::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::org::apache::http::cookie::Cookie& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List org::apache::http::impl::client::BasicCookieStore::getCookies() const {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookies", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool org::apache::http::impl::client::BasicCookieStore::clearExpired(const ::java::util::Date& arg0) const {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearExpired", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::client::BasicCookieStore::toString() const {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::BasicCookieStore::clear() const {
    if (!::org::apache::http::impl::client::BasicCookieStore::_class) ::org::apache::http::impl::client::BasicCookieStore::_class = java::fetch_class("org/apache/http/impl/client/BasicCookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::DefaultProxyAuthenticationHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0), ::org::apache::http::impl::client::AbstractAuthenticationHandler((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class) ::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultProxyAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::client::DefaultProxyAuthenticationHandler::isAuthenticationRequested(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class) ::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultProxyAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAuthenticationRequested", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::Map org::apache::http::impl::client::DefaultProxyAuthenticationHandler::getChallenges(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class) ::org::apache::http::impl::client::DefaultProxyAuthenticationHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultProxyAuthenticationHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChallenges", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Map _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::RedirectLocations::RedirectLocations() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::client::RedirectLocations::_class) ::org::apache::http::impl::client::RedirectLocations::_class = java::fetch_class("org/apache/http/impl/client/RedirectLocations");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::client::RedirectLocations::contains(const ::java::net::URI& arg0) const {
    if (!::org::apache::http::impl::client::RedirectLocations::_class) ::org::apache::http::impl::client::RedirectLocations::_class = java::fetch_class("org/apache/http/impl/client/RedirectLocations");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/net/URI;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::client::RedirectLocations::add(const ::java::net::URI& arg0) const {
    if (!::org::apache::http::impl::client::RedirectLocations::_class) ::org::apache::http::impl::client::RedirectLocations::_class = java::fetch_class("org/apache/http/impl/client/RedirectLocations");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::client::RedirectLocations::remove(const ::java::net::URI& arg0) const {
    if (!::org::apache::http::impl::client::RedirectLocations::_class) ::org::apache::http::impl::client::RedirectLocations::_class = java::fetch_class("org/apache/http/impl/client/RedirectLocations");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/net/URI;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::DefaultHttpRequestRetryHandler(int32_t arg0, bool arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpRequestRetryHandler((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class) ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpRequestRetryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::DefaultHttpRequestRetryHandler() : ::java::lang::Object((jobject)0), ::org::apache::http::client::HttpRequestRetryHandler((jobject)0) {
    if (!::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class) ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpRequestRetryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::client::DefaultHttpRequestRetryHandler::retryRequest(const ::java::io::IOException& arg0, int32_t arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class) ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpRequestRetryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "retryRequest", "(Ljava/io/IOException;ILorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool org::apache::http::impl::client::DefaultHttpRequestRetryHandler::isRequestSentRetryEnabled() const {
    if (!::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class) ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpRequestRetryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRequestSentRetryEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::impl::client::DefaultHttpRequestRetryHandler::getRetryCount() const {
    if (!::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class) ::org::apache::http::impl::client::DefaultHttpRequestRetryHandler::_class = java::fetch_class("org/apache/http/impl/client/DefaultHttpRequestRetryHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRetryCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::ClientParamsStack::ClientParamsStack(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::params::HttpParams& arg1, const ::org::apache::http::params::HttpParams& arg2, const ::org::apache::http::params::HttpParams& arg3) : ::java::lang::Object((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::ClientParamsStack::ClientParamsStack(const ::org::apache::http::impl::client::ClientParamsStack& arg0, const ::org::apache::http::params::HttpParams& arg1, const ::org::apache::http::params::HttpParams& arg2, const ::org::apache::http::params::HttpParams& arg3, const ::org::apache::http::params::HttpParams& arg4) : ::java::lang::Object((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/impl/client/ClientParamsStack;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

::org::apache::http::params::HttpParams org::apache::http::impl::client::ClientParamsStack::getApplicationParams() const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::impl::client::ClientParamsStack::getClientParams() const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::impl::client::ClientParamsStack::getRequestParams() const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::impl::client::ClientParamsStack::getOverrideParams() const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverrideParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::impl::client::ClientParamsStack::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::impl::client::ClientParamsStack::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

bool org::apache::http::impl::client::ClientParamsStack::removeParameter(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeParameter", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::apache::http::params::HttpParams org::apache::http::impl::client::ClientParamsStack::copy() const {
    if (!::org::apache::http::impl::client::ClientParamsStack::_class) ::org::apache::http::impl::client::ClientParamsStack::_class = java::fetch_class("org/apache/http/impl/client/ClientParamsStack");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::BasicCredentialsProvider::BasicCredentialsProvider() : ::java::lang::Object((jobject)0), ::org::apache::http::client::CredentialsProvider((jobject)0) {
    if (!::org::apache::http::impl::client::BasicCredentialsProvider::_class) ::org::apache::http::impl::client::BasicCredentialsProvider::_class = java::fetch_class("org/apache/http/impl/client/BasicCredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::client::BasicCredentialsProvider::setCredentials(const ::org::apache::http::auth::AuthScope& arg0, const ::org::apache::http::auth::Credentials& arg1) const {
    if (!::org::apache::http::impl::client::BasicCredentialsProvider::_class) ::org::apache::http::impl::client::BasicCredentialsProvider::_class = java::fetch_class("org/apache/http/impl/client/BasicCredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCredentials", "(Lorg/apache/http/auth/AuthScope;Lorg/apache/http/auth/Credentials;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::auth::Credentials org::apache::http::impl::client::BasicCredentialsProvider::getCredentials(const ::org::apache::http::auth::AuthScope& arg0) const {
    if (!::org::apache::http::impl::client::BasicCredentialsProvider::_class) ::org::apache::http::impl::client::BasicCredentialsProvider::_class = java::fetch_class("org/apache/http/impl/client/BasicCredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCredentials", "(Lorg/apache/http/auth/AuthScope;)Lorg/apache/http/auth/Credentials;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::auth::Credentials _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::impl::client::BasicCredentialsProvider::toString() const {
    if (!::org::apache::http::impl::client::BasicCredentialsProvider::_class) ::org::apache::http::impl::client::BasicCredentialsProvider::_class = java::fetch_class("org/apache/http/impl/client/BasicCredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::BasicCredentialsProvider::clear() const {
    if (!::org::apache::http::impl::client::BasicCredentialsProvider::_class) ::org::apache::http::impl::client::BasicCredentialsProvider::_class = java::fetch_class("org/apache/http/impl/client/BasicCredentialsProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::params::HttpParams org::apache::http::impl::client::AbstractHttpClient::getParams() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setParams(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParams", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::conn::ClientConnectionManager org::apache::http::impl::client::AbstractHttpClient::getConnectionManager() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionManager", "()Lorg/apache/http/conn/ClientConnectionManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::ClientConnectionManager _ret(ret);
    return _ret;
}

::org::apache::http::protocol::HttpRequestExecutor org::apache::http::impl::client::AbstractHttpClient::getRequestExecutor() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestExecutor", "()Lorg/apache/http/protocol/HttpRequestExecutor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::protocol::HttpRequestExecutor _ret(ret);
    return _ret;
}

::org::apache::http::auth::AuthSchemeRegistry org::apache::http::impl::client::AbstractHttpClient::getAuthSchemes() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthSchemes", "()Lorg/apache/http/auth/AuthSchemeRegistry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::auth::AuthSchemeRegistry _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setAuthSchemes(const ::org::apache::http::auth::AuthSchemeRegistry& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthSchemes", "(Lorg/apache/http/auth/AuthSchemeRegistry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::cookie::CookieSpecRegistry org::apache::http::impl::client::AbstractHttpClient::getCookieSpecs() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookieSpecs", "()Lorg/apache/http/cookie/CookieSpecRegistry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::cookie::CookieSpecRegistry _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setCookieSpecs(const ::org::apache::http::cookie::CookieSpecRegistry& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookieSpecs", "(Lorg/apache/http/cookie/CookieSpecRegistry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::ConnectionReuseStrategy org::apache::http::impl::client::AbstractHttpClient::getConnectionReuseStrategy() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionReuseStrategy", "()Lorg/apache/http/ConnectionReuseStrategy;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ConnectionReuseStrategy _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setReuseStrategy(const ::org::apache::http::ConnectionReuseStrategy& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReuseStrategy", "(Lorg/apache/http/ConnectionReuseStrategy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::conn::ConnectionKeepAliveStrategy org::apache::http::impl::client::AbstractHttpClient::getConnectionKeepAliveStrategy() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectionKeepAliveStrategy", "()Lorg/apache/http/conn/ConnectionKeepAliveStrategy;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::ConnectionKeepAliveStrategy _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setKeepAliveStrategy(const ::org::apache::http::conn::ConnectionKeepAliveStrategy& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeepAliveStrategy", "(Lorg/apache/http/conn/ConnectionKeepAliveStrategy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::HttpRequestRetryHandler org::apache::http::impl::client::AbstractHttpClient::getHttpRequestRetryHandler() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHttpRequestRetryHandler", "()Lorg/apache/http/client/HttpRequestRetryHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::HttpRequestRetryHandler _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setHttpRequestRetryHandler(const ::org::apache::http::client::HttpRequestRetryHandler& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHttpRequestRetryHandler", "(Lorg/apache/http/client/HttpRequestRetryHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::RedirectHandler org::apache::http::impl::client::AbstractHttpClient::getRedirectHandler() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRedirectHandler", "()Lorg/apache/http/client/RedirectHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::RedirectHandler _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setRedirectHandler(const ::org::apache::http::client::RedirectHandler& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRedirectHandler", "(Lorg/apache/http/client/RedirectHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::AuthenticationHandler org::apache::http::impl::client::AbstractHttpClient::getTargetAuthenticationHandler() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetAuthenticationHandler", "()Lorg/apache/http/client/AuthenticationHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::AuthenticationHandler _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setTargetAuthenticationHandler(const ::org::apache::http::client::AuthenticationHandler& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetAuthenticationHandler", "(Lorg/apache/http/client/AuthenticationHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::AuthenticationHandler org::apache::http::impl::client::AbstractHttpClient::getProxyAuthenticationHandler() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProxyAuthenticationHandler", "()Lorg/apache/http/client/AuthenticationHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::AuthenticationHandler _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setProxyAuthenticationHandler(const ::org::apache::http::client::AuthenticationHandler& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProxyAuthenticationHandler", "(Lorg/apache/http/client/AuthenticationHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::CookieStore org::apache::http::impl::client::AbstractHttpClient::getCookieStore() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookieStore", "()Lorg/apache/http/client/CookieStore;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::CookieStore _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setCookieStore(const ::org::apache::http::client::CookieStore& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookieStore", "(Lorg/apache/http/client/CookieStore;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::CredentialsProvider org::apache::http::impl::client::AbstractHttpClient::getCredentialsProvider() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCredentialsProvider", "()Lorg/apache/http/client/CredentialsProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::CredentialsProvider _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setCredentialsProvider(const ::org::apache::http::client::CredentialsProvider& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCredentialsProvider", "(Lorg/apache/http/client/CredentialsProvider;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::conn::routing::HttpRoutePlanner org::apache::http::impl::client::AbstractHttpClient::getRoutePlanner() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoutePlanner", "()Lorg/apache/http/conn/routing/HttpRoutePlanner;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoutePlanner _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setRoutePlanner(const ::org::apache::http::conn::routing::HttpRoutePlanner& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRoutePlanner", "(Lorg/apache/http/conn/routing/HttpRoutePlanner;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::client::UserTokenHandler org::apache::http::impl::client::AbstractHttpClient::getUserTokenHandler() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserTokenHandler", "()Lorg/apache/http/client/UserTokenHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::client::UserTokenHandler _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::AbstractHttpClient::setUserTokenHandler(const ::org::apache::http::client::UserTokenHandler& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserTokenHandler", "(Lorg/apache/http/client/UserTokenHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::client::AbstractHttpClient::addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResponseInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::client::AbstractHttpClient::addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "addResponseInterceptor", "(Lorg/apache/http/HttpResponseInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::HttpResponseInterceptor org::apache::http::impl::client::AbstractHttpClient::getResponseInterceptor(int32_t arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseInterceptor", "(I)Lorg/apache/http/HttpResponseInterceptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpResponseInterceptor _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::client::AbstractHttpClient::getResponseInterceptorCount() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseInterceptorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::client::AbstractHttpClient::clearResponseInterceptors() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearResponseInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::client::AbstractHttpClient::removeResponseInterceptorByClass(const ::java::lang::Class& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeResponseInterceptorByClass", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::client::AbstractHttpClient::addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::client::AbstractHttpClient::addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& arg0, int32_t arg1) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestInterceptor", "(Lorg/apache/http/HttpRequestInterceptor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::HttpRequestInterceptor org::apache::http::impl::client::AbstractHttpClient::getRequestInterceptor(int32_t arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestInterceptor", "(I)Lorg/apache/http/HttpRequestInterceptor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpRequestInterceptor _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::client::AbstractHttpClient::getRequestInterceptorCount() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestInterceptorCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::client::AbstractHttpClient::clearRequestInterceptors() const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearRequestInterceptors", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::client::AbstractHttpClient::removeRequestInterceptorByClass(const ::java::lang::Class& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeRequestInterceptorByClass", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HttpResponse org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::client::ResponseHandler& arg1) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::client::methods::HttpUriRequest& arg0, const ::org::apache::http::client::ResponseHandler& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::client::ResponseHandler& arg2) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::impl::client::AbstractHttpClient::execute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::client::ResponseHandler& arg2, const ::org::apache::http::protocol::HttpContext& arg3) const {
    if (!::org::apache::http::impl::client::AbstractHttpClient::_class) ::org::apache::http::impl::client::AbstractHttpClient::_class = java::fetch_class("org/apache/http/impl/client/AbstractHttpClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "execute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::client::RequestWrapper::RequestWrapper(const ::org::apache::http::HttpRequest& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpRequest;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::client::RequestWrapper::resetHeaders() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetHeaders", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String org::apache::http::impl::client::RequestWrapper::getMethod() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::RequestWrapper::setMethod(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMethod", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::ProtocolVersion org::apache::http::impl::client::RequestWrapper::getProtocolVersion() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::RequestWrapper::setProtocolVersion(const ::org::apache::http::ProtocolVersion& arg0) const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProtocolVersion", "(Lorg/apache/http/ProtocolVersion;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::URI org::apache::http::impl::client::RequestWrapper::getURI() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::RequestWrapper::setURI(const ::java::net::URI& arg0) const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURI", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::RequestLine org::apache::http::impl::client::RequestWrapper::getRequestLine() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestLine", "()Lorg/apache/http/RequestLine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

void org::apache::http::impl::client::RequestWrapper::abort() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::impl::client::RequestWrapper::isAborted() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAborted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::HttpRequest org::apache::http::impl::client::RequestWrapper::getOriginal() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginal", "()Lorg/apache/http/HttpRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

bool org::apache::http::impl::client::RequestWrapper::isRepeatable() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::impl::client::RequestWrapper::getExecCount() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExecCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::client::RequestWrapper::incrementExecCount() const {
    if (!::org::apache::http::impl::client::RequestWrapper::_class) ::org::apache::http::impl::client::RequestWrapper::_class = java::fetch_class("org/apache/http/impl/client/RequestWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementExecCount", "()V");
    java::jni->CallVoidMethod(obj, mid);
}


#include "java-core.hpp"
#include <memory>
#include "java.util.List.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.auth.AuthSchemeRegistry.hpp"
#include "org.apache.http.client.CookieStore.hpp"
#include "org.apache.http.client.CredentialsProvider.hpp"
#include "org.apache.http.client.protocol.ClientContext.hpp"
#include "org.apache.http.client.protocol.ClientContextConfigurer.hpp"
#include "org.apache.http.client.protocol.RequestAddCookies.hpp"
#include "org.apache.http.client.protocol.RequestDefaultHeaders.hpp"
#include "org.apache.http.client.protocol.RequestProxyAuthentication.hpp"
#include "org.apache.http.client.protocol.RequestTargetAuthentication.hpp"
#include "org.apache.http.client.protocol.ResponseProcessCookies.hpp"
#include "org.apache.http.cookie.CookieSpecRegistry.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

jclass org::apache::http::client::protocol::RequestProxyAuthentication::_class = nullptr;
jclass org::apache::http::client::protocol::RequestDefaultHeaders::_class = nullptr;
jclass org::apache::http::client::protocol::ResponseProcessCookies::_class = nullptr;
jclass org::apache::http::client::protocol::RequestTargetAuthentication::_class = nullptr;
jclass org::apache::http::client::protocol::ClientContext::_class = nullptr;
jclass org::apache::http::client::protocol::ClientContextConfigurer::_class = nullptr;
jclass org::apache::http::client::protocol::RequestAddCookies::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::protocol::RequestProxyAuthentication::RequestProxyAuthentication() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::client::protocol::RequestProxyAuthentication::_class) ::org::apache::http::client::protocol::RequestProxyAuthentication::_class = java::fetch_class("org/apache/http/client/protocol/RequestProxyAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::client::protocol::RequestProxyAuthentication::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::protocol::RequestProxyAuthentication::_class) ::org::apache::http::client::protocol::RequestProxyAuthentication::_class = java::fetch_class("org/apache/http/client/protocol/RequestProxyAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::protocol::RequestDefaultHeaders::RequestDefaultHeaders() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::client::protocol::RequestDefaultHeaders::_class) ::org::apache::http::client::protocol::RequestDefaultHeaders::_class = java::fetch_class("org/apache/http/client/protocol/RequestDefaultHeaders");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::client::protocol::RequestDefaultHeaders::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::protocol::RequestDefaultHeaders::_class) ::org::apache::http::client::protocol::RequestDefaultHeaders::_class = java::fetch_class("org/apache/http/client/protocol/RequestDefaultHeaders");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::protocol::ResponseProcessCookies::ResponseProcessCookies() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {
    if (!::org::apache::http::client::protocol::ResponseProcessCookies::_class) ::org::apache::http::client::protocol::ResponseProcessCookies::_class = java::fetch_class("org/apache/http/client/protocol/ResponseProcessCookies");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::client::protocol::ResponseProcessCookies::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::protocol::ResponseProcessCookies::_class) ::org::apache::http::client::protocol::ResponseProcessCookies::_class = java::fetch_class("org/apache/http/client/protocol/ResponseProcessCookies");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::protocol::RequestTargetAuthentication::RequestTargetAuthentication() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::client::protocol::RequestTargetAuthentication::_class) ::org::apache::http::client::protocol::RequestTargetAuthentication::_class = java::fetch_class("org/apache/http/client/protocol/RequestTargetAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::client::protocol::RequestTargetAuthentication::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::protocol::RequestTargetAuthentication::_class) ::org::apache::http::client::protocol::RequestTargetAuthentication::_class = java::fetch_class("org/apache/http/client/protocol/RequestTargetAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::protocol::ClientContextConfigurer::ClientContextConfigurer(const ::org::apache::http::protocol::HttpContext& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::client::protocol::ClientContext((jobject)0) {
    if (!::org::apache::http::client::protocol::ClientContextConfigurer::_class) ::org::apache::http::client::protocol::ClientContextConfigurer::_class = java::fetch_class("org/apache/http/client/protocol/ClientContextConfigurer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::client::protocol::ClientContextConfigurer::setCookieSpecRegistry(const ::org::apache::http::cookie::CookieSpecRegistry& arg0) const {
    if (!::org::apache::http::client::protocol::ClientContextConfigurer::_class) ::org::apache::http::client::protocol::ClientContextConfigurer::_class = java::fetch_class("org/apache/http/client/protocol/ClientContextConfigurer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookieSpecRegistry", "(Lorg/apache/http/cookie/CookieSpecRegistry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::protocol::ClientContextConfigurer::setAuthSchemeRegistry(const ::org::apache::http::auth::AuthSchemeRegistry& arg0) const {
    if (!::org::apache::http::client::protocol::ClientContextConfigurer::_class) ::org::apache::http::client::protocol::ClientContextConfigurer::_class = java::fetch_class("org/apache/http/client/protocol/ClientContextConfigurer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthSchemeRegistry", "(Lorg/apache/http/auth/AuthSchemeRegistry;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::protocol::ClientContextConfigurer::setCookieStore(const ::org::apache::http::client::CookieStore& arg0) const {
    if (!::org::apache::http::client::protocol::ClientContextConfigurer::_class) ::org::apache::http::client::protocol::ClientContextConfigurer::_class = java::fetch_class("org/apache/http/client/protocol/ClientContextConfigurer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookieStore", "(Lorg/apache/http/client/CookieStore;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::protocol::ClientContextConfigurer::setCredentialsProvider(const ::org::apache::http::client::CredentialsProvider& arg0) const {
    if (!::org::apache::http::client::protocol::ClientContextConfigurer::_class) ::org::apache::http::client::protocol::ClientContextConfigurer::_class = java::fetch_class("org/apache/http/client/protocol/ClientContextConfigurer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCredentialsProvider", "(Lorg/apache/http/client/CredentialsProvider;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::protocol::ClientContextConfigurer::setAuthSchemePref(const ::java::util::List& arg0) const {
    if (!::org::apache::http::client::protocol::ClientContextConfigurer::_class) ::org::apache::http::client::protocol::ClientContextConfigurer::_class = java::fetch_class("org/apache/http/client/protocol/ClientContextConfigurer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthSchemePref", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::protocol::RequestAddCookies::RequestAddCookies() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0) {
    if (!::org::apache::http::client::protocol::RequestAddCookies::_class) ::org::apache::http::client::protocol::RequestAddCookies::_class = java::fetch_class("org/apache/http/client/protocol/RequestAddCookies");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::client::protocol::RequestAddCookies::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::client::protocol::RequestAddCookies::_class) ::org::apache::http::client::protocol::RequestAddCookies::_class = java::fetch_class("org/apache/http/client/protocol/RequestAddCookies");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}


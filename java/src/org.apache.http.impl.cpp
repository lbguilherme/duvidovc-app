#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.Socket.hpp"
#include "java.util.Locale.hpp"
#include "org.apache.http.HttpConnectionMetrics.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.ProtocolVersion.hpp"
#include "org.apache.http.ReasonPhraseCatalog.hpp"
#include "org.apache.http.RequestLine.hpp"
#include "org.apache.http.StatusLine.hpp"
#include "org.apache.http.impl.AbstractHttpClientConnection.hpp"
#include "org.apache.http.impl.AbstractHttpServerConnection.hpp"
#include "org.apache.http.impl.DefaultConnectionReuseStrategy.hpp"
#include "org.apache.http.impl.DefaultHttpClientConnection.hpp"
#include "org.apache.http.impl.DefaultHttpRequestFactory.hpp"
#include "org.apache.http.impl.DefaultHttpResponseFactory.hpp"
#include "org.apache.http.impl.DefaultHttpServerConnection.hpp"
#include "org.apache.http.impl.EnglishReasonPhraseCatalog.hpp"
#include "org.apache.http.impl.HttpConnectionMetricsImpl.hpp"
#include "org.apache.http.impl.NoConnectionReuseStrategy.hpp"
#include "org.apache.http.impl.SocketHttpClientConnection.hpp"
#include "org.apache.http.impl.SocketHttpServerConnection.hpp"
#include "org.apache.http.io.HttpTransportMetrics.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

jclass org::apache::http::impl::AbstractHttpClientConnection::_class = nullptr;
jclass org::apache::http::impl::DefaultHttpClientConnection::_class = nullptr;
jclass org::apache::http::impl::NoConnectionReuseStrategy::_class = nullptr;
jclass org::apache::http::impl::SocketHttpClientConnection::_class = nullptr;
jclass org::apache::http::impl::AbstractHttpServerConnection::_class = nullptr;
jclass org::apache::http::impl::DefaultHttpRequestFactory::_class = nullptr;
jclass org::apache::http::impl::HttpConnectionMetricsImpl::_class = nullptr;
jclass org::apache::http::impl::DefaultHttpServerConnection::_class = nullptr;
jclass org::apache::http::impl::SocketHttpServerConnection::_class = nullptr;
jclass org::apache::http::impl::EnglishReasonPhraseCatalog::_class = nullptr;
jclass org::apache::http::impl::DefaultConnectionReuseStrategy::_class = nullptr;
jclass org::apache::http::impl::DefaultHttpResponseFactory::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::AbstractHttpClientConnection::AbstractHttpClientConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0) {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::AbstractHttpClientConnection::isResponseAvailable(int32_t arg0) const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isResponseAvailable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::AbstractHttpClientConnection::sendRequestHeader(const ::org::apache::http::HttpRequest& arg0) const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestHeader", "(Lorg/apache/http/HttpRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::AbstractHttpClientConnection::sendRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest& arg0) const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestEntity", "(Lorg/apache/http/HttpEntityEnclosingRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::AbstractHttpClientConnection::flush() const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::HttpResponse org::apache::http::impl::AbstractHttpClientConnection::receiveResponseHeader() const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseHeader", "()Lorg/apache/http/HttpResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

void org::apache::http::impl::AbstractHttpClientConnection::receiveResponseEntity(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseEntity", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::AbstractHttpClientConnection::isStale() const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStale", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::HttpConnectionMetrics org::apache::http::impl::AbstractHttpClientConnection::getMetrics() const {
    if (!::org::apache::http::impl::AbstractHttpClientConnection::_class) ::org::apache::http::impl::AbstractHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/HttpConnectionMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpConnectionMetrics _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::DefaultHttpClientConnection::DefaultHttpClientConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0), ::org::apache::http::impl::SocketHttpClientConnection((jobject)0) {
    if (!::org::apache::http::impl::DefaultHttpClientConnection::_class) ::org::apache::http::impl::DefaultHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/DefaultHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::DefaultHttpClientConnection::bind(const ::java::net::Socket& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::DefaultHttpClientConnection::_class) ::org::apache::http::impl::DefaultHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/DefaultHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Ljava/net/Socket;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::impl::DefaultHttpClientConnection::toString() const {
    if (!::org::apache::http::impl::DefaultHttpClientConnection::_class) ::org::apache::http::impl::DefaultHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/DefaultHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::NoConnectionReuseStrategy::NoConnectionReuseStrategy() : ::java::lang::Object((jobject)0), ::org::apache::http::ConnectionReuseStrategy((jobject)0) {
    if (!::org::apache::http::impl::NoConnectionReuseStrategy::_class) ::org::apache::http::impl::NoConnectionReuseStrategy::_class = java::fetch_class("org/apache/http/impl/NoConnectionReuseStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::NoConnectionReuseStrategy::keepAlive(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::NoConnectionReuseStrategy::_class) ::org::apache::http::impl::NoConnectionReuseStrategy::_class = java::fetch_class("org/apache/http/impl/NoConnectionReuseStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "keepAlive", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::SocketHttpClientConnection::SocketHttpClientConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0) {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::SocketHttpClientConnection::isOpen() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::impl::SocketHttpClientConnection::getLocalAddress() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::SocketHttpClientConnection::getLocalPort() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::impl::SocketHttpClientConnection::getRemoteAddress() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::SocketHttpClientConnection::getRemotePort() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemotePort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::SocketHttpClientConnection::setSocketTimeout(int32_t arg0) const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSocketTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::apache::http::impl::SocketHttpClientConnection::getSocketTimeout() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::SocketHttpClientConnection::shutdown() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::SocketHttpClientConnection::close() const {
    if (!::org::apache::http::impl::SocketHttpClientConnection::_class) ::org::apache::http::impl::SocketHttpClientConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::AbstractHttpServerConnection::AbstractHttpServerConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0) {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpRequest org::apache::http::impl::AbstractHttpServerConnection::receiveRequestHeader() const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveRequestHeader", "()Lorg/apache/http/HttpRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

void org::apache::http::impl::AbstractHttpServerConnection::receiveRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest& arg0) const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveRequestEntity", "(Lorg/apache/http/HttpEntityEnclosingRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::AbstractHttpServerConnection::flush() const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::AbstractHttpServerConnection::sendResponseHeader(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendResponseHeader", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::AbstractHttpServerConnection::sendResponseEntity(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendResponseEntity", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::impl::AbstractHttpServerConnection::isStale() const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStale", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::HttpConnectionMetrics org::apache::http::impl::AbstractHttpServerConnection::getMetrics() const {
    if (!::org::apache::http::impl::AbstractHttpServerConnection::_class) ::org::apache::http::impl::AbstractHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/AbstractHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/HttpConnectionMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpConnectionMetrics _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::DefaultHttpRequestFactory::DefaultHttpRequestFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestFactory((jobject)0) {
    if (!::org::apache::http::impl::DefaultHttpRequestFactory::_class) ::org::apache::http::impl::DefaultHttpRequestFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpRequestFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpRequest org::apache::http::impl::DefaultHttpRequestFactory::newHttpRequest(const ::org::apache::http::RequestLine& arg0) const {
    if (!::org::apache::http::impl::DefaultHttpRequestFactory::_class) ::org::apache::http::impl::DefaultHttpRequestFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpRequestFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpRequest", "(Lorg/apache/http/RequestLine;)Lorg/apache/http/HttpRequest;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

::org::apache::http::HttpRequest org::apache::http::impl::DefaultHttpRequestFactory::newHttpRequest(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::impl::DefaultHttpRequestFactory::_class) ::org::apache::http::impl::DefaultHttpRequestFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpRequestFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpRequest", "(Ljava/lang/String;Ljava/lang/String;)Lorg/apache/http/HttpRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::HttpConnectionMetricsImpl::HttpConnectionMetricsImpl(const ::org::apache::http::io::HttpTransportMetrics& arg0, const ::org::apache::http::io::HttpTransportMetrics& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnectionMetrics((jobject)0) {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/HttpTransportMetrics;Lorg/apache/http/io/HttpTransportMetrics;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::impl::HttpConnectionMetricsImpl::getReceivedBytesCount() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceivedBytesCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t org::apache::http::impl::HttpConnectionMetricsImpl::getSentBytesCount() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSentBytesCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t org::apache::http::impl::HttpConnectionMetricsImpl::getRequestCount() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void org::apache::http::impl::HttpConnectionMetricsImpl::incrementRequestCount() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementRequestCount", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t org::apache::http::impl::HttpConnectionMetricsImpl::getResponseCount() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void org::apache::http::impl::HttpConnectionMetricsImpl::incrementResponseCount() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementResponseCount", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object org::apache::http::impl::HttpConnectionMetricsImpl::getMetric(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetric", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::impl::HttpConnectionMetricsImpl::setMetric(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMetric", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::HttpConnectionMetricsImpl::reset() const {
    if (!::org::apache::http::impl::HttpConnectionMetricsImpl::_class) ::org::apache::http::impl::HttpConnectionMetricsImpl::_class = java::fetch_class("org/apache/http/impl/HttpConnectionMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::DefaultHttpServerConnection::DefaultHttpServerConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0), ::org::apache::http::impl::AbstractHttpServerConnection((jobject)0), ::org::apache::http::impl::SocketHttpServerConnection((jobject)0) {
    if (!::org::apache::http::impl::DefaultHttpServerConnection::_class) ::org::apache::http::impl::DefaultHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/DefaultHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::DefaultHttpServerConnection::bind(const ::java::net::Socket& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::DefaultHttpServerConnection::_class) ::org::apache::http::impl::DefaultHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/DefaultHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Ljava/net/Socket;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::impl::DefaultHttpServerConnection::toString() const {
    if (!::org::apache::http::impl::DefaultHttpServerConnection::_class) ::org::apache::http::impl::DefaultHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/DefaultHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::SocketHttpServerConnection::SocketHttpServerConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::HttpServerConnection((jobject)0), ::org::apache::http::impl::AbstractHttpServerConnection((jobject)0) {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::SocketHttpServerConnection::isOpen() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::impl::SocketHttpServerConnection::getLocalAddress() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::SocketHttpServerConnection::getLocalPort() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::impl::SocketHttpServerConnection::getRemoteAddress() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::SocketHttpServerConnection::getRemotePort() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemotePort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::SocketHttpServerConnection::setSocketTimeout(int32_t arg0) const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSocketTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::apache::http::impl::SocketHttpServerConnection::getSocketTimeout() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::SocketHttpServerConnection::shutdown() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::SocketHttpServerConnection::close() const {
    if (!::org::apache::http::impl::SocketHttpServerConnection::_class) ::org::apache::http::impl::SocketHttpServerConnection::_class = java::fetch_class("org/apache/http/impl/SocketHttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String org::apache::http::impl::EnglishReasonPhraseCatalog::getReason(int32_t arg0, const ::java::util::Locale& arg1) const {
    if (!::org::apache::http::impl::EnglishReasonPhraseCatalog::_class) ::org::apache::http::impl::EnglishReasonPhraseCatalog::_class = java::fetch_class("org/apache/http/impl/EnglishReasonPhraseCatalog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReason", "(ILjava/util/Locale;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::DefaultConnectionReuseStrategy::DefaultConnectionReuseStrategy() : ::java::lang::Object((jobject)0), ::org::apache::http::ConnectionReuseStrategy((jobject)0) {
    if (!::org::apache::http::impl::DefaultConnectionReuseStrategy::_class) ::org::apache::http::impl::DefaultConnectionReuseStrategy::_class = java::fetch_class("org/apache/http/impl/DefaultConnectionReuseStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::DefaultConnectionReuseStrategy::keepAlive(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::DefaultConnectionReuseStrategy::_class) ::org::apache::http::impl::DefaultConnectionReuseStrategy::_class = java::fetch_class("org/apache/http/impl/DefaultConnectionReuseStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "keepAlive", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::DefaultHttpResponseFactory::DefaultHttpResponseFactory(const ::org::apache::http::ReasonPhraseCatalog& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseFactory((jobject)0) {
    if (!::org::apache::http::impl::DefaultHttpResponseFactory::_class) ::org::apache::http::impl::DefaultHttpResponseFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpResponseFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/ReasonPhraseCatalog;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::DefaultHttpResponseFactory::DefaultHttpResponseFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseFactory((jobject)0) {
    if (!::org::apache::http::impl::DefaultHttpResponseFactory::_class) ::org::apache::http::impl::DefaultHttpResponseFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpResponseFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpResponse org::apache::http::impl::DefaultHttpResponseFactory::newHttpResponse(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::DefaultHttpResponseFactory::_class) ::org::apache::http::impl::DefaultHttpResponseFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpResponseFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpResponse", "(Lorg/apache/http/ProtocolVersion;ILorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::impl::DefaultHttpResponseFactory::newHttpResponse(const ::org::apache::http::StatusLine& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::impl::DefaultHttpResponseFactory::_class) ::org::apache::http::impl::DefaultHttpResponseFactory::_class = java::fetch_class("org/apache/http/impl/DefaultHttpResponseFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpResponse", "(Lorg/apache/http/StatusLine;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}


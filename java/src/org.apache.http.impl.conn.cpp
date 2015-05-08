#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.ProxySelector.hpp"
#include "java.net.Socket.hpp"
#include "java.util.concurrent.TimeUnit.hpp"
#include "javax.net.ssl.SSLSession.hpp"
#include "org.apache.commons.logging.Log.hpp"
#include "org.apache.http.HttpConnection.hpp"
#include "org.apache.http.HttpConnectionMetrics.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.HttpResponseFactory.hpp"
#include "org.apache.http.conn.ClientConnectionRequest.hpp"
#include "org.apache.http.conn.ManagedClientConnection.hpp"
#include "org.apache.http.conn.OperatedClientConnection.hpp"
#include "org.apache.http.conn.routing.HttpRoute.hpp"
#include "org.apache.http.conn.scheme.SchemeRegistry.hpp"
#include "org.apache.http.impl.conn.AbstractClientConnAdapter.hpp"
#include "org.apache.http.impl.conn.AbstractPoolEntry.hpp"
#include "org.apache.http.impl.conn.AbstractPooledConnAdapter.hpp"
#include "org.apache.http.impl.conn.DefaultClientConnection.hpp"
#include "org.apache.http.impl.conn.DefaultClientConnectionOperator.hpp"
#include "org.apache.http.impl.conn.DefaultHttpRoutePlanner.hpp"
#include "org.apache.http.impl.conn.DefaultResponseParser.hpp"
#include "org.apache.http.impl.conn.IdleConnectionHandler.hpp"
#include "org.apache.http.impl.conn.LoggingSessionInputBuffer.hpp"
#include "org.apache.http.impl.conn.LoggingSessionOutputBuffer.hpp"
#include "org.apache.http.impl.conn.ProxySelectorRoutePlanner.hpp"
#include "org.apache.http.impl.conn.SingleClientConnManager.hpp"
#include "org.apache.http.impl.conn.Wire.hpp"
#include "org.apache.http.io.HttpTransportMetrics.hpp"
#include "org.apache.http.io.SessionInputBuffer.hpp"
#include "org.apache.http.io.SessionOutputBuffer.hpp"
#include "org.apache.http.message.LineParser.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"

jclass org::apache::http::impl::conn::DefaultClientConnection::_class = nullptr;
jclass org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = nullptr;
jclass org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = nullptr;
jclass org::apache::http::impl::conn::SingleClientConnManager_PoolEntry::_class = nullptr;
jclass org::apache::http::impl::conn::AbstractPoolEntry::_class = nullptr;
jclass org::apache::http::impl::conn::Wire::_class = nullptr;
jclass org::apache::http::impl::conn::SingleClientConnManager_ConnAdapter::_class = nullptr;
jclass org::apache::http::impl::conn::DefaultResponseParser::_class = nullptr;
jclass org::apache::http::impl::conn::DefaultHttpRoutePlanner::_class = nullptr;
jclass org::apache::http::impl::conn::AbstractClientConnAdapter::_class = nullptr;
jclass org::apache::http::impl::conn::IdleConnectionHandler::_class = nullptr;
jclass org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = nullptr;
jclass org::apache::http::impl::conn::DefaultClientConnectionOperator::_class = nullptr;
jclass org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class = nullptr;
jclass org::apache::http::impl::conn::SingleClientConnManager::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::DefaultClientConnection::DefaultClientConnection() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::OperatedClientConnection((jobject)0), ::org::apache::http::impl::AbstractHttpClientConnection((jobject)0), ::org::apache::http::impl::SocketHttpClientConnection((jobject)0) {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpHost org::apache::http::impl::conn::DefaultClientConnection::getTargetHost() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

bool org::apache::http::impl::conn::DefaultClientConnection::isSecure() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::Socket org::apache::http::impl::conn::DefaultClientConnection::getSocket() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::DefaultClientConnection::opening(const ::java::net::Socket& arg0, const ::org::apache::http::HttpHost& arg1) const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "opening", "(Ljava/net/Socket;Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::DefaultClientConnection::openCompleted(bool arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "openCompleted", "(ZLorg/apache/http/params/HttpParams;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::DefaultClientConnection::shutdown() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::DefaultClientConnection::close() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::DefaultClientConnection::update(const ::java::net::Socket& arg0, const ::org::apache::http::HttpHost& arg1, bool arg2, const ::org::apache::http::params::HttpParams& arg3) const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/net/Socket;Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::org::apache::http::HttpResponse org::apache::http::impl::conn::DefaultClientConnection::receiveResponseHeader() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseHeader", "()Lorg/apache/http/HttpResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::DefaultClientConnection::sendRequestHeader(const ::org::apache::http::HttpRequest& arg0) const {
    if (!::org::apache::http::impl::conn::DefaultClientConnection::_class) ::org::apache::http::impl::conn::DefaultClientConnection::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestHeader", "(Lorg/apache/http/HttpRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::LoggingSessionInputBuffer::LoggingSessionInputBuffer(const ::org::apache::http::io::SessionInputBuffer& arg0, const ::org::apache::http::impl::conn::Wire& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/impl/conn/Wire;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::conn::LoggingSessionInputBuffer::isDataAvailable(int32_t arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDataAvailable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::impl::conn::LoggingSessionInputBuffer::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::impl::conn::LoggingSessionInputBuffer::read() const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::impl::conn::LoggingSessionInputBuffer::read(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::conn::LoggingSessionInputBuffer::readLine() const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::conn::LoggingSessionInputBuffer::readLine(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "(Lorg/apache/http/util/CharArrayBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::org::apache::http::io::HttpTransportMetrics org::apache::http::impl::conn::LoggingSessionInputBuffer::getMetrics() const {
    if (!::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/io/HttpTransportMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::io::HttpTransportMetrics _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::LoggingSessionOutputBuffer::LoggingSessionOutputBuffer(const ::org::apache::http::io::SessionOutputBuffer& arg0, const ::org::apache::http::impl::conn::Wire& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/impl/conn/Wire;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::write(int32_t arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::write(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::flush() const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::writeLine(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Lorg/apache/http/util/CharArrayBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::LoggingSessionOutputBuffer::writeLine(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::io::HttpTransportMetrics org::apache::http::impl::conn::LoggingSessionOutputBuffer::getMetrics() const {
    if (!::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class) ::org::apache::http::impl::conn::LoggingSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/conn/LoggingSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/io/HttpTransportMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::io::HttpTransportMetrics _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::impl::conn::AbstractPoolEntry::getState() const {
    if (!::org::apache::http::impl::conn::AbstractPoolEntry::_class) ::org::apache::http::impl::conn::AbstractPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::AbstractPoolEntry::setState(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::impl::conn::AbstractPoolEntry::_class) ::org::apache::http::impl::conn::AbstractPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::AbstractPoolEntry::open(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::org::apache::http::protocol::HttpContext& arg1, const ::org::apache::http::params::HttpParams& arg2) const {
    if (!::org::apache::http::impl::conn::AbstractPoolEntry::_class) ::org::apache::http::impl::conn::AbstractPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Lorg/apache/http/conn/routing/HttpRoute;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::AbstractPoolEntry::tunnelTarget(bool arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::conn::AbstractPoolEntry::_class) ::org::apache::http::impl::conn::AbstractPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelTarget", "(ZLorg/apache/http/params/HttpParams;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::AbstractPoolEntry::tunnelProxy(const ::org::apache::http::HttpHost& arg0, bool arg1, const ::org::apache::http::params::HttpParams& arg2) const {
    if (!::org::apache::http::impl::conn::AbstractPoolEntry::_class) ::org::apache::http::impl::conn::AbstractPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelProxy", "(Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::AbstractPoolEntry::layerProtocol(const ::org::apache::http::protocol::HttpContext& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::conn::AbstractPoolEntry::_class) ::org::apache::http::impl::conn::AbstractPoolEntry::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPoolEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "layerProtocol", "(Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::Wire::Wire(const ::org::apache::commons::logging::Log& arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/commons/logging/Log;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::conn::Wire::enabled() const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "enabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::impl::conn::Wire::output(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "output", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::input(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "input", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::output(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "output", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::Wire::input(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "input", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::Wire::output(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "output", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::input(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "input", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::output(int32_t arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "output", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::input(int32_t arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "input", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::output(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "output", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::Wire::input(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::conn::Wire::_class) ::org::apache::http::impl::conn::Wire::_class = java::fetch_class("org/apache/http/impl/conn/Wire");
    static jmethodID mid = java::jni->GetMethodID(_class, "input", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::DefaultResponseParser::DefaultResponseParser(const ::org::apache::http::io::SessionInputBuffer& arg0, const ::org::apache::http::message::LineParser& arg1, const ::org::apache::http::HttpResponseFactory& arg2, const ::org::apache::http::params::HttpParams& arg3) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageParser((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {
    if (!::org::apache::http::impl::conn::DefaultResponseParser::_class) ::org::apache::http::impl::conn::DefaultResponseParser::_class = java::fetch_class("org/apache/http/impl/conn/DefaultResponseParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/message/LineParser;Lorg/apache/http/HttpResponseFactory;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::DefaultHttpRoutePlanner::DefaultHttpRoutePlanner(const ::org::apache::http::conn::scheme::SchemeRegistry& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRoutePlanner((jobject)0) {
    if (!::org::apache::http::impl::conn::DefaultHttpRoutePlanner::_class) ::org::apache::http::impl::conn::DefaultHttpRoutePlanner::_class = java::fetch_class("org/apache/http/impl/conn/DefaultHttpRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/scheme/SchemeRegistry;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::routing::HttpRoute org::apache::http::impl::conn::DefaultHttpRoutePlanner::determineRoute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::conn::DefaultHttpRoutePlanner::_class) ::org::apache::http::impl::conn::DefaultHttpRoutePlanner::_class = java::fetch_class("org/apache/http/impl/conn/DefaultHttpRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "determineRoute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/conn/routing/HttpRoute;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

bool org::apache::http::impl::conn::AbstractClientConnAdapter::isOpen() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::impl::conn::AbstractClientConnAdapter::isStale() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStale", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::setSocketTimeout(int32_t arg0) const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSocketTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::apache::http::impl::conn::AbstractClientConnAdapter::getSocketTimeout() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpConnectionMetrics org::apache::http::impl::conn::AbstractClientConnAdapter::getMetrics() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/HttpConnectionMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpConnectionMetrics _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::flush() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::impl::conn::AbstractClientConnAdapter::isResponseAvailable(int32_t arg0) const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isResponseAvailable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::receiveResponseEntity(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseEntity", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HttpResponse org::apache::http::impl::conn::AbstractClientConnAdapter::receiveResponseHeader() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseHeader", "()Lorg/apache/http/HttpResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::sendRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest& arg0) const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestEntity", "(Lorg/apache/http/HttpEntityEnclosingRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::sendRequestHeader(const ::org::apache::http::HttpRequest& arg0) const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestHeader", "(Lorg/apache/http/HttpRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::InetAddress org::apache::http::impl::conn::AbstractClientConnAdapter::getLocalAddress() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::conn::AbstractClientConnAdapter::getLocalPort() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::impl::conn::AbstractClientConnAdapter::getRemoteAddress() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::impl::conn::AbstractClientConnAdapter::getRemotePort() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemotePort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::impl::conn::AbstractClientConnAdapter::isSecure() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::javax::net::ssl::SSLSession org::apache::http::impl::conn::AbstractClientConnAdapter::getSSLSession() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSSLSession", "()Ljavax/net/ssl/SSLSession;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::markReusable() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "markReusable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::unmarkReusable() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unmarkReusable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::impl::conn::AbstractClientConnAdapter::isMarkedReusable() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMarkedReusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::setIdleDuration(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIdleDuration", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::releaseConnection() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::AbstractClientConnAdapter::abortConnection() const {
    if (!::org::apache::http::impl::conn::AbstractClientConnAdapter::_class) ::org::apache::http::impl::conn::AbstractClientConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractClientConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::IdleConnectionHandler::IdleConnectionHandler() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::impl::conn::IdleConnectionHandler::_class) ::org::apache::http::impl::conn::IdleConnectionHandler::_class = java::fetch_class("org/apache/http/impl/conn/IdleConnectionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::conn::IdleConnectionHandler::add(const ::org::apache::http::HttpConnection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::org::apache::http::impl::conn::IdleConnectionHandler::_class) ::org::apache::http::impl::conn::IdleConnectionHandler::_class = java::fetch_class("org/apache/http/impl/conn/IdleConnectionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Lorg/apache/http/HttpConnection;JLjava/util/concurrent/TimeUnit;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool org::apache::http::impl::conn::IdleConnectionHandler::remove(const ::org::apache::http::HttpConnection& arg0) const {
    if (!::org::apache::http::impl::conn::IdleConnectionHandler::_class) ::org::apache::http::impl::conn::IdleConnectionHandler::_class = java::fetch_class("org/apache/http/impl/conn/IdleConnectionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Lorg/apache/http/HttpConnection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::IdleConnectionHandler::removeAll() const {
    if (!::org::apache::http::impl::conn::IdleConnectionHandler::_class) ::org::apache::http::impl::conn::IdleConnectionHandler::_class = java::fetch_class("org/apache/http/impl/conn/IdleConnectionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::IdleConnectionHandler::closeIdleConnections(int64_t arg0) const {
    if (!::org::apache::http::impl::conn::IdleConnectionHandler::_class) ::org::apache::http::impl::conn::IdleConnectionHandler::_class = java::fetch_class("org/apache/http/impl/conn/IdleConnectionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeIdleConnections", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::conn::IdleConnectionHandler::closeExpiredConnections() const {
    if (!::org::apache::http::impl::conn::IdleConnectionHandler::_class) ::org::apache::http::impl::conn::IdleConnectionHandler::_class = java::fetch_class("org/apache/http/impl/conn/IdleConnectionHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeExpiredConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::impl::conn::AbstractPooledConnAdapter::getRoute() const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoute", "()Lorg/apache/http/conn/routing/HttpRoute;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::open(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::org::apache::http::protocol::HttpContext& arg1, const ::org::apache::http::params::HttpParams& arg2) const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Lorg/apache/http/conn/routing/HttpRoute;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::tunnelTarget(bool arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelTarget", "(ZLorg/apache/http/params/HttpParams;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::tunnelProxy(const ::org::apache::http::HttpHost& arg0, bool arg1, const ::org::apache::http::params::HttpParams& arg2) const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelProxy", "(Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::layerProtocol(const ::org::apache::http::protocol::HttpContext& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "layerProtocol", "(Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::close() const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::shutdown() const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object org::apache::http::impl::conn::AbstractPooledConnAdapter::getState() const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::AbstractPooledConnAdapter::setState(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class) ::org::apache::http::impl::conn::AbstractPooledConnAdapter::_class = java::fetch_class("org/apache/http/impl/conn/AbstractPooledConnAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::DefaultClientConnectionOperator::DefaultClientConnectionOperator(const ::org::apache::http::conn::scheme::SchemeRegistry& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionOperator((jobject)0) {
    if (!::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class) ::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/scheme/SchemeRegistry;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::OperatedClientConnection org::apache::http::impl::conn::DefaultClientConnectionOperator::createConnection() const {
    if (!::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class) ::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "createConnection", "()Lorg/apache/http/conn/OperatedClientConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::OperatedClientConnection _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::DefaultClientConnectionOperator::openConnection(const ::org::apache::http::conn::OperatedClientConnection& arg0, const ::org::apache::http::HttpHost& arg1, const ::java::net::InetAddress& arg2, const ::org::apache::http::protocol::HttpContext& arg3, const ::org::apache::http::params::HttpParams& arg4) const {
    if (!::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class) ::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "openConnection", "(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void org::apache::http::impl::conn::DefaultClientConnectionOperator::updateSecureConnection(const ::org::apache::http::conn::OperatedClientConnection& arg0, const ::org::apache::http::HttpHost& arg1, const ::org::apache::http::protocol::HttpContext& arg2, const ::org::apache::http::params::HttpParams& arg3) const {
    if (!::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class) ::org::apache::http::impl::conn::DefaultClientConnectionOperator::_class = java::fetch_class("org/apache/http/impl/conn/DefaultClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSecureConnection", "(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::ProxySelectorRoutePlanner::ProxySelectorRoutePlanner(const ::org::apache::http::conn::scheme::SchemeRegistry& arg0, const ::java::net::ProxySelector& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRoutePlanner((jobject)0) {
    if (!::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class) ::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class = java::fetch_class("org/apache/http/impl/conn/ProxySelectorRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/scheme/SchemeRegistry;Ljava/net/ProxySelector;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::net::ProxySelector org::apache::http::impl::conn::ProxySelectorRoutePlanner::getProxySelector() const {
    if (!::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class) ::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class = java::fetch_class("org/apache/http/impl/conn/ProxySelectorRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProxySelector", "()Ljava/net/ProxySelector;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::ProxySelector _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::ProxySelectorRoutePlanner::setProxySelector(const ::java::net::ProxySelector& arg0) const {
    if (!::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class) ::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class = java::fetch_class("org/apache/http/impl/conn/ProxySelectorRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProxySelector", "(Ljava/net/ProxySelector;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::impl::conn::ProxySelectorRoutePlanner::determineRoute(const ::org::apache::http::HttpHost& arg0, const ::org::apache::http::HttpRequest& arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class) ::org::apache::http::impl::conn::ProxySelectorRoutePlanner::_class = java::fetch_class("org/apache/http/impl/conn/ProxySelectorRoutePlanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "determineRoute", "(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/conn/routing/HttpRoute;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::conn::SingleClientConnManager::SingleClientConnManager(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::conn::scheme::SchemeRegistry& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionManager((jobject)0) {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/scheme/SchemeRegistry;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::scheme::SchemeRegistry org::apache::http::impl::conn::SingleClientConnManager::getSchemeRegistry() const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeRegistry", "()Lorg/apache/http/conn/scheme/SchemeRegistry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::scheme::SchemeRegistry _ret(ret);
    return _ret;
}

::org::apache::http::conn::ClientConnectionRequest org::apache::http::impl::conn::SingleClientConnManager::requestConnection(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestConnection", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ClientConnectionRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::conn::ClientConnectionRequest _ret(ret);
    return _ret;
}

::org::apache::http::conn::ManagedClientConnection org::apache::http::impl::conn::SingleClientConnManager::getConnection(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ManagedClientConnection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::conn::ManagedClientConnection _ret(ret);
    return _ret;
}

void org::apache::http::impl::conn::SingleClientConnManager::releaseConnection(const ::org::apache::http::conn::ManagedClientConnection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "(Lorg/apache/http/conn/ManagedClientConnection;JLjava/util/concurrent/TimeUnit;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::conn::SingleClientConnManager::closeExpiredConnections() const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeExpiredConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::conn::SingleClientConnManager::closeIdleConnections(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeIdleConnections", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::impl::conn::SingleClientConnManager::shutdown() const {
    if (!::org::apache::http::impl::conn::SingleClientConnManager::_class) ::org::apache::http::impl::conn::SingleClientConnManager::_class = java::fetch_class("org/apache/http/impl/conn/SingleClientConnManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}


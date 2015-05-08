#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.ConnectException.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.Socket.hpp"
#include "java.util.concurrent.TimeUnit.hpp"
#include "javax.net.ssl.SSLSession.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.conn.BasicEofSensorWatcher.hpp"
#include "org.apache.http.conn.BasicManagedEntity.hpp"
#include "org.apache.http.conn.ClientConnectionManager.hpp"
#include "org.apache.http.conn.ClientConnectionManagerFactory.hpp"
#include "org.apache.http.conn.ClientConnectionOperator.hpp"
#include "org.apache.http.conn.ClientConnectionRequest.hpp"
#include "org.apache.http.conn.ConnectTimeoutException.hpp"
#include "org.apache.http.conn.ConnectionKeepAliveStrategy.hpp"
#include "org.apache.http.conn.ConnectionPoolTimeoutException.hpp"
#include "org.apache.http.conn.ConnectionReleaseTrigger.hpp"
#include "org.apache.http.conn.EofSensorInputStream.hpp"
#include "org.apache.http.conn.EofSensorWatcher.hpp"
#include "org.apache.http.conn.HttpHostConnectException.hpp"
#include "org.apache.http.conn.ManagedClientConnection.hpp"
#include "org.apache.http.conn.MultihomePlainSocketFactory.hpp"
#include "org.apache.http.conn.OperatedClientConnection.hpp"
#include "org.apache.http.conn.routing.HttpRoute.hpp"
#include "org.apache.http.conn.scheme.SchemeRegistry.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"

jclass org::apache::http::conn::EofSensorWatcher::_class = nullptr;
jclass org::apache::http::conn::ConnectionReleaseTrigger::_class = nullptr;
jclass org::apache::http::conn::ConnectionPoolTimeoutException::_class = nullptr;
jclass org::apache::http::conn::ConnectionKeepAliveStrategy::_class = nullptr;
jclass org::apache::http::conn::HttpHostConnectException::_class = nullptr;
jclass org::apache::http::conn::BasicManagedEntity::_class = nullptr;
jclass org::apache::http::conn::BasicEofSensorWatcher::_class = nullptr;
jclass org::apache::http::conn::ClientConnectionOperator::_class = nullptr;
jclass org::apache::http::conn::ManagedClientConnection::_class = nullptr;
jclass org::apache::http::conn::ConnectTimeoutException::_class = nullptr;
jclass org::apache::http::conn::EofSensorInputStream::_class = nullptr;
jclass org::apache::http::conn::MultihomePlainSocketFactory::_class = nullptr;
jclass org::apache::http::conn::OperatedClientConnection::_class = nullptr;
jclass org::apache::http::conn::ClientConnectionManager::_class = nullptr;
jclass org::apache::http::conn::ClientConnectionRequest::_class = nullptr;
jclass org::apache::http::conn::ClientConnectionManagerFactory::_class = nullptr;

bool org::apache::http::conn::EofSensorWatcher::eofDetected(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::EofSensorWatcher::_class) ::org::apache::http::conn::EofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/EofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "eofDetected", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::EofSensorWatcher::streamClosed(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::EofSensorWatcher::_class) ::org::apache::http::conn::EofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/EofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "streamClosed", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::EofSensorWatcher::streamAbort(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::EofSensorWatcher::_class) ::org::apache::http::conn::EofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/EofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "streamAbort", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::conn::ConnectionReleaseTrigger::releaseConnection() const {
    if (!::org::apache::http::conn::ConnectionReleaseTrigger::_class) ::org::apache::http::conn::ConnectionReleaseTrigger::_class = java::fetch_class("org/apache/http/conn/ConnectionReleaseTrigger");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::ConnectionReleaseTrigger::abortConnection() const {
    if (!::org::apache::http::conn::ConnectionReleaseTrigger::_class) ::org::apache::http::conn::ConnectionReleaseTrigger::_class = java::fetch_class("org/apache/http/conn/ConnectionReleaseTrigger");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ConnectionPoolTimeoutException::ConnectionPoolTimeoutException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::conn::ConnectTimeoutException((jobject)0) {
    if (!::org::apache::http::conn::ConnectionPoolTimeoutException::_class) ::org::apache::http::conn::ConnectionPoolTimeoutException::_class = java::fetch_class("org/apache/http/conn/ConnectionPoolTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ConnectionPoolTimeoutException::ConnectionPoolTimeoutException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::conn::ConnectTimeoutException((jobject)0) {
    if (!::org::apache::http::conn::ConnectionPoolTimeoutException::_class) ::org::apache::http::conn::ConnectionPoolTimeoutException::_class = java::fetch_class("org/apache/http/conn/ConnectionPoolTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::conn::ConnectionKeepAliveStrategy::getKeepAliveDuration(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::conn::ConnectionKeepAliveStrategy::_class) ::org::apache::http::conn::ConnectionKeepAliveStrategy::_class = java::fetch_class("org/apache/http/conn/ConnectionKeepAliveStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeepAliveDuration", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::HttpHostConnectException::HttpHostConnectException(const ::org::apache::http::HttpHost& arg0, const ::java::net::ConnectException& arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::ConnectException((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::org::apache::http::conn::HttpHostConnectException::_class) ::org::apache::http::conn::HttpHostConnectException::_class = java::fetch_class("org/apache/http/conn/HttpHostConnectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpHost;Ljava/net/ConnectException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpHost org::apache::http::conn::HttpHostConnectException::getHost() const {
    if (!::org::apache::http::conn::HttpHostConnectException::_class) ::org::apache::http::conn::HttpHostConnectException::_class = java::fetch_class("org/apache/http/conn/HttpHostConnectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::BasicManagedEntity::BasicManagedEntity(const ::org::apache::http::HttpEntity& arg0, const ::org::apache::http::conn::ManagedClientConnection& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::EofSensorWatcher((jobject)0), ::org::apache::http::entity::HttpEntityWrapper((jobject)0) {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpEntity;Lorg/apache/http/conn/ManagedClientConnection;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool org::apache::http::conn::BasicManagedEntity::isRepeatable() const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::io::InputStream org::apache::http::conn::BasicManagedEntity::getContent() const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::conn::BasicManagedEntity::consumeContent() const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::BasicManagedEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::conn::BasicManagedEntity::releaseConnection() const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::BasicManagedEntity::abortConnection() const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::conn::BasicManagedEntity::eofDetected(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "eofDetected", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::BasicManagedEntity::streamClosed(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "streamClosed", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::BasicManagedEntity::streamAbort(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::BasicManagedEntity::_class) ::org::apache::http::conn::BasicManagedEntity::_class = java::fetch_class("org/apache/http/conn/BasicManagedEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "streamAbort", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::BasicEofSensorWatcher::BasicEofSensorWatcher(const ::org::apache::http::conn::ManagedClientConnection& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::EofSensorWatcher((jobject)0) {
    if (!::org::apache::http::conn::BasicEofSensorWatcher::_class) ::org::apache::http::conn::BasicEofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/BasicEofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/ManagedClientConnection;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::conn::BasicEofSensorWatcher::eofDetected(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::BasicEofSensorWatcher::_class) ::org::apache::http::conn::BasicEofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/BasicEofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "eofDetected", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::BasicEofSensorWatcher::streamClosed(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::BasicEofSensorWatcher::_class) ::org::apache::http::conn::BasicEofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/BasicEofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "streamClosed", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::BasicEofSensorWatcher::streamAbort(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::conn::BasicEofSensorWatcher::_class) ::org::apache::http::conn::BasicEofSensorWatcher::_class = java::fetch_class("org/apache/http/conn/BasicEofSensorWatcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "streamAbort", "(Ljava/io/InputStream;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::apache::http::conn::OperatedClientConnection org::apache::http::conn::ClientConnectionOperator::createConnection() const {
    if (!::org::apache::http::conn::ClientConnectionOperator::_class) ::org::apache::http::conn::ClientConnectionOperator::_class = java::fetch_class("org/apache/http/conn/ClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "createConnection", "()Lorg/apache/http/conn/OperatedClientConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::OperatedClientConnection _ret(ret);
    return _ret;
}

void org::apache::http::conn::ClientConnectionOperator::openConnection(const ::org::apache::http::conn::OperatedClientConnection& arg0, const ::org::apache::http::HttpHost& arg1, const ::java::net::InetAddress& arg2, const ::org::apache::http::protocol::HttpContext& arg3, const ::org::apache::http::params::HttpParams& arg4) const {
    if (!::org::apache::http::conn::ClientConnectionOperator::_class) ::org::apache::http::conn::ClientConnectionOperator::_class = java::fetch_class("org/apache/http/conn/ClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "openConnection", "(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void org::apache::http::conn::ClientConnectionOperator::updateSecureConnection(const ::org::apache::http::conn::OperatedClientConnection& arg0, const ::org::apache::http::HttpHost& arg1, const ::org::apache::http::protocol::HttpContext& arg2, const ::org::apache::http::params::HttpParams& arg3) const {
    if (!::org::apache::http::conn::ClientConnectionOperator::_class) ::org::apache::http::conn::ClientConnectionOperator::_class = java::fetch_class("org/apache/http/conn/ClientConnectionOperator");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSecureConnection", "(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool org::apache::http::conn::ManagedClientConnection::isSecure() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::conn::routing::HttpRoute org::apache::http::conn::ManagedClientConnection::getRoute() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoute", "()Lorg/apache/http/conn/routing/HttpRoute;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::routing::HttpRoute _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSession org::apache::http::conn::ManagedClientConnection::getSSLSession() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSSLSession", "()Ljavax/net/ssl/SSLSession;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

void org::apache::http::conn::ManagedClientConnection::open(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::org::apache::http::protocol::HttpContext& arg1, const ::org::apache::http::params::HttpParams& arg2) const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Lorg/apache/http/conn/routing/HttpRoute;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::conn::ManagedClientConnection::tunnelTarget(bool arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelTarget", "(ZLorg/apache/http/params/HttpParams;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ManagedClientConnection::tunnelProxy(const ::org::apache::http::HttpHost& arg0, bool arg1, const ::org::apache::http::params::HttpParams& arg2) const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "tunnelProxy", "(Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::conn::ManagedClientConnection::layerProtocol(const ::org::apache::http::protocol::HttpContext& arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "layerProtocol", "(Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ManagedClientConnection::markReusable() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "markReusable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::ManagedClientConnection::unmarkReusable() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "unmarkReusable", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::conn::ManagedClientConnection::isMarkedReusable() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMarkedReusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::conn::ManagedClientConnection::setState(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setState", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object org::apache::http::conn::ManagedClientConnection::getState() const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getState", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::conn::ManagedClientConnection::setIdleDuration(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::conn::ManagedClientConnection::_class) ::org::apache::http::conn::ManagedClientConnection::_class = java::fetch_class("org/apache/http/conn/ManagedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIdleDuration", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ConnectTimeoutException::ConnectTimeoutException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::conn::ConnectTimeoutException::_class) ::org::apache::http::conn::ConnectTimeoutException::_class = java::fetch_class("org/apache/http/conn/ConnectTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ConnectTimeoutException::ConnectTimeoutException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::conn::ConnectTimeoutException::_class) ::org::apache::http::conn::ConnectTimeoutException::_class = java::fetch_class("org/apache/http/conn/ConnectTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::EofSensorInputStream::EofSensorInputStream(const ::java::io::InputStream& arg0, const ::org::apache::http::conn::EofSensorWatcher& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0) {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Lorg/apache/http/conn/EofSensorWatcher;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::conn::EofSensorInputStream::read() const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::conn::EofSensorInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::conn::EofSensorInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::apache::http::conn::EofSensorInputStream::available() const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::conn::EofSensorInputStream::close() const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::EofSensorInputStream::releaseConnection() const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::EofSensorInputStream::abortConnection() const {
    if (!::org::apache::http::conn::EofSensorInputStream::_class) ::org::apache::http::conn::EofSensorInputStream::_class = java::fetch_class("org/apache/http/conn/EofSensorInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortConnection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::conn::MultihomePlainSocketFactory org::apache::http::conn::MultihomePlainSocketFactory::getSocketFactory(){
    if (!::org::apache::http::conn::MultihomePlainSocketFactory::_class) ::org::apache::http::conn::MultihomePlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/MultihomePlainSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSocketFactory", "()Lorg/apache/http/conn/MultihomePlainSocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::apache::http::conn::MultihomePlainSocketFactory _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::MultihomePlainSocketFactory::createSocket() const {
    if (!::org::apache::http::conn::MultihomePlainSocketFactory::_class) ::org::apache::http::conn::MultihomePlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/MultihomePlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::MultihomePlainSocketFactory::connectSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::net::InetAddress& arg3, int32_t arg4, const ::org::apache::http::params::HttpParams& arg5) const {
    if (!::org::apache::http::conn::MultihomePlainSocketFactory::_class) ::org::apache::http::conn::MultihomePlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/MultihomePlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectSocket", "(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::net::Socket _ret(ret);
    return _ret;
}

bool org::apache::http::conn::MultihomePlainSocketFactory::isSecure(const ::java::net::Socket& arg0) const {
    if (!::org::apache::http::conn::MultihomePlainSocketFactory::_class) ::org::apache::http::conn::MultihomePlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/MultihomePlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "(Ljava/net/Socket;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::MultihomePlainSocketFactory::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::conn::MultihomePlainSocketFactory::_class) ::org::apache::http::conn::MultihomePlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/MultihomePlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::conn::MultihomePlainSocketFactory::hashCode() const {
    if (!::org::apache::http::conn::MultihomePlainSocketFactory::_class) ::org::apache::http::conn::MultihomePlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/MultihomePlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::HttpHost org::apache::http::conn::OperatedClientConnection::getTargetHost() const {
    if (!::org::apache::http::conn::OperatedClientConnection::_class) ::org::apache::http::conn::OperatedClientConnection::_class = java::fetch_class("org/apache/http/conn/OperatedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetHost", "()Lorg/apache/http/HttpHost;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpHost _ret(ret);
    return _ret;
}

bool org::apache::http::conn::OperatedClientConnection::isSecure() const {
    if (!::org::apache::http::conn::OperatedClientConnection::_class) ::org::apache::http::conn::OperatedClientConnection::_class = java::fetch_class("org/apache/http/conn/OperatedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::Socket org::apache::http::conn::OperatedClientConnection::getSocket() const {
    if (!::org::apache::http::conn::OperatedClientConnection::_class) ::org::apache::http::conn::OperatedClientConnection::_class = java::fetch_class("org/apache/http/conn/OperatedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

void org::apache::http::conn::OperatedClientConnection::opening(const ::java::net::Socket& arg0, const ::org::apache::http::HttpHost& arg1) const {
    if (!::org::apache::http::conn::OperatedClientConnection::_class) ::org::apache::http::conn::OperatedClientConnection::_class = java::fetch_class("org/apache/http/conn/OperatedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "opening", "(Ljava/net/Socket;Lorg/apache/http/HttpHost;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::OperatedClientConnection::openCompleted(bool arg0, const ::org::apache::http::params::HttpParams& arg1) const {
    if (!::org::apache::http::conn::OperatedClientConnection::_class) ::org::apache::http::conn::OperatedClientConnection::_class = java::fetch_class("org/apache/http/conn/OperatedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "openCompleted", "(ZLorg/apache/http/params/HttpParams;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::OperatedClientConnection::update(const ::java::net::Socket& arg0, const ::org::apache::http::HttpHost& arg1, bool arg2, const ::org::apache::http::params::HttpParams& arg3) const {
    if (!::org::apache::http::conn::OperatedClientConnection::_class) ::org::apache::http::conn::OperatedClientConnection::_class = java::fetch_class("org/apache/http/conn/OperatedClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/net/Socket;Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::org::apache::http::conn::scheme::SchemeRegistry org::apache::http::conn::ClientConnectionManager::getSchemeRegistry() const {
    if (!::org::apache::http::conn::ClientConnectionManager::_class) ::org::apache::http::conn::ClientConnectionManager::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeRegistry", "()Lorg/apache/http/conn/scheme/SchemeRegistry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::scheme::SchemeRegistry _ret(ret);
    return _ret;
}

::org::apache::http::conn::ClientConnectionRequest org::apache::http::conn::ClientConnectionManager::requestConnection(const ::org::apache::http::conn::routing::HttpRoute& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::apache::http::conn::ClientConnectionManager::_class) ::org::apache::http::conn::ClientConnectionManager::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestConnection", "(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ClientConnectionRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::conn::ClientConnectionRequest _ret(ret);
    return _ret;
}

void org::apache::http::conn::ClientConnectionManager::releaseConnection(const ::org::apache::http::conn::ManagedClientConnection& arg0, int64_t arg1, const ::java::util::concurrent::TimeUnit& arg2) const {
    if (!::org::apache::http::conn::ClientConnectionManager::_class) ::org::apache::http::conn::ClientConnectionManager::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseConnection", "(Lorg/apache/http/conn/ManagedClientConnection;JLjava/util/concurrent/TimeUnit;)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::conn::ClientConnectionManager::closeIdleConnections(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::conn::ClientConnectionManager::_class) ::org::apache::http::conn::ClientConnectionManager::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeIdleConnections", "(JLjava/util/concurrent/TimeUnit;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ClientConnectionManager::closeExpiredConnections() const {
    if (!::org::apache::http::conn::ClientConnectionManager::_class) ::org::apache::http::conn::ClientConnectionManager::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeExpiredConnections", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::conn::ClientConnectionManager::shutdown() const {
    if (!::org::apache::http::conn::ClientConnectionManager::_class) ::org::apache::http::conn::ClientConnectionManager::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::conn::ManagedClientConnection org::apache::http::conn::ClientConnectionRequest::getConnection(int64_t arg0, const ::java::util::concurrent::TimeUnit& arg1) const {
    if (!::org::apache::http::conn::ClientConnectionRequest::_class) ::org::apache::http::conn::ClientConnectionRequest::_class = java::fetch_class("org/apache/http/conn/ClientConnectionRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "(JLjava/util/concurrent/TimeUnit;)Lorg/apache/http/conn/ManagedClientConnection;");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::conn::ManagedClientConnection _ret(ret);
    return _ret;
}

void org::apache::http::conn::ClientConnectionRequest::abortRequest() const {
    if (!::org::apache::http::conn::ClientConnectionRequest::_class) ::org::apache::http::conn::ClientConnectionRequest::_class = java::fetch_class("org/apache/http/conn/ClientConnectionRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortRequest", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::conn::ClientConnectionManager org::apache::http::conn::ClientConnectionManagerFactory::newInstance(const ::org::apache::http::params::HttpParams& arg0, const ::org::apache::http::conn::scheme::SchemeRegistry& arg1) const {
    if (!::org::apache::http::conn::ClientConnectionManagerFactory::_class) ::org::apache::http::conn::ClientConnectionManagerFactory::_class = java::fetch_class("org/apache/http/conn/ClientConnectionManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/scheme/SchemeRegistry;)Lorg/apache/http/conn/ClientConnectionManager;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::conn::ClientConnectionManager _ret(ret);
    return _ret;
}


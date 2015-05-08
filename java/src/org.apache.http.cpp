#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.InetAddress.hpp"
#include "java.util.Locale.hpp"
#include "org.apache.http.ConnectionClosedException.hpp"
#include "org.apache.http.ConnectionReuseStrategy.hpp"
#include "org.apache.http.FormattedHeader.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HeaderElement.hpp"
#include "org.apache.http.HeaderElementIterator.hpp"
#include "org.apache.http.HeaderIterator.hpp"
#include "org.apache.http.HttpClientConnection.hpp"
#include "org.apache.http.HttpConnection.hpp"
#include "org.apache.http.HttpConnectionMetrics.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.HttpException.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.HttpInetConnection.hpp"
#include "org.apache.http.HttpMessage.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.HttpRequestFactory.hpp"
#include "org.apache.http.HttpRequestInterceptor.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.HttpResponseFactory.hpp"
#include "org.apache.http.HttpResponseInterceptor.hpp"
#include "org.apache.http.HttpServerConnection.hpp"
#include "org.apache.http.HttpStatus.hpp"
#include "org.apache.http.HttpVersion.hpp"
#include "org.apache.http.MalformedChunkCodingException.hpp"
#include "org.apache.http.MethodNotSupportedException.hpp"
#include "org.apache.http.NameValuePair.hpp"
#include "org.apache.http.NoHttpResponseException.hpp"
#include "org.apache.http.ParseException.hpp"
#include "org.apache.http.ProtocolException.hpp"
#include "org.apache.http.ProtocolVersion.hpp"
#include "org.apache.http.ReasonPhraseCatalog.hpp"
#include "org.apache.http.RequestLine.hpp"
#include "org.apache.http.StatusLine.hpp"
#include "org.apache.http.TokenIterator.hpp"
#include "org.apache.http.UnsupportedHttpVersionException.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.protocol.HttpContext.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"

jclass org::apache::http::HttpConnection::_class = nullptr;
jclass org::apache::http::NameValuePair::_class = nullptr;
jclass org::apache::http::HttpServerConnection::_class = nullptr;
jclass org::apache::http::ProtocolVersion::_class = nullptr;
jclass org::apache::http::HttpResponseFactory::_class = nullptr;
jclass org::apache::http::HttpRequest::_class = nullptr;
jclass org::apache::http::ConnectionReuseStrategy::_class = nullptr;
jclass org::apache::http::NoHttpResponseException::_class = nullptr;
jclass org::apache::http::MethodNotSupportedException::_class = nullptr;
jclass org::apache::http::TokenIterator::_class = nullptr;
jclass org::apache::http::MalformedChunkCodingException::_class = nullptr;
jclass org::apache::http::UnsupportedHttpVersionException::_class = nullptr;
jclass org::apache::http::FormattedHeader::_class = nullptr;
jclass org::apache::http::HttpException::_class = nullptr;
jclass org::apache::http::HttpConnectionMetrics::_class = nullptr;
jclass org::apache::http::ProtocolException::_class = nullptr;
jclass org::apache::http::HttpVersion::_class = nullptr;
jclass org::apache::http::HttpMessage::_class = nullptr;
jclass org::apache::http::HttpRequestInterceptor::_class = nullptr;
jclass org::apache::http::RequestLine::_class = nullptr;
jclass org::apache::http::HttpEntity::_class = nullptr;
jclass org::apache::http::HttpInetConnection::_class = nullptr;
jclass org::apache::http::HeaderIterator::_class = nullptr;
jclass org::apache::http::HttpClientConnection::_class = nullptr;
jclass org::apache::http::ReasonPhraseCatalog::_class = nullptr;
jclass org::apache::http::HttpResponse::_class = nullptr;
jclass org::apache::http::HttpEntityEnclosingRequest::_class = nullptr;
jclass org::apache::http::Header::_class = nullptr;
jclass org::apache::http::HttpStatus::_class = nullptr;
jclass org::apache::http::StatusLine::_class = nullptr;
jclass org::apache::http::HeaderElementIterator::_class = nullptr;
jclass org::apache::http::ParseException::_class = nullptr;
jclass org::apache::http::HttpHost::_class = nullptr;
jclass org::apache::http::HttpResponseInterceptor::_class = nullptr;
jclass org::apache::http::HeaderElement::_class = nullptr;
jclass org::apache::http::HttpRequestFactory::_class = nullptr;
jclass org::apache::http::ConnectionClosedException::_class = nullptr;

void org::apache::http::HttpConnection::close() const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::HttpConnection::isOpen() const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::HttpConnection::isStale() const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStale", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::HttpConnection::setSocketTimeout(int32_t arg0) const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSocketTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::apache::http::HttpConnection::getSocketTimeout() const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::HttpConnection::shutdown() const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::HttpConnectionMetrics org::apache::http::HttpConnection::getMetrics() const {
    if (!::org::apache::http::HttpConnection::_class) ::org::apache::http::HttpConnection::_class = java::fetch_class("org/apache/http/HttpConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/HttpConnectionMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpConnectionMetrics _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::NameValuePair::getName() const {
    if (!::org::apache::http::NameValuePair::_class) ::org::apache::http::NameValuePair::_class = java::fetch_class("org/apache/http/NameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::NameValuePair::getValue() const {
    if (!::org::apache::http::NameValuePair::_class) ::org::apache::http::NameValuePair::_class = java::fetch_class("org/apache/http/NameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::HttpRequest org::apache::http::HttpServerConnection::receiveRequestHeader() const {
    if (!::org::apache::http::HttpServerConnection::_class) ::org::apache::http::HttpServerConnection::_class = java::fetch_class("org/apache/http/HttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveRequestHeader", "()Lorg/apache/http/HttpRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

void org::apache::http::HttpServerConnection::receiveRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest& arg0) const {
    if (!::org::apache::http::HttpServerConnection::_class) ::org::apache::http::HttpServerConnection::_class = java::fetch_class("org/apache/http/HttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveRequestEntity", "(Lorg/apache/http/HttpEntityEnclosingRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpServerConnection::sendResponseHeader(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::HttpServerConnection::_class) ::org::apache::http::HttpServerConnection::_class = java::fetch_class("org/apache/http/HttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendResponseHeader", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpServerConnection::sendResponseEntity(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::HttpServerConnection::_class) ::org::apache::http::HttpServerConnection::_class = java::fetch_class("org/apache/http/HttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendResponseEntity", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpServerConnection::flush() const {
    if (!::org::apache::http::HttpServerConnection::_class) ::org::apache::http::HttpServerConnection::_class = java::fetch_class("org/apache/http/HttpServerConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ProtocolVersion::ProtocolVersion(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::ProtocolVersion::getProtocol() const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::ProtocolVersion::getMajor() const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMajor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::ProtocolVersion::getMinor() const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::ProtocolVersion org::apache::http::ProtocolVersion::forVersion(int32_t arg0, int32_t arg1) const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "forVersion", "(II)Lorg/apache/http/ProtocolVersion;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

int32_t org::apache::http::ProtocolVersion::hashCode() const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::ProtocolVersion::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::ProtocolVersion::isComparable(const ::org::apache::http::ProtocolVersion& arg0) const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "isComparable", "(Lorg/apache/http/ProtocolVersion;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::ProtocolVersion::compareToVersion(const ::org::apache::http::ProtocolVersion& arg0) const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareToVersion", "(Lorg/apache/http/ProtocolVersion;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool org::apache::http::ProtocolVersion::greaterEquals(const ::org::apache::http::ProtocolVersion& arg0) const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "greaterEquals", "(Lorg/apache/http/ProtocolVersion;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::ProtocolVersion::lessEquals(const ::org::apache::http::ProtocolVersion& arg0) const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "lessEquals", "(Lorg/apache/http/ProtocolVersion;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::ProtocolVersion::toString() const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::ProtocolVersion::clone() const {
    if (!::org::apache::http::ProtocolVersion::_class) ::org::apache::http::ProtocolVersion::_class = java::fetch_class("org/apache/http/ProtocolVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::HttpResponseFactory::newHttpResponse(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1, const ::org::apache::http::protocol::HttpContext& arg2) const {
    if (!::org::apache::http::HttpResponseFactory::_class) ::org::apache::http::HttpResponseFactory::_class = java::fetch_class("org/apache/http/HttpResponseFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpResponse", "(Lorg/apache/http/ProtocolVersion;ILorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::HttpResponse org::apache::http::HttpResponseFactory::newHttpResponse(const ::org::apache::http::StatusLine& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::HttpResponseFactory::_class) ::org::apache::http::HttpResponseFactory::_class = java::fetch_class("org/apache/http/HttpResponseFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpResponse", "(Lorg/apache/http/StatusLine;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

::org::apache::http::RequestLine org::apache::http::HttpRequest::getRequestLine() const {
    if (!::org::apache::http::HttpRequest::_class) ::org::apache::http::HttpRequest::_class = java::fetch_class("org/apache/http/HttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestLine", "()Lorg/apache/http/RequestLine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

bool org::apache::http::ConnectionReuseStrategy::keepAlive(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::ConnectionReuseStrategy::_class) ::org::apache::http::ConnectionReuseStrategy::_class = java::fetch_class("org/apache/http/ConnectionReuseStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "keepAlive", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::NoHttpResponseException::NoHttpResponseException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::NoHttpResponseException::_class) ::org::apache::http::NoHttpResponseException::_class = java::fetch_class("org/apache/http/NoHttpResponseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::MethodNotSupportedException::MethodNotSupportedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {
    if (!::org::apache::http::MethodNotSupportedException::_class) ::org::apache::http::MethodNotSupportedException::_class = java::fetch_class("org/apache/http/MethodNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::MethodNotSupportedException::MethodNotSupportedException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {
    if (!::org::apache::http::MethodNotSupportedException::_class) ::org::apache::http::MethodNotSupportedException::_class = java::fetch_class("org/apache/http/MethodNotSupportedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::TokenIterator::hasNext() const {
    if (!::org::apache::http::TokenIterator::_class) ::org::apache::http::TokenIterator::_class = java::fetch_class("org/apache/http/TokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::TokenIterator::nextToken() const {
    if (!::org::apache::http::TokenIterator::_class) ::org::apache::http::TokenIterator::_class = java::fetch_class("org/apache/http/TokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextToken", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::MalformedChunkCodingException::MalformedChunkCodingException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::MalformedChunkCodingException::_class) ::org::apache::http::MalformedChunkCodingException::_class = java::fetch_class("org/apache/http/MalformedChunkCodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::MalformedChunkCodingException::MalformedChunkCodingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::MalformedChunkCodingException::_class) ::org::apache::http::MalformedChunkCodingException::_class = java::fetch_class("org/apache/http/MalformedChunkCodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::UnsupportedHttpVersionException::UnsupportedHttpVersionException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::UnsupportedHttpVersionException::_class) ::org::apache::http::UnsupportedHttpVersionException::_class = java::fetch_class("org/apache/http/UnsupportedHttpVersionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::UnsupportedHttpVersionException::UnsupportedHttpVersionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {
    if (!::org::apache::http::UnsupportedHttpVersionException::_class) ::org::apache::http::UnsupportedHttpVersionException::_class = java::fetch_class("org/apache/http/UnsupportedHttpVersionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::util::CharArrayBuffer org::apache::http::FormattedHeader::getBuffer() const {
    if (!::org::apache::http::FormattedHeader::_class) ::org::apache::http::FormattedHeader::_class = java::fetch_class("org/apache/http/FormattedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBuffer", "()Lorg/apache/http/util/CharArrayBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

int32_t org::apache::http::FormattedHeader::getValuePos() const {
    if (!::org::apache::http::FormattedHeader::_class) ::org::apache::http::FormattedHeader::_class = java::fetch_class("org/apache/http/FormattedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValuePos", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpException::HttpException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::HttpException::_class) ::org::apache::http::HttpException::_class = java::fetch_class("org/apache/http/HttpException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpException::HttpException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::HttpException::_class) ::org::apache::http::HttpException::_class = java::fetch_class("org/apache/http/HttpException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpException::HttpException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::HttpException::_class) ::org::apache::http::HttpException::_class = java::fetch_class("org/apache/http/HttpException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::HttpConnectionMetrics::getRequestCount() const {
    if (!::org::apache::http::HttpConnectionMetrics::_class) ::org::apache::http::HttpConnectionMetrics::_class = java::fetch_class("org/apache/http/HttpConnectionMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t org::apache::http::HttpConnectionMetrics::getResponseCount() const {
    if (!::org::apache::http::HttpConnectionMetrics::_class) ::org::apache::http::HttpConnectionMetrics::_class = java::fetch_class("org/apache/http/HttpConnectionMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t org::apache::http::HttpConnectionMetrics::getSentBytesCount() const {
    if (!::org::apache::http::HttpConnectionMetrics::_class) ::org::apache::http::HttpConnectionMetrics::_class = java::fetch_class("org/apache/http/HttpConnectionMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSentBytesCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t org::apache::http::HttpConnectionMetrics::getReceivedBytesCount() const {
    if (!::org::apache::http::HttpConnectionMetrics::_class) ::org::apache::http::HttpConnectionMetrics::_class = java::fetch_class("org/apache/http/HttpConnectionMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceivedBytesCount", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::Object org::apache::http::HttpConnectionMetrics::getMetric(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpConnectionMetrics::_class) ::org::apache::http::HttpConnectionMetrics::_class = java::fetch_class("org/apache/http/HttpConnectionMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetric", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::HttpConnectionMetrics::reset() const {
    if (!::org::apache::http::HttpConnectionMetrics::_class) ::org::apache::http::HttpConnectionMetrics::_class = java::fetch_class("org/apache/http/HttpConnectionMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ProtocolException::ProtocolException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {
    if (!::org::apache::http::ProtocolException::_class) ::org::apache::http::ProtocolException::_class = java::fetch_class("org/apache/http/ProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ProtocolException::ProtocolException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {
    if (!::org::apache::http::ProtocolException::_class) ::org::apache::http::ProtocolException::_class = java::fetch_class("org/apache/http/ProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ProtocolException::ProtocolException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {
    if (!::org::apache::http::ProtocolException::_class) ::org::apache::http::ProtocolException::_class = java::fetch_class("org/apache/http/ProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpVersion::HttpVersion(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::ProtocolVersion((jobject)0) {
    if (!::org::apache::http::HttpVersion::_class) ::org::apache::http::HttpVersion::_class = java::fetch_class("org/apache/http/HttpVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::apache::http::ProtocolVersion org::apache::http::HttpVersion::forVersion(int32_t arg0, int32_t arg1) const {
    if (!::org::apache::http::HttpVersion::_class) ::org::apache::http::HttpVersion::_class = java::fetch_class("org/apache/http/HttpVersion");
    static jmethodID mid = java::jni->GetMethodID(_class, "forVersion", "(II)Lorg/apache/http/ProtocolVersion;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::HttpMessage::getProtocolVersion() const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

bool org::apache::http::HttpMessage::containsHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsHeader", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::org::apache::http::Header> org::apache::http::HttpMessage::getHeaders(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaders", "(Ljava/lang/String;)[Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::Header> _ret(rets, ::org::apache::http::Header((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::Header retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::Header org::apache::http::HttpMessage::getFirstHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::HttpMessage::getLastHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::Header> org::apache::http::HttpMessage::getAllHeaders() const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllHeaders", "()[Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::Header> _ret(rets, ::org::apache::http::Header((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::Header retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void org::apache::http::HttpMessage::addHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpMessage::addHeader(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeader", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::HttpMessage::setHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpMessage::setHeader(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeader", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::HttpMessage::setHeaders(const std::vector< ::org::apache::http::Header>& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaders", "([Lorg/apache/http/Header;)V");
    unsigned arg0s = arg0.size();
    if (!::org::apache::http::Header::_class) ::org::apache::http::Header::_class = java::fetch_class("org/apache/http/Header");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::org::apache::http::Header::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::org::apache::http::Header& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpMessage::removeHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpMessage::removeHeaders(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeaders", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HeaderIterator org::apache::http::HttpMessage::headerIterator() const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "headerIterator", "()Lorg/apache/http/HeaderIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HeaderIterator _ret(ret);
    return _ret;
}

::org::apache::http::HeaderIterator org::apache::http::HttpMessage::headerIterator(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "headerIterator", "(Ljava/lang/String;)Lorg/apache/http/HeaderIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HeaderIterator _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::HttpMessage::getParams() const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

void org::apache::http::HttpMessage::setParams(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::HttpMessage::_class) ::org::apache::http::HttpMessage::_class = java::fetch_class("org/apache/http/HttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParams", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpRequestInterceptor::process(const ::org::apache::http::HttpRequest& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::HttpRequestInterceptor::_class) ::org::apache::http::HttpRequestInterceptor::_class = java::fetch_class("org/apache/http/HttpRequestInterceptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::RequestLine::getMethod() const {
    if (!::org::apache::http::RequestLine::_class) ::org::apache::http::RequestLine::_class = java::fetch_class("org/apache/http/RequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::RequestLine::getProtocolVersion() const {
    if (!::org::apache::http::RequestLine::_class) ::org::apache::http::RequestLine::_class = java::fetch_class("org/apache/http/RequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::RequestLine::getUri() const {
    if (!::org::apache::http::RequestLine::_class) ::org::apache::http::RequestLine::_class = java::fetch_class("org/apache/http/RequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::HttpEntity::isRepeatable() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::HttpEntity::isChunked() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChunked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t org::apache::http::HttpEntity::getContentLength() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::HttpEntity::getContentType() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentType", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::HttpEntity::getContentEncoding() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentEncoding", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::java::io::InputStream org::apache::http::HttpEntity::getContent() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::HttpEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::HttpEntity::isStreaming() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::HttpEntity::consumeContent() const {
    if (!::org::apache::http::HttpEntity::_class) ::org::apache::http::HttpEntity::_class = java::fetch_class("org/apache/http/HttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::HttpInetConnection::getLocalAddress() const {
    if (!::org::apache::http::HttpInetConnection::_class) ::org::apache::http::HttpInetConnection::_class = java::fetch_class("org/apache/http/HttpInetConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::HttpInetConnection::getLocalPort() const {
    if (!::org::apache::http::HttpInetConnection::_class) ::org::apache::http::HttpInetConnection::_class = java::fetch_class("org/apache/http/HttpInetConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::InetAddress org::apache::http::HttpInetConnection::getRemoteAddress() const {
    if (!::org::apache::http::HttpInetConnection::_class) ::org::apache::http::HttpInetConnection::_class = java::fetch_class("org/apache/http/HttpInetConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t org::apache::http::HttpInetConnection::getRemotePort() const {
    if (!::org::apache::http::HttpInetConnection::_class) ::org::apache::http::HttpInetConnection::_class = java::fetch_class("org/apache/http/HttpInetConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemotePort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::apache::http::HeaderIterator::hasNext() const {
    if (!::org::apache::http::HeaderIterator::_class) ::org::apache::http::HeaderIterator::_class = java::fetch_class("org/apache/http/HeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::HeaderIterator::nextHeader() const {
    if (!::org::apache::http::HeaderIterator::_class) ::org::apache::http::HeaderIterator::_class = java::fetch_class("org/apache/http/HeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

bool org::apache::http::HttpClientConnection::isResponseAvailable(int32_t arg0) const {
    if (!::org::apache::http::HttpClientConnection::_class) ::org::apache::http::HttpClientConnection::_class = java::fetch_class("org/apache/http/HttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isResponseAvailable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::apache::http::HttpClientConnection::sendRequestHeader(const ::org::apache::http::HttpRequest& arg0) const {
    if (!::org::apache::http::HttpClientConnection::_class) ::org::apache::http::HttpClientConnection::_class = java::fetch_class("org/apache/http/HttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestHeader", "(Lorg/apache/http/HttpRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpClientConnection::sendRequestEntity(const ::org::apache::http::HttpEntityEnclosingRequest& arg0) const {
    if (!::org::apache::http::HttpClientConnection::_class) ::org::apache::http::HttpClientConnection::_class = java::fetch_class("org/apache/http/HttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendRequestEntity", "(Lorg/apache/http/HttpEntityEnclosingRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HttpResponse org::apache::http::HttpClientConnection::receiveResponseHeader() const {
    if (!::org::apache::http::HttpClientConnection::_class) ::org::apache::http::HttpClientConnection::_class = java::fetch_class("org/apache/http/HttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseHeader", "()Lorg/apache/http/HttpResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpResponse _ret(ret);
    return _ret;
}

void org::apache::http::HttpClientConnection::receiveResponseEntity(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::HttpClientConnection::_class) ::org::apache::http::HttpClientConnection::_class = java::fetch_class("org/apache/http/HttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "receiveResponseEntity", "(Lorg/apache/http/HttpResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpClientConnection::flush() const {
    if (!::org::apache::http::HttpClientConnection::_class) ::org::apache::http::HttpClientConnection::_class = java::fetch_class("org/apache/http/HttpClientConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String org::apache::http::ReasonPhraseCatalog::getReason(int32_t arg0, const ::java::util::Locale& arg1) const {
    if (!::org::apache::http::ReasonPhraseCatalog::_class) ::org::apache::http::ReasonPhraseCatalog::_class = java::fetch_class("org/apache/http/ReasonPhraseCatalog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReason", "(ILjava/util/Locale;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::StatusLine org::apache::http::HttpResponse::getStatusLine() const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusLine", "()Lorg/apache/http/StatusLine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::StatusLine _ret(ret);
    return _ret;
}

void org::apache::http::HttpResponse::setStatusLine(const ::org::apache::http::StatusLine& arg0) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusLine", "(Lorg/apache/http/StatusLine;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpResponse::setStatusLine(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusLine", "(Lorg/apache/http/ProtocolVersion;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::HttpResponse::setStatusLine(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusLine", "(Lorg/apache/http/ProtocolVersion;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::HttpResponse::setStatusCode(int32_t arg0) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusCode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::HttpResponse::setReasonPhrase(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReasonPhrase", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HttpEntity org::apache::http::HttpResponse::getEntity() const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntity", "()Lorg/apache/http/HttpEntity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

void org::apache::http::HttpResponse::setEntity(const ::org::apache::http::HttpEntity& arg0) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntity", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Locale org::apache::http::HttpResponse::getLocale() const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

void org::apache::http::HttpResponse::setLocale(const ::java::util::Locale& arg0) const {
    if (!::org::apache::http::HttpResponse::_class) ::org::apache::http::HttpResponse::_class = java::fetch_class("org/apache/http/HttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocale", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::HttpEntityEnclosingRequest::expectContinue() const {
    if (!::org::apache::http::HttpEntityEnclosingRequest::_class) ::org::apache::http::HttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/HttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "expectContinue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::HttpEntityEnclosingRequest::setEntity(const ::org::apache::http::HttpEntity& arg0) const {
    if (!::org::apache::http::HttpEntityEnclosingRequest::_class) ::org::apache::http::HttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/HttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntity", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HttpEntity org::apache::http::HttpEntityEnclosingRequest::getEntity() const {
    if (!::org::apache::http::HttpEntityEnclosingRequest::_class) ::org::apache::http::HttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/HttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntity", "()Lorg/apache/http/HttpEntity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::Header::getName() const {
    if (!::org::apache::http::Header::_class) ::org::apache::http::Header::_class = java::fetch_class("org/apache/http/Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::Header::getValue() const {
    if (!::org::apache::http::Header::_class) ::org::apache::http::Header::_class = java::fetch_class("org/apache/http/Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::HeaderElement> org::apache::http::Header::getElements() const {
    if (!::org::apache::http::Header::_class) ::org::apache::http::Header::_class = java::fetch_class("org/apache/http/Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElements", "()[Lorg/apache/http/HeaderElement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::HeaderElement> _ret(rets, ::org::apache::http::HeaderElement((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::HeaderElement retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::StatusLine::getProtocolVersion() const {
    if (!::org::apache::http::StatusLine::_class) ::org::apache::http::StatusLine::_class = java::fetch_class("org/apache/http/StatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

int32_t org::apache::http::StatusLine::getStatusCode() const {
    if (!::org::apache::http::StatusLine::_class) ::org::apache::http::StatusLine::_class = java::fetch_class("org/apache/http/StatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::apache::http::StatusLine::getReasonPhrase() const {
    if (!::org::apache::http::StatusLine::_class) ::org::apache::http::StatusLine::_class = java::fetch_class("org/apache/http/StatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReasonPhrase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::HeaderElementIterator::hasNext() const {
    if (!::org::apache::http::HeaderElementIterator::_class) ::org::apache::http::HeaderElementIterator::_class = java::fetch_class("org/apache/http/HeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::HeaderElement org::apache::http::HeaderElementIterator::nextElement() const {
    if (!::org::apache::http::HeaderElementIterator::_class) ::org::apache::http::HeaderElementIterator::_class = java::fetch_class("org/apache/http/HeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextElement", "()Lorg/apache/http/HeaderElement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HeaderElement _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ParseException::ParseException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::ParseException::_class) ::org::apache::http::ParseException::_class = java::fetch_class("org/apache/http/ParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ParseException::ParseException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::ParseException::_class) ::org::apache::http::ParseException::_class = java::fetch_class("org/apache/http/ParseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpHost::HttpHost(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpHost::HttpHost(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::HttpHost::HttpHost(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::HttpHost::getHostName() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHostName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::apache::http::HttpHost::getPort() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::apache::http::HttpHost::getSchemeName() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::HttpHost::toURI() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "toURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::HttpHost::toHostString() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "toHostString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::HttpHost::toString() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::HttpHost::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::HttpHost::hashCode() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object org::apache::http::HttpHost::clone() const {
    if (!::org::apache::http::HttpHost::_class) ::org::apache::http::HttpHost::_class = java::fetch_class("org/apache/http/HttpHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::HttpResponseInterceptor::process(const ::org::apache::http::HttpResponse& arg0, const ::org::apache::http::protocol::HttpContext& arg1) const {
    if (!::org::apache::http::HttpResponseInterceptor::_class) ::org::apache::http::HttpResponseInterceptor::_class = java::fetch_class("org/apache/http/HttpResponseInterceptor");
    static jmethodID mid = java::jni->GetMethodID(_class, "process", "(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::HeaderElement::getName() const {
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::HeaderElement::getValue() const {
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::NameValuePair> org::apache::http::HeaderElement::getParameters() const {
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()[Lorg/apache/http/NameValuePair;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::NameValuePair> _ret(rets, ::org::apache::http::NameValuePair((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::NameValuePair retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::NameValuePair org::apache::http::HeaderElement::getParameterByName(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterByName", "(Ljava/lang/String;)Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

int32_t org::apache::http::HeaderElement::getParameterCount() const {
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::NameValuePair org::apache::http::HeaderElement::getParameter(int32_t arg0) const {
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(I)Lorg/apache/http/NameValuePair;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

::org::apache::http::HttpRequest org::apache::http::HttpRequestFactory::newHttpRequest(const ::org::apache::http::RequestLine& arg0) const {
    if (!::org::apache::http::HttpRequestFactory::_class) ::org::apache::http::HttpRequestFactory::_class = java::fetch_class("org/apache/http/HttpRequestFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpRequest", "(Lorg/apache/http/RequestLine;)Lorg/apache/http/HttpRequest;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

::org::apache::http::HttpRequest org::apache::http::HttpRequestFactory::newHttpRequest(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::HttpRequestFactory::_class) ::org::apache::http::HttpRequestFactory::_class = java::fetch_class("org/apache/http/HttpRequestFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "newHttpRequest", "(Ljava/lang/String;Ljava/lang/String;)Lorg/apache/http/HttpRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HttpRequest _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::ConnectionClosedException::ConnectionClosedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::apache::http::ConnectionClosedException::_class) ::org::apache::http::ConnectionClosedException::_class = java::fetch_class("org/apache/http/ConnectionClosedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop


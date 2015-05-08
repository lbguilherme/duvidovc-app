#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.URI.hpp"
#include "java.util.Set.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.ProtocolVersion.hpp"
#include "org.apache.http.RequestLine.hpp"
#include "org.apache.http.client.methods.AbortableHttpRequest.hpp"
#include "org.apache.http.client.methods.HttpDelete.hpp"
#include "org.apache.http.client.methods.HttpEntityEnclosingRequestBase.hpp"
#include "org.apache.http.client.methods.HttpGet.hpp"
#include "org.apache.http.client.methods.HttpHead.hpp"
#include "org.apache.http.client.methods.HttpOptions.hpp"
#include "org.apache.http.client.methods.HttpPost.hpp"
#include "org.apache.http.client.methods.HttpPut.hpp"
#include "org.apache.http.client.methods.HttpRequestBase.hpp"
#include "org.apache.http.client.methods.HttpTrace.hpp"
#include "org.apache.http.client.methods.HttpUriRequest.hpp"
#include "org.apache.http.conn.ClientConnectionRequest.hpp"
#include "org.apache.http.conn.ConnectionReleaseTrigger.hpp"

jclass org::apache::http::client::methods::HttpRequestBase::_class = nullptr;
jclass org::apache::http::client::methods::HttpUriRequest::_class = nullptr;
jclass org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class = nullptr;
jclass org::apache::http::client::methods::HttpOptions::_class = nullptr;
jclass org::apache::http::client::methods::HttpPut::_class = nullptr;
jclass org::apache::http::client::methods::HttpDelete::_class = nullptr;
jclass org::apache::http::client::methods::HttpHead::_class = nullptr;
jclass org::apache::http::client::methods::HttpPost::_class = nullptr;
jclass org::apache::http::client::methods::AbortableHttpRequest::_class = nullptr;
jclass org::apache::http::client::methods::HttpGet::_class = nullptr;
jclass org::apache::http::client::methods::HttpTrace::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpRequestBase::HttpRequestBase() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpRequestBase::getMethod() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::client::methods::HttpRequestBase::getProtocolVersion() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::java::net::URI org::apache::http::client::methods::HttpRequestBase::getURI() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

::org::apache::http::RequestLine org::apache::http::client::methods::HttpRequestBase::getRequestLine() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestLine", "()Lorg/apache/http/RequestLine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

void org::apache::http::client::methods::HttpRequestBase::setURI(const ::java::net::URI& arg0) const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setURI", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::methods::HttpRequestBase::setConnectionRequest(const ::org::apache::http::conn::ClientConnectionRequest& arg0) const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectionRequest", "(Lorg/apache/http/conn/ClientConnectionRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::methods::HttpRequestBase::setReleaseTrigger(const ::org::apache::http::conn::ConnectionReleaseTrigger& arg0) const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReleaseTrigger", "(Lorg/apache/http/conn/ConnectionReleaseTrigger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::methods::HttpRequestBase::abort() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::client::methods::HttpRequestBase::isAborted() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAborted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object org::apache::http::client::methods::HttpRequestBase::clone() const {
    if (!::org::apache::http::client::methods::HttpRequestBase::_class) ::org::apache::http::client::methods::HttpRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::client::methods::HttpUriRequest::getMethod() const {
    if (!::org::apache::http::client::methods::HttpUriRequest::_class) ::org::apache::http::client::methods::HttpUriRequest::_class = java::fetch_class("org/apache/http/client/methods/HttpUriRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::URI org::apache::http::client::methods::HttpUriRequest::getURI() const {
    if (!::org::apache::http::client::methods::HttpUriRequest::_class) ::org::apache::http::client::methods::HttpUriRequest::_class = java::fetch_class("org/apache/http/client/methods/HttpUriRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURI", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

void org::apache::http::client::methods::HttpUriRequest::abort() const {
    if (!::org::apache::http::client::methods::HttpUriRequest::_class) ::org::apache::http::client::methods::HttpUriRequest::_class = java::fetch_class("org/apache/http/client/methods/HttpUriRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::apache::http::client::methods::HttpUriRequest::isAborted() const {
    if (!::org::apache::http::client::methods::HttpUriRequest::_class) ::org::apache::http::client::methods::HttpUriRequest::_class = java::fetch_class("org/apache/http/client/methods/HttpUriRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAborted", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::HttpEntityEnclosingRequestBase() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class) ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpEntityEnclosingRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpEntity org::apache::http::client::methods::HttpEntityEnclosingRequestBase::getEntity() const {
    if (!::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class) ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpEntityEnclosingRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntity", "()Lorg/apache/http/HttpEntity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

void org::apache::http::client::methods::HttpEntityEnclosingRequestBase::setEntity(const ::org::apache::http::HttpEntity& arg0) const {
    if (!::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class) ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpEntityEnclosingRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntity", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::client::methods::HttpEntityEnclosingRequestBase::expectContinue() const {
    if (!::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class) ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpEntityEnclosingRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "expectContinue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object org::apache::http::client::methods::HttpEntityEnclosingRequestBase::clone() const {
    if (!::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class) ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase::_class = java::fetch_class("org/apache/http/client/methods/HttpEntityEnclosingRequestBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpOptions::HttpOptions() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpOptions::_class) ::org::apache::http::client::methods::HttpOptions::_class = java::fetch_class("org/apache/http/client/methods/HttpOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpOptions::HttpOptions(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpOptions::_class) ::org::apache::http::client::methods::HttpOptions::_class = java::fetch_class("org/apache/http/client/methods/HttpOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpOptions::HttpOptions(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpOptions::_class) ::org::apache::http::client::methods::HttpOptions::_class = java::fetch_class("org/apache/http/client/methods/HttpOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpOptions::getMethod() const {
    if (!::org::apache::http::client::methods::HttpOptions::_class) ::org::apache::http::client::methods::HttpOptions::_class = java::fetch_class("org/apache/http/client/methods/HttpOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Set org::apache::http::client::methods::HttpOptions::getAllowedMethods(const ::org::apache::http::HttpResponse& arg0) const {
    if (!::org::apache::http::client::methods::HttpOptions::_class) ::org::apache::http::client::methods::HttpOptions::_class = java::fetch_class("org/apache/http/client/methods/HttpOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowedMethods", "(Lorg/apache/http/HttpResponse;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpPut::HttpPut() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpPut::_class) ::org::apache::http::client::methods::HttpPut::_class = java::fetch_class("org/apache/http/client/methods/HttpPut");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpPut::HttpPut(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpPut::_class) ::org::apache::http::client::methods::HttpPut::_class = java::fetch_class("org/apache/http/client/methods/HttpPut");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpPut::HttpPut(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpPut::_class) ::org::apache::http::client::methods::HttpPut::_class = java::fetch_class("org/apache/http/client/methods/HttpPut");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpPut::getMethod() const {
    if (!::org::apache::http::client::methods::HttpPut::_class) ::org::apache::http::client::methods::HttpPut::_class = java::fetch_class("org/apache/http/client/methods/HttpPut");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpDelete::HttpDelete() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpDelete::_class) ::org::apache::http::client::methods::HttpDelete::_class = java::fetch_class("org/apache/http/client/methods/HttpDelete");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpDelete::HttpDelete(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpDelete::_class) ::org::apache::http::client::methods::HttpDelete::_class = java::fetch_class("org/apache/http/client/methods/HttpDelete");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpDelete::HttpDelete(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpDelete::_class) ::org::apache::http::client::methods::HttpDelete::_class = java::fetch_class("org/apache/http/client/methods/HttpDelete");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpDelete::getMethod() const {
    if (!::org::apache::http::client::methods::HttpDelete::_class) ::org::apache::http::client::methods::HttpDelete::_class = java::fetch_class("org/apache/http/client/methods/HttpDelete");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpHead::HttpHead() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpHead::_class) ::org::apache::http::client::methods::HttpHead::_class = java::fetch_class("org/apache/http/client/methods/HttpHead");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpHead::HttpHead(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpHead::_class) ::org::apache::http::client::methods::HttpHead::_class = java::fetch_class("org/apache/http/client/methods/HttpHead");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpHead::HttpHead(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpHead::_class) ::org::apache::http::client::methods::HttpHead::_class = java::fetch_class("org/apache/http/client/methods/HttpHead");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpHead::getMethod() const {
    if (!::org::apache::http::client::methods::HttpHead::_class) ::org::apache::http::client::methods::HttpHead::_class = java::fetch_class("org/apache/http/client/methods/HttpHead");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpPost::HttpPost() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpPost::_class) ::org::apache::http::client::methods::HttpPost::_class = java::fetch_class("org/apache/http/client/methods/HttpPost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpPost::HttpPost(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpPost::_class) ::org::apache::http::client::methods::HttpPost::_class = java::fetch_class("org/apache/http/client/methods/HttpPost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpPost::HttpPost(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpPost::_class) ::org::apache::http::client::methods::HttpPost::_class = java::fetch_class("org/apache/http/client/methods/HttpPost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpPost::getMethod() const {
    if (!::org::apache::http::client::methods::HttpPost::_class) ::org::apache::http::client::methods::HttpPost::_class = java::fetch_class("org/apache/http/client/methods/HttpPost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::apache::http::client::methods::AbortableHttpRequest::setConnectionRequest(const ::org::apache::http::conn::ClientConnectionRequest& arg0) const {
    if (!::org::apache::http::client::methods::AbortableHttpRequest::_class) ::org::apache::http::client::methods::AbortableHttpRequest::_class = java::fetch_class("org/apache/http/client/methods/AbortableHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectionRequest", "(Lorg/apache/http/conn/ClientConnectionRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::methods::AbortableHttpRequest::setReleaseTrigger(const ::org::apache::http::conn::ConnectionReleaseTrigger& arg0) const {
    if (!::org::apache::http::client::methods::AbortableHttpRequest::_class) ::org::apache::http::client::methods::AbortableHttpRequest::_class = java::fetch_class("org/apache/http/client/methods/AbortableHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReleaseTrigger", "(Lorg/apache/http/conn/ConnectionReleaseTrigger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::client::methods::AbortableHttpRequest::abort() const {
    if (!::org::apache::http::client::methods::AbortableHttpRequest::_class) ::org::apache::http::client::methods::AbortableHttpRequest::_class = java::fetch_class("org/apache/http/client/methods/AbortableHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpGet::HttpGet() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpGet::_class) ::org::apache::http::client::methods::HttpGet::_class = java::fetch_class("org/apache/http/client/methods/HttpGet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpGet::HttpGet(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpGet::_class) ::org::apache::http::client::methods::HttpGet::_class = java::fetch_class("org/apache/http/client/methods/HttpGet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpGet::HttpGet(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpGet::_class) ::org::apache::http::client::methods::HttpGet::_class = java::fetch_class("org/apache/http/client/methods/HttpGet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpGet::getMethod() const {
    if (!::org::apache::http::client::methods::HttpGet::_class) ::org::apache::http::client::methods::HttpGet::_class = java::fetch_class("org/apache/http/client/methods/HttpGet");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpTrace::HttpTrace() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpTrace::_class) ::org::apache::http::client::methods::HttpTrace::_class = java::fetch_class("org/apache/http/client/methods/HttpTrace");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpTrace::HttpTrace(const ::java::net::URI& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpTrace::_class) ::org::apache::http::client::methods::HttpTrace::_class = java::fetch_class("org/apache/http/client/methods/HttpTrace");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URI;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::client::methods::HttpTrace::HttpTrace(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::client::methods::HttpTrace::_class) ::org::apache::http::client::methods::HttpTrace::_class = java::fetch_class("org/apache/http/client/methods/HttpTrace");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::client::methods::HttpTrace::getMethod() const {
    if (!::org::apache::http::client::methods::HttpTrace::_class) ::org::apache::http::client::methods::HttpTrace::_class = java::fetch_class("org/apache/http/client/methods/HttpTrace");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}


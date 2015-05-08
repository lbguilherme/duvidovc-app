#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.Locale.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HeaderElement.hpp"
#include "org.apache.http.HeaderIterator.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.NameValuePair.hpp"
#include "org.apache.http.ProtocolVersion.hpp"
#include "org.apache.http.ReasonPhraseCatalog.hpp"
#include "org.apache.http.RequestLine.hpp"
#include "org.apache.http.StatusLine.hpp"
#include "org.apache.http.message.AbstractHttpMessage.hpp"
#include "org.apache.http.message.BasicHeader.hpp"
#include "org.apache.http.message.BasicHeaderElement.hpp"
#include "org.apache.http.message.BasicHeaderElementIterator.hpp"
#include "org.apache.http.message.BasicHeaderIterator.hpp"
#include "org.apache.http.message.BasicHeaderValueFormatter.hpp"
#include "org.apache.http.message.BasicHeaderValueParser.hpp"
#include "org.apache.http.message.BasicHttpEntityEnclosingRequest.hpp"
#include "org.apache.http.message.BasicHttpRequest.hpp"
#include "org.apache.http.message.BasicHttpResponse.hpp"
#include "org.apache.http.message.BasicLineFormatter.hpp"
#include "org.apache.http.message.BasicLineParser.hpp"
#include "org.apache.http.message.BasicListHeaderIterator.hpp"
#include "org.apache.http.message.BasicNameValuePair.hpp"
#include "org.apache.http.message.BasicRequestLine.hpp"
#include "org.apache.http.message.BasicStatusLine.hpp"
#include "org.apache.http.message.BasicTokenIterator.hpp"
#include "org.apache.http.message.BufferedHeader.hpp"
#include "org.apache.http.message.HeaderGroup.hpp"
#include "org.apache.http.message.HeaderValueFormatter.hpp"
#include "org.apache.http.message.HeaderValueParser.hpp"
#include "org.apache.http.message.LineFormatter.hpp"
#include "org.apache.http.message.LineParser.hpp"
#include "org.apache.http.message.ParserCursor.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"

jclass org::apache::http::message::BasicNameValuePair::_class = nullptr;
jclass org::apache::http::message::BasicTokenIterator::_class = nullptr;
jclass org::apache::http::message::HeaderGroup::_class = nullptr;
jclass org::apache::http::message::BasicHttpResponse::_class = nullptr;
jclass org::apache::http::message::LineFormatter::_class = nullptr;
jclass org::apache::http::message::HeaderValueFormatter::_class = nullptr;
jclass org::apache::http::message::BasicHttpRequest::_class = nullptr;
jclass org::apache::http::message::BasicHeaderElement::_class = nullptr;
jclass org::apache::http::message::AbstractHttpMessage::_class = nullptr;
jclass org::apache::http::message::BasicLineParser::_class = nullptr;
jclass org::apache::http::message::BasicHeader::_class = nullptr;
jclass org::apache::http::message::BasicListHeaderIterator::_class = nullptr;
jclass org::apache::http::message::ParserCursor::_class = nullptr;
jclass org::apache::http::message::BasicHeaderValueFormatter::_class = nullptr;
jclass org::apache::http::message::BasicLineFormatter::_class = nullptr;
jclass org::apache::http::message::HeaderValueParser::_class = nullptr;
jclass org::apache::http::message::BasicHeaderIterator::_class = nullptr;
jclass org::apache::http::message::BasicHeaderValueParser::_class = nullptr;
jclass org::apache::http::message::LineParser::_class = nullptr;
jclass org::apache::http::message::BasicHeaderElementIterator::_class = nullptr;
jclass org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = nullptr;
jclass org::apache::http::message::BasicStatusLine::_class = nullptr;
jclass org::apache::http::message::BasicRequestLine::_class = nullptr;
jclass org::apache::http::message::BufferedHeader::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicNameValuePair::BasicNameValuePair(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::NameValuePair((jobject)0) {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BasicNameValuePair::getName() const {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicNameValuePair::getValue() const {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicNameValuePair::toString() const {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::message::BasicNameValuePair::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::message::BasicNameValuePair::hashCode() const {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object org::apache::http::message::BasicNameValuePair::clone() const {
    if (!::org::apache::http::message::BasicNameValuePair::_class) ::org::apache::http::message::BasicNameValuePair::_class = java::fetch_class("org/apache/http/message/BasicNameValuePair");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicTokenIterator::BasicTokenIterator(const ::org::apache::http::HeaderIterator& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::TokenIterator((jobject)0) {
    if (!::org::apache::http::message::BasicTokenIterator::_class) ::org::apache::http::message::BasicTokenIterator::_class = java::fetch_class("org/apache/http/message/BasicTokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HeaderIterator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::message::BasicTokenIterator::hasNext() const {
    if (!::org::apache::http::message::BasicTokenIterator::_class) ::org::apache::http::message::BasicTokenIterator::_class = java::fetch_class("org/apache/http/message/BasicTokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::message::BasicTokenIterator::nextToken() const {
    if (!::org::apache::http::message::BasicTokenIterator::_class) ::org::apache::http::message::BasicTokenIterator::_class = java::fetch_class("org/apache/http/message/BasicTokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextToken", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicTokenIterator::next() const {
    if (!::org::apache::http::message::BasicTokenIterator::_class) ::org::apache::http::message::BasicTokenIterator::_class = java::fetch_class("org/apache/http/message/BasicTokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::message::BasicTokenIterator::remove() const {
    if (!::org::apache::http::message::BasicTokenIterator::_class) ::org::apache::http::message::BasicTokenIterator::_class = java::fetch_class("org/apache/http/message/BasicTokenIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::HeaderGroup::HeaderGroup() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::message::HeaderGroup::clear() const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::message::HeaderGroup::addHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::HeaderGroup::removeHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::HeaderGroup::updateHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::HeaderGroup::setHeaders(const std::vector< ::org::apache::http::Header>& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
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

::org::apache::http::Header org::apache::http::message::HeaderGroup::getCondensedHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCondensedHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::Header> org::apache::http::message::HeaderGroup::getHeaders(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
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

::org::apache::http::Header org::apache::http::message::HeaderGroup::getFirstHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::message::HeaderGroup::getLastHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::Header> org::apache::http::message::HeaderGroup::getAllHeaders() const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
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

bool org::apache::http::message::HeaderGroup::containsHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsHeader", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::apache::http::HeaderIterator org::apache::http::message::HeaderGroup::iterator() const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Lorg/apache/http/HeaderIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HeaderIterator _ret(ret);
    return _ret;
}

::org::apache::http::HeaderIterator org::apache::http::message::HeaderGroup::iterator(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "(Ljava/lang/String;)Lorg/apache/http/HeaderIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HeaderIterator _ret(ret);
    return _ret;
}

::org::apache::http::message::HeaderGroup org::apache::http::message::HeaderGroup::copy() const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "copy", "()Lorg/apache/http/message/HeaderGroup;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::message::HeaderGroup _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::HeaderGroup::clone() const {
    if (!::org::apache::http::message::HeaderGroup::_class) ::org::apache::http::message::HeaderGroup::_class = java::fetch_class("org/apache/http/message/HeaderGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpResponse::BasicHttpResponse(const ::org::apache::http::StatusLine& arg0, const ::org::apache::http::ReasonPhraseCatalog& arg1, const ::java::util::Locale& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpResponse((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/StatusLine;Lorg/apache/http/ReasonPhraseCatalog;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpResponse::BasicHttpResponse(const ::org::apache::http::StatusLine& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpResponse((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/StatusLine;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpResponse::BasicHttpResponse(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpResponse((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/ProtocolVersion;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::org::apache::http::ProtocolVersion org::apache::http::message::BasicHttpResponse::getProtocolVersion() const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::org::apache::http::StatusLine org::apache::http::message::BasicHttpResponse::getStatusLine() const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusLine", "()Lorg/apache/http/StatusLine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::StatusLine _ret(ret);
    return _ret;
}

::org::apache::http::HttpEntity org::apache::http::message::BasicHttpResponse::getEntity() const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntity", "()Lorg/apache/http/HttpEntity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

::java::util::Locale org::apache::http::message::BasicHttpResponse::getLocale() const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

void org::apache::http::message::BasicHttpResponse::setStatusLine(const ::org::apache::http::StatusLine& arg0) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusLine", "(Lorg/apache/http/StatusLine;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::BasicHttpResponse::setStatusLine(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusLine", "(Lorg/apache/http/ProtocolVersion;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::message::BasicHttpResponse::setStatusLine(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusLine", "(Lorg/apache/http/ProtocolVersion;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::message::BasicHttpResponse::setStatusCode(int32_t arg0) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusCode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::BasicHttpResponse::setReasonPhrase(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReasonPhrase", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::BasicHttpResponse::setEntity(const ::org::apache::http::HttpEntity& arg0) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntity", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::BasicHttpResponse::setLocale(const ::java::util::Locale& arg0) const {
    if (!::org::apache::http::message::BasicHttpResponse::_class) ::org::apache::http::message::BasicHttpResponse::_class = java::fetch_class("org/apache/http/message/BasicHttpResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocale", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::LineFormatter::appendProtocolVersion(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::ProtocolVersion& arg1) const {
    if (!::org::apache::http::message::LineFormatter::_class) ::org::apache::http::message::LineFormatter::_class = java::fetch_class("org/apache/http/message/LineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendProtocolVersion", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/ProtocolVersion;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::LineFormatter::formatRequestLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::RequestLine& arg1) const {
    if (!::org::apache::http::message::LineFormatter::_class) ::org::apache::http::message::LineFormatter::_class = java::fetch_class("org/apache/http/message/LineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatRequestLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/RequestLine;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::LineFormatter::formatStatusLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::StatusLine& arg1) const {
    if (!::org::apache::http::message::LineFormatter::_class) ::org::apache::http::message::LineFormatter::_class = java::fetch_class("org/apache/http/message/LineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatStatusLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/StatusLine;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::LineFormatter::formatHeader(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::Header& arg1) const {
    if (!::org::apache::http::message::LineFormatter::_class) ::org::apache::http::message::LineFormatter::_class = java::fetch_class("org/apache/http/message/LineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatHeader", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/Header;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::HeaderValueFormatter::formatElements(const ::org::apache::http::util::CharArrayBuffer& arg0, const std::vector< ::org::apache::http::HeaderElement>& arg1, bool arg2) const {
    if (!::org::apache::http::message::HeaderValueFormatter::_class) ::org::apache::http::message::HeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/HeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatElements", "(Lorg/apache/http/util/CharArrayBuffer;[Lorg/apache/http/HeaderElement;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::org::apache::http::HeaderElement::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::org::apache::http::HeaderElement& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::HeaderValueFormatter::formatHeaderElement(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::HeaderElement& arg1, bool arg2) const {
    if (!::org::apache::http::message::HeaderValueFormatter::_class) ::org::apache::http::message::HeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/HeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatHeaderElement", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/HeaderElement;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::HeaderValueFormatter::formatParameters(const ::org::apache::http::util::CharArrayBuffer& arg0, const std::vector< ::org::apache::http::NameValuePair>& arg1, bool arg2) const {
    if (!::org::apache::http::message::HeaderValueFormatter::_class) ::org::apache::http::message::HeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/HeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatParameters", "(Lorg/apache/http/util/CharArrayBuffer;[Lorg/apache/http/NameValuePair;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::org::apache::http::NameValuePair::_class) ::org::apache::http::NameValuePair::_class = java::fetch_class("org/apache/http/NameValuePair");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::org::apache::http::NameValuePair::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::org::apache::http::NameValuePair& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::HeaderValueFormatter::formatNameValuePair(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::NameValuePair& arg1, bool arg2) const {
    if (!::org::apache::http::message::HeaderValueFormatter::_class) ::org::apache::http::message::HeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/HeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatNameValuePair", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/NameValuePair;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpRequest::BasicHttpRequest(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::message::BasicHttpRequest::_class) ::org::apache::http::message::BasicHttpRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpRequest::BasicHttpRequest(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::org::apache::http::ProtocolVersion& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::message::BasicHttpRequest::_class) ::org::apache::http::message::BasicHttpRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/apache/http/ProtocolVersion;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpRequest::BasicHttpRequest(const ::org::apache::http::RequestLine& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {
    if (!::org::apache::http::message::BasicHttpRequest::_class) ::org::apache::http::message::BasicHttpRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/RequestLine;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::ProtocolVersion org::apache::http::message::BasicHttpRequest::getProtocolVersion() const {
    if (!::org::apache::http::message::BasicHttpRequest::_class) ::org::apache::http::message::BasicHttpRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::org::apache::http::RequestLine org::apache::http::message::BasicHttpRequest::getRequestLine() const {
    if (!::org::apache::http::message::BasicHttpRequest::_class) ::org::apache::http::message::BasicHttpRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestLine", "()Lorg/apache/http/RequestLine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderElement::BasicHeaderElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::org::apache::http::NameValuePair>& arg2) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HeaderElement((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;[Lorg/apache/http/NameValuePair;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::org::apache::http::NameValuePair::_class) ::org::apache::http::NameValuePair::_class = java::fetch_class("org/apache/http/NameValuePair");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::org::apache::http::NameValuePair::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::org::apache::http::NameValuePair& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderElement::BasicHeaderElement(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HeaderElement((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BasicHeaderElement::getName() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicHeaderElement::getValue() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::NameValuePair> org::apache::http::message::BasicHeaderElement::getParameters() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
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

int32_t org::apache::http::message::BasicHeaderElement::getParameterCount() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::NameValuePair org::apache::http::message::BasicHeaderElement::getParameter(int32_t arg0) const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(I)Lorg/apache/http/NameValuePair;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

::org::apache::http::NameValuePair org::apache::http::message::BasicHeaderElement::getParameterByName(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterByName", "(Ljava/lang/String;)Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

bool org::apache::http::message::BasicHeaderElement::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::message::BasicHeaderElement::hashCode() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::apache::http::message::BasicHeaderElement::toString() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicHeaderElement::clone() const {
    if (!::org::apache::http::message::BasicHeaderElement::_class) ::org::apache::http::message::BasicHeaderElement::_class = java::fetch_class("org/apache/http/message/BasicHeaderElement");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool org::apache::http::message::AbstractHttpMessage::containsHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsHeader", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::org::apache::http::Header> org::apache::http::message::AbstractHttpMessage::getHeaders(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
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

::org::apache::http::Header org::apache::http::message::AbstractHttpMessage::getFirstHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::message::AbstractHttpMessage::getLastHeader(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastHeader", "(Ljava/lang/String;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::Header> org::apache::http::message::AbstractHttpMessage::getAllHeaders() const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
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

void org::apache::http::message::AbstractHttpMessage::addHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::AbstractHttpMessage::addHeader(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeader", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::message::AbstractHttpMessage::setHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::AbstractHttpMessage::setHeader(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeader", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::message::AbstractHttpMessage::setHeaders(const std::vector< ::org::apache::http::Header>& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
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

void org::apache::http::message::AbstractHttpMessage::removeHeader(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeader", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::message::AbstractHttpMessage::removeHeaders(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeaders", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::HeaderIterator org::apache::http::message::AbstractHttpMessage::headerIterator() const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "headerIterator", "()Lorg/apache/http/HeaderIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HeaderIterator _ret(ret);
    return _ret;
}

::org::apache::http::HeaderIterator org::apache::http::message::AbstractHttpMessage::headerIterator(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "headerIterator", "(Ljava/lang/String;)Lorg/apache/http/HeaderIterator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::HeaderIterator _ret(ret);
    return _ret;
}

::org::apache::http::params::HttpParams org::apache::http::message::AbstractHttpMessage::getParams() const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Lorg/apache/http/params/HttpParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::params::HttpParams _ret(ret);
    return _ret;
}

void org::apache::http::message::AbstractHttpMessage::setParams(const ::org::apache::http::params::HttpParams& arg0) const {
    if (!::org::apache::http::message::AbstractHttpMessage::_class) ::org::apache::http::message::AbstractHttpMessage::_class = java::fetch_class("org/apache/http/message/AbstractHttpMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParams", "(Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicLineParser::BasicLineParser(const ::org::apache::http::ProtocolVersion& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineParser((jobject)0) {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/ProtocolVersion;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicLineParser::BasicLineParser() : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineParser((jobject)0) {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::ProtocolVersion org::apache::http::message::BasicLineParser::parseProtocolVersion(const ::java::lang::String& arg0, const ::org::apache::http::message::LineParser& arg1){
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseProtocolVersion", "(Ljava/lang/String;Lorg/apache/http/message/LineParser;)Lorg/apache/http/ProtocolVersion;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::message::BasicLineParser::parseProtocolVersion(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseProtocolVersion", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/ProtocolVersion;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

bool org::apache::http::message::BasicLineParser::hasProtocolVersion(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasProtocolVersion", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::RequestLine org::apache::http::message::BasicLineParser::parseRequestLine(const ::java::lang::String& arg0, const ::org::apache::http::message::LineParser& arg1){
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseRequestLine", "(Ljava/lang/String;Lorg/apache/http/message/LineParser;)Lorg/apache/http/RequestLine;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

::org::apache::http::RequestLine org::apache::http::message::BasicLineParser::parseRequestLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseRequestLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/RequestLine;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

::org::apache::http::StatusLine org::apache::http::message::BasicLineParser::parseStatusLine(const ::java::lang::String& arg0, const ::org::apache::http::message::LineParser& arg1){
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseStatusLine", "(Ljava/lang/String;Lorg/apache/http/message/LineParser;)Lorg/apache/http/StatusLine;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::StatusLine _ret(ret);
    return _ret;
}

::org::apache::http::StatusLine org::apache::http::message::BasicLineParser::parseStatusLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseStatusLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/StatusLine;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::StatusLine _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::message::BasicLineParser::parseHeader(const ::java::lang::String& arg0, const ::org::apache::http::message::LineParser& arg1){
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseHeader", "(Ljava/lang/String;Lorg/apache/http/message/LineParser;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::message::BasicLineParser::parseHeader(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::message::BasicLineParser::_class) ::org::apache::http::message::BasicLineParser::_class = java::fetch_class("org/apache/http/message/BasicLineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseHeader", "(Lorg/apache/http/util/CharArrayBuffer;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeader::BasicHeader(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::Header((jobject)0) {
    if (!::org::apache::http::message::BasicHeader::_class) ::org::apache::http::message::BasicHeader::_class = java::fetch_class("org/apache/http/message/BasicHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BasicHeader::getName() const {
    if (!::org::apache::http::message::BasicHeader::_class) ::org::apache::http::message::BasicHeader::_class = java::fetch_class("org/apache/http/message/BasicHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicHeader::getValue() const {
    if (!::org::apache::http::message::BasicHeader::_class) ::org::apache::http::message::BasicHeader::_class = java::fetch_class("org/apache/http/message/BasicHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicHeader::toString() const {
    if (!::org::apache::http::message::BasicHeader::_class) ::org::apache::http::message::BasicHeader::_class = java::fetch_class("org/apache/http/message/BasicHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::HeaderElement> org::apache::http::message::BasicHeader::getElements() const {
    if (!::org::apache::http::message::BasicHeader::_class) ::org::apache::http::message::BasicHeader::_class = java::fetch_class("org/apache/http/message/BasicHeader");
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

::java::lang::Object org::apache::http::message::BasicHeader::clone() const {
    if (!::org::apache::http::message::BasicHeader::_class) ::org::apache::http::message::BasicHeader::_class = java::fetch_class("org/apache/http/message/BasicHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicListHeaderIterator::BasicListHeaderIterator(const ::java::util::List& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderIterator((jobject)0) {
    if (!::org::apache::http::message::BasicListHeaderIterator::_class) ::org::apache::http::message::BasicListHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicListHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::message::BasicListHeaderIterator::hasNext() const {
    if (!::org::apache::http::message::BasicListHeaderIterator::_class) ::org::apache::http::message::BasicListHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicListHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::message::BasicListHeaderIterator::nextHeader() const {
    if (!::org::apache::http::message::BasicListHeaderIterator::_class) ::org::apache::http::message::BasicListHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicListHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicListHeaderIterator::next() const {
    if (!::org::apache::http::message::BasicListHeaderIterator::_class) ::org::apache::http::message::BasicListHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicListHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::message::BasicListHeaderIterator::remove() const {
    if (!::org::apache::http::message::BasicListHeaderIterator::_class) ::org::apache::http::message::BasicListHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicListHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::ParserCursor::ParserCursor(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::message::ParserCursor::getLowerBound() const {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLowerBound", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::message::ParserCursor::getUpperBound() const {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUpperBound", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::message::ParserCursor::getPos() const {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPos", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::message::ParserCursor::updatePos(int32_t arg0) const {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "updatePos", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::message::ParserCursor::atEnd() const {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "atEnd", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::apache::http::message::ParserCursor::toString() const {
    if (!::org::apache::http::message::ParserCursor::_class) ::org::apache::http::message::ParserCursor::_class = java::fetch_class("org/apache/http/message/ParserCursor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderValueFormatter::BasicHeaderValueFormatter() : ::java::lang::Object((jobject)0), ::org::apache::http::message::HeaderValueFormatter((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BasicHeaderValueFormatter::formatElements(const std::vector< ::org::apache::http::HeaderElement>& arg0, bool arg1, const ::org::apache::http::message::HeaderValueFormatter& arg2){
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatElements", "([Lorg/apache/http/HeaderElement;ZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::org::apache::http::HeaderElement::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::org::apache::http::HeaderElement& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicHeaderValueFormatter::formatElements(const ::org::apache::http::util::CharArrayBuffer& arg0, const std::vector< ::org::apache::http::HeaderElement>& arg1, bool arg2) const {
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatElements", "(Lorg/apache/http/util/CharArrayBuffer;[Lorg/apache/http/HeaderElement;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::org::apache::http::HeaderElement::_class) ::org::apache::http::HeaderElement::_class = java::fetch_class("org/apache/http/HeaderElement");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::org::apache::http::HeaderElement::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::org::apache::http::HeaderElement& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicHeaderValueFormatter::formatHeaderElement(const ::org::apache::http::HeaderElement& arg0, bool arg1, const ::org::apache::http::message::HeaderValueFormatter& arg2){
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatHeaderElement", "(Lorg/apache/http/HeaderElement;ZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicHeaderValueFormatter::formatHeaderElement(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::HeaderElement& arg1, bool arg2) const {
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatHeaderElement", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/HeaderElement;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicHeaderValueFormatter::formatParameters(const std::vector< ::org::apache::http::NameValuePair>& arg0, bool arg1, const ::org::apache::http::message::HeaderValueFormatter& arg2){
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatParameters", "([Lorg/apache/http/NameValuePair;ZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::org::apache::http::NameValuePair::_class) ::org::apache::http::NameValuePair::_class = java::fetch_class("org/apache/http/NameValuePair");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::org::apache::http::NameValuePair::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::org::apache::http::NameValuePair& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicHeaderValueFormatter::formatParameters(const ::org::apache::http::util::CharArrayBuffer& arg0, const std::vector< ::org::apache::http::NameValuePair>& arg1, bool arg2) const {
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatParameters", "(Lorg/apache/http/util/CharArrayBuffer;[Lorg/apache/http/NameValuePair;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::org::apache::http::NameValuePair::_class) ::org::apache::http::NameValuePair::_class = java::fetch_class("org/apache/http/NameValuePair");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::org::apache::http::NameValuePair::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::org::apache::http::NameValuePair& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicHeaderValueFormatter::formatNameValuePair(const ::org::apache::http::NameValuePair& arg0, bool arg1, const ::org::apache::http::message::HeaderValueFormatter& arg2){
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatNameValuePair", "(Lorg/apache/http/NameValuePair;ZLorg/apache/http/message/HeaderValueFormatter;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicHeaderValueFormatter::formatNameValuePair(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::NameValuePair& arg1, bool arg2) const {
    if (!::org::apache::http::message::BasicHeaderValueFormatter::_class) ::org::apache::http::message::BasicHeaderValueFormatter::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatNameValuePair", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/NameValuePair;Z)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicLineFormatter::BasicLineFormatter() : ::java::lang::Object((jobject)0), ::org::apache::http::message::LineFormatter((jobject)0) {
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BasicLineFormatter::formatProtocolVersion(const ::org::apache::http::ProtocolVersion& arg0, const ::org::apache::http::message::LineFormatter& arg1){
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatProtocolVersion", "(Lorg/apache/http/ProtocolVersion;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicLineFormatter::appendProtocolVersion(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::ProtocolVersion& arg1) const {
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendProtocolVersion", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/ProtocolVersion;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicLineFormatter::formatRequestLine(const ::org::apache::http::RequestLine& arg0, const ::org::apache::http::message::LineFormatter& arg1){
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatRequestLine", "(Lorg/apache/http/RequestLine;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicLineFormatter::formatRequestLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::RequestLine& arg1) const {
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatRequestLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/RequestLine;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicLineFormatter::formatStatusLine(const ::org::apache::http::StatusLine& arg0, const ::org::apache::http::message::LineFormatter& arg1){
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatStatusLine", "(Lorg/apache/http/StatusLine;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicLineFormatter::formatStatusLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::StatusLine& arg1) const {
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatStatusLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/StatusLine;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicLineFormatter::formatHeader(const ::org::apache::http::Header& arg0, const ::org::apache::http::message::LineFormatter& arg1){
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "formatHeader", "(Lorg/apache/http/Header;Lorg/apache/http/message/LineFormatter;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BasicLineFormatter::formatHeader(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::Header& arg1) const {
    if (!::org::apache::http::message::BasicLineFormatter::_class) ::org::apache::http::message::BasicLineFormatter::_class = java::fetch_class("org/apache/http/message/BasicLineFormatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatHeader", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/Header;)Lorg/apache/http/util/CharArrayBuffer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::HeaderElement> org::apache::http::message::HeaderValueParser::parseElements(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::HeaderValueParser::_class) ::org::apache::http::message::HeaderValueParser::_class = java::fetch_class("org/apache/http/message/HeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseElements", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::HeaderElement> _ret(rets, ::org::apache::http::HeaderElement((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::HeaderElement retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::HeaderElement org::apache::http::message::HeaderValueParser::parseHeaderElement(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::HeaderValueParser::_class) ::org::apache::http::message::HeaderValueParser::_class = java::fetch_class("org/apache/http/message/HeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseHeaderElement", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HeaderElement _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::NameValuePair> org::apache::http::message::HeaderValueParser::parseParameters(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::HeaderValueParser::_class) ::org::apache::http::message::HeaderValueParser::_class = java::fetch_class("org/apache/http/message/HeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseParameters", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::NameValuePair> _ret(rets, ::org::apache::http::NameValuePair((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::NameValuePair retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::NameValuePair org::apache::http::message::HeaderValueParser::parseNameValuePair(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::HeaderValueParser::_class) ::org::apache::http::message::HeaderValueParser::_class = java::fetch_class("org/apache/http/message/HeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseNameValuePair", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderIterator::BasicHeaderIterator(const std::vector< ::org::apache::http::Header>& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderIterator((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderIterator::_class) ::org::apache::http::message::BasicHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Lorg/apache/http/Header;Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::org::apache::http::Header::_class) ::org::apache::http::Header::_class = java::fetch_class("org/apache/http/Header");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::org::apache::http::Header::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::org::apache::http::Header& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::message::BasicHeaderIterator::hasNext() const {
    if (!::org::apache::http::message::BasicHeaderIterator::_class) ::org::apache::http::message::BasicHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::message::BasicHeaderIterator::nextHeader() const {
    if (!::org::apache::http::message::BasicHeaderIterator::_class) ::org::apache::http::message::BasicHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextHeader", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicHeaderIterator::next() const {
    if (!::org::apache::http::message::BasicHeaderIterator::_class) ::org::apache::http::message::BasicHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::message::BasicHeaderIterator::remove() const {
    if (!::org::apache::http::message::BasicHeaderIterator::_class) ::org::apache::http::message::BasicHeaderIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderValueParser::BasicHeaderValueParser() : ::java::lang::Object((jobject)0), ::org::apache::http::message::HeaderValueParser((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< ::org::apache::http::HeaderElement> org::apache::http::message::BasicHeaderValueParser::parseElements(const ::java::lang::String& arg0, const ::org::apache::http::message::HeaderValueParser& arg1){
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseElements", "(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)[Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::HeaderElement> _ret(rets, ::org::apache::http::HeaderElement((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::HeaderElement retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::org::apache::http::HeaderElement> org::apache::http::message::BasicHeaderValueParser::parseElements(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseElements", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::HeaderElement> _ret(rets, ::org::apache::http::HeaderElement((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::HeaderElement retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::HeaderElement org::apache::http::message::BasicHeaderValueParser::parseHeaderElement(const ::java::lang::String& arg0, const ::org::apache::http::message::HeaderValueParser& arg1){
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseHeaderElement", "(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::HeaderElement _ret(ret);
    return _ret;
}

::org::apache::http::HeaderElement org::apache::http::message::BasicHeaderValueParser::parseHeaderElement(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseHeaderElement", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/HeaderElement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::HeaderElement _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::NameValuePair> org::apache::http::message::BasicHeaderValueParser::parseParameters(const ::java::lang::String& arg0, const ::org::apache::http::message::HeaderValueParser& arg1){
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseParameters", "(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)[Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::NameValuePair> _ret(rets, ::org::apache::http::NameValuePair((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::NameValuePair retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::org::apache::http::NameValuePair> org::apache::http::message::BasicHeaderValueParser::parseParameters(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseParameters", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::NameValuePair> _ret(rets, ::org::apache::http::NameValuePair((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::NameValuePair retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::NameValuePair org::apache::http::message::BasicHeaderValueParser::parseNameValuePair(const ::java::lang::String& arg0, const ::org::apache::http::message::HeaderValueParser& arg1){
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseNameValuePair", "(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

::org::apache::http::NameValuePair org::apache::http::message::BasicHeaderValueParser::parseNameValuePair(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseNameValuePair", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

::org::apache::http::NameValuePair org::apache::http::message::BasicHeaderValueParser::parseNameValuePair(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1, const std::vector< uint16_t>& arg2) const {
    if (!::org::apache::http::message::BasicHeaderValueParser::_class) ::org::apache::http::message::BasicHeaderValueParser::_class = java::fetch_class("org/apache/http/message/BasicHeaderValueParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseNameValuePair", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;[C)Lorg/apache/http/NameValuePair;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::apache::http::NameValuePair _ret(ret);
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::message::LineParser::parseProtocolVersion(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::LineParser::_class) ::org::apache::http::message::LineParser::_class = java::fetch_class("org/apache/http/message/LineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseProtocolVersion", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/ProtocolVersion;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

bool org::apache::http::message::LineParser::hasProtocolVersion(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::LineParser::_class) ::org::apache::http::message::LineParser::_class = java::fetch_class("org/apache/http/message/LineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasProtocolVersion", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::apache::http::RequestLine org::apache::http::message::LineParser::parseRequestLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::LineParser::_class) ::org::apache::http::message::LineParser::_class = java::fetch_class("org/apache/http/message/LineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseRequestLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/RequestLine;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::RequestLine _ret(ret);
    return _ret;
}

::org::apache::http::StatusLine org::apache::http::message::LineParser::parseStatusLine(const ::org::apache::http::util::CharArrayBuffer& arg0, const ::org::apache::http::message::ParserCursor& arg1) const {
    if (!::org::apache::http::message::LineParser::_class) ::org::apache::http::message::LineParser::_class = java::fetch_class("org/apache/http/message/LineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseStatusLine", "(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/StatusLine;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::apache::http::StatusLine _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::message::LineParser::parseHeader(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::message::LineParser::_class) ::org::apache::http::message::LineParser::_class = java::fetch_class("org/apache/http/message/LineParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseHeader", "(Lorg/apache/http/util/CharArrayBuffer;)Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderElementIterator::BasicHeaderElementIterator(const ::org::apache::http::HeaderIterator& arg0, const ::org::apache::http::message::HeaderValueParser& arg1) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderElementIterator((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderElementIterator::_class) ::org::apache::http::message::BasicHeaderElementIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HeaderIterator;Lorg/apache/http/message/HeaderValueParser;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHeaderElementIterator::BasicHeaderElementIterator(const ::org::apache::http::HeaderIterator& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0), ::org::apache::http::HeaderElementIterator((jobject)0) {
    if (!::org::apache::http::message::BasicHeaderElementIterator::_class) ::org::apache::http::message::BasicHeaderElementIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HeaderIterator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::message::BasicHeaderElementIterator::hasNext() const {
    if (!::org::apache::http::message::BasicHeaderElementIterator::_class) ::org::apache::http::message::BasicHeaderElementIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::apache::http::HeaderElement org::apache::http::message::BasicHeaderElementIterator::nextElement() const {
    if (!::org::apache::http::message::BasicHeaderElementIterator::_class) ::org::apache::http::message::BasicHeaderElementIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextElement", "()Lorg/apache/http/HeaderElement;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HeaderElement _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicHeaderElementIterator::next() const {
    if (!::org::apache::http::message::BasicHeaderElementIterator::_class) ::org::apache::http::message::BasicHeaderElementIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::apache::http::message::BasicHeaderElementIterator::remove() const {
    if (!::org::apache::http::message::BasicHeaderElementIterator::_class) ::org::apache::http::message::BasicHeaderElementIterator::_class = java::fetch_class("org/apache/http/message/BasicHeaderElementIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpEntityEnclosingRequest::BasicHttpEntityEnclosingRequest(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0), ::org::apache::http::message::BasicHttpRequest((jobject)0) {
    if (!::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class) ::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpEntityEnclosingRequest::BasicHttpEntityEnclosingRequest(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::org::apache::http::ProtocolVersion& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0), ::org::apache::http::message::BasicHttpRequest((jobject)0) {
    if (!::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class) ::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/apache/http/ProtocolVersion;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicHttpEntityEnclosingRequest::BasicHttpEntityEnclosingRequest(const ::org::apache::http::RequestLine& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0), ::org::apache::http::message::BasicHttpRequest((jobject)0) {
    if (!::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class) ::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/RequestLine;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::HttpEntity org::apache::http::message::BasicHttpEntityEnclosingRequest::getEntity() const {
    if (!::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class) ::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntity", "()Lorg/apache/http/HttpEntity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpEntity _ret(ret);
    return _ret;
}

void org::apache::http::message::BasicHttpEntityEnclosingRequest::setEntity(const ::org::apache::http::HttpEntity& arg0) const {
    if (!::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class) ::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntity", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::message::BasicHttpEntityEnclosingRequest::expectContinue() const {
    if (!::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class) ::org::apache::http::message::BasicHttpEntityEnclosingRequest::_class = java::fetch_class("org/apache/http/message/BasicHttpEntityEnclosingRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "expectContinue", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicStatusLine::BasicStatusLine(const ::org::apache::http::ProtocolVersion& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::StatusLine((jobject)0) {
    if (!::org::apache::http::message::BasicStatusLine::_class) ::org::apache::http::message::BasicStatusLine::_class = java::fetch_class("org/apache/http/message/BasicStatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/ProtocolVersion;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::message::BasicStatusLine::getStatusCode() const {
    if (!::org::apache::http::message::BasicStatusLine::_class) ::org::apache::http::message::BasicStatusLine::_class = java::fetch_class("org/apache/http/message/BasicStatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::ProtocolVersion org::apache::http::message::BasicStatusLine::getProtocolVersion() const {
    if (!::org::apache::http::message::BasicStatusLine::_class) ::org::apache::http::message::BasicStatusLine::_class = java::fetch_class("org/apache/http/message/BasicStatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicStatusLine::getReasonPhrase() const {
    if (!::org::apache::http::message::BasicStatusLine::_class) ::org::apache::http::message::BasicStatusLine::_class = java::fetch_class("org/apache/http/message/BasicStatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReasonPhrase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicStatusLine::toString() const {
    if (!::org::apache::http::message::BasicStatusLine::_class) ::org::apache::http::message::BasicStatusLine::_class = java::fetch_class("org/apache/http/message/BasicStatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicStatusLine::clone() const {
    if (!::org::apache::http::message::BasicStatusLine::_class) ::org::apache::http::message::BasicStatusLine::_class = java::fetch_class("org/apache/http/message/BasicStatusLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BasicRequestLine::BasicRequestLine(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::org::apache::http::ProtocolVersion& arg2) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::RequestLine((jobject)0) {
    if (!::org::apache::http::message::BasicRequestLine::_class) ::org::apache::http::message::BasicRequestLine::_class = java::fetch_class("org/apache/http/message/BasicRequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/apache/http/ProtocolVersion;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BasicRequestLine::getMethod() const {
    if (!::org::apache::http::message::BasicRequestLine::_class) ::org::apache::http::message::BasicRequestLine::_class = java::fetch_class("org/apache/http/message/BasicRequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::ProtocolVersion org::apache::http::message::BasicRequestLine::getProtocolVersion() const {
    if (!::org::apache::http::message::BasicRequestLine::_class) ::org::apache::http::message::BasicRequestLine::_class = java::fetch_class("org/apache/http/message/BasicRequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocolVersion", "()Lorg/apache/http/ProtocolVersion;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::ProtocolVersion _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicRequestLine::getUri() const {
    if (!::org::apache::http::message::BasicRequestLine::_class) ::org::apache::http::message::BasicRequestLine::_class = java::fetch_class("org/apache/http/message/BasicRequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BasicRequestLine::toString() const {
    if (!::org::apache::http::message::BasicRequestLine::_class) ::org::apache::http::message::BasicRequestLine::_class = java::fetch_class("org/apache/http/message/BasicRequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BasicRequestLine::clone() const {
    if (!::org::apache::http::message::BasicRequestLine::_class) ::org::apache::http::message::BasicRequestLine::_class = java::fetch_class("org/apache/http/message/BasicRequestLine");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::message::BufferedHeader::BufferedHeader(const ::org::apache::http::util::CharArrayBuffer& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::FormattedHeader((jobject)0), ::org::apache::http::Header((jobject)0) {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/util/CharArrayBuffer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String org::apache::http::message::BufferedHeader::getName() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BufferedHeader::getValue() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::HeaderElement> org::apache::http::message::BufferedHeader::getElements() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
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

int32_t org::apache::http::message::BufferedHeader::getValuePos() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValuePos", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::util::CharArrayBuffer org::apache::http::message::BufferedHeader::getBuffer() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBuffer", "()Lorg/apache/http/util/CharArrayBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::util::CharArrayBuffer _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::message::BufferedHeader::toString() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::apache::http::message::BufferedHeader::clone() const {
    if (!::org::apache::http::message::BufferedHeader::_class) ::org::apache::http::message::BufferedHeader::_class = java::fetch_class("org/apache/http/message/BufferedHeader");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}


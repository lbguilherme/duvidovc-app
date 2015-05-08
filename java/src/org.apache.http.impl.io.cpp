#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.net.Socket.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HttpMessage.hpp"
#include "org.apache.http.HttpRequestFactory.hpp"
#include "org.apache.http.HttpResponseFactory.hpp"
#include "org.apache.http.impl.io.AbstractMessageParser.hpp"
#include "org.apache.http.impl.io.AbstractMessageWriter.hpp"
#include "org.apache.http.impl.io.AbstractSessionInputBuffer.hpp"
#include "org.apache.http.impl.io.AbstractSessionOutputBuffer.hpp"
#include "org.apache.http.impl.io.ChunkedInputStream.hpp"
#include "org.apache.http.impl.io.ChunkedOutputStream.hpp"
#include "org.apache.http.impl.io.ContentLengthInputStream.hpp"
#include "org.apache.http.impl.io.ContentLengthOutputStream.hpp"
#include "org.apache.http.impl.io.HttpRequestParser.hpp"
#include "org.apache.http.impl.io.HttpRequestWriter.hpp"
#include "org.apache.http.impl.io.HttpResponseParser.hpp"
#include "org.apache.http.impl.io.HttpResponseWriter.hpp"
#include "org.apache.http.impl.io.HttpTransportMetricsImpl.hpp"
#include "org.apache.http.impl.io.IdentityInputStream.hpp"
#include "org.apache.http.impl.io.IdentityOutputStream.hpp"
#include "org.apache.http.impl.io.SocketInputBuffer.hpp"
#include "org.apache.http.impl.io.SocketOutputBuffer.hpp"
#include "org.apache.http.io.HttpTransportMetrics.hpp"
#include "org.apache.http.io.SessionInputBuffer.hpp"
#include "org.apache.http.io.SessionOutputBuffer.hpp"
#include "org.apache.http.message.LineFormatter.hpp"
#include "org.apache.http.message.LineParser.hpp"
#include "org.apache.http.params.HttpParams.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"

jclass org::apache::http::impl::io::AbstractMessageWriter::_class = nullptr;
jclass org::apache::http::impl::io::ChunkedOutputStream::_class = nullptr;
jclass org::apache::http::impl::io::ChunkedInputStream::_class = nullptr;
jclass org::apache::http::impl::io::HttpResponseWriter::_class = nullptr;
jclass org::apache::http::impl::io::HttpRequestParser::_class = nullptr;
jclass org::apache::http::impl::io::HttpRequestWriter::_class = nullptr;
jclass org::apache::http::impl::io::HttpResponseParser::_class = nullptr;
jclass org::apache::http::impl::io::AbstractSessionInputBuffer::_class = nullptr;
jclass org::apache::http::impl::io::HttpTransportMetricsImpl::_class = nullptr;
jclass org::apache::http::impl::io::IdentityOutputStream::_class = nullptr;
jclass org::apache::http::impl::io::IdentityInputStream::_class = nullptr;
jclass org::apache::http::impl::io::AbstractMessageParser::_class = nullptr;
jclass org::apache::http::impl::io::ContentLengthOutputStream::_class = nullptr;
jclass org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = nullptr;
jclass org::apache::http::impl::io::SocketOutputBuffer::_class = nullptr;
jclass org::apache::http::impl::io::ContentLengthInputStream::_class = nullptr;
jclass org::apache::http::impl::io::SocketInputBuffer::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::AbstractMessageWriter::AbstractMessageWriter(const ::org::apache::http::io::SessionOutputBuffer& arg0, const ::org::apache::http::message::LineFormatter& arg1, const ::org::apache::http::params::HttpParams& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {
    if (!::org::apache::http::impl::io::AbstractMessageWriter::_class) ::org::apache::http::impl::io::AbstractMessageWriter::_class = java::fetch_class("org/apache/http/impl/io/AbstractMessageWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/message/LineFormatter;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::io::AbstractMessageWriter::write(const ::org::apache::http::HttpMessage& arg0) const {
    if (!::org::apache::http::impl::io::AbstractMessageWriter::_class) ::org::apache::http::impl::io::AbstractMessageWriter::_class = java::fetch_class("org/apache/http/impl/io/AbstractMessageWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Lorg/apache/http/HttpMessage;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::ChunkedOutputStream::ChunkedOutputStream(const ::org::apache::http::io::SessionOutputBuffer& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::ChunkedOutputStream::ChunkedOutputStream(const ::org::apache::http::io::SessionOutputBuffer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::io::ChunkedOutputStream::finish() const {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::ChunkedOutputStream::write(int32_t arg0) const {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::ChunkedOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::ChunkedOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::io::ChunkedOutputStream::flush() const {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::ChunkedOutputStream::close() const {
    if (!::org::apache::http::impl::io::ChunkedOutputStream::_class) ::org::apache::http::impl::io::ChunkedOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::ChunkedInputStream::ChunkedInputStream(const ::org::apache::http::io::SessionInputBuffer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::org::apache::http::impl::io::ChunkedInputStream::_class) ::org::apache::http::impl::io::ChunkedInputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::impl::io::ChunkedInputStream::read() const {
    if (!::org::apache::http::impl::io::ChunkedInputStream::_class) ::org::apache::http::impl::io::ChunkedInputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::impl::io::ChunkedInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::ChunkedInputStream::_class) ::org::apache::http::impl::io::ChunkedInputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::impl::io::ChunkedInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::ChunkedInputStream::_class) ::org::apache::http::impl::io::ChunkedInputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::ChunkedInputStream::close() const {
    if (!::org::apache::http::impl::io::ChunkedInputStream::_class) ::org::apache::http::impl::io::ChunkedInputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::org::apache::http::Header> org::apache::http::impl::io::ChunkedInputStream::getFooters() const {
    if (!::org::apache::http::impl::io::ChunkedInputStream::_class) ::org::apache::http::impl::io::ChunkedInputStream::_class = java::fetch_class("org/apache/http/impl/io/ChunkedInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFooters", "()[Lorg/apache/http/Header;");
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::HttpResponseWriter::HttpResponseWriter(const ::org::apache::http::io::SessionOutputBuffer& arg0, const ::org::apache::http::message::LineFormatter& arg1, const ::org::apache::http::params::HttpParams& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageWriter((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {
    if (!::org::apache::http::impl::io::HttpResponseWriter::_class) ::org::apache::http::impl::io::HttpResponseWriter::_class = java::fetch_class("org/apache/http/impl/io/HttpResponseWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/message/LineFormatter;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::HttpRequestParser::HttpRequestParser(const ::org::apache::http::io::SessionInputBuffer& arg0, const ::org::apache::http::message::LineParser& arg1, const ::org::apache::http::HttpRequestFactory& arg2, const ::org::apache::http::params::HttpParams& arg3) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageParser((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {
    if (!::org::apache::http::impl::io::HttpRequestParser::_class) ::org::apache::http::impl::io::HttpRequestParser::_class = java::fetch_class("org/apache/http/impl/io/HttpRequestParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/message/LineParser;Lorg/apache/http/HttpRequestFactory;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::HttpRequestWriter::HttpRequestWriter(const ::org::apache::http::io::SessionOutputBuffer& arg0, const ::org::apache::http::message::LineFormatter& arg1, const ::org::apache::http::params::HttpParams& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageWriter((jobject)0), ::org::apache::http::io::HttpMessageWriter((jobject)0) {
    if (!::org::apache::http::impl::io::HttpRequestWriter::_class) ::org::apache::http::impl::io::HttpRequestWriter::_class = java::fetch_class("org/apache/http/impl/io/HttpRequestWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/message/LineFormatter;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::HttpResponseParser::HttpResponseParser(const ::org::apache::http::io::SessionInputBuffer& arg0, const ::org::apache::http::message::LineParser& arg1, const ::org::apache::http::HttpResponseFactory& arg2, const ::org::apache::http::params::HttpParams& arg3) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractMessageParser((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {
    if (!::org::apache::http::impl::io::HttpResponseParser::_class) ::org::apache::http::impl::io::HttpResponseParser::_class = java::fetch_class("org/apache/http/impl/io/HttpResponseParser");
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
::org::apache::http::impl::io::AbstractSessionInputBuffer::AbstractSessionInputBuffer() : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::impl::io::AbstractSessionInputBuffer::read() const {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::impl::io::AbstractSessionInputBuffer::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::impl::io::AbstractSessionInputBuffer::read(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::apache::http::impl::io::AbstractSessionInputBuffer::readLine(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "(Lorg/apache/http/util/CharArrayBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::impl::io::AbstractSessionInputBuffer::readLine() const {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::apache::http::io::HttpTransportMetrics org::apache::http::impl::io::AbstractSessionInputBuffer::getMetrics() const {
    if (!::org::apache::http::impl::io::AbstractSessionInputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/io/HttpTransportMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::io::HttpTransportMetrics _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::HttpTransportMetricsImpl::HttpTransportMetricsImpl() : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpTransportMetrics((jobject)0) {
    if (!::org::apache::http::impl::io::HttpTransportMetricsImpl::_class) ::org::apache::http::impl::io::HttpTransportMetricsImpl::_class = java::fetch_class("org/apache/http/impl/io/HttpTransportMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::impl::io::HttpTransportMetricsImpl::getBytesTransferred() const {
    if (!::org::apache::http::impl::io::HttpTransportMetricsImpl::_class) ::org::apache::http::impl::io::HttpTransportMetricsImpl::_class = java::fetch_class("org/apache/http/impl/io/HttpTransportMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytesTransferred", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void org::apache::http::impl::io::HttpTransportMetricsImpl::setBytesTransferred(int64_t arg0) const {
    if (!::org::apache::http::impl::io::HttpTransportMetricsImpl::_class) ::org::apache::http::impl::io::HttpTransportMetricsImpl::_class = java::fetch_class("org/apache/http/impl/io/HttpTransportMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBytesTransferred", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::HttpTransportMetricsImpl::incrementBytesTransferred(int64_t arg0) const {
    if (!::org::apache::http::impl::io::HttpTransportMetricsImpl::_class) ::org::apache::http::impl::io::HttpTransportMetricsImpl::_class = java::fetch_class("org/apache/http/impl/io/HttpTransportMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementBytesTransferred", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::HttpTransportMetricsImpl::reset() const {
    if (!::org::apache::http::impl::io::HttpTransportMetricsImpl::_class) ::org::apache::http::impl::io::HttpTransportMetricsImpl::_class = java::fetch_class("org/apache/http/impl/io/HttpTransportMetricsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::IdentityOutputStream::IdentityOutputStream(const ::org::apache::http::io::SessionOutputBuffer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::org::apache::http::impl::io::IdentityOutputStream::_class) ::org::apache::http::impl::io::IdentityOutputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::io::IdentityOutputStream::close() const {
    if (!::org::apache::http::impl::io::IdentityOutputStream::_class) ::org::apache::http::impl::io::IdentityOutputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::IdentityOutputStream::flush() const {
    if (!::org::apache::http::impl::io::IdentityOutputStream::_class) ::org::apache::http::impl::io::IdentityOutputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::IdentityOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::IdentityOutputStream::_class) ::org::apache::http::impl::io::IdentityOutputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::io::IdentityOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::IdentityOutputStream::_class) ::org::apache::http::impl::io::IdentityOutputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::IdentityOutputStream::write(int32_t arg0) const {
    if (!::org::apache::http::impl::io::IdentityOutputStream::_class) ::org::apache::http::impl::io::IdentityOutputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::IdentityInputStream::IdentityInputStream(const ::org::apache::http::io::SessionInputBuffer& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::org::apache::http::impl::io::IdentityInputStream::_class) ::org::apache::http::impl::io::IdentityInputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::impl::io::IdentityInputStream::available() const {
    if (!::org::apache::http::impl::io::IdentityInputStream::_class) ::org::apache::http::impl::io::IdentityInputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::impl::io::IdentityInputStream::close() const {
    if (!::org::apache::http::impl::io::IdentityInputStream::_class) ::org::apache::http::impl::io::IdentityInputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t org::apache::http::impl::io::IdentityInputStream::read() const {
    if (!::org::apache::http::impl::io::IdentityInputStream::_class) ::org::apache::http::impl::io::IdentityInputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::impl::io::IdentityInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::IdentityInputStream::_class) ::org::apache::http::impl::io::IdentityInputStream::_class = java::fetch_class("org/apache/http/impl/io/IdentityInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::AbstractMessageParser::AbstractMessageParser(const ::org::apache::http::io::SessionInputBuffer& arg0, const ::org::apache::http::message::LineParser& arg1, const ::org::apache::http::params::HttpParams& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpMessageParser((jobject)0) {
    if (!::org::apache::http::impl::io::AbstractMessageParser::_class) ::org::apache::http::impl::io::AbstractMessageParser::_class = java::fetch_class("org/apache/http/impl/io/AbstractMessageParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/message/LineParser;Lorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

std::vector< ::org::apache::http::Header> org::apache::http::impl::io::AbstractMessageParser::parseHeaders(const ::org::apache::http::io::SessionInputBuffer& arg0, int32_t arg1, int32_t arg2, const ::org::apache::http::message::LineParser& arg3){
    if (!::org::apache::http::impl::io::AbstractMessageParser::_class) ::org::apache::http::impl::io::AbstractMessageParser::_class = java::fetch_class("org/apache/http/impl/io/AbstractMessageParser");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseHeaders", "(Lorg/apache/http/io/SessionInputBuffer;IILorg/apache/http/message/LineParser;)[Lorg/apache/http/Header;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::Header> _ret(rets, ::org::apache::http::Header((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::Header retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::HttpMessage org::apache::http::impl::io::AbstractMessageParser::parse() const {
    if (!::org::apache::http::impl::io::AbstractMessageParser::_class) ::org::apache::http::impl::io::AbstractMessageParser::_class = java::fetch_class("org/apache/http/impl/io/AbstractMessageParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "()Lorg/apache/http/HttpMessage;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpMessage _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::ContentLengthOutputStream::ContentLengthOutputStream(const ::org::apache::http::io::SessionOutputBuffer& arg0, int64_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::org::apache::http::impl::io::ContentLengthOutputStream::_class) ::org::apache::http::impl::io::ContentLengthOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionOutputBuffer;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::io::ContentLengthOutputStream::close() const {
    if (!::org::apache::http::impl::io::ContentLengthOutputStream::_class) ::org::apache::http::impl::io::ContentLengthOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::ContentLengthOutputStream::flush() const {
    if (!::org::apache::http::impl::io::ContentLengthOutputStream::_class) ::org::apache::http::impl::io::ContentLengthOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::ContentLengthOutputStream::_class) ::org::apache::http::impl::io::ContentLengthOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::ContentLengthOutputStream::_class) ::org::apache::http::impl::io::ContentLengthOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::ContentLengthOutputStream::write(int32_t arg0) const {
    if (!::org::apache::http::impl::io::ContentLengthOutputStream::_class) ::org::apache::http::impl::io::ContentLengthOutputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::AbstractSessionOutputBuffer::AbstractSessionOutputBuffer() : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::io::AbstractSessionOutputBuffer::flush() const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::write(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::write(int32_t arg0) const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::writeLine(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::writeLine(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Lorg/apache/http/util/CharArrayBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::io::HttpTransportMetrics org::apache::http::impl::io::AbstractSessionOutputBuffer::getMetrics() const {
    if (!::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class) ::org::apache::http::impl::io::AbstractSessionOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/AbstractSessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/io/HttpTransportMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::io::HttpTransportMetrics _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::SocketOutputBuffer::SocketOutputBuffer(const ::java::net::Socket& arg0, int32_t arg1, const ::org::apache::http::params::HttpParams& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractSessionOutputBuffer((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {
    if (!::org::apache::http::impl::io::SocketOutputBuffer::_class) ::org::apache::http::impl::io::SocketOutputBuffer::_class = java::fetch_class("org/apache/http/impl/io/SocketOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::ContentLengthInputStream::ContentLengthInputStream(const ::org::apache::http::io::SessionInputBuffer& arg0, int64_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::org::apache::http::impl::io::ContentLengthInputStream::_class) ::org::apache::http::impl::io::ContentLengthInputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/io/SessionInputBuffer;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void org::apache::http::impl::io::ContentLengthInputStream::close() const {
    if (!::org::apache::http::impl::io::ContentLengthInputStream::_class) ::org::apache::http::impl::io::ContentLengthInputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t org::apache::http::impl::io::ContentLengthInputStream::read() const {
    if (!::org::apache::http::impl::io::ContentLengthInputStream::_class) ::org::apache::http::impl::io::ContentLengthInputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::impl::io::ContentLengthInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::impl::io::ContentLengthInputStream::_class) ::org::apache::http::impl::io::ContentLengthInputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::impl::io::ContentLengthInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::impl::io::ContentLengthInputStream::_class) ::org::apache::http::impl::io::ContentLengthInputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t org::apache::http::impl::io::ContentLengthInputStream::skip(int64_t arg0) const {
    if (!::org::apache::http::impl::io::ContentLengthInputStream::_class) ::org::apache::http::impl::io::ContentLengthInputStream::_class = java::fetch_class("org/apache/http/impl/io/ContentLengthInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::impl::io::SocketInputBuffer::SocketInputBuffer(const ::java::net::Socket& arg0, int32_t arg1, const ::org::apache::http::params::HttpParams& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::io::AbstractSessionInputBuffer((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {
    if (!::org::apache::http::impl::io::SocketInputBuffer::_class) ::org::apache::http::impl::io::SocketInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/SocketInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool org::apache::http::impl::io::SocketInputBuffer::isDataAvailable(int32_t arg0) const {
    if (!::org::apache::http::impl::io::SocketInputBuffer::_class) ::org::apache::http::impl::io::SocketInputBuffer::_class = java::fetch_class("org/apache/http/impl/io/SocketInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDataAvailable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}


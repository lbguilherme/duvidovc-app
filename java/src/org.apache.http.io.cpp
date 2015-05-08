#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "org.apache.http.HttpMessage.hpp"
#include "org.apache.http.io.HttpMessageParser.hpp"
#include "org.apache.http.io.HttpMessageWriter.hpp"
#include "org.apache.http.io.HttpTransportMetrics.hpp"
#include "org.apache.http.io.SessionInputBuffer.hpp"
#include "org.apache.http.io.SessionOutputBuffer.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"

jclass org::apache::http::io::SessionOutputBuffer::_class = nullptr;
jclass org::apache::http::io::HttpMessageWriter::_class = nullptr;
jclass org::apache::http::io::SessionInputBuffer::_class = nullptr;
jclass org::apache::http::io::HttpTransportMetrics::_class = nullptr;
jclass org::apache::http::io::HttpMessageParser::_class = nullptr;

void org::apache::http::io::SessionOutputBuffer::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::io::SessionOutputBuffer::write(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::io::SessionOutputBuffer::write(int32_t arg0) const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::io::SessionOutputBuffer::writeLine(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::io::SessionOutputBuffer::writeLine(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Lorg/apache/http/util/CharArrayBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::io::SessionOutputBuffer::flush() const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::io::HttpTransportMetrics org::apache::http::io::SessionOutputBuffer::getMetrics() const {
    if (!::org::apache::http::io::SessionOutputBuffer::_class) ::org::apache::http::io::SessionOutputBuffer::_class = java::fetch_class("org/apache/http/io/SessionOutputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/io/HttpTransportMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::io::HttpTransportMetrics _ret(ret);
    return _ret;
}

void org::apache::http::io::HttpMessageWriter::write(const ::org::apache::http::HttpMessage& arg0) const {
    if (!::org::apache::http::io::HttpMessageWriter::_class) ::org::apache::http::io::HttpMessageWriter::_class = java::fetch_class("org/apache/http/io/HttpMessageWriter");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Lorg/apache/http/HttpMessage;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::apache::http::io::SessionInputBuffer::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::io::SessionInputBuffer::read(const std::vector< int8_t>& arg0) const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::apache::http::io::SessionInputBuffer::read() const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::io::SessionInputBuffer::readLine(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "(Lorg/apache/http/util/CharArrayBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::io::SessionInputBuffer::readLine() const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "readLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::io::SessionInputBuffer::isDataAvailable(int32_t arg0) const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDataAvailable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::apache::http::io::HttpTransportMetrics org::apache::http::io::SessionInputBuffer::getMetrics() const {
    if (!::org::apache::http::io::SessionInputBuffer::_class) ::org::apache::http::io::SessionInputBuffer::_class = java::fetch_class("org/apache/http/io/SessionInputBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMetrics", "()Lorg/apache/http/io/HttpTransportMetrics;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::io::HttpTransportMetrics _ret(ret);
    return _ret;
}

int64_t org::apache::http::io::HttpTransportMetrics::getBytesTransferred() const {
    if (!::org::apache::http::io::HttpTransportMetrics::_class) ::org::apache::http::io::HttpTransportMetrics::_class = java::fetch_class("org/apache/http/io/HttpTransportMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBytesTransferred", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void org::apache::http::io::HttpTransportMetrics::reset() const {
    if (!::org::apache::http::io::HttpTransportMetrics::_class) ::org::apache::http::io::HttpTransportMetrics::_class = java::fetch_class("org/apache/http/io/HttpTransportMetrics");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::HttpMessage org::apache::http::io::HttpMessageParser::parse() const {
    if (!::org::apache::http::io::HttpMessageParser::_class) ::org::apache::http::io::HttpMessageParser::_class = java::fetch_class("org/apache/http/io/HttpMessageParser");
    static jmethodID mid = java::jni->GetMethodID(_class, "parse", "()Lorg/apache/http/HttpMessage;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::HttpMessage _ret(ret);
    return _ret;
}


#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "org.apache.http.Header.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.HttpMessage.hpp"
#include "org.apache.http.entity.AbstractHttpEntity.hpp"
#include "org.apache.http.entity.BasicHttpEntity.hpp"
#include "org.apache.http.entity.BufferedHttpEntity.hpp"
#include "org.apache.http.entity.ByteArrayEntity.hpp"
#include "org.apache.http.entity.ContentLengthStrategy.hpp"
#include "org.apache.http.entity.ContentProducer.hpp"
#include "org.apache.http.entity.EntityTemplate.hpp"
#include "org.apache.http.entity.FileEntity.hpp"
#include "org.apache.http.entity.HttpEntityWrapper.hpp"
#include "org.apache.http.entity.InputStreamEntity.hpp"
#include "org.apache.http.entity.SerializableEntity.hpp"
#include "org.apache.http.entity.StringEntity.hpp"

jclass org::apache::http::entity::ContentLengthStrategy::_class = nullptr;
jclass org::apache::http::entity::ByteArrayEntity::_class = nullptr;
jclass org::apache::http::entity::StringEntity::_class = nullptr;
jclass org::apache::http::entity::BufferedHttpEntity::_class = nullptr;
jclass org::apache::http::entity::FileEntity::_class = nullptr;
jclass org::apache::http::entity::HttpEntityWrapper::_class = nullptr;
jclass org::apache::http::entity::BasicHttpEntity::_class = nullptr;
jclass org::apache::http::entity::InputStreamEntity::_class = nullptr;
jclass org::apache::http::entity::AbstractHttpEntity::_class = nullptr;
jclass org::apache::http::entity::SerializableEntity::_class = nullptr;
jclass org::apache::http::entity::EntityTemplate::_class = nullptr;
jclass org::apache::http::entity::ContentProducer::_class = nullptr;

int64_t org::apache::http::entity::ContentLengthStrategy::determineLength(const ::org::apache::http::HttpMessage& arg0) const {
    if (!::org::apache::http::entity::ContentLengthStrategy::_class) ::org::apache::http::entity::ContentLengthStrategy::_class = java::fetch_class("org/apache/http/entity/ContentLengthStrategy");
    static jmethodID mid = java::jni->GetMethodID(_class, "determineLength", "(Lorg/apache/http/HttpMessage;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::ByteArrayEntity::ByteArrayEntity(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::entity::ByteArrayEntity::isRepeatable() const {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t org::apache::http::entity::ByteArrayEntity::getContentLength() const {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::ByteArrayEntity::getContent() const {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::entity::ByteArrayEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::ByteArrayEntity::isStreaming() const {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object org::apache::http::entity::ByteArrayEntity::clone() const {
    if (!::org::apache::http::entity::ByteArrayEntity::_class) ::org::apache::http::entity::ByteArrayEntity::_class = java::fetch_class("org/apache/http/entity/ByteArrayEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::StringEntity::StringEntity(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::StringEntity::StringEntity(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::entity::StringEntity::isRepeatable() const {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t org::apache::http::entity::StringEntity::getContentLength() const {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::StringEntity::getContent() const {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::entity::StringEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::StringEntity::isStreaming() const {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object org::apache::http::entity::StringEntity::clone() const {
    if (!::org::apache::http::entity::StringEntity::_class) ::org::apache::http::entity::StringEntity::_class = java::fetch_class("org/apache/http/entity/StringEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::BufferedHttpEntity::BufferedHttpEntity(const ::org::apache::http::HttpEntity& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::HttpEntityWrapper((jobject)0) {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::entity::BufferedHttpEntity::getContentLength() const {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::BufferedHttpEntity::getContent() const {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

bool org::apache::http::entity::BufferedHttpEntity::isChunked() const {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChunked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::entity::BufferedHttpEntity::isRepeatable() const {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::BufferedHttpEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::BufferedHttpEntity::isStreaming() const {
    if (!::org::apache::http::entity::BufferedHttpEntity::_class) ::org::apache::http::entity::BufferedHttpEntity::_class = java::fetch_class("org/apache/http/entity/BufferedHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::FileEntity::FileEntity(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::entity::FileEntity::isRepeatable() const {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t org::apache::http::entity::FileEntity::getContentLength() const {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::FileEntity::getContent() const {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::entity::FileEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::FileEntity::isStreaming() const {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object org::apache::http::entity::FileEntity::clone() const {
    if (!::org::apache::http::entity::FileEntity::_class) ::org::apache::http::entity::FileEntity::_class = java::fetch_class("org/apache/http/entity/FileEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::HttpEntityWrapper::HttpEntityWrapper(const ::org::apache::http::HttpEntity& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0) {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/HttpEntity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool org::apache::http::entity::HttpEntityWrapper::isRepeatable() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::entity::HttpEntityWrapper::isChunked() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChunked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t org::apache::http::entity::HttpEntityWrapper::getContentLength() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::entity::HttpEntityWrapper::getContentType() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentType", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::entity::HttpEntityWrapper::getContentEncoding() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentEncoding", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::java::io::InputStream org::apache::http::entity::HttpEntityWrapper::getContent() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::entity::HttpEntityWrapper::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::HttpEntityWrapper::isStreaming() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::HttpEntityWrapper::consumeContent() const {
    if (!::org::apache::http::entity::HttpEntityWrapper::_class) ::org::apache::http::entity::HttpEntityWrapper::_class = java::fetch_class("org/apache/http/entity/HttpEntityWrapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::BasicHttpEntity::BasicHttpEntity() : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::entity::BasicHttpEntity::getContentLength() const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::BasicHttpEntity::getContent() const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

bool org::apache::http::entity::BasicHttpEntity::isRepeatable() const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::BasicHttpEntity::setContentLength(int64_t arg0) const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentLength", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::BasicHttpEntity::setContent(const ::java::io::InputStream& arg0) const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContent", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::BasicHttpEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::BasicHttpEntity::isStreaming() const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::BasicHttpEntity::consumeContent() const {
    if (!::org::apache::http::entity::BasicHttpEntity::_class) ::org::apache::http::entity::BasicHttpEntity::_class = java::fetch_class("org/apache/http/entity/BasicHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::InputStreamEntity::InputStreamEntity(const ::java::io::InputStream& arg0, int64_t arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool org::apache::http::entity::InputStreamEntity::isRepeatable() const {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t org::apache::http::entity::InputStreamEntity::getContentLength() const {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::InputStreamEntity::getContent() const {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void org::apache::http::entity::InputStreamEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::InputStreamEntity::isStreaming() const {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::InputStreamEntity::consumeContent() const {
    if (!::org::apache::http::entity::InputStreamEntity::_class) ::org::apache::http::entity::InputStreamEntity::_class = java::fetch_class("org/apache/http/entity/InputStreamEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::apache::http::Header org::apache::http::entity::AbstractHttpEntity::getContentType() const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentType", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

::org::apache::http::Header org::apache::http::entity::AbstractHttpEntity::getContentEncoding() const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentEncoding", "()Lorg/apache/http/Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::Header _ret(ret);
    return _ret;
}

bool org::apache::http::entity::AbstractHttpEntity::isChunked() const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChunked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::AbstractHttpEntity::setContentType(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentType", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::AbstractHttpEntity::setContentType(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentType", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::AbstractHttpEntity::setContentEncoding(const ::org::apache::http::Header& arg0) const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentEncoding", "(Lorg/apache/http/Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::AbstractHttpEntity::setContentEncoding(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::AbstractHttpEntity::setChunked(bool arg0) const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChunked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::entity::AbstractHttpEntity::consumeContent() const {
    if (!::org::apache::http::entity::AbstractHttpEntity::_class) ::org::apache::http::entity::AbstractHttpEntity::_class = java::fetch_class("org/apache/http/entity/AbstractHttpEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::SerializableEntity::SerializableEntity(const ::java::io::Serializable& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::SerializableEntity::_class) ::org::apache::http::entity::SerializableEntity::_class = java::fetch_class("org/apache/http/entity/SerializableEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Serializable;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::io::InputStream org::apache::http::entity::SerializableEntity::getContent() const {
    if (!::org::apache::http::entity::SerializableEntity::_class) ::org::apache::http::entity::SerializableEntity::_class = java::fetch_class("org/apache/http/entity/SerializableEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

int64_t org::apache::http::entity::SerializableEntity::getContentLength() const {
    if (!::org::apache::http::entity::SerializableEntity::_class) ::org::apache::http::entity::SerializableEntity::_class = java::fetch_class("org/apache/http/entity/SerializableEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool org::apache::http::entity::SerializableEntity::isRepeatable() const {
    if (!::org::apache::http::entity::SerializableEntity::_class) ::org::apache::http::entity::SerializableEntity::_class = java::fetch_class("org/apache/http/entity/SerializableEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::entity::SerializableEntity::isStreaming() const {
    if (!::org::apache::http::entity::SerializableEntity::_class) ::org::apache::http::entity::SerializableEntity::_class = java::fetch_class("org/apache/http/entity/SerializableEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::SerializableEntity::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::SerializableEntity::_class) ::org::apache::http::entity::SerializableEntity::_class = java::fetch_class("org/apache/http/entity/SerializableEntity");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::entity::EntityTemplate::EntityTemplate(const ::org::apache::http::entity::ContentProducer& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntity((jobject)0), ::org::apache::http::entity::AbstractHttpEntity((jobject)0) {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/entity/ContentProducer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int64_t org::apache::http::entity::EntityTemplate::getContentLength() const {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream org::apache::http::entity::EntityTemplate::getContent() const {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

bool org::apache::http::entity::EntityTemplate::isRepeatable() const {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRepeatable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::EntityTemplate::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::entity::EntityTemplate::isStreaming() const {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStreaming", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::apache::http::entity::EntityTemplate::consumeContent() const {
    if (!::org::apache::http::entity::EntityTemplate::_class) ::org::apache::http::entity::EntityTemplate::_class = java::fetch_class("org/apache/http/entity/EntityTemplate");
    static jmethodID mid = java::jni->GetMethodID(_class, "consumeContent", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::apache::http::entity::ContentProducer::writeTo(const ::java::io::OutputStream& arg0) const {
    if (!::org::apache::http::entity::ContentProducer::_class) ::org::apache::http::entity::ContentProducer::_class = java::fetch_class("org/apache/http/entity/ContentProducer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeTo", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}


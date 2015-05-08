#include "java-core.hpp"
#include <memory>
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "org.apache.http.HttpEntity.hpp"
#include "org.apache.http.util.ByteArrayBuffer.hpp"
#include "org.apache.http.util.CharArrayBuffer.hpp"
#include "org.apache.http.util.EncodingUtils.hpp"
#include "org.apache.http.util.EntityUtils.hpp"
#include "org.apache.http.util.ExceptionUtils.hpp"
#include "org.apache.http.util.LangUtils.hpp"
#include "org.apache.http.util.VersionInfo.hpp"

jclass org::apache::http::util::EntityUtils::_class = nullptr;
jclass org::apache::http::util::CharArrayBuffer::_class = nullptr;
jclass org::apache::http::util::ByteArrayBuffer::_class = nullptr;
jclass org::apache::http::util::LangUtils::_class = nullptr;
jclass org::apache::http::util::EncodingUtils::_class = nullptr;
jclass org::apache::http::util::VersionInfo::_class = nullptr;
jclass org::apache::http::util::ExceptionUtils::_class = nullptr;

std::vector< int8_t> org::apache::http::util::EntityUtils::toByteArray(const ::org::apache::http::HttpEntity& arg0){
    if (!::org::apache::http::util::EntityUtils::_class) ::org::apache::http::util::EntityUtils::_class = java::fetch_class("org/apache/http/util/EntityUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toByteArray", "(Lorg/apache/http/HttpEntity;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String org::apache::http::util::EntityUtils::getContentCharSet(const ::org::apache::http::HttpEntity& arg0){
    if (!::org::apache::http::util::EntityUtils::_class) ::org::apache::http::util::EntityUtils::_class = java::fetch_class("org/apache/http/util/EntityUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentCharSet", "(Lorg/apache/http/HttpEntity;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::EntityUtils::toString(const ::org::apache::http::HttpEntity& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::util::EntityUtils::_class) ::org::apache::http::util::EntityUtils::_class = java::fetch_class("org/apache/http/util/EntityUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(Lorg/apache/http/HttpEntity;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::EntityUtils::toString(const ::org::apache::http::HttpEntity& arg0){
    if (!::org::apache::http::util::EntityUtils::_class) ::org::apache::http::util::EntityUtils::_class = java::fetch_class("org/apache/http/util/EntityUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "(Lorg/apache/http/HttpEntity;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::util::CharArrayBuffer::CharArrayBuffer(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::util::CharArrayBuffer::append(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::CharArrayBuffer::append(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::util::CharArrayBuffer::append(const ::org::apache::http::util::CharArrayBuffer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Lorg/apache/http/util/CharArrayBuffer;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::CharArrayBuffer::append(const ::org::apache::http::util::CharArrayBuffer& arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Lorg/apache/http/util/CharArrayBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::util::CharArrayBuffer::append(uint16_t arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)V");
    uint16_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::util::CharArrayBuffer::append(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::CharArrayBuffer::append(const ::org::apache::http::util::ByteArrayBuffer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Lorg/apache/http/util/ByteArrayBuffer;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::CharArrayBuffer::append(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::util::CharArrayBuffer::clear() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< uint16_t> org::apache::http::util::CharArrayBuffer::toCharArray() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toCharArray", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

uint16_t org::apache::http::util::CharArrayBuffer::charAt(int32_t arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

std::vector< uint16_t> org::apache::http::util::CharArrayBuffer::buffer() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "buffer", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t org::apache::http::util::CharArrayBuffer::capacity() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::util::CharArrayBuffer::length() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::apache::http::util::CharArrayBuffer::ensureCapacity(int32_t arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::util::CharArrayBuffer::setLength(int32_t arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::util::CharArrayBuffer::isEmpty() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::util::CharArrayBuffer::isFull() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFull", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::util::CharArrayBuffer::indexOf(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(III)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t org::apache::http::util::CharArrayBuffer::indexOf(int32_t arg0) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::util::CharArrayBuffer::substring(int32_t arg0, int32_t arg1) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "substring", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::CharArrayBuffer::substringTrimmed(int32_t arg0, int32_t arg1) const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "substringTrimmed", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::CharArrayBuffer::toString() const {
    if (!::org::apache::http::util::CharArrayBuffer::_class) ::org::apache::http::util::CharArrayBuffer::_class = java::fetch_class("org/apache/http/util/CharArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::util::ByteArrayBuffer::ByteArrayBuffer(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void org::apache::http::util::ByteArrayBuffer::append(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::ByteArrayBuffer::append(int32_t arg0) const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::apache::http::util::ByteArrayBuffer::append(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::ByteArrayBuffer::append(const ::org::apache::http::util::CharArrayBuffer& arg0, int32_t arg1, int32_t arg2) const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Lorg/apache/http/util/CharArrayBuffer;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::apache::http::util::ByteArrayBuffer::clear() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< int8_t> org::apache::http::util::ByteArrayBuffer::toByteArray() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t org::apache::http::util::ByteArrayBuffer::byteAt(int32_t arg0) const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteAt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t org::apache::http::util::ByteArrayBuffer::capacity() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::apache::http::util::ByteArrayBuffer::length() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> org::apache::http::util::ByteArrayBuffer::buffer() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "buffer", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void org::apache::http::util::ByteArrayBuffer::setLength(int32_t arg0) const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::apache::http::util::ByteArrayBuffer::isEmpty() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::apache::http::util::ByteArrayBuffer::isFull() const {
    if (!::org::apache::http::util::ByteArrayBuffer::_class) ::org::apache::http::util::ByteArrayBuffer::_class = java::fetch_class("org/apache/http/util/ByteArrayBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFull", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::util::LangUtils::hashCode(int32_t arg0, int32_t arg1){
    if (!::org::apache::http::util::LangUtils::_class) ::org::apache::http::util::LangUtils::_class = java::fetch_class("org/apache/http/util/LangUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t org::apache::http::util::LangUtils::hashCode(int32_t arg0, bool arg1){
    if (!::org::apache::http::util::LangUtils::_class) ::org::apache::http::util::LangUtils::_class = java::fetch_class("org/apache/http/util/LangUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "(IZ)I");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t org::apache::http::util::LangUtils::hashCode(int32_t arg0, const ::java::lang::Object& arg1){
    if (!::org::apache::http::util::LangUtils::_class) ::org::apache::http::util::LangUtils::_class = java::fetch_class("org/apache/http/util/LangUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "(ILjava/lang/Object;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool org::apache::http::util::LangUtils::equals(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::org::apache::http::util::LangUtils::_class) ::org::apache::http::util::LangUtils::_class = java::fetch_class("org/apache/http/util/LangUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool org::apache::http::util::LangUtils::equals(const std::vector< ::java::lang::Object>& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::org::apache::http::util::LangUtils::_class) ::org::apache::http::util::LangUtils::_class = java::fetch_class("org/apache/http/util/LangUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String org::apache::http::util::EncodingUtils::getString(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3){
    if (!::org::apache::http::util::EncodingUtils::_class) ::org::apache::http::util::EncodingUtils::_class = java::fetch_class("org/apache/http/util/EncodingUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getString", "([BIILjava/lang/String;)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::EncodingUtils::getString(const std::vector< int8_t>& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::util::EncodingUtils::_class) ::org::apache::http::util::EncodingUtils::_class = java::fetch_class("org/apache/http/util/EncodingUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getString", "([BLjava/lang/String;)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> org::apache::http::util::EncodingUtils::getBytes(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::org::apache::http::util::EncodingUtils::_class) ::org::apache::http::util::EncodingUtils::_class = java::fetch_class("org/apache/http/util/EncodingUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBytes", "(Ljava/lang/String;Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> org::apache::http::util::EncodingUtils::getAsciiBytes(const ::java::lang::String& arg0){
    if (!::org::apache::http::util::EncodingUtils::_class) ::org::apache::http::util::EncodingUtils::_class = java::fetch_class("org/apache/http/util/EncodingUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAsciiBytes", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String org::apache::http::util::EncodingUtils::getAsciiString(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::org::apache::http::util::EncodingUtils::_class) ::org::apache::http::util::EncodingUtils::_class = java::fetch_class("org/apache/http/util/EncodingUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAsciiString", "([BII)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::EncodingUtils::getAsciiString(const std::vector< int8_t>& arg0){
    if (!::org::apache::http::util::EncodingUtils::_class) ::org::apache::http::util::EncodingUtils::_class = java::fetch_class("org/apache/http/util/EncodingUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAsciiString", "([B)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::VersionInfo::getPackage() const {
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::VersionInfo::getModule() const {
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModule", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::VersionInfo::getRelease() const {
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRelease", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::VersionInfo::getTimestamp() const {
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::VersionInfo::getClassloader() const {
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassloader", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::util::VersionInfo::toString() const {
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::org::apache::http::util::VersionInfo> org::apache::http::util::VersionInfo::loadVersionInfo(const std::vector< ::java::lang::String>& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadVersionInfo", "([Ljava/lang/String;Ljava/lang/ClassLoader;)[Lorg/apache/http/util/VersionInfo;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::org::apache::http::util::VersionInfo> _ret(rets, ::org::apache::http::util::VersionInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::org::apache::http::util::VersionInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::org::apache::http::util::VersionInfo org::apache::http::util::VersionInfo::loadVersionInfo(const ::java::lang::String& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::org::apache::http::util::VersionInfo::_class) ::org::apache::http::util::VersionInfo::_class = java::fetch_class("org/apache/http/util/VersionInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadVersionInfo", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Lorg/apache/http/util/VersionInfo;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::apache::http::util::VersionInfo _ret(ret);
    return _ret;
}

void org::apache::http::util::ExceptionUtils::initCause(const ::java::lang::Throwable& arg0, const ::java::lang::Throwable& arg1){
    if (!::org::apache::http::util::ExceptionUtils::_class) ::org::apache::http::util::ExceptionUtils::_class = java::fetch_class("org/apache/http/util/ExceptionUtils");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "initCause", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}


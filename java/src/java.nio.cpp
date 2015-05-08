#include "java-core.hpp"
#include <memory>
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.nio.Buffer.hpp"
#include "java.nio.BufferOverflowException.hpp"
#include "java.nio.BufferUnderflowException.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.nio.ByteOrder.hpp"
#include "java.nio.CharBuffer.hpp"
#include "java.nio.DoubleBuffer.hpp"
#include "java.nio.FloatBuffer.hpp"
#include "java.nio.IntBuffer.hpp"
#include "java.nio.InvalidMarkException.hpp"
#include "java.nio.LongBuffer.hpp"
#include "java.nio.MappedByteBuffer.hpp"
#include "java.nio.ReadOnlyBufferException.hpp"
#include "java.nio.ShortBuffer.hpp"

jclass java::nio::MappedByteBuffer::_class = nullptr;
jclass java::nio::ReadOnlyBufferException::_class = nullptr;
jclass java::nio::InvalidMarkException::_class = nullptr;
jclass java::nio::ByteOrder::_class = nullptr;
jclass java::nio::Buffer::_class = nullptr;
jclass java::nio::FloatBuffer::_class = nullptr;
jclass java::nio::IntBuffer::_class = nullptr;
jclass java::nio::BufferOverflowException::_class = nullptr;
jclass java::nio::CharBuffer::_class = nullptr;
jclass java::nio::ShortBuffer::_class = nullptr;
jclass java::nio::DoubleBuffer::_class = nullptr;
jclass java::nio::LongBuffer::_class = nullptr;
jclass java::nio::BufferUnderflowException::_class = nullptr;
jclass java::nio::ByteBuffer::_class = nullptr;

bool java::nio::MappedByteBuffer::isLoaded() const {
    if (!::java::nio::MappedByteBuffer::_class) ::java::nio::MappedByteBuffer::_class = java::fetch_class("java/nio/MappedByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoaded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::MappedByteBuffer java::nio::MappedByteBuffer::load() const {
    if (!::java::nio::MappedByteBuffer::_class) ::java::nio::MappedByteBuffer::_class = java::fetch_class("java/nio/MappedByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "()Ljava/nio/MappedByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::MappedByteBuffer _ret(ret);
    return _ret;
}

::java::nio::MappedByteBuffer java::nio::MappedByteBuffer::force() const {
    if (!::java::nio::MappedByteBuffer::_class) ::java::nio::MappedByteBuffer::_class = java::fetch_class("java/nio/MappedByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "force", "()Ljava/nio/MappedByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::MappedByteBuffer _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::ReadOnlyBufferException::ReadOnlyBufferException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::lang::UnsupportedOperationException((jobject)0) {
    if (!::java::nio::ReadOnlyBufferException::_class) ::java::nio::ReadOnlyBufferException::_class = java::fetch_class("java/nio/ReadOnlyBufferException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::InvalidMarkException::InvalidMarkException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::InvalidMarkException::_class) ::java::nio::InvalidMarkException::_class = java::fetch_class("java/nio/InvalidMarkException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::nio::ByteOrder java::nio::ByteOrder::nativeOrder(){
    if (!::java::nio::ByteOrder::_class) ::java::nio::ByteOrder::_class = java::fetch_class("java/nio/ByteOrder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nativeOrder", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::lang::String java::nio::ByteOrder::toString() const {
    if (!::java::nio::ByteOrder::_class) ::java::nio::ByteOrder::_class = java::fetch_class("java/nio/ByteOrder");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::nio::Buffer::array() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::nio::Buffer::arrayOffset() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::nio::Buffer::capacity() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::Buffer java::nio::Buffer::clear() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()Ljava/nio/Buffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

::java::nio::Buffer java::nio::Buffer::flip() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "flip", "()Ljava/nio/Buffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

bool java::nio::Buffer::hasArray() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::Buffer::hasRemaining() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasRemaining", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::Buffer::isDirect() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::Buffer::isReadOnly() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::Buffer::limit() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "limit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::Buffer java::nio::Buffer::limit(int32_t arg0) const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "limit", "(I)Ljava/nio/Buffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

::java::nio::Buffer java::nio::Buffer::mark() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "()Ljava/nio/Buffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

int32_t java::nio::Buffer::position() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::Buffer java::nio::Buffer::position(int32_t arg0) const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "(I)Ljava/nio/Buffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

int32_t java::nio::Buffer::remaining() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "remaining", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::Buffer java::nio::Buffer::reset() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()Ljava/nio/Buffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

::java::nio::Buffer java::nio::Buffer::rewind() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "rewind", "()Ljava/nio/Buffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::Buffer _ret(ret);
    return _ret;
}

::java::lang::String java::nio::Buffer::toString() const {
    if (!::java::nio::Buffer::_class) ::java::nio::Buffer::_class = java::fetch_class("java/nio/Buffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::allocate(int32_t arg0){
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/FloatBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::wrap(const std::vector< float>& arg0){
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([F)Ljava/nio/FloatBuffer;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::wrap(const std::vector< float>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([FII)Ljava/nio/FloatBuffer;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

std::vector< float> java::nio::FloatBuffer::array() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[F");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::FloatBuffer::arrayOffset() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::FloatBuffer java::nio::FloatBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::compact() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/FloatBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::FloatBuffer::compareTo(const ::java::nio::FloatBuffer& arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/FloatBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::FloatBuffer java::nio::FloatBuffer::duplicate() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/FloatBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

bool java::nio::FloatBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

float java::nio::FloatBuffer::get() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::nio::FloatBuffer java::nio::FloatBuffer::get(const std::vector< float>& arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([F)Ljava/nio/FloatBuffer;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::get(const std::vector< float>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([FII)Ljava/nio/FloatBuffer;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

float java::nio::FloatBuffer::get(int32_t arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

bool java::nio::FloatBuffer::hasArray() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::FloatBuffer::hashCode() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::FloatBuffer::isDirect() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::FloatBuffer::order() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::put(float arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(F)Ljava/nio/FloatBuffer;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::put(const std::vector< float>& arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([F)Ljava/nio/FloatBuffer;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::put(const std::vector< float>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([FII)Ljava/nio/FloatBuffer;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::put(const ::java::nio::FloatBuffer& arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::put(int32_t arg0, float arg1) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IF)Ljava/nio/FloatBuffer;");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::FloatBuffer::slice() const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/FloatBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::FloatBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::FloatBuffer::_class) ::java::nio::FloatBuffer::_class = java::fetch_class("java/nio/FloatBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::IntBuffer java::nio::IntBuffer::allocate(int32_t arg0){
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/IntBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::wrap(const std::vector< int32_t>& arg0){
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([I)Ljava/nio/IntBuffer;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::wrap(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([III)Ljava/nio/IntBuffer;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

std::vector< int32_t> java::nio::IntBuffer::array() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::IntBuffer::arrayOffset() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::IntBuffer java::nio::IntBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/IntBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::compact() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/IntBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::IntBuffer::compareTo(const ::java::nio::IntBuffer& arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/IntBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::IntBuffer java::nio::IntBuffer::duplicate() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/IntBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

bool java::nio::IntBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::nio::IntBuffer::get() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::IntBuffer java::nio::IntBuffer::get(const std::vector< int32_t>& arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([I)Ljava/nio/IntBuffer;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::get(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([III)Ljava/nio/IntBuffer;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::IntBuffer::get(int32_t arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::nio::IntBuffer::hasArray() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::IntBuffer::hashCode() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::IntBuffer::isDirect() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::IntBuffer::order() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::put(int32_t arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(I)Ljava/nio/IntBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::put(const std::vector< int32_t>& arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([I)Ljava/nio/IntBuffer;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::put(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([III)Ljava/nio/IntBuffer;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::put(const ::java::nio::IntBuffer& arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::put(int32_t arg0, int32_t arg1) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(II)Ljava/nio/IntBuffer;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::IntBuffer::slice() const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/IntBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::IntBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::IntBuffer::_class) ::java::nio::IntBuffer::_class = java::fetch_class("java/nio/IntBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::BufferOverflowException::BufferOverflowException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::BufferOverflowException::_class) ::java::nio::BufferOverflowException::_class = java::fetch_class("java/nio/BufferOverflowException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::nio::CharBuffer java::nio::CharBuffer::allocate(int32_t arg0){
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/CharBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::wrap(const std::vector< uint16_t>& arg0){
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([C)Ljava/nio/CharBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::wrap(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([CII)Ljava/nio/CharBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::wrap(const ::java::lang::CharSequence& arg0){
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::wrap(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

std::vector< uint16_t> java::nio::CharBuffer::array() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::CharBuffer::arrayOffset() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::CharBuffer java::nio::CharBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/CharBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

uint16_t java::nio::CharBuffer::charAt(int32_t arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "charAt", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

::java::nio::CharBuffer java::nio::CharBuffer::compact() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/CharBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::CharBuffer::compareTo(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/CharBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::CharBuffer java::nio::CharBuffer::duplicate() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/CharBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

bool java::nio::CharBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

uint16_t java::nio::CharBuffer::get() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::nio::CharBuffer java::nio::CharBuffer::get(const std::vector< uint16_t>& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([C)Ljava/nio/CharBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::get(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([CII)Ljava/nio/CharBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

uint16_t java::nio::CharBuffer::get(int32_t arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

bool java::nio::CharBuffer::hasArray() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::CharBuffer::hashCode() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::CharBuffer::isDirect() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::CharBuffer::length() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::CharBuffer::order() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(uint16_t arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(C)Ljava/nio/CharBuffer;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(const std::vector< uint16_t>& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([C)Ljava/nio/CharBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([CII)Ljava/nio/CharBuffer;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(int32_t arg0, uint16_t arg1) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IC)Ljava/nio/CharBuffer;");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(const ::java::lang::String& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::put(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/String;II)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::slice() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/CharBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::lang::CharSequence java::nio::CharBuffer::subSequence(int32_t arg0, int32_t arg1) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSequence", "(II)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::String java::nio::CharBuffer::toString() const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::append(uint16_t arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(C)Ljava/nio/CharBuffer;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::append(const ::java::lang::CharSequence& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::CharBuffer::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::CharBuffer::read(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/CharBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::nio::CharBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::CharBuffer::_class) ::java::nio::CharBuffer::_class = java::fetch_class("java/nio/CharBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::ShortBuffer java::nio::ShortBuffer::allocate(int32_t arg0){
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/ShortBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::wrap(const std::vector< int16_t>& arg0){
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([S)Ljava/nio/ShortBuffer;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::wrap(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([SII)Ljava/nio/ShortBuffer;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

std::vector< int16_t> java::nio::ShortBuffer::array() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[S");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jshort* reta = java::jni->GetShortArrayElements((jshortArray)ret, nullptr);
    std::vector< int16_t> _ret(reta, reta+rets);
    java::jni->ReleaseShortArrayElements((jshortArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::ShortBuffer::arrayOffset() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::ShortBuffer java::nio::ShortBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::compact() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/ShortBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::ShortBuffer::compareTo(const ::java::nio::ShortBuffer& arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/ShortBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::ShortBuffer java::nio::ShortBuffer::duplicate() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/ShortBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

bool java::nio::ShortBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int16_t java::nio::ShortBuffer::get() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::nio::ShortBuffer java::nio::ShortBuffer::get(const std::vector< int16_t>& arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([S)Ljava/nio/ShortBuffer;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::get(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([SII)Ljava/nio/ShortBuffer;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

int16_t java::nio::ShortBuffer::get(int32_t arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

bool java::nio::ShortBuffer::hasArray() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::ShortBuffer::hashCode() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::ShortBuffer::isDirect() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::ShortBuffer::order() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::put(int16_t arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(S)Ljava/nio/ShortBuffer;");
    int16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::put(const std::vector< int16_t>& arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([S)Ljava/nio/ShortBuffer;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::put(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([SII)Ljava/nio/ShortBuffer;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::put(const ::java::nio::ShortBuffer& arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::put(int32_t arg0, int16_t arg1) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IS)Ljava/nio/ShortBuffer;");
    int32_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ShortBuffer::slice() const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/ShortBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::ShortBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::ShortBuffer::_class) ::java::nio::ShortBuffer::_class = java::fetch_class("java/nio/ShortBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::allocate(int32_t arg0){
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/DoubleBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::wrap(const std::vector< double>& arg0){
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([D)Ljava/nio/DoubleBuffer;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::wrap(const std::vector< double>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([DII)Ljava/nio/DoubleBuffer;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

std::vector< double> java::nio::DoubleBuffer::array() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[D");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::DoubleBuffer::arrayOffset() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::compact() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/DoubleBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::DoubleBuffer::compareTo(const ::java::nio::DoubleBuffer& arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/DoubleBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::duplicate() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/DoubleBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

bool java::nio::DoubleBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

double java::nio::DoubleBuffer::get() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::get(const std::vector< double>& arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([D)Ljava/nio/DoubleBuffer;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::get(const std::vector< double>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([DII)Ljava/nio/DoubleBuffer;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

double java::nio::DoubleBuffer::get(int32_t arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

bool java::nio::DoubleBuffer::hasArray() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::DoubleBuffer::hashCode() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::DoubleBuffer::isDirect() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::DoubleBuffer::order() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::put(double arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(D)Ljava/nio/DoubleBuffer;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::put(const std::vector< double>& arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([D)Ljava/nio/DoubleBuffer;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::put(const std::vector< double>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([DII)Ljava/nio/DoubleBuffer;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::put(const ::java::nio::DoubleBuffer& arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::put(int32_t arg0, double arg1) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(ID)Ljava/nio/DoubleBuffer;");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::DoubleBuffer::slice() const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/DoubleBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::DoubleBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::DoubleBuffer::_class) ::java::nio::DoubleBuffer::_class = java::fetch_class("java/nio/DoubleBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::LongBuffer java::nio::LongBuffer::allocate(int32_t arg0){
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/LongBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::wrap(const std::vector< int64_t>& arg0){
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([J)Ljava/nio/LongBuffer;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::wrap(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([JII)Ljava/nio/LongBuffer;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

std::vector< int64_t> java::nio::LongBuffer::array() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[J");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::LongBuffer::arrayOffset() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::LongBuffer java::nio::LongBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/LongBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::compact() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/LongBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::LongBuffer::compareTo(const ::java::nio::LongBuffer& arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/LongBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::LongBuffer java::nio::LongBuffer::duplicate() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/LongBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

bool java::nio::LongBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int64_t java::nio::LongBuffer::get() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::nio::LongBuffer java::nio::LongBuffer::get(const std::vector< int64_t>& arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([J)Ljava/nio/LongBuffer;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::get(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([JII)Ljava/nio/LongBuffer;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

int64_t java::nio::LongBuffer::get(int32_t arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool java::nio::LongBuffer::hasArray() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::LongBuffer::hashCode() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::LongBuffer::isDirect() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::LongBuffer::order() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::put(int64_t arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(J)Ljava/nio/LongBuffer;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::put(const std::vector< int64_t>& arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([J)Ljava/nio/LongBuffer;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::put(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([JII)Ljava/nio/LongBuffer;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::put(const ::java::nio::LongBuffer& arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::put(int32_t arg0, int64_t arg1) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IJ)Ljava/nio/LongBuffer;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::LongBuffer::slice() const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/LongBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::LongBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::LongBuffer::_class) ::java::nio::LongBuffer::_class = java::fetch_class("java/nio/LongBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::BufferUnderflowException::BufferUnderflowException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::BufferUnderflowException::_class) ::java::nio::BufferUnderflowException::_class = java::fetch_class("java/nio/BufferUnderflowException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::nio::ByteBuffer java::nio::ByteBuffer::allocate(int32_t arg0){
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocate", "(I)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::allocateDirect(int32_t arg0){
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allocateDirect", "(I)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::wrap(const std::vector< int8_t>& arg0){
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([B)Ljava/nio/ByteBuffer;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::wrap(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "([BII)Ljava/nio/ByteBuffer;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

std::vector< int8_t> java::nio::ByteBuffer::array() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "array", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::nio::ByteBuffer::arrayOffset() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrayOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::CharBuffer java::nio::ByteBuffer::asCharBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asCharBuffer", "()Ljava/nio/CharBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::DoubleBuffer java::nio::ByteBuffer::asDoubleBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asDoubleBuffer", "()Ljava/nio/DoubleBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::DoubleBuffer _ret(ret);
    return _ret;
}

::java::nio::FloatBuffer java::nio::ByteBuffer::asFloatBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asFloatBuffer", "()Ljava/nio/FloatBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::FloatBuffer _ret(ret);
    return _ret;
}

::java::nio::IntBuffer java::nio::ByteBuffer::asIntBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asIntBuffer", "()Ljava/nio/IntBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::IntBuffer _ret(ret);
    return _ret;
}

::java::nio::LongBuffer java::nio::ByteBuffer::asLongBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asLongBuffer", "()Ljava/nio/LongBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::LongBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::asReadOnlyBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ShortBuffer java::nio::ByteBuffer::asShortBuffer() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "asShortBuffer", "()Ljava/nio/ShortBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ShortBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::compact() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compact", "()Ljava/nio/ByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::ByteBuffer::compareTo(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::ByteBuffer java::nio::ByteBuffer::duplicate() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "duplicate", "()Ljava/nio/ByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

bool java::nio::ByteBuffer::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int8_t java::nio::ByteBuffer::get() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

::java::nio::ByteBuffer java::nio::ByteBuffer::get(const std::vector< int8_t>& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([B)Ljava/nio/ByteBuffer;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::get(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "([BII)Ljava/nio/ByteBuffer;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

int8_t java::nio::ByteBuffer::get(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)B");
    int32_t _arg0 = arg0;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

uint16_t java::nio::ByteBuffer::getChar() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChar", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

uint16_t java::nio::ByteBuffer::getChar(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChar", "(I)C");
    int32_t _arg0 = arg0;
    return java::jni->CallCharMethod(obj, mid, _arg0);
}

double java::nio::ByteBuffer::getDouble() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

double java::nio::ByteBuffer::getDouble(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(I)D");
    int32_t _arg0 = arg0;
    return java::jni->CallDoubleMethod(obj, mid, _arg0);
}

float java::nio::ByteBuffer::getFloat() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float java::nio::ByteBuffer::getFloat(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFloat", "(I)F");
    int32_t _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

int32_t java::nio::ByteBuffer::getInt() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::nio::ByteBuffer::getInt(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::nio::ByteBuffer::getLong() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::nio::ByteBuffer::getLong(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int16_t java::nio::ByteBuffer::getShort() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int16_t java::nio::ByteBuffer::getShort(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

bool java::nio::ByteBuffer::hasArray() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasArray", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::ByteBuffer::hashCode() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::nio::ByteBuffer::isDirect() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteOrder java::nio::ByteBuffer::order() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "()Ljava/nio/ByteOrder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteOrder _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::order(const ::java::nio::ByteOrder& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "order", "(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::put(int8_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(B)Ljava/nio/ByteBuffer;");
    int8_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::put(const std::vector< int8_t>& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([B)Ljava/nio/ByteBuffer;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::put(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "([BII)Ljava/nio/ByteBuffer;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::put(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::put(int32_t arg0, int8_t arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(IB)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    int8_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putChar(uint16_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putChar", "(C)Ljava/nio/ByteBuffer;");
    uint16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putChar(int32_t arg0, uint16_t arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putChar", "(IC)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    uint16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putDouble(double arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(D)Ljava/nio/ByteBuffer;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putDouble(int32_t arg0, double arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(ID)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putFloat(float arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloat", "(F)Ljava/nio/ByteBuffer;");
    float _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putFloat(int32_t arg0, float arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putFloat", "(IF)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putInt(int32_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(I)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putInt(int32_t arg0, int32_t arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(II)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putLong(int64_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(J)Ljava/nio/ByteBuffer;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putLong(int32_t arg0, int64_t arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(IJ)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putShort(int16_t arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putShort", "(S)Ljava/nio/ByteBuffer;");
    int16_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::putShort(int32_t arg0, int16_t arg1) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "putShort", "(IS)Ljava/nio/ByteBuffer;");
    int32_t _arg0 = arg0;
    int16_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::ByteBuffer::slice() const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "slice", "()Ljava/nio/ByteBuffer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::ByteBuffer::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}


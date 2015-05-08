#include "java-core.hpp"
#include <memory>
#include "java.lang.CharSequence.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.nio.CharBuffer.hpp"
#include "java.nio.charset.CharacterCodingException.hpp"
#include "java.nio.charset.Charset.hpp"
#include "java.nio.charset.CharsetDecoder.hpp"
#include "java.nio.charset.CharsetEncoder.hpp"
#include "java.nio.charset.CoderMalfunctionError.hpp"
#include "java.nio.charset.CoderResult.hpp"
#include "java.nio.charset.CodingErrorAction.hpp"
#include "java.nio.charset.IllegalCharsetNameException.hpp"
#include "java.nio.charset.MalformedInputException.hpp"
#include "java.nio.charset.UnmappableCharacterException.hpp"
#include "java.nio.charset.UnsupportedCharsetException.hpp"
#include "java.util.Locale.hpp"
#include "java.util.Set.hpp"
#include "java.util.SortedMap.hpp"

jclass java::nio::charset::UnsupportedCharsetException::_class = nullptr;
jclass java::nio::charset::CodingErrorAction::_class = nullptr;
jclass java::nio::charset::MalformedInputException::_class = nullptr;
jclass java::nio::charset::UnmappableCharacterException::_class = nullptr;
jclass java::nio::charset::Charset::_class = nullptr;
jclass java::nio::charset::CoderResult::_class = nullptr;
jclass java::nio::charset::CharsetDecoder::_class = nullptr;
jclass java::nio::charset::CharacterCodingException::_class = nullptr;
jclass java::nio::charset::CharsetEncoder::_class = nullptr;
jclass java::nio::charset::CoderMalfunctionError::_class = nullptr;
jclass java::nio::charset::IllegalCharsetNameException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::charset::UnsupportedCharsetException::UnsupportedCharsetException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::charset::UnsupportedCharsetException::_class) ::java::nio::charset::UnsupportedCharsetException::_class = java::fetch_class("java/nio/charset/UnsupportedCharsetException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::nio::charset::UnsupportedCharsetException::getCharsetName() const {
    if (!::java::nio::charset::UnsupportedCharsetException::_class) ::java::nio::charset::UnsupportedCharsetException::_class = java::fetch_class("java/nio/charset/UnsupportedCharsetException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharsetName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::nio::charset::CodingErrorAction::toString() const {
    if (!::java::nio::charset::CodingErrorAction::_class) ::java::nio::charset::CodingErrorAction::_class = java::fetch_class("java/nio/charset/CodingErrorAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::charset::MalformedInputException::MalformedInputException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::charset::CharacterCodingException((jobject)0) {
    if (!::java::nio::charset::MalformedInputException::_class) ::java::nio::charset::MalformedInputException::_class = java::fetch_class("java/nio/charset/MalformedInputException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::nio::charset::MalformedInputException::getInputLength() const {
    if (!::java::nio::charset::MalformedInputException::_class) ::java::nio::charset::MalformedInputException::_class = java::fetch_class("java/nio/charset/MalformedInputException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::nio::charset::MalformedInputException::getMessage() const {
    if (!::java::nio::charset::MalformedInputException::_class) ::java::nio::charset::MalformedInputException::_class = java::fetch_class("java/nio/charset/MalformedInputException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::charset::UnmappableCharacterException::UnmappableCharacterException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::charset::CharacterCodingException((jobject)0) {
    if (!::java::nio::charset::UnmappableCharacterException::_class) ::java::nio::charset::UnmappableCharacterException::_class = java::fetch_class("java/nio/charset/UnmappableCharacterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::nio::charset::UnmappableCharacterException::getInputLength() const {
    if (!::java::nio::charset::UnmappableCharacterException::_class) ::java::nio::charset::UnmappableCharacterException::_class = java::fetch_class("java/nio/charset/UnmappableCharacterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::nio::charset::UnmappableCharacterException::getMessage() const {
    if (!::java::nio::charset::UnmappableCharacterException::_class) ::java::nio::charset::UnmappableCharacterException::_class = java::fetch_class("java/nio/charset/UnmappableCharacterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::SortedMap java::nio::charset::Charset::availableCharsets(){
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "availableCharsets", "()Ljava/util/SortedMap;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::nio::charset::Charset java::nio::charset::Charset::forName(const ::java::lang::String& arg0){
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "forName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::charset::Charset _ret(ret);
    return _ret;
}

bool java::nio::charset::Charset::isSupported(const ::java::lang::String& arg0){
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSupported", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool java::nio::charset::Charset::contains(const ::java::nio::charset::Charset& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/nio/charset/Charset;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::nio::charset::CharsetEncoder java::nio::charset::Charset::newEncoder() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "newEncoder", "()Ljava/nio/charset/CharsetEncoder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CharsetEncoder _ret(ret);
    return _ret;
}

::java::nio::charset::CharsetDecoder java::nio::charset::Charset::newDecoder() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDecoder", "()Ljava/nio/charset/CharsetDecoder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CharsetDecoder _ret(ret);
    return _ret;
}

::java::lang::String java::nio::charset::Charset::name() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Set java::nio::charset::Charset::aliases() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "aliases", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::String java::nio::charset::Charset::displayName() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "displayName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::nio::charset::Charset::displayName(const ::java::util::Locale& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "displayName", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::nio::charset::Charset::isRegistered() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRegistered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::charset::Charset::canEncode() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "canEncode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::ByteBuffer java::nio::charset::Charset::encode(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::charset::Charset::encode(const ::java::lang::String& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "encode", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::charset::Charset::decode(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

int32_t java::nio::charset::Charset::compareTo(const ::java::nio::charset::Charset& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/nio/charset/Charset;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::nio::charset::Charset::equals(const ::java::lang::Object& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::nio::charset::Charset::hashCode() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::nio::charset::Charset::toString() const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::nio::charset::Charset java::nio::charset::Charset::defaultCharset(){
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "defaultCharset", "()Ljava/nio/charset/Charset;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::charset::Charset _ret(ret);
    return _ret;
}

int32_t java::nio::charset::Charset::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::nio::charset::Charset::_class) ::java::nio::charset::Charset::_class = java::fetch_class("java/nio/charset/Charset");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::nio::charset::CoderResult java::nio::charset::CoderResult::malformedForLength(int32_t arg0){
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "malformedForLength", "(I)Ljava/nio/charset/CoderResult;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::charset::CoderResult _ret(ret);
    return _ret;
}

::java::nio::charset::CoderResult java::nio::charset::CoderResult::unmappableForLength(int32_t arg0){
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmappableForLength", "(I)Ljava/nio/charset/CoderResult;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::charset::CoderResult _ret(ret);
    return _ret;
}

bool java::nio::charset::CoderResult::isUnderflow() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUnderflow", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::charset::CoderResult::isError() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "isError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::charset::CoderResult::isMalformed() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMalformed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::charset::CoderResult::isOverflow() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOverflow", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::charset::CoderResult::isUnmappable() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUnmappable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::charset::CoderResult::length() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::nio::charset::CoderResult::throwException() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "throwException", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::nio::charset::CoderResult::toString() const {
    if (!::java::nio::charset::CoderResult::_class) ::java::nio::charset::CoderResult::_class = java::fetch_class("java/nio/charset/CoderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

float java::nio::charset::CharsetDecoder::averageCharsPerByte() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "averageCharsPerByte", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::nio::charset::Charset java::nio::charset::CharsetDecoder::charset() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "charset", "()Ljava/nio/charset/Charset;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::Charset _ret(ret);
    return _ret;
}

::java::nio::CharBuffer java::nio::charset::CharsetDecoder::decode(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::CharBuffer _ret(ret);
    return _ret;
}

::java::nio::charset::CoderResult java::nio::charset::CharsetDecoder::decode(const ::java::nio::ByteBuffer& arg0, const ::java::nio::CharBuffer& arg1, bool arg2) const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "decode", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::charset::CoderResult _ret(ret);
    return _ret;
}

::java::nio::charset::Charset java::nio::charset::CharsetDecoder::detectedCharset() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "detectedCharset", "()Ljava/nio/charset/Charset;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::Charset _ret(ret);
    return _ret;
}

::java::nio::charset::CoderResult java::nio::charset::CharsetDecoder::flush(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CoderResult _ret(ret);
    return _ret;
}

bool java::nio::charset::CharsetDecoder::isAutoDetecting() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoDetecting", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::charset::CharsetDecoder::isCharsetDetected() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCharsetDetected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::charset::CodingErrorAction java::nio::charset::CharsetDecoder::malformedInputAction() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CodingErrorAction _ret(ret);
    return _ret;
}

float java::nio::charset::CharsetDecoder::maxCharsPerByte() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "maxCharsPerByte", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::nio::charset::CharsetDecoder java::nio::charset::CharsetDecoder::onMalformedInput(const ::java::nio::charset::CodingErrorAction& arg0) const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CharsetDecoder _ret(ret);
    return _ret;
}

::java::nio::charset::CharsetDecoder java::nio::charset::CharsetDecoder::onUnmappableCharacter(const ::java::nio::charset::CodingErrorAction& arg0) const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CharsetDecoder _ret(ret);
    return _ret;
}

::java::lang::String java::nio::charset::CharsetDecoder::replacement() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replacement", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::nio::charset::CharsetDecoder java::nio::charset::CharsetDecoder::replaceWith(const ::java::lang::String& arg0) const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceWith", "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CharsetDecoder _ret(ret);
    return _ret;
}

::java::nio::charset::CharsetDecoder java::nio::charset::CharsetDecoder::reset() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()Ljava/nio/charset/CharsetDecoder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CharsetDecoder _ret(ret);
    return _ret;
}

::java::nio::charset::CodingErrorAction java::nio::charset::CharsetDecoder::unmappableCharacterAction() const {
    if (!::java::nio::charset::CharsetDecoder::_class) ::java::nio::charset::CharsetDecoder::_class = java::fetch_class("java/nio/charset/CharsetDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CodingErrorAction _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::charset::CharacterCodingException::CharacterCodingException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::charset::CharacterCodingException::_class) ::java::nio::charset::CharacterCodingException::_class = java::fetch_class("java/nio/charset/CharacterCodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

float java::nio::charset::CharsetEncoder::averageBytesPerChar() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "averageBytesPerChar", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

bool java::nio::charset::CharsetEncoder::canEncode(uint16_t arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "canEncode", "(C)Z");
    uint16_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::nio::charset::CharsetEncoder::canEncode(const ::java::lang::CharSequence& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "canEncode", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::nio::charset::Charset java::nio::charset::CharsetEncoder::charset() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "charset", "()Ljava/nio/charset/Charset;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::Charset _ret(ret);
    return _ret;
}

::java::nio::ByteBuffer java::nio::charset::CharsetEncoder::encode(const ::java::nio::CharBuffer& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::ByteBuffer _ret(ret);
    return _ret;
}

::java::nio::charset::CoderResult java::nio::charset::CharsetEncoder::encode(const ::java::nio::CharBuffer& arg0, const ::java::nio::ByteBuffer& arg1, bool arg2) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "encode", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::charset::CoderResult _ret(ret);
    return _ret;
}

::java::nio::charset::CoderResult java::nio::charset::CharsetEncoder::flush(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CoderResult _ret(ret);
    return _ret;
}

bool java::nio::charset::CharsetEncoder::isLegalReplacement(const std::vector< int8_t>& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLegalReplacement", "([B)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::nio::charset::CodingErrorAction java::nio::charset::CharsetEncoder::malformedInputAction() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CodingErrorAction _ret(ret);
    return _ret;
}

float java::nio::charset::CharsetEncoder::maxBytesPerChar() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "maxBytesPerChar", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

::java::nio::charset::CharsetEncoder java::nio::charset::CharsetEncoder::onMalformedInput(const ::java::nio::charset::CodingErrorAction& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CharsetEncoder _ret(ret);
    return _ret;
}

::java::nio::charset::CharsetEncoder java::nio::charset::CharsetEncoder::onUnmappableCharacter(const ::java::nio::charset::CodingErrorAction& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CharsetEncoder _ret(ret);
    return _ret;
}

std::vector< int8_t> java::nio::charset::CharsetEncoder::replacement() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replacement", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::nio::charset::CharsetEncoder java::nio::charset::CharsetEncoder::replaceWith(const std::vector< int8_t>& arg0) const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceWith", "([B)Ljava/nio/charset/CharsetEncoder;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::charset::CharsetEncoder _ret(ret);
    return _ret;
}

::java::nio::charset::CharsetEncoder java::nio::charset::CharsetEncoder::reset() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()Ljava/nio/charset/CharsetEncoder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CharsetEncoder _ret(ret);
    return _ret;
}

::java::nio::charset::CodingErrorAction java::nio::charset::CharsetEncoder::unmappableCharacterAction() const {
    if (!::java::nio::charset::CharsetEncoder::_class) ::java::nio::charset::CharsetEncoder::_class = java::fetch_class("java/nio/charset/CharsetEncoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::charset::CodingErrorAction _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::charset::CoderMalfunctionError::CoderMalfunctionError(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::charset::CoderMalfunctionError::_class) ::java::nio::charset::CoderMalfunctionError::_class = java::fetch_class("java/nio/charset/CoderMalfunctionError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::charset::IllegalCharsetNameException::IllegalCharsetNameException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::charset::IllegalCharsetNameException::_class) ::java::nio::charset::IllegalCharsetNameException::_class = java::fetch_class("java/nio/charset/IllegalCharsetNameException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::nio::charset::IllegalCharsetNameException::getCharsetName() const {
    if (!::java::nio::charset::IllegalCharsetNameException::_class) ::java::nio::charset::IllegalCharsetNameException::_class = java::fetch_class("java/nio/charset/IllegalCharsetNameException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCharsetName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}


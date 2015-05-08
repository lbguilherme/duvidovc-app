#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.math.BigDecimal.hpp"
#include "java.math.BigInteger.hpp"
#include "java.math.MathContext.hpp"
#include "java.math.RoundingMode.hpp"
#include "java.util.Random.hpp"

jclass java::math::MathContext::_class = nullptr;
jclass java::math::RoundingMode::_class = nullptr;
jclass java::math::BigInteger::_class = nullptr;
jclass java::math::BigDecimal::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::MathContext::MathContext(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::MathContext::MathContext(int32_t arg0, const ::java::math::RoundingMode& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/math/RoundingMode;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::MathContext::MathContext(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::math::MathContext::getPrecision() const {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrecision", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::RoundingMode java::math::MathContext::getRoundingMode() const {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRoundingMode", "()Ljava/math/RoundingMode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::RoundingMode _ret(ret);
    return _ret;
}

bool java::math::MathContext::equals(const ::java::lang::Object& arg0) const {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::math::MathContext::hashCode() const {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::math::MathContext::toString() const {
    if (!::java::math::MathContext::_class) ::java::math::MathContext::_class = java::fetch_class("java/math/MathContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::math::RoundingMode> java::math::RoundingMode::values(){
    if (!::java::math::RoundingMode::_class) ::java::math::RoundingMode::_class = java::fetch_class("java/math/RoundingMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/math/RoundingMode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::math::RoundingMode> _ret(rets, ::java::math::RoundingMode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::math::RoundingMode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::math::RoundingMode java::math::RoundingMode::valueOf(const ::java::lang::String& arg0){
    if (!::java::math::RoundingMode::_class) ::java::math::RoundingMode::_class = java::fetch_class("java/math/RoundingMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/math/RoundingMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::math::RoundingMode _ret(ret);
    return _ret;
}

::java::math::RoundingMode java::math::RoundingMode::valueOf(int32_t arg0){
    if (!::java::math::RoundingMode::_class) ::java::math::RoundingMode::_class = java::fetch_class("java/math/RoundingMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(I)Ljava/math/RoundingMode;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::math::RoundingMode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigInteger::BigInteger(int32_t arg0, const ::java::util::Random& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/Random;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigInteger::BigInteger(int32_t arg0, int32_t arg1, const ::java::util::Random& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/util/Random;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigInteger::BigInteger(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigInteger::BigInteger(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigInteger::BigInteger(int32_t arg0, const std::vector< int8_t>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigInteger::BigInteger(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::math::BigInteger::valueOf(int64_t arg0){
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(J)Ljava/math/BigInteger;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

std::vector< int8_t> java::math::BigInteger::toByteArray() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "toByteArray", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::abs() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "abs", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::negate() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "negate", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::add(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::subtract(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "subtract", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::math::BigInteger::signum() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "signum", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger java::math::BigInteger::shiftRight(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "shiftRight", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::shiftLeft(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "shiftLeft", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::math::BigInteger::bitLength() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "bitLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::math::BigInteger::testBit(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "testBit", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::math::BigInteger java::math::BigInteger::setBit(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBit", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::clearBit(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearBit", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::flipBit(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "flipBit", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::math::BigInteger::getLowestSetBit() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLowestSetBit", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::math::BigInteger::bitCount() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "bitCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger java::math::BigInteger::not_() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "not_", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::and_(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "and_", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::or_(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "or_", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::xor_(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "xor_", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::andNot(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "andNot", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::math::BigInteger::intValue() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::math::BigInteger::longValue() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

float java::math::BigInteger::floatValue() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double java::math::BigInteger::doubleValue() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

int32_t java::math::BigInteger::compareTo(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/math/BigInteger;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::math::BigInteger java::math::BigInteger::min(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "min", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::max(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "max", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::math::BigInteger::hashCode() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::math::BigInteger::equals(const ::java::lang::Object& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::math::BigInteger::toString() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::math::BigInteger::toString(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::gcd(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "gcd", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::multiply(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::pow(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "pow", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

std::vector< ::java::math::BigInteger> java::math::BigInteger::divideAndRemainder(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideAndRemainder", "(Ljava/math/BigInteger;)[Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::math::BigInteger> _ret(rets, ::java::math::BigInteger((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::math::BigInteger retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::divide(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::remainder(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainder", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::modInverse(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "modInverse", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::modPow(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "modPow", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::mod(const ::java::math::BigInteger& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "mod", "(Ljava/math/BigInteger;)Ljava/math/BigInteger;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

bool java::math::BigInteger::isProbablePrime(int32_t arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "isProbablePrime", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::math::BigInteger java::math::BigInteger::nextProbablePrime() const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextProbablePrime", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigInteger::probablePrime(int32_t arg0, const ::java::util::Random& arg1){
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "probablePrime", "(ILjava/util/Random;)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::math::BigInteger::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::math::BigInteger::_class) ::java::math::BigInteger::_class = java::fetch_class("java/math/BigInteger");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, const ::java::math::MathContext& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([CIILjava/math/MathContext;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const std::vector< uint16_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const std::vector< uint16_t>& arg0, const ::java::math::MathContext& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([CLjava/math/MathContext;)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const ::java::lang::String& arg0, const ::java::math::MathContext& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/math/MathContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(double arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(D)V");
    double _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(double arg0, const ::java::math::MathContext& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(DLjava/math/MathContext;)V");
    double _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const ::java::math::BigInteger& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const ::java::math::BigInteger& arg0, const ::java::math::MathContext& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/MathContext;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const ::java::math::BigInteger& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(const ::java::math::BigInteger& arg0, int32_t arg1, const ::java::math::MathContext& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;ILjava/math/MathContext;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(int32_t arg0, const ::java::math::MathContext& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/math/MathContext;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::math::BigDecimal::BigDecimal(int64_t arg0, const ::java::math::MathContext& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JLjava/math/MathContext;)V");
    int64_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::math::BigDecimal java::math::BigDecimal::valueOf(int64_t arg0, int32_t arg1){
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(JI)Ljava/math/BigDecimal;");
    int64_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::valueOf(int64_t arg0){
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(J)Ljava/math/BigDecimal;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::valueOf(double arg0){
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(D)Ljava/math/BigDecimal;");
    double _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::add(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::add(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::subtract(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "subtract", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::subtract(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "subtract", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::multiply(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::multiply(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "multiply", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divide(const ::java::math::BigDecimal& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigDecimal;II)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divide(const ::java::math::BigDecimal& arg0, int32_t arg1, const ::java::math::RoundingMode& arg2) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigDecimal;ILjava/math/RoundingMode;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divide(const ::java::math::BigDecimal& arg0, int32_t arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigDecimal;I)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divide(const ::java::math::BigDecimal& arg0, const ::java::math::RoundingMode& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigDecimal;Ljava/math/RoundingMode;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divide(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divide(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divide", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divideToIntegralValue(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideToIntegralValue", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::divideToIntegralValue(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideToIntegralValue", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::remainder(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainder", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::remainder(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "remainder", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

std::vector< ::java::math::BigDecimal> java::math::BigDecimal::divideAndRemainder(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideAndRemainder", "(Ljava/math/BigDecimal;)[Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::math::BigDecimal> _ret(rets, ::java::math::BigDecimal((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::math::BigDecimal retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::math::BigDecimal> java::math::BigDecimal::divideAndRemainder(const ::java::math::BigDecimal& arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "divideAndRemainder", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)[Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::math::BigDecimal> _ret(rets, ::java::math::BigDecimal((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::math::BigDecimal retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::pow(int32_t arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "pow", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::pow(int32_t arg0, const ::java::math::MathContext& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "pow", "(ILjava/math/MathContext;)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::abs() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "abs", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::abs(const ::java::math::MathContext& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "abs", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::negate() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "negate", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::negate(const ::java::math::MathContext& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "negate", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::plus() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "plus", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::plus(const ::java::math::MathContext& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "plus", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

int32_t java::math::BigDecimal::signum() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "signum", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::math::BigDecimal::scale() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "scale", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::math::BigDecimal::precision() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "precision", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger java::math::BigDecimal::unscaledValue() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "unscaledValue", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::round(const ::java::math::MathContext& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "round", "(Ljava/math/MathContext;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::setScale(int32_t arg0, const ::java::math::RoundingMode& arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(ILjava/math/RoundingMode;)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::setScale(int32_t arg0, int32_t arg1) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(II)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::setScale(int32_t arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScale", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::movePointLeft(int32_t arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "movePointLeft", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::movePointRight(int32_t arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "movePointRight", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::scaleByPowerOfTen(int32_t arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "scaleByPowerOfTen", "(I)Ljava/math/BigDecimal;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::stripTrailingZeros() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "stripTrailingZeros", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

int32_t java::math::BigDecimal::compareTo(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/math/BigDecimal;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::math::BigDecimal::equals(const ::java::lang::Object& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::math::BigDecimal java::math::BigDecimal::min(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "min", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::math::BigDecimal::max(const ::java::math::BigDecimal& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "max", "(Ljava/math/BigDecimal;)Ljava/math/BigDecimal;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

int32_t java::math::BigDecimal::hashCode() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::math::BigDecimal::toString() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::math::BigDecimal::toEngineeringString() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toEngineeringString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::math::BigDecimal::toPlainString() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toPlainString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigDecimal::toBigInteger() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBigInteger", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::math::BigDecimal::toBigIntegerExact() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBigIntegerExact", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int64_t java::math::BigDecimal::longValue() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValue", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::math::BigDecimal::longValueExact() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "longValueExact", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::math::BigDecimal::intValue() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::math::BigDecimal::intValueExact() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "intValueExact", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int16_t java::math::BigDecimal::shortValueExact() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "shortValueExact", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int8_t java::math::BigDecimal::byteValueExact() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "byteValueExact", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

float java::math::BigDecimal::floatValue() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "floatValue", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double java::math::BigDecimal::doubleValue() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "doubleValue", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::math::BigDecimal java::math::BigDecimal::ulp() const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "ulp", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

int32_t java::math::BigDecimal::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::math::BigDecimal::_class) ::java::math::BigDecimal::_class = java::fetch_class("java/math/BigDecimal");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}


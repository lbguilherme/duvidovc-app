#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.math.BigInteger.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"
#include "java.security.spec.DSAParameterSpec.hpp"
#include "java.security.spec.DSAPrivateKeySpec.hpp"
#include "java.security.spec.DSAPublicKeySpec.hpp"
#include "java.security.spec.ECField.hpp"
#include "java.security.spec.ECFieldF2m.hpp"
#include "java.security.spec.ECFieldFp.hpp"
#include "java.security.spec.ECGenParameterSpec.hpp"
#include "java.security.spec.ECParameterSpec.hpp"
#include "java.security.spec.ECPoint.hpp"
#include "java.security.spec.ECPrivateKeySpec.hpp"
#include "java.security.spec.ECPublicKeySpec.hpp"
#include "java.security.spec.EllipticCurve.hpp"
#include "java.security.spec.EncodedKeySpec.hpp"
#include "java.security.spec.InvalidKeySpecException.hpp"
#include "java.security.spec.InvalidParameterSpecException.hpp"
#include "java.security.spec.KeySpec.hpp"
#include "java.security.spec.MGF1ParameterSpec.hpp"
#include "java.security.spec.PKCS8EncodedKeySpec.hpp"
#include "java.security.spec.PSSParameterSpec.hpp"
#include "java.security.spec.RSAKeyGenParameterSpec.hpp"
#include "java.security.spec.RSAMultiPrimePrivateCrtKeySpec.hpp"
#include "java.security.spec.RSAOtherPrimeInfo.hpp"
#include "java.security.spec.RSAPrivateCrtKeySpec.hpp"
#include "java.security.spec.RSAPrivateKeySpec.hpp"
#include "java.security.spec.RSAPublicKeySpec.hpp"
#include "java.security.spec.X509EncodedKeySpec.hpp"

jclass java::security::spec::EncodedKeySpec::_class = nullptr;
jclass java::security::spec::RSAPrivateCrtKeySpec::_class = nullptr;
jclass java::security::spec::ECFieldFp::_class = nullptr;
jclass java::security::spec::X509EncodedKeySpec::_class = nullptr;
jclass java::security::spec::AlgorithmParameterSpec::_class = nullptr;
jclass java::security::spec::ECGenParameterSpec::_class = nullptr;
jclass java::security::spec::EllipticCurve::_class = nullptr;
jclass java::security::spec::RSAOtherPrimeInfo::_class = nullptr;
jclass java::security::spec::KeySpec::_class = nullptr;
jclass java::security::spec::InvalidParameterSpecException::_class = nullptr;
jclass java::security::spec::DSAParameterSpec::_class = nullptr;
jclass java::security::spec::ECPrivateKeySpec::_class = nullptr;
jclass java::security::spec::ECParameterSpec::_class = nullptr;
jclass java::security::spec::DSAPrivateKeySpec::_class = nullptr;
jclass java::security::spec::MGF1ParameterSpec::_class = nullptr;
jclass java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = nullptr;
jclass java::security::spec::ECPublicKeySpec::_class = nullptr;
jclass java::security::spec::ECField::_class = nullptr;
jclass java::security::spec::RSAPrivateKeySpec::_class = nullptr;
jclass java::security::spec::PKCS8EncodedKeySpec::_class = nullptr;
jclass java::security::spec::ECFieldF2m::_class = nullptr;
jclass java::security::spec::RSAPublicKeySpec::_class = nullptr;
jclass java::security::spec::PSSParameterSpec::_class = nullptr;
jclass java::security::spec::DSAPublicKeySpec::_class = nullptr;
jclass java::security::spec::InvalidKeySpecException::_class = nullptr;
jclass java::security::spec::ECPoint::_class = nullptr;
jclass java::security::spec::RSAKeyGenParameterSpec::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::EncodedKeySpec::EncodedKeySpec(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::EncodedKeySpec::_class) ::java::security::spec::EncodedKeySpec::_class = java::fetch_class("java/security/spec/EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< int8_t> java::security::spec::EncodedKeySpec::getEncoded() const {
    if (!::java::security::spec::EncodedKeySpec::_class) ::java::security::spec::EncodedKeySpec::_class = java::fetch_class("java/security/spec/EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::spec::EncodedKeySpec::getFormat() const {
    if (!::java::security::spec::EncodedKeySpec::_class) ::java::security::spec::EncodedKeySpec::_class = java::fetch_class("java/security/spec/EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const ::java::math::BigInteger& arg3, const ::java::math::BigInteger& arg4, const ::java::math::BigInteger& arg5, const ::java::math::BigInteger& arg6, const ::java::math::BigInteger& arg7) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::java::security::spec::RSAPrivateKeySpec((jobject)0) {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::RSAPrivateCrtKeySpec::getCrtCoefficient() const {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrtCoefficient", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPrivateCrtKeySpec::getPrimeExponentP() const {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPrivateCrtKeySpec::getPrimeExponentQ() const {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPrivateCrtKeySpec::getPrimeP() const {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPrivateCrtKeySpec::getPrimeQ() const {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPrivateCrtKeySpec::getPublicExponent() const {
    if (!::java::security::spec::RSAPrivateCrtKeySpec::_class) ::java::security::spec::RSAPrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECFieldFp::ECFieldFp(const ::java::math::BigInteger& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {
    if (!::java::security::spec::ECFieldFp::_class) ::java::security::spec::ECFieldFp::_class = java::fetch_class("java/security/spec/ECFieldFp");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::security::spec::ECFieldFp::getFieldSize() const {
    if (!::java::security::spec::ECFieldFp::_class) ::java::security::spec::ECFieldFp::_class = java::fetch_class("java/security/spec/ECFieldFp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFieldSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger java::security::spec::ECFieldFp::getP() const {
    if (!::java::security::spec::ECFieldFp::_class) ::java::security::spec::ECFieldFp::_class = java::fetch_class("java/security/spec/ECFieldFp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

bool java::security::spec::ECFieldFp::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::spec::ECFieldFp::_class) ::java::security::spec::ECFieldFp::_class = java::fetch_class("java/security/spec/ECFieldFp");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::spec::ECFieldFp::hashCode() const {
    if (!::java::security::spec::ECFieldFp::_class) ::java::security::spec::ECFieldFp::_class = java::fetch_class("java/security/spec/ECFieldFp");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::X509EncodedKeySpec::X509EncodedKeySpec(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::EncodedKeySpec((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::X509EncodedKeySpec::_class) ::java::security::spec::X509EncodedKeySpec::_class = java::fetch_class("java/security/spec/X509EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< int8_t> java::security::spec::X509EncodedKeySpec::getEncoded() const {
    if (!::java::security::spec::X509EncodedKeySpec::_class) ::java::security::spec::X509EncodedKeySpec::_class = java::fetch_class("java/security/spec/X509EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::spec::X509EncodedKeySpec::getFormat() const {
    if (!::java::security::spec::X509EncodedKeySpec::_class) ::java::security::spec::X509EncodedKeySpec::_class = java::fetch_class("java/security/spec/X509EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECGenParameterSpec::ECGenParameterSpec(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::ECGenParameterSpec::_class) ::java::security::spec::ECGenParameterSpec::_class = java::fetch_class("java/security/spec/ECGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::spec::ECGenParameterSpec::getName() const {
    if (!::java::security::spec::ECGenParameterSpec::_class) ::java::security::spec::ECGenParameterSpec::_class = java::fetch_class("java/security/spec/ECGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::EllipticCurve::EllipticCurve(const ::java::security::spec::ECField& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const std::vector< int8_t>& arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::EllipticCurve::EllipticCurve(const ::java::security::spec::ECField& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::EllipticCurve::getA() const {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "getA", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::EllipticCurve::getB() const {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "getB", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::security::spec::ECField java::security::spec::EllipticCurve::getField() const {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "getField", "()Ljava/security/spec/ECField;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECField _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::spec::EllipticCurve::getSeed() const {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSeed", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool java::security::spec::EllipticCurve::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::spec::EllipticCurve::hashCode() const {
    if (!::java::security::spec::EllipticCurve::_class) ::java::security::spec::EllipticCurve::_class = java::fetch_class("java/security/spec/EllipticCurve");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::RSAOtherPrimeInfo::RSAOtherPrimeInfo(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::security::spec::RSAOtherPrimeInfo::_class) ::java::security::spec::RSAOtherPrimeInfo::_class = java::fetch_class("java/security/spec/RSAOtherPrimeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::RSAOtherPrimeInfo::getCrtCoefficient() const {
    if (!::java::security::spec::RSAOtherPrimeInfo::_class) ::java::security::spec::RSAOtherPrimeInfo::_class = java::fetch_class("java/security/spec/RSAOtherPrimeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrtCoefficient", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAOtherPrimeInfo::getPrime() const {
    if (!::java::security::spec::RSAOtherPrimeInfo::_class) ::java::security::spec::RSAOtherPrimeInfo::_class = java::fetch_class("java/security/spec/RSAOtherPrimeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrime", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAOtherPrimeInfo::getExponent() const {
    if (!::java::security::spec::RSAOtherPrimeInfo::_class) ::java::security::spec::RSAOtherPrimeInfo::_class = java::fetch_class("java/security/spec/RSAOtherPrimeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::InvalidParameterSpecException::InvalidParameterSpecException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::spec::InvalidParameterSpecException::_class) ::java::security::spec::InvalidParameterSpecException::_class = java::fetch_class("java/security/spec/InvalidParameterSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::InvalidParameterSpecException::InvalidParameterSpecException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::spec::InvalidParameterSpecException::_class) ::java::security::spec::InvalidParameterSpecException::_class = java::fetch_class("java/security/spec/InvalidParameterSpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::DSAParameterSpec::DSAParameterSpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2) : ::java::lang::Object((jobject)0), ::java::security::interfaces::DSAParams((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::DSAParameterSpec::_class) ::java::security::spec::DSAParameterSpec::_class = java::fetch_class("java/security/spec/DSAParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::DSAParameterSpec::getG() const {
    if (!::java::security::spec::DSAParameterSpec::_class) ::java::security::spec::DSAParameterSpec::_class = java::fetch_class("java/security/spec/DSAParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAParameterSpec::getP() const {
    if (!::java::security::spec::DSAParameterSpec::_class) ::java::security::spec::DSAParameterSpec::_class = java::fetch_class("java/security/spec/DSAParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAParameterSpec::getQ() const {
    if (!::java::security::spec::DSAParameterSpec::_class) ::java::security::spec::DSAParameterSpec::_class = java::fetch_class("java/security/spec/DSAParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECPrivateKeySpec::ECPrivateKeySpec(const ::java::math::BigInteger& arg0, const ::java::security::spec::ECParameterSpec& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::ECPrivateKeySpec::_class) ::java::security::spec::ECPrivateKeySpec::_class = java::fetch_class("java/security/spec/ECPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/security/spec/ECParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::spec::ECParameterSpec java::security::spec::ECPrivateKeySpec::getParams() const {
    if (!::java::security::spec::ECPrivateKeySpec::_class) ::java::security::spec::ECPrivateKeySpec::_class = java::fetch_class("java/security/spec/ECPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Ljava/security/spec/ECParameterSpec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECParameterSpec _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::ECPrivateKeySpec::getS() const {
    if (!::java::security::spec::ECPrivateKeySpec::_class) ::java::security::spec::ECPrivateKeySpec::_class = java::fetch_class("java/security/spec/ECPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getS", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECParameterSpec::ECParameterSpec(const ::java::security::spec::EllipticCurve& arg0, const ::java::security::spec::ECPoint& arg1, const ::java::math::BigInteger& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::ECParameterSpec::_class) ::java::security::spec::ECParameterSpec::_class = java::fetch_class("java/security/spec/ECParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

int32_t java::security::spec::ECParameterSpec::getCofactor() const {
    if (!::java::security::spec::ECParameterSpec::_class) ::java::security::spec::ECParameterSpec::_class = java::fetch_class("java/security/spec/ECParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCofactor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::security::spec::EllipticCurve java::security::spec::ECParameterSpec::getCurve() const {
    if (!::java::security::spec::ECParameterSpec::_class) ::java::security::spec::ECParameterSpec::_class = java::fetch_class("java/security/spec/ECParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurve", "()Ljava/security/spec/EllipticCurve;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::EllipticCurve _ret(ret);
    return _ret;
}

::java::security::spec::ECPoint java::security::spec::ECParameterSpec::getGenerator() const {
    if (!::java::security::spec::ECParameterSpec::_class) ::java::security::spec::ECParameterSpec::_class = java::fetch_class("java/security/spec/ECParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGenerator", "()Ljava/security/spec/ECPoint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECPoint _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::ECParameterSpec::getOrder() const {
    if (!::java::security::spec::ECParameterSpec::_class) ::java::security::spec::ECParameterSpec::_class = java::fetch_class("java/security/spec/ECParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrder", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::DSAPrivateKeySpec::DSAPrivateKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const ::java::math::BigInteger& arg3) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::DSAPrivateKeySpec::_class) ::java::security::spec::DSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/DSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::DSAPrivateKeySpec::getG() const {
    if (!::java::security::spec::DSAPrivateKeySpec::_class) ::java::security::spec::DSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/DSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAPrivateKeySpec::getP() const {
    if (!::java::security::spec::DSAPrivateKeySpec::_class) ::java::security::spec::DSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/DSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAPrivateKeySpec::getQ() const {
    if (!::java::security::spec::DSAPrivateKeySpec::_class) ::java::security::spec::DSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/DSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAPrivateKeySpec::getX() const {
    if (!::java::security::spec::DSAPrivateKeySpec::_class) ::java::security::spec::DSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/DSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::MGF1ParameterSpec::MGF1ParameterSpec(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::MGF1ParameterSpec::_class) ::java::security::spec::MGF1ParameterSpec::_class = java::fetch_class("java/security/spec/MGF1ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::spec::MGF1ParameterSpec::getDigestAlgorithm() const {
    if (!::java::security::spec::MGF1ParameterSpec::_class) ::java::security::spec::MGF1ParameterSpec::_class = java::fetch_class("java/security/spec/MGF1ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigestAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const ::java::math::BigInteger& arg3, const ::java::math::BigInteger& arg4, const ::java::math::BigInteger& arg5, const ::java::math::BigInteger& arg6, const ::java::math::BigInteger& arg7, const std::vector< ::java::security::spec::RSAOtherPrimeInfo>& arg8) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::java::security::spec::RSAPrivateKeySpec((jobject)0) {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    unsigned arg8s = arg8.size();
    if (!::java::security::spec::RSAOtherPrimeInfo::_class) ::java::security::spec::RSAOtherPrimeInfo::_class = java::fetch_class("java/security/spec/RSAOtherPrimeInfo");
    jobjectArray _arg8 = java::jni->NewObjectArray(arg8s, ::java::security::spec::RSAOtherPrimeInfo::_class, nullptr);
    for (unsigned arg8i = 0; arg8i < arg8s; ++arg8i) {
      const ::java::security::spec::RSAOtherPrimeInfo& arg8e = arg8[arg8i];
        jobject arg8d = arg8e.obj;
      java::jni->SetObjectArrayElement(_arg8, arg8i, arg8d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrtCoefficient", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

std::vector< ::java::security::spec::RSAOtherPrimeInfo> java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOtherPrimeInfo", "()[Ljava/security/spec/RSAOtherPrimeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::spec::RSAOtherPrimeInfo> _ret(rets, ::java::security::spec::RSAOtherPrimeInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::spec::RSAOtherPrimeInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeP() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeQ() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPublicExponent() const {
    if (!::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class) ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec::_class = java::fetch_class("java/security/spec/RSAMultiPrimePrivateCrtKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECPublicKeySpec::ECPublicKeySpec(const ::java::security::spec::ECPoint& arg0, const ::java::security::spec::ECParameterSpec& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::ECPublicKeySpec::_class) ::java::security::spec::ECPublicKeySpec::_class = java::fetch_class("java/security/spec/ECPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/spec/ECPoint;Ljava/security/spec/ECParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::spec::ECParameterSpec java::security::spec::ECPublicKeySpec::getParams() const {
    if (!::java::security::spec::ECPublicKeySpec::_class) ::java::security::spec::ECPublicKeySpec::_class = java::fetch_class("java/security/spec/ECPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Ljava/security/spec/ECParameterSpec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECParameterSpec _ret(ret);
    return _ret;
}

::java::security::spec::ECPoint java::security::spec::ECPublicKeySpec::getW() const {
    if (!::java::security::spec::ECPublicKeySpec::_class) ::java::security::spec::ECPublicKeySpec::_class = java::fetch_class("java/security/spec/ECPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getW", "()Ljava/security/spec/ECPoint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECPoint _ret(ret);
    return _ret;
}

int32_t java::security::spec::ECField::getFieldSize() const {
    if (!::java::security::spec::ECField::_class) ::java::security::spec::ECField::_class = java::fetch_class("java/security/spec/ECField");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFieldSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::RSAPrivateKeySpec::RSAPrivateKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::RSAPrivateKeySpec::_class) ::java::security::spec::RSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::RSAPrivateKeySpec::getModulus() const {
    if (!::java::security::spec::RSAPrivateKeySpec::_class) ::java::security::spec::RSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModulus", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPrivateKeySpec::getPrivateExponent() const {
    if (!::java::security::spec::RSAPrivateKeySpec::_class) ::java::security::spec::RSAPrivateKeySpec::_class = java::fetch_class("java/security/spec/RSAPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::PKCS8EncodedKeySpec::PKCS8EncodedKeySpec(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::EncodedKeySpec((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::PKCS8EncodedKeySpec::_class) ::java::security::spec::PKCS8EncodedKeySpec::_class = java::fetch_class("java/security/spec/PKCS8EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< int8_t> java::security::spec::PKCS8EncodedKeySpec::getEncoded() const {
    if (!::java::security::spec::PKCS8EncodedKeySpec::_class) ::java::security::spec::PKCS8EncodedKeySpec::_class = java::fetch_class("java/security/spec/PKCS8EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::spec::PKCS8EncodedKeySpec::getFormat() const {
    if (!::java::security::spec::PKCS8EncodedKeySpec::_class) ::java::security::spec::PKCS8EncodedKeySpec::_class = java::fetch_class("java/security/spec/PKCS8EncodedKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECFieldF2m::ECFieldF2m(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECFieldF2m::ECFieldF2m(int32_t arg0, const ::java::math::BigInteger& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/math/BigInteger;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECFieldF2m::ECFieldF2m(int32_t arg0, const std::vector< int32_t>& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[I)V");
    int32_t _arg0 = arg0;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::security::spec::ECFieldF2m::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::spec::ECFieldF2m::getFieldSize() const {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFieldSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::security::spec::ECFieldF2m::getM() const {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "getM", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int32_t> java::security::spec::ECFieldF2m::getMidTermsOfReductionPolynomial() const {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMidTermsOfReductionPolynomial", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::math::BigInteger java::security::spec::ECFieldF2m::getReductionPolynomial() const {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReductionPolynomial", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t java::security::spec::ECFieldF2m::hashCode() const {
    if (!::java::security::spec::ECFieldF2m::_class) ::java::security::spec::ECFieldF2m::_class = java::fetch_class("java/security/spec/ECFieldF2m");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::RSAPublicKeySpec::RSAPublicKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::RSAPublicKeySpec::_class) ::java::security::spec::RSAPublicKeySpec::_class = java::fetch_class("java/security/spec/RSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::RSAPublicKeySpec::getModulus() const {
    if (!::java::security::spec::RSAPublicKeySpec::_class) ::java::security::spec::RSAPublicKeySpec::_class = java::fetch_class("java/security/spec/RSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModulus", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::RSAPublicKeySpec::getPublicExponent() const {
    if (!::java::security::spec::RSAPublicKeySpec::_class) ::java::security::spec::RSAPublicKeySpec::_class = java::fetch_class("java/security/spec/RSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::PSSParameterSpec::PSSParameterSpec(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::PSSParameterSpec::PSSParameterSpec(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::security::spec::AlgorithmParameterSpec& arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

int32_t java::security::spec::PSSParameterSpec::getSaltLength() const {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSaltLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::spec::PSSParameterSpec::getDigestAlgorithm() const {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigestAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::spec::PSSParameterSpec::getMGFAlgorithm() const {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMGFAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::spec::AlgorithmParameterSpec java::security::spec::PSSParameterSpec::getMGFParameters() const {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMGFParameters", "()Ljava/security/spec/AlgorithmParameterSpec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::AlgorithmParameterSpec _ret(ret);
    return _ret;
}

int32_t java::security::spec::PSSParameterSpec::getTrailerField() const {
    if (!::java::security::spec::PSSParameterSpec::_class) ::java::security::spec::PSSParameterSpec::_class = java::fetch_class("java/security/spec/PSSParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrailerField", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::DSAPublicKeySpec::DSAPublicKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2, const ::java::math::BigInteger& arg3) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::java::security::spec::DSAPublicKeySpec::_class) ::java::security::spec::DSAPublicKeySpec::_class = java::fetch_class("java/security/spec/DSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::DSAPublicKeySpec::getG() const {
    if (!::java::security::spec::DSAPublicKeySpec::_class) ::java::security::spec::DSAPublicKeySpec::_class = java::fetch_class("java/security/spec/DSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAPublicKeySpec::getP() const {
    if (!::java::security::spec::DSAPublicKeySpec::_class) ::java::security::spec::DSAPublicKeySpec::_class = java::fetch_class("java/security/spec/DSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAPublicKeySpec::getQ() const {
    if (!::java::security::spec::DSAPublicKeySpec::_class) ::java::security::spec::DSAPublicKeySpec::_class = java::fetch_class("java/security/spec/DSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::DSAPublicKeySpec::getY() const {
    if (!::java::security::spec::DSAPublicKeySpec::_class) ::java::security::spec::DSAPublicKeySpec::_class = java::fetch_class("java/security/spec/DSAPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::InvalidKeySpecException::InvalidKeySpecException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::spec::InvalidKeySpecException::_class) ::java::security::spec::InvalidKeySpecException::_class = java::fetch_class("java/security/spec/InvalidKeySpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::InvalidKeySpecException::InvalidKeySpecException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::spec::InvalidKeySpecException::_class) ::java::security::spec::InvalidKeySpecException::_class = java::fetch_class("java/security/spec/InvalidKeySpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::InvalidKeySpecException::InvalidKeySpecException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::spec::InvalidKeySpecException::_class) ::java::security::spec::InvalidKeySpecException::_class = java::fetch_class("java/security/spec/InvalidKeySpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::InvalidKeySpecException::InvalidKeySpecException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::spec::InvalidKeySpecException::_class) ::java::security::spec::InvalidKeySpecException::_class = java::fetch_class("java/security/spec/InvalidKeySpecException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::ECPoint::ECPoint(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::security::spec::ECPoint::_class) ::java::security::spec::ECPoint::_class = java::fetch_class("java/security/spec/ECPoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::math::BigInteger java::security::spec::ECPoint::getAffineX() const {
    if (!::java::security::spec::ECPoint::_class) ::java::security::spec::ECPoint::_class = java::fetch_class("java/security/spec/ECPoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAffineX", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::spec::ECPoint::getAffineY() const {
    if (!::java::security::spec::ECPoint::_class) ::java::security::spec::ECPoint::_class = java::fetch_class("java/security/spec/ECPoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAffineY", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

bool java::security::spec::ECPoint::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::spec::ECPoint::_class) ::java::security::spec::ECPoint::_class = java::fetch_class("java/security/spec/ECPoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::spec::ECPoint::hashCode() const {
    if (!::java::security::spec::ECPoint::_class) ::java::security::spec::ECPoint::_class = java::fetch_class("java/security/spec/ECPoint");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::spec::RSAKeyGenParameterSpec::RSAKeyGenParameterSpec(int32_t arg0, const ::java::math::BigInteger& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::java::security::spec::RSAKeyGenParameterSpec::_class) ::java::security::spec::RSAKeyGenParameterSpec::_class = java::fetch_class("java/security/spec/RSAKeyGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/math/BigInteger;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::security::spec::RSAKeyGenParameterSpec::getKeysize() const {
    if (!::java::security::spec::RSAKeyGenParameterSpec::_class) ::java::security::spec::RSAKeyGenParameterSpec::_class = java::fetch_class("java/security/spec/RSAKeyGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeysize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger java::security::spec::RSAKeyGenParameterSpec::getPublicExponent() const {
    if (!::java::security::spec::RSAKeyGenParameterSpec::_class) ::java::security::spec::RSAKeyGenParameterSpec::_class = java::fetch_class("java/security/spec/RSAKeyGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}


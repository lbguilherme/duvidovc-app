#include "java-core.hpp"
#include <memory>
#include "java.math.BigInteger.hpp"
#include "java.security.SecureRandom.hpp"
#include "java.security.interfaces.DSAKey.hpp"
#include "java.security.interfaces.DSAKeyPairGenerator.hpp"
#include "java.security.interfaces.DSAParams.hpp"
#include "java.security.interfaces.DSAPrivateKey.hpp"
#include "java.security.interfaces.DSAPublicKey.hpp"
#include "java.security.interfaces.ECKey.hpp"
#include "java.security.interfaces.ECPrivateKey.hpp"
#include "java.security.interfaces.ECPublicKey.hpp"
#include "java.security.interfaces.RSAKey.hpp"
#include "java.security.interfaces.RSAMultiPrimePrivateCrtKey.hpp"
#include "java.security.interfaces.RSAPrivateCrtKey.hpp"
#include "java.security.interfaces.RSAPrivateKey.hpp"
#include "java.security.interfaces.RSAPublicKey.hpp"
#include "java.security.spec.ECParameterSpec.hpp"
#include "java.security.spec.ECPoint.hpp"
#include "java.security.spec.RSAOtherPrimeInfo.hpp"

jclass java::security::interfaces::DSAParams::_class = nullptr;
jclass java::security::interfaces::ECKey::_class = nullptr;
jclass java::security::interfaces::ECPrivateKey::_class = nullptr;
jclass java::security::interfaces::DSAKey::_class = nullptr;
jclass java::security::interfaces::RSAPublicKey::_class = nullptr;
jclass java::security::interfaces::DSAKeyPairGenerator::_class = nullptr;
jclass java::security::interfaces::RSAPrivateKey::_class = nullptr;
jclass java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = nullptr;
jclass java::security::interfaces::RSAPrivateCrtKey::_class = nullptr;
jclass java::security::interfaces::RSAKey::_class = nullptr;
jclass java::security::interfaces::ECPublicKey::_class = nullptr;
jclass java::security::interfaces::DSAPublicKey::_class = nullptr;
jclass java::security::interfaces::DSAPrivateKey::_class = nullptr;

::java::math::BigInteger java::security::interfaces::DSAParams::getG() const {
    if (!::java::security::interfaces::DSAParams::_class) ::java::security::interfaces::DSAParams::_class = java::fetch_class("java/security/interfaces/DSAParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::DSAParams::getP() const {
    if (!::java::security::interfaces::DSAParams::_class) ::java::security::interfaces::DSAParams::_class = java::fetch_class("java/security/interfaces/DSAParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::DSAParams::getQ() const {
    if (!::java::security::interfaces::DSAParams::_class) ::java::security::interfaces::DSAParams::_class = java::fetch_class("java/security/interfaces/DSAParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::security::spec::ECParameterSpec java::security::interfaces::ECKey::getParams() const {
    if (!::java::security::interfaces::ECKey::_class) ::java::security::interfaces::ECKey::_class = java::fetch_class("java/security/interfaces/ECKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Ljava/security/spec/ECParameterSpec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECParameterSpec _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::ECPrivateKey::getS() const {
    if (!::java::security::interfaces::ECPrivateKey::_class) ::java::security::interfaces::ECPrivateKey::_class = java::fetch_class("java/security/interfaces/ECPrivateKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getS", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::security::interfaces::DSAParams java::security::interfaces::DSAKey::getParams() const {
    if (!::java::security::interfaces::DSAKey::_class) ::java::security::interfaces::DSAKey::_class = java::fetch_class("java/security/interfaces/DSAKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Ljava/security/interfaces/DSAParams;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::interfaces::DSAParams _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPublicKey::getPublicExponent() const {
    if (!::java::security::interfaces::RSAPublicKey::_class) ::java::security::interfaces::RSAPublicKey::_class = java::fetch_class("java/security/interfaces/RSAPublicKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

void java::security::interfaces::DSAKeyPairGenerator::initialize(const ::java::security::interfaces::DSAParams& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::interfaces::DSAKeyPairGenerator::_class) ::java::security::interfaces::DSAKeyPairGenerator::_class = java::fetch_class("java/security/interfaces/DSAKeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Ljava/security/interfaces/DSAParams;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::interfaces::DSAKeyPairGenerator::initialize(int32_t arg0, bool arg1, const ::java::security::SecureRandom& arg2) const {
    if (!::java::security::interfaces::DSAKeyPairGenerator::_class) ::java::security::interfaces::DSAKeyPairGenerator::_class = java::fetch_class("java/security/interfaces/DSAKeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(IZLjava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::math::BigInteger java::security::interfaces::RSAPrivateKey::getPrivateExponent() const {
    if (!::java::security::interfaces::RSAPrivateKey::_class) ::java::security::interfaces::RSAPrivateKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAMultiPrimePrivateCrtKey::getCrtCoefficient() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrtCoefficient", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

std::vector< ::java::security::spec::RSAOtherPrimeInfo> java::security::interfaces::RSAMultiPrimePrivateCrtKey::getOtherPrimeInfo() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
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

::java::math::BigInteger java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeP() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeQ() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeExponentP() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeExponentQ() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPublicExponent() const {
    if (!::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class) ::java::security::interfaces::RSAMultiPrimePrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAMultiPrimePrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPrivateCrtKey::getCrtCoefficient() const {
    if (!::java::security::interfaces::RSAPrivateCrtKey::_class) ::java::security::interfaces::RSAPrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCrtCoefficient", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPrivateCrtKey::getPrimeP() const {
    if (!::java::security::interfaces::RSAPrivateCrtKey::_class) ::java::security::interfaces::RSAPrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPrivateCrtKey::getPrimeQ() const {
    if (!::java::security::interfaces::RSAPrivateCrtKey::_class) ::java::security::interfaces::RSAPrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPrivateCrtKey::getPrimeExponentP() const {
    if (!::java::security::interfaces::RSAPrivateCrtKey::_class) ::java::security::interfaces::RSAPrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPrivateCrtKey::getPrimeExponentQ() const {
    if (!::java::security::interfaces::RSAPrivateCrtKey::_class) ::java::security::interfaces::RSAPrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeExponentQ", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAPrivateCrtKey::getPublicExponent() const {
    if (!::java::security::interfaces::RSAPrivateCrtKey::_class) ::java::security::interfaces::RSAPrivateCrtKey::_class = java::fetch_class("java/security/interfaces/RSAPrivateCrtKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicExponent", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::RSAKey::getModulus() const {
    if (!::java::security::interfaces::RSAKey::_class) ::java::security::interfaces::RSAKey::_class = java::fetch_class("java/security/interfaces/RSAKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getModulus", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::security::spec::ECPoint java::security::interfaces::ECPublicKey::getW() const {
    if (!::java::security::interfaces::ECPublicKey::_class) ::java::security::interfaces::ECPublicKey::_class = java::fetch_class("java/security/interfaces/ECPublicKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getW", "()Ljava/security/spec/ECPoint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::ECPoint _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::DSAPublicKey::getY() const {
    if (!::java::security::interfaces::DSAPublicKey::_class) ::java::security::interfaces::DSAPublicKey::_class = java::fetch_class("java/security/interfaces/DSAPublicKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::interfaces::DSAPrivateKey::getX() const {
    if (!::java::security::interfaces::DSAPrivateKey::_class) ::java::security::interfaces::DSAPrivateKey::_class = java::fetch_class("java/security/interfaces/DSAPrivateKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}


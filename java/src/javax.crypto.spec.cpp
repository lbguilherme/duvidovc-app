#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.math.BigInteger.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"
#include "javax.crypto.spec.DESKeySpec.hpp"
#include "javax.crypto.spec.DESedeKeySpec.hpp"
#include "javax.crypto.spec.DHGenParameterSpec.hpp"
#include "javax.crypto.spec.DHParameterSpec.hpp"
#include "javax.crypto.spec.DHPrivateKeySpec.hpp"
#include "javax.crypto.spec.DHPublicKeySpec.hpp"
#include "javax.crypto.spec.IvParameterSpec.hpp"
#include "javax.crypto.spec.OAEPParameterSpec.hpp"
#include "javax.crypto.spec.PBEKeySpec.hpp"
#include "javax.crypto.spec.PBEParameterSpec.hpp"
#include "javax.crypto.spec.PSource.hpp"
#include "javax.crypto.spec.RC2ParameterSpec.hpp"
#include "javax.crypto.spec.RC5ParameterSpec.hpp"
#include "javax.crypto.spec.SecretKeySpec.hpp"

jclass javax::crypto::spec::DHPublicKeySpec::_class = nullptr;
jclass javax::crypto::spec::DESKeySpec::_class = nullptr;
jclass javax::crypto::spec::DHPrivateKeySpec::_class = nullptr;
jclass javax::crypto::spec::RC2ParameterSpec::_class = nullptr;
jclass javax::crypto::spec::DHParameterSpec::_class = nullptr;
jclass javax::crypto::spec::DESedeKeySpec::_class = nullptr;
jclass javax::crypto::spec::SecretKeySpec::_class = nullptr;
jclass javax::crypto::spec::RC5ParameterSpec::_class = nullptr;
jclass javax::crypto::spec::OAEPParameterSpec::_class = nullptr;
jclass javax::crypto::spec::DHGenParameterSpec::_class = nullptr;
jclass javax::crypto::spec::PBEKeySpec::_class = nullptr;
jclass javax::crypto::spec::IvParameterSpec::_class = nullptr;
jclass javax::crypto::spec::PBEParameterSpec::_class = nullptr;
jclass javax::crypto::spec::PSource::_class = nullptr;
jclass javax::crypto::spec::PSource_PSpecified::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DHPublicKeySpec::DHPublicKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::DHPublicKeySpec::_class) ::javax::crypto::spec::DHPublicKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::math::BigInteger javax::crypto::spec::DHPublicKeySpec::getY() const {
    if (!::javax::crypto::spec::DHPublicKeySpec::_class) ::javax::crypto::spec::DHPublicKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger javax::crypto::spec::DHPublicKeySpec::getP() const {
    if (!::javax::crypto::spec::DHPublicKeySpec::_class) ::javax::crypto::spec::DHPublicKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger javax::crypto::spec::DHPublicKeySpec::getG() const {
    if (!::javax::crypto::spec::DHPublicKeySpec::_class) ::javax::crypto::spec::DHPublicKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPublicKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DESKeySpec::DESKeySpec(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::DESKeySpec::_class) ::javax::crypto::spec::DESKeySpec::_class = java::fetch_class("javax/crypto/spec/DESKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DESKeySpec::DESKeySpec(const std::vector< int8_t>& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::DESKeySpec::_class) ::javax::crypto::spec::DESKeySpec::_class = java::fetch_class("javax/crypto/spec/DESKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BI)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< int8_t> javax::crypto::spec::DESKeySpec::getKey() const {
    if (!::javax::crypto::spec::DESKeySpec::_class) ::javax::crypto::spec::DESKeySpec::_class = java::fetch_class("javax/crypto/spec/DESKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool javax::crypto::spec::DESKeySpec::isParityAdjusted(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::javax::crypto::spec::DESKeySpec::_class) ::javax::crypto::spec::DESKeySpec::_class = java::fetch_class("javax/crypto/spec/DESKeySpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isParityAdjusted", "([BI)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool javax::crypto::spec::DESKeySpec::isWeak(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::javax::crypto::spec::DESKeySpec::_class) ::javax::crypto::spec::DESKeySpec::_class = java::fetch_class("javax/crypto/spec/DESKeySpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWeak", "([BI)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DHPrivateKeySpec::DHPrivateKeySpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, const ::java::math::BigInteger& arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::DHPrivateKeySpec::_class) ::javax::crypto::spec::DHPrivateKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::math::BigInteger javax::crypto::spec::DHPrivateKeySpec::getX() const {
    if (!::javax::crypto::spec::DHPrivateKeySpec::_class) ::javax::crypto::spec::DHPrivateKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger javax::crypto::spec::DHPrivateKeySpec::getP() const {
    if (!::javax::crypto::spec::DHPrivateKeySpec::_class) ::javax::crypto::spec::DHPrivateKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger javax::crypto::spec::DHPrivateKeySpec::getG() const {
    if (!::javax::crypto::spec::DHPrivateKeySpec::_class) ::javax::crypto::spec::DHPrivateKeySpec::_class = java::fetch_class("javax/crypto/spec/DHPrivateKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::RC2ParameterSpec::RC2ParameterSpec(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::RC2ParameterSpec::RC2ParameterSpec(int32_t arg0, const std::vector< int8_t>& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::RC2ParameterSpec::RC2ParameterSpec(int32_t arg0, const std::vector< int8_t>& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[BI)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t javax::crypto::spec::RC2ParameterSpec::getEffectiveKeyBits() const {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEffectiveKeyBits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> javax::crypto::spec::RC2ParameterSpec::getIV() const {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIV", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool javax::crypto::spec::RC2ParameterSpec::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::crypto::spec::RC2ParameterSpec::hashCode() const {
    if (!::javax::crypto::spec::RC2ParameterSpec::_class) ::javax::crypto::spec::RC2ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC2ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DHParameterSpec::DHParameterSpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::DHParameterSpec::_class) ::javax::crypto::spec::DHParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DHParameterSpec::DHParameterSpec(const ::java::math::BigInteger& arg0, const ::java::math::BigInteger& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::DHParameterSpec::_class) ::javax::crypto::spec::DHParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::math::BigInteger javax::crypto::spec::DHParameterSpec::getP() const {
    if (!::javax::crypto::spec::DHParameterSpec::_class) ::javax::crypto::spec::DHParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getP", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger javax::crypto::spec::DHParameterSpec::getG() const {
    if (!::javax::crypto::spec::DHParameterSpec::_class) ::javax::crypto::spec::DHParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getG", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t javax::crypto::spec::DHParameterSpec::getL() const {
    if (!::javax::crypto::spec::DHParameterSpec::_class) ::javax::crypto::spec::DHParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getL", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DESedeKeySpec::DESedeKeySpec(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::DESedeKeySpec::_class) ::javax::crypto::spec::DESedeKeySpec::_class = java::fetch_class("javax/crypto/spec/DESedeKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DESedeKeySpec::DESedeKeySpec(const std::vector< int8_t>& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::DESedeKeySpec::_class) ::javax::crypto::spec::DESedeKeySpec::_class = java::fetch_class("javax/crypto/spec/DESedeKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BI)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< int8_t> javax::crypto::spec::DESedeKeySpec::getKey() const {
    if (!::javax::crypto::spec::DESedeKeySpec::_class) ::javax::crypto::spec::DESedeKeySpec::_class = java::fetch_class("javax/crypto/spec/DESedeKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool javax::crypto::spec::DESedeKeySpec::isParityAdjusted(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::javax::crypto::spec::DESedeKeySpec::_class) ::javax::crypto::spec::DESedeKeySpec::_class = java::fetch_class("javax/crypto/spec/DESedeKeySpec");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isParityAdjusted", "([BI)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::SecretKeySpec::SecretKeySpec(const std::vector< int8_t>& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::javax::crypto::SecretKey((jobject)0) {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BLjava/lang/String;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::SecretKeySpec::SecretKeySpec(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::javax::crypto::SecretKey((jobject)0) {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIILjava/lang/String;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String javax::crypto::spec::SecretKeySpec::getAlgorithm() const {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::crypto::spec::SecretKeySpec::getFormat() const {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> javax::crypto::spec::SecretKeySpec::getEncoded() const {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::spec::SecretKeySpec::hashCode() const {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool javax::crypto::spec::SecretKeySpec::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::crypto::spec::SecretKeySpec::_class) ::javax::crypto::spec::SecretKeySpec::_class = java::fetch_class("javax/crypto/spec/SecretKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::RC5ParameterSpec::RC5ParameterSpec(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::RC5ParameterSpec::RC5ParameterSpec(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III[B)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::RC5ParameterSpec::RC5ParameterSpec(int32_t arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III[BI)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

int32_t javax::crypto::spec::RC5ParameterSpec::getVersion() const {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::crypto::spec::RC5ParameterSpec::getRounds() const {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRounds", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::crypto::spec::RC5ParameterSpec::getWordSize() const {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWordSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> javax::crypto::spec::RC5ParameterSpec::getIV() const {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIV", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool javax::crypto::spec::RC5ParameterSpec::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::crypto::spec::RC5ParameterSpec::hashCode() const {
    if (!::javax::crypto::spec::RC5ParameterSpec::_class) ::javax::crypto::spec::RC5ParameterSpec::_class = java::fetch_class("javax/crypto/spec/RC5ParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::OAEPParameterSpec::OAEPParameterSpec(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::security::spec::AlgorithmParameterSpec& arg2, const ::javax::crypto::spec::PSource& arg3) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::OAEPParameterSpec::_class) ::javax::crypto::spec::OAEPParameterSpec::_class = java::fetch_class("javax/crypto/spec/OAEPParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String javax::crypto::spec::OAEPParameterSpec::getDigestAlgorithm() const {
    if (!::javax::crypto::spec::OAEPParameterSpec::_class) ::javax::crypto::spec::OAEPParameterSpec::_class = java::fetch_class("javax/crypto/spec/OAEPParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigestAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::crypto::spec::OAEPParameterSpec::getMGFAlgorithm() const {
    if (!::javax::crypto::spec::OAEPParameterSpec::_class) ::javax::crypto::spec::OAEPParameterSpec::_class = java::fetch_class("javax/crypto/spec/OAEPParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMGFAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::spec::AlgorithmParameterSpec javax::crypto::spec::OAEPParameterSpec::getMGFParameters() const {
    if (!::javax::crypto::spec::OAEPParameterSpec::_class) ::javax::crypto::spec::OAEPParameterSpec::_class = java::fetch_class("javax/crypto/spec/OAEPParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMGFParameters", "()Ljava/security/spec/AlgorithmParameterSpec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::spec::AlgorithmParameterSpec _ret(ret);
    return _ret;
}

::javax::crypto::spec::PSource javax::crypto::spec::OAEPParameterSpec::getPSource() const {
    if (!::javax::crypto::spec::OAEPParameterSpec::_class) ::javax::crypto::spec::OAEPParameterSpec::_class = java::fetch_class("javax/crypto/spec/OAEPParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPSource", "()Ljavax/crypto/spec/PSource;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::crypto::spec::PSource _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::DHGenParameterSpec::DHGenParameterSpec(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::DHGenParameterSpec::_class) ::javax::crypto::spec::DHGenParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t javax::crypto::spec::DHGenParameterSpec::getPrimeSize() const {
    if (!::javax::crypto::spec::DHGenParameterSpec::_class) ::javax::crypto::spec::DHGenParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrimeSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::crypto::spec::DHGenParameterSpec::getExponentSize() const {
    if (!::javax::crypto::spec::DHGenParameterSpec::_class) ::javax::crypto::spec::DHGenParameterSpec::_class = java::fetch_class("javax/crypto/spec/DHGenParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExponentSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::PBEKeySpec::PBEKeySpec(const std::vector< uint16_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::PBEKeySpec::PBEKeySpec(const std::vector< uint16_t>& arg0, const std::vector< int8_t>& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C[BII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::PBEKeySpec::PBEKeySpec(const std::vector< uint16_t>& arg0, const std::vector< int8_t>& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C[BI)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void javax::crypto::spec::PBEKeySpec::clearPassword() const {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPassword", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< uint16_t> javax::crypto::spec::PBEKeySpec::getPassword() const {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> javax::crypto::spec::PBEKeySpec::getSalt() const {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSalt", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::spec::PBEKeySpec::getIterationCount() const {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIterationCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::crypto::spec::PBEKeySpec::getKeyLength() const {
    if (!::javax::crypto::spec::PBEKeySpec::_class) ::javax::crypto::spec::PBEKeySpec::_class = java::fetch_class("javax/crypto/spec/PBEKeySpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::IvParameterSpec::IvParameterSpec(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::IvParameterSpec::_class) ::javax::crypto::spec::IvParameterSpec::_class = java::fetch_class("javax/crypto/spec/IvParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::IvParameterSpec::IvParameterSpec(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::IvParameterSpec::_class) ::javax::crypto::spec::IvParameterSpec::_class = java::fetch_class("javax/crypto/spec/IvParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

std::vector< int8_t> javax::crypto::spec::IvParameterSpec::getIV() const {
    if (!::javax::crypto::spec::IvParameterSpec::_class) ::javax::crypto::spec::IvParameterSpec::_class = java::fetch_class("javax/crypto/spec/IvParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIV", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::PBEParameterSpec::PBEParameterSpec(const std::vector< int8_t>& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {
    if (!::javax::crypto::spec::PBEParameterSpec::_class) ::javax::crypto::spec::PBEParameterSpec::_class = java::fetch_class("javax/crypto/spec/PBEParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BI)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< int8_t> javax::crypto::spec::PBEParameterSpec::getSalt() const {
    if (!::javax::crypto::spec::PBEParameterSpec::_class) ::javax::crypto::spec::PBEParameterSpec::_class = java::fetch_class("javax/crypto/spec/PBEParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSalt", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::spec::PBEParameterSpec::getIterationCount() const {
    if (!::javax::crypto::spec::PBEParameterSpec::_class) ::javax::crypto::spec::PBEParameterSpec::_class = java::fetch_class("javax/crypto/spec/PBEParameterSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIterationCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::crypto::spec::PSource::getAlgorithm() const {
    if (!::javax::crypto::spec::PSource::_class) ::javax::crypto::spec::PSource::_class = java::fetch_class("javax/crypto/spec/PSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::spec::PSource_PSpecified::PSource_PSpecified(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::javax::crypto::spec::PSource((jobject)0) {
    if (!::javax::crypto::spec::PSource_PSpecified::_class) ::javax::crypto::spec::PSource_PSpecified::_class = java::fetch_class("javax/crypto/spec/PSource$PSpecified");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< int8_t> javax::crypto::spec::PSource_PSpecified::getValue() const {
    if (!::javax::crypto::spec::PSource_PSpecified::_class) ::javax::crypto::spec::PSource_PSpecified::_class = java::fetch_class("javax/crypto/spec/PSource$PSpecified");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}


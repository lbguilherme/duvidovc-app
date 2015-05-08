#include "java-core.hpp"
#include <memory>
#include "java.math.BigInteger.hpp"
#include "javax.crypto.interfaces.DHKey.hpp"
#include "javax.crypto.interfaces.DHPrivateKey.hpp"
#include "javax.crypto.interfaces.DHPublicKey.hpp"
#include "javax.crypto.interfaces.PBEKey.hpp"
#include "javax.crypto.spec.DHParameterSpec.hpp"

jclass javax::crypto::interfaces::DHPrivateKey::_class = nullptr;
jclass javax::crypto::interfaces::PBEKey::_class = nullptr;
jclass javax::crypto::interfaces::DHPublicKey::_class = nullptr;
jclass javax::crypto::interfaces::DHKey::_class = nullptr;

::java::math::BigInteger javax::crypto::interfaces::DHPrivateKey::getX() const {
    if (!::javax::crypto::interfaces::DHPrivateKey::_class) ::javax::crypto::interfaces::DHPrivateKey::_class = java::fetch_class("javax/crypto/interfaces/DHPrivateKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getX", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

int32_t javax::crypto::interfaces::PBEKey::getIterationCount() const {
    if (!::javax::crypto::interfaces::PBEKey::_class) ::javax::crypto::interfaces::PBEKey::_class = java::fetch_class("javax/crypto/interfaces/PBEKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIterationCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> javax::crypto::interfaces::PBEKey::getSalt() const {
    if (!::javax::crypto::interfaces::PBEKey::_class) ::javax::crypto::interfaces::PBEKey::_class = java::fetch_class("javax/crypto/interfaces/PBEKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSalt", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> javax::crypto::interfaces::PBEKey::getPassword() const {
    if (!::javax::crypto::interfaces::PBEKey::_class) ::javax::crypto::interfaces::PBEKey::_class = java::fetch_class("javax/crypto/interfaces/PBEKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::math::BigInteger javax::crypto::interfaces::DHPublicKey::getY() const {
    if (!::javax::crypto::interfaces::DHPublicKey::_class) ::javax::crypto::interfaces::DHPublicKey::_class = java::fetch_class("javax/crypto/interfaces/DHPublicKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getY", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::javax::crypto::spec::DHParameterSpec javax::crypto::interfaces::DHKey::getParams() const {
    if (!::javax::crypto::interfaces::DHKey::_class) ::javax::crypto::interfaces::DHKey::_class = java::fetch_class("javax/crypto/interfaces/DHKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParams", "()Ljavax/crypto/spec/DHParameterSpec;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::crypto::spec::DHParameterSpec _ret(ret);
    return _ret;
}


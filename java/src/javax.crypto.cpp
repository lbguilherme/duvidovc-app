#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.security.AlgorithmParameters.hpp"
#include "java.security.Key.hpp"
#include "java.security.Provider.hpp"
#include "java.security.SecureRandom.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"
#include "java.security.spec.KeySpec.hpp"
#include "java.security.spec.PKCS8EncodedKeySpec.hpp"
#include "javax.crypto.BadPaddingException.hpp"
#include "javax.crypto.Cipher.hpp"
#include "javax.crypto.CipherInputStream.hpp"
#include "javax.crypto.CipherOutputStream.hpp"
#include "javax.crypto.CipherSpi.hpp"
#include "javax.crypto.EncryptedPrivateKeyInfo.hpp"
#include "javax.crypto.ExemptionMechanism.hpp"
#include "javax.crypto.ExemptionMechanismException.hpp"
#include "javax.crypto.ExemptionMechanismSpi.hpp"
#include "javax.crypto.IllegalBlockSizeException.hpp"
#include "javax.crypto.KeyAgreement.hpp"
#include "javax.crypto.KeyAgreementSpi.hpp"
#include "javax.crypto.KeyGenerator.hpp"
#include "javax.crypto.KeyGeneratorSpi.hpp"
#include "javax.crypto.Mac.hpp"
#include "javax.crypto.MacSpi.hpp"
#include "javax.crypto.NoSuchPaddingException.hpp"
#include "javax.crypto.NullCipher.hpp"
#include "javax.crypto.SealedObject.hpp"
#include "javax.crypto.SecretKey.hpp"
#include "javax.crypto.SecretKeyFactory.hpp"
#include "javax.crypto.SecretKeyFactorySpi.hpp"
#include "javax.crypto.ShortBufferException.hpp"

jclass javax::crypto::ShortBufferException::_class = nullptr;
jclass javax::crypto::CipherSpi::_class = nullptr;
jclass javax::crypto::BadPaddingException::_class = nullptr;
jclass javax::crypto::NullCipher::_class = nullptr;
jclass javax::crypto::SecretKey::_class = nullptr;
jclass javax::crypto::KeyGenerator::_class = nullptr;
jclass javax::crypto::CipherOutputStream::_class = nullptr;
jclass javax::crypto::KeyGeneratorSpi::_class = nullptr;
jclass javax::crypto::EncryptedPrivateKeyInfo::_class = nullptr;
jclass javax::crypto::KeyAgreementSpi::_class = nullptr;
jclass javax::crypto::Cipher::_class = nullptr;
jclass javax::crypto::NoSuchPaddingException::_class = nullptr;
jclass javax::crypto::CipherInputStream::_class = nullptr;
jclass javax::crypto::ExemptionMechanism::_class = nullptr;
jclass javax::crypto::SecretKeyFactorySpi::_class = nullptr;
jclass javax::crypto::ExemptionMechanismException::_class = nullptr;
jclass javax::crypto::ExemptionMechanismSpi::_class = nullptr;
jclass javax::crypto::SealedObject::_class = nullptr;
jclass javax::crypto::MacSpi::_class = nullptr;
jclass javax::crypto::KeyAgreement::_class = nullptr;
jclass javax::crypto::Mac::_class = nullptr;
jclass javax::crypto::SecretKeyFactory::_class = nullptr;
jclass javax::crypto::IllegalBlockSizeException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::ShortBufferException::ShortBufferException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::ShortBufferException::_class) ::javax::crypto::ShortBufferException::_class = java::fetch_class("javax/crypto/ShortBufferException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::ShortBufferException::ShortBufferException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::ShortBufferException::_class) ::javax::crypto::ShortBufferException::_class = java::fetch_class("javax/crypto/ShortBufferException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::CipherSpi::CipherSpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::CipherSpi::_class) ::javax::crypto::CipherSpi::_class = java::fetch_class("javax/crypto/CipherSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::BadPaddingException::BadPaddingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::BadPaddingException::_class) ::javax::crypto::BadPaddingException::_class = java::fetch_class("javax/crypto/BadPaddingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::BadPaddingException::BadPaddingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::BadPaddingException::_class) ::javax::crypto::BadPaddingException::_class = java::fetch_class("javax/crypto/BadPaddingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::NullCipher::NullCipher() : ::java::lang::Object((jobject)0), ::javax::crypto::Cipher((jobject)0) {
    if (!::javax::crypto::NullCipher::_class) ::javax::crypto::NullCipher::_class = java::fetch_class("javax/crypto/NullCipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String javax::crypto::KeyGenerator::getAlgorithm() const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::crypto::KeyGenerator::getProvider() const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::javax::crypto::KeyGenerator javax::crypto::KeyGenerator::getInstance(const ::java::lang::String& arg0){
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::crypto::KeyGenerator _ret(ret);
    return _ret;
}

::javax::crypto::KeyGenerator javax::crypto::KeyGenerator::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::KeyGenerator _ret(ret);
    return _ret;
}

::javax::crypto::KeyGenerator javax::crypto::KeyGenerator::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::KeyGenerator _ret(ret);
    return _ret;
}

::javax::crypto::SecretKey javax::crypto::KeyGenerator::generateKey() const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateKey", "()Ljavax/crypto/SecretKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::crypto::SecretKey _ret(ret);
    return _ret;
}

void javax::crypto::KeyGenerator::init(const ::java::security::spec::AlgorithmParameterSpec& arg0) const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::KeyGenerator::init(const ::java::security::spec::AlgorithmParameterSpec& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::KeyGenerator::init(int32_t arg0) const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::KeyGenerator::init(int32_t arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::KeyGenerator::init(const ::java::security::SecureRandom& arg0) const {
    if (!::javax::crypto::KeyGenerator::_class) ::javax::crypto::KeyGenerator::_class = java::fetch_class("javax/crypto/KeyGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::CipherOutputStream::CipherOutputStream(const ::java::io::OutputStream& arg0, const ::javax::crypto::Cipher& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::javax::crypto::CipherOutputStream::_class) ::javax::crypto::CipherOutputStream::_class = java::fetch_class("javax/crypto/CipherOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljavax/crypto/Cipher;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void javax::crypto::CipherOutputStream::write(int32_t arg0) const {
    if (!::javax::crypto::CipherOutputStream::_class) ::javax::crypto::CipherOutputStream::_class = java::fetch_class("javax/crypto/CipherOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::CipherOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::crypto::CipherOutputStream::_class) ::javax::crypto::CipherOutputStream::_class = java::fetch_class("javax/crypto/CipherOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::crypto::CipherOutputStream::flush() const {
    if (!::javax::crypto::CipherOutputStream::_class) ::javax::crypto::CipherOutputStream::_class = java::fetch_class("javax/crypto/CipherOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::crypto::CipherOutputStream::close() const {
    if (!::javax::crypto::CipherOutputStream::_class) ::javax::crypto::CipherOutputStream::_class = java::fetch_class("javax/crypto/CipherOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::KeyGeneratorSpi::KeyGeneratorSpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::KeyGeneratorSpi::_class) ::javax::crypto::KeyGeneratorSpi::_class = java::fetch_class("javax/crypto/KeyGeneratorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(const ::java::security::AlgorithmParameters& arg0, const std::vector< int8_t>& arg1) : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/AlgorithmParameters;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::crypto::EncryptedPrivateKeyInfo::getAlgName() const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::AlgorithmParameters javax::crypto::EncryptedPrivateKeyInfo::getAlgParameters() const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgParameters", "()Ljava/security/AlgorithmParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

std::vector< int8_t> javax::crypto::EncryptedPrivateKeyInfo::getEncryptedData() const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncryptedData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::security::spec::PKCS8EncodedKeySpec javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(const ::javax::crypto::Cipher& arg0) const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySpec", "(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::spec::PKCS8EncodedKeySpec _ret(ret);
    return _ret;
}

::java::security::spec::PKCS8EncodedKeySpec javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySpec", "(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::spec::PKCS8EncodedKeySpec _ret(ret);
    return _ret;
}

::java::security::spec::PKCS8EncodedKeySpec javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(const ::java::security::Key& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySpec", "(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::spec::PKCS8EncodedKeySpec _ret(ret);
    return _ret;
}

::java::security::spec::PKCS8EncodedKeySpec javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(const ::java::security::Key& arg0, const ::java::security::Provider& arg1) const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySpec", "(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::spec::PKCS8EncodedKeySpec _ret(ret);
    return _ret;
}

std::vector< int8_t> javax::crypto::EncryptedPrivateKeyInfo::getEncoded() const {
    if (!::javax::crypto::EncryptedPrivateKeyInfo::_class) ::javax::crypto::EncryptedPrivateKeyInfo::_class = java::fetch_class("javax/crypto/EncryptedPrivateKeyInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::KeyAgreementSpi::KeyAgreementSpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::KeyAgreementSpi::_class) ::javax::crypto::KeyAgreementSpi::_class = java::fetch_class("javax/crypto/KeyAgreementSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::javax::crypto::Cipher javax::crypto::Cipher::getInstance(const ::java::lang::String& arg0){
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/crypto/Cipher;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::crypto::Cipher _ret(ret);
    return _ret;
}

::javax::crypto::Cipher javax::crypto::Cipher::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::Cipher _ret(ret);
    return _ret;
}

::javax::crypto::Cipher javax::crypto::Cipher::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::Cipher _ret(ret);
    return _ret;
}

::java::security::Provider javax::crypto::Cipher::getProvider() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String javax::crypto::Cipher::getAlgorithm() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::crypto::Cipher::getBlockSize() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::crypto::Cipher::getOutputSize(int32_t arg0) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputSize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< int8_t> javax::crypto::Cipher::getIV() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIV", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::security::AlgorithmParameters javax::crypto::Cipher::getParameters() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Ljava/security/AlgorithmParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

::javax::crypto::ExemptionMechanism javax::crypto::Cipher::getExemptionMechanism() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExemptionMechanism", "()Ljavax/crypto/ExemptionMechanism;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::crypto::ExemptionMechanism _ret(ret);
    return _ret;
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::Key& arg1) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/Key;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::Key& arg1, const ::java::security::SecureRandom& arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/Key;Ljava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::Key& arg1, const ::java::security::spec::AlgorithmParameterSpec& arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::Key& arg1, const ::java::security::spec::AlgorithmParameterSpec& arg2, const ::java::security::SecureRandom& arg3) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::Key& arg1, const ::java::security::AlgorithmParameters& arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::Key& arg1, const ::java::security::AlgorithmParameters& arg2, const ::java::security::SecureRandom& arg3) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::cert::Certificate& arg1) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/cert/Certificate;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::Cipher::init(int32_t arg0, const ::java::security::cert::Certificate& arg1, const ::java::security::SecureRandom& arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< int8_t> javax::crypto::Cipher::update(const std::vector< int8_t>& arg0) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> javax::crypto::Cipher::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::Cipher::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII[B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t javax::crypto::Cipher::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3, int32_t arg4) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII[BI)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t javax::crypto::Cipher::update(const ::java::nio::ByteBuffer& arg0, const ::java::nio::ByteBuffer& arg1) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> javax::crypto::Cipher::doFinal() const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::Cipher::doFinal(const std::vector< int8_t>& arg0, int32_t arg1) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([BI)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> javax::crypto::Cipher::doFinal(const std::vector< int8_t>& arg0) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> javax::crypto::Cipher::doFinal(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([BII)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::Cipher::doFinal(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([BII[B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t javax::crypto::Cipher::doFinal(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const std::vector< int8_t>& arg3, int32_t arg4) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([BII[BI)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    int32_t _arg4 = arg4;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t javax::crypto::Cipher::doFinal(const ::java::nio::ByteBuffer& arg0, const ::java::nio::ByteBuffer& arg1) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> javax::crypto::Cipher::wrap(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Ljava/security/Key;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::security::Key javax::crypto::Cipher::unwrap(const std::vector< int8_t>& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetMethodID(_class, "unwrap", "([BLjava/lang/String;I)Ljava/security/Key;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::security::Key _ret(ret);
    return _ret;
}

int32_t javax::crypto::Cipher::getMaxAllowedKeyLength(const ::java::lang::String& arg0){
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxAllowedKeyLength", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::security::spec::AlgorithmParameterSpec javax::crypto::Cipher::getMaxAllowedParameterSpec(const ::java::lang::String& arg0){
    if (!::javax::crypto::Cipher::_class) ::javax::crypto::Cipher::_class = java::fetch_class("javax/crypto/Cipher");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMaxAllowedParameterSpec", "(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::spec::AlgorithmParameterSpec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::NoSuchPaddingException::NoSuchPaddingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::NoSuchPaddingException::_class) ::javax::crypto::NoSuchPaddingException::_class = java::fetch_class("javax/crypto/NoSuchPaddingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::NoSuchPaddingException::NoSuchPaddingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::NoSuchPaddingException::_class) ::javax::crypto::NoSuchPaddingException::_class = java::fetch_class("javax/crypto/NoSuchPaddingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::CipherInputStream::CipherInputStream(const ::java::io::InputStream& arg0, const ::javax::crypto::Cipher& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljavax/crypto/Cipher;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t javax::crypto::CipherInputStream::read() const {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::crypto::CipherInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t javax::crypto::CipherInputStream::skip(int64_t arg0) const {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t javax::crypto::CipherInputStream::available() const {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void javax::crypto::CipherInputStream::close() const {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool javax::crypto::CipherInputStream::markSupported() const {
    if (!::javax::crypto::CipherInputStream::_class) ::javax::crypto::CipherInputStream::_class = java::fetch_class("javax/crypto/CipherInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String javax::crypto::ExemptionMechanism::getName() const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::crypto::ExemptionMechanism javax::crypto::ExemptionMechanism::getInstance(const ::java::lang::String& arg0){
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::crypto::ExemptionMechanism _ret(ret);
    return _ret;
}

::javax::crypto::ExemptionMechanism javax::crypto::ExemptionMechanism::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::ExemptionMechanism _ret(ret);
    return _ret;
}

::javax::crypto::ExemptionMechanism javax::crypto::ExemptionMechanism::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::ExemptionMechanism _ret(ret);
    return _ret;
}

::java::security::Provider javax::crypto::ExemptionMechanism::getProvider() const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

bool javax::crypto::ExemptionMechanism::isCryptoAllowed(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCryptoAllowed", "(Ljava/security/Key;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::crypto::ExemptionMechanism::getOutputSize(int32_t arg0) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputSize", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void javax::crypto::ExemptionMechanism::init(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::ExemptionMechanism::init(const ::java::security::Key& arg0, const ::java::security::AlgorithmParameters& arg1) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::ExemptionMechanism::init(const ::java::security::Key& arg0, const ::java::security::spec::AlgorithmParameterSpec& arg1) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> javax::crypto::ExemptionMechanism::genExemptionBlob() const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "genExemptionBlob", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::ExemptionMechanism::genExemptionBlob(const std::vector< int8_t>& arg0) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "genExemptionBlob", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t javax::crypto::ExemptionMechanism::genExemptionBlob(const std::vector< int8_t>& arg0, int32_t arg1) const {
    if (!::javax::crypto::ExemptionMechanism::_class) ::javax::crypto::ExemptionMechanism::_class = java::fetch_class("javax/crypto/ExemptionMechanism");
    static jmethodID mid = java::jni->GetMethodID(_class, "genExemptionBlob", "([BI)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::SecretKeyFactorySpi::SecretKeyFactorySpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::SecretKeyFactorySpi::_class) ::javax::crypto::SecretKeyFactorySpi::_class = java::fetch_class("javax/crypto/SecretKeyFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::ExemptionMechanismException::ExemptionMechanismException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::ExemptionMechanismException::_class) ::javax::crypto::ExemptionMechanismException::_class = java::fetch_class("javax/crypto/ExemptionMechanismException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::ExemptionMechanismException::ExemptionMechanismException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::ExemptionMechanismException::_class) ::javax::crypto::ExemptionMechanismException::_class = java::fetch_class("javax/crypto/ExemptionMechanismException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::ExemptionMechanismSpi::ExemptionMechanismSpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::ExemptionMechanismSpi::_class) ::javax::crypto::ExemptionMechanismSpi::_class = java::fetch_class("javax/crypto/ExemptionMechanismSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::SealedObject::SealedObject(const ::java::io::Serializable& arg0, const ::javax::crypto::Cipher& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::javax::crypto::SealedObject::_class) ::javax::crypto::SealedObject::_class = java::fetch_class("javax/crypto/SealedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Serializable;Ljavax/crypto/Cipher;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::crypto::SealedObject::getAlgorithm() const {
    if (!::javax::crypto::SealedObject::_class) ::javax::crypto::SealedObject::_class = java::fetch_class("javax/crypto/SealedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object javax::crypto::SealedObject::getObject(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::SealedObject::_class) ::javax::crypto::SealedObject::_class = java::fetch_class("javax/crypto/SealedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/security/Key;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object javax::crypto::SealedObject::getObject(const ::javax::crypto::Cipher& arg0) const {
    if (!::javax::crypto::SealedObject::_class) ::javax::crypto::SealedObject::_class = java::fetch_class("javax/crypto/SealedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljavax/crypto/Cipher;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object javax::crypto::SealedObject::getObject(const ::java::security::Key& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::crypto::SealedObject::_class) ::javax::crypto::SealedObject::_class = java::fetch_class("javax/crypto/SealedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/security/Key;Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::MacSpi::MacSpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::crypto::MacSpi::_class) ::javax::crypto::MacSpi::_class = java::fetch_class("javax/crypto/MacSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object javax::crypto::MacSpi::clone() const {
    if (!::javax::crypto::MacSpi::_class) ::javax::crypto::MacSpi::_class = java::fetch_class("javax/crypto/MacSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String javax::crypto::KeyAgreement::getAlgorithm() const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::crypto::KeyAgreement::getProvider() const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::javax::crypto::KeyAgreement javax::crypto::KeyAgreement::getInstance(const ::java::lang::String& arg0){
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::crypto::KeyAgreement _ret(ret);
    return _ret;
}

::javax::crypto::KeyAgreement javax::crypto::KeyAgreement::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::KeyAgreement _ret(ret);
    return _ret;
}

::javax::crypto::KeyAgreement javax::crypto::KeyAgreement::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::KeyAgreement _ret(ret);
    return _ret;
}

void javax::crypto::KeyAgreement::init(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::KeyAgreement::init(const ::java::security::Key& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::KeyAgreement::init(const ::java::security::Key& arg0, const ::java::security::spec::AlgorithmParameterSpec& arg1) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::KeyAgreement::init(const ::java::security::Key& arg0, const ::java::security::spec::AlgorithmParameterSpec& arg1, const ::java::security::SecureRandom& arg2) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::security::Key javax::crypto::KeyAgreement::doPhase(const ::java::security::Key& arg0, bool arg1) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "doPhase", "(Ljava/security/Key;Z)Ljava/security/Key;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::Key _ret(ret);
    return _ret;
}

std::vector< int8_t> javax::crypto::KeyAgreement::generateSecret() const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateSecret", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t javax::crypto::KeyAgreement::generateSecret(const std::vector< int8_t>& arg0, int32_t arg1) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateSecret", "([BI)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::javax::crypto::SecretKey javax::crypto::KeyAgreement::generateSecret(const ::java::lang::String& arg0) const {
    if (!::javax::crypto::KeyAgreement::_class) ::javax::crypto::KeyAgreement::_class = java::fetch_class("javax/crypto/KeyAgreement");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateSecret", "(Ljava/lang/String;)Ljavax/crypto/SecretKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::crypto::SecretKey _ret(ret);
    return _ret;
}

::java::lang::String javax::crypto::Mac::getAlgorithm() const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::crypto::Mac::getProvider() const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::javax::crypto::Mac javax::crypto::Mac::getInstance(const ::java::lang::String& arg0){
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/crypto/Mac;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::crypto::Mac _ret(ret);
    return _ret;
}

::javax::crypto::Mac javax::crypto::Mac::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::Mac _ret(ret);
    return _ret;
}

::javax::crypto::Mac javax::crypto::Mac::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::Mac _ret(ret);
    return _ret;
}

int32_t javax::crypto::Mac::getMacLength() const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMacLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void javax::crypto::Mac::init(const ::java::security::Key& arg0, const ::java::security::spec::AlgorithmParameterSpec& arg1) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::crypto::Mac::init(const ::java::security::Key& arg0) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/Key;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::Mac::update(int8_t arg0) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::Mac::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void javax::crypto::Mac::update(const std::vector< int8_t>& arg0) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::crypto::Mac::update(const ::java::nio::ByteBuffer& arg0) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/nio/ByteBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> javax::crypto::Mac::doFinal() const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void javax::crypto::Mac::doFinal(const std::vector< int8_t>& arg0, int32_t arg1) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([BI)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> javax::crypto::Mac::doFinal(const std::vector< int8_t>& arg0) const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "doFinal", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void javax::crypto::Mac::reset() const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object javax::crypto::Mac::clone() const {
    if (!::javax::crypto::Mac::_class) ::javax::crypto::Mac::_class = java::fetch_class("javax/crypto/Mac");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String javax::crypto::SecretKeyFactory::getAlgorithm() const {
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::crypto::SecretKeyFactory::getProvider() const {
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::javax::crypto::SecretKeyFactory javax::crypto::SecretKeyFactory::getInstance(const ::java::lang::String& arg0){
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::crypto::SecretKeyFactory _ret(ret);
    return _ret;
}

::javax::crypto::SecretKeyFactory javax::crypto::SecretKeyFactory::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::SecretKeyFactory _ret(ret);
    return _ret;
}

::javax::crypto::SecretKeyFactory javax::crypto::SecretKeyFactory::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::crypto::SecretKeyFactory _ret(ret);
    return _ret;
}

::javax::crypto::SecretKey javax::crypto::SecretKeyFactory::generateSecret(const ::java::security::spec::KeySpec& arg0) const {
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateSecret", "(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::crypto::SecretKey _ret(ret);
    return _ret;
}

::java::security::spec::KeySpec javax::crypto::SecretKeyFactory::getKeySpec(const ::javax::crypto::SecretKey& arg0, const ::java::lang::Class& arg1) const {
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySpec", "(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::spec::KeySpec _ret(ret);
    return _ret;
}

::javax::crypto::SecretKey javax::crypto::SecretKeyFactory::translateKey(const ::javax::crypto::SecretKey& arg0) const {
    if (!::javax::crypto::SecretKeyFactory::_class) ::javax::crypto::SecretKeyFactory::_class = java::fetch_class("javax/crypto/SecretKeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "translateKey", "(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::crypto::SecretKey _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::IllegalBlockSizeException::IllegalBlockSizeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::IllegalBlockSizeException::_class) ::javax::crypto::IllegalBlockSizeException::_class = java::fetch_class("javax/crypto/IllegalBlockSizeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::crypto::IllegalBlockSizeException::IllegalBlockSizeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::javax::crypto::IllegalBlockSizeException::_class) ::javax::crypto::IllegalBlockSizeException::_class = java::fetch_class("javax/crypto/IllegalBlockSizeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop


#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.math.BigInteger.hpp"
#include "java.security.Principal.hpp"
#include "java.security.PublicKey.hpp"
#include "java.util.Date.hpp"
#include "javax.security.cert.Certificate.hpp"
#include "javax.security.cert.CertificateEncodingException.hpp"
#include "javax.security.cert.CertificateException.hpp"
#include "javax.security.cert.CertificateExpiredException.hpp"
#include "javax.security.cert.CertificateNotYetValidException.hpp"
#include "javax.security.cert.CertificateParsingException.hpp"
#include "javax.security.cert.X509Certificate.hpp"

jclass javax::security::cert::X509Certificate::_class = nullptr;
jclass javax::security::cert::CertificateException::_class = nullptr;
jclass javax::security::cert::CertificateExpiredException::_class = nullptr;
jclass javax::security::cert::CertificateEncodingException::_class = nullptr;
jclass javax::security::cert::CertificateNotYetValidException::_class = nullptr;
jclass javax::security::cert::Certificate::_class = nullptr;
jclass javax::security::cert::CertificateParsingException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::X509Certificate::X509Certificate() : ::java::lang::Object((jobject)0), ::javax::security::cert::Certificate((jobject)0) {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::javax::security::cert::X509Certificate javax::security::cert::X509Certificate::getInstance(const ::java::io::InputStream& arg0){
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/io/InputStream;)Ljavax/security/cert/X509Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::security::cert::X509Certificate _ret(ret);
    return _ret;
}

::javax::security::cert::X509Certificate javax::security::cert::X509Certificate::getInstance(const std::vector< int8_t>& arg0){
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "([B)Ljavax/security/cert/X509Certificate;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::security::cert::X509Certificate _ret(ret);
    return _ret;
}

void javax::security::cert::X509Certificate::checkValidity() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkValidity", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::security::cert::X509Certificate::checkValidity(const ::java::util::Date& arg0) const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkValidity", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t javax::security::cert::X509Certificate::getVersion() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger javax::security::cert::X509Certificate::getSerialNumber() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerialNumber", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::security::Principal javax::security::cert::X509Certificate::getIssuerDN() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerDN", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::security::Principal javax::security::cert::X509Certificate::getSubjectDN() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectDN", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::util::Date javax::security::cert::X509Certificate::getNotBefore() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotBefore", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Date javax::security::cert::X509Certificate::getNotAfter() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotAfter", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::lang::String javax::security::cert::X509Certificate::getSigAlgName() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::security::cert::X509Certificate::getSigAlgOID() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgOID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> javax::security::cert::X509Certificate::getSigAlgParams() const {
    if (!::javax::security::cert::X509Certificate::_class) ::javax::security::cert::X509Certificate::_class = java::fetch_class("javax/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgParams", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateException::CertificateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::security::cert::CertificateException::_class) ::javax::security::cert::CertificateException::_class = java::fetch_class("javax/security/cert/CertificateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateException::CertificateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::security::cert::CertificateException::_class) ::javax::security::cert::CertificateException::_class = java::fetch_class("javax/security/cert/CertificateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateExpiredException::CertificateExpiredException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateExpiredException::_class) ::javax::security::cert::CertificateExpiredException::_class = java::fetch_class("javax/security/cert/CertificateExpiredException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateExpiredException::CertificateExpiredException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateExpiredException::_class) ::javax::security::cert::CertificateExpiredException::_class = java::fetch_class("javax/security/cert/CertificateExpiredException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateEncodingException::CertificateEncodingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateEncodingException::_class) ::javax::security::cert::CertificateEncodingException::_class = java::fetch_class("javax/security/cert/CertificateEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateEncodingException::CertificateEncodingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateEncodingException::_class) ::javax::security::cert::CertificateEncodingException::_class = java::fetch_class("javax/security/cert/CertificateEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateNotYetValidException::CertificateNotYetValidException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateNotYetValidException::_class) ::javax::security::cert::CertificateNotYetValidException::_class = java::fetch_class("javax/security/cert/CertificateNotYetValidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateNotYetValidException::CertificateNotYetValidException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateNotYetValidException::_class) ::javax::security::cert::CertificateNotYetValidException::_class = java::fetch_class("javax/security/cert/CertificateNotYetValidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::Certificate::Certificate() : ::java::lang::Object((jobject)0) {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool javax::security::cert::Certificate::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t javax::security::cert::Certificate::hashCode() const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> javax::security::cert::Certificate::getEncoded() const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void javax::security::cert::Certificate::verify(const ::java::security::PublicKey& arg0) const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::security::cert::Certificate::verify(const ::java::security::PublicKey& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String javax::security::cert::Certificate::toString() const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::PublicKey javax::security::cert::Certificate::getPublicKey() const {
    if (!::javax::security::cert::Certificate::_class) ::javax::security::cert::Certificate::_class = java::fetch_class("javax/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateParsingException::CertificateParsingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateParsingException::_class) ::javax::security::cert::CertificateParsingException::_class = java::fetch_class("javax/security/cert/CertificateParsingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::cert::CertificateParsingException::CertificateParsingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::security::cert::CertificateException((jobject)0) {
    if (!::javax::security::cert::CertificateParsingException::_class) ::javax::security::cert::CertificateParsingException::_class = java::fetch_class("javax/security/cert/CertificateParsingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop


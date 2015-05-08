#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.math.BigInteger.hpp"
#include "java.security.KeyStore.hpp"
#include "java.security.Principal.hpp"
#include "java.security.Provider.hpp"
#include "java.security.PublicKey.hpp"
#include "java.security.cert.CRL.hpp"
#include "java.security.cert.CRLException.hpp"
#include "java.security.cert.CRLSelector.hpp"
#include "java.security.cert.CertPath.hpp"
#include "java.security.cert.CertPathBuilder.hpp"
#include "java.security.cert.CertPathBuilderException.hpp"
#include "java.security.cert.CertPathBuilderResult.hpp"
#include "java.security.cert.CertPathBuilderSpi.hpp"
#include "java.security.cert.CertPathParameters.hpp"
#include "java.security.cert.CertPathValidator.hpp"
#include "java.security.cert.CertPathValidatorException.hpp"
#include "java.security.cert.CertPathValidatorResult.hpp"
#include "java.security.cert.CertPathValidatorSpi.hpp"
#include "java.security.cert.CertSelector.hpp"
#include "java.security.cert.CertStore.hpp"
#include "java.security.cert.CertStoreException.hpp"
#include "java.security.cert.CertStoreParameters.hpp"
#include "java.security.cert.CertStoreSpi.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.security.cert.CertificateEncodingException.hpp"
#include "java.security.cert.CertificateException.hpp"
#include "java.security.cert.CertificateExpiredException.hpp"
#include "java.security.cert.CertificateFactory.hpp"
#include "java.security.cert.CertificateFactorySpi.hpp"
#include "java.security.cert.CertificateNotYetValidException.hpp"
#include "java.security.cert.CertificateParsingException.hpp"
#include "java.security.cert.CollectionCertStoreParameters.hpp"
#include "java.security.cert.LDAPCertStoreParameters.hpp"
#include "java.security.cert.PKIXBuilderParameters.hpp"
#include "java.security.cert.PKIXCertPathBuilderResult.hpp"
#include "java.security.cert.PKIXCertPathChecker.hpp"
#include "java.security.cert.PKIXCertPathValidatorResult.hpp"
#include "java.security.cert.PKIXParameters.hpp"
#include "java.security.cert.PolicyNode.hpp"
#include "java.security.cert.PolicyQualifierInfo.hpp"
#include "java.security.cert.TrustAnchor.hpp"
#include "java.security.cert.X509CRL.hpp"
#include "java.security.cert.X509CRLEntry.hpp"
#include "java.security.cert.X509CRLSelector.hpp"
#include "java.security.cert.X509CertSelector.hpp"
#include "java.security.cert.X509Certificate.hpp"
#include "java.security.cert.X509Extension.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Date.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.List.hpp"
#include "java.util.Set.hpp"
#include "javax.security.auth.x500.X500Principal.hpp"

jclass java::security::cert::X509CRLSelector::_class = nullptr;
jclass java::security::cert::CertStoreException::_class = nullptr;
jclass java::security::cert::CertStoreParameters::_class = nullptr;
jclass java::security::cert::CertPathValidatorSpi::_class = nullptr;
jclass java::security::cert::X509Certificate::_class = nullptr;
jclass java::security::cert::PKIXCertPathChecker::_class = nullptr;
jclass java::security::cert::Certificate_CertificateRep::_class = nullptr;
jclass java::security::cert::PKIXCertPathBuilderResult::_class = nullptr;
jclass java::security::cert::CertificateException::_class = nullptr;
jclass java::security::cert::PolicyQualifierInfo::_class = nullptr;
jclass java::security::cert::CertificateExpiredException::_class = nullptr;
jclass java::security::cert::CertificateEncodingException::_class = nullptr;
jclass java::security::cert::CertStore::_class = nullptr;
jclass java::security::cert::X509CRLEntry::_class = nullptr;
jclass java::security::cert::CollectionCertStoreParameters::_class = nullptr;
jclass java::security::cert::TrustAnchor::_class = nullptr;
jclass java::security::cert::CertStoreSpi::_class = nullptr;
jclass java::security::cert::CertPathParameters::_class = nullptr;
jclass java::security::cert::CRLSelector::_class = nullptr;
jclass java::security::cert::CertPathBuilder::_class = nullptr;
jclass java::security::cert::X509Extension::_class = nullptr;
jclass java::security::cert::CertPathValidatorException::_class = nullptr;
jclass java::security::cert::CertificateNotYetValidException::_class = nullptr;
jclass java::security::cert::CertificateFactory::_class = nullptr;
jclass java::security::cert::CertPathValidatorResult::_class = nullptr;
jclass java::security::cert::CRLException::_class = nullptr;
jclass java::security::cert::CRL::_class = nullptr;
jclass java::security::cert::CertificateFactorySpi::_class = nullptr;
jclass java::security::cert::CertPathValidator::_class = nullptr;
jclass java::security::cert::X509CRL::_class = nullptr;
jclass java::security::cert::CertSelector::_class = nullptr;
jclass java::security::cert::LDAPCertStoreParameters::_class = nullptr;
jclass java::security::cert::PolicyNode::_class = nullptr;
jclass java::security::cert::CertPath_CertPathRep::_class = nullptr;
jclass java::security::cert::CertPathBuilderSpi::_class = nullptr;
jclass java::security::cert::CertPathBuilderException::_class = nullptr;
jclass java::security::cert::Certificate::_class = nullptr;
jclass java::security::cert::PKIXBuilderParameters::_class = nullptr;
jclass java::security::cert::CertPathBuilderResult::_class = nullptr;
jclass java::security::cert::PKIXCertPathValidatorResult::_class = nullptr;
jclass java::security::cert::CertificateParsingException::_class = nullptr;
jclass java::security::cert::CertPath::_class = nullptr;
jclass java::security::cert::PKIXParameters::_class = nullptr;
jclass java::security::cert::X509CertSelector::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::X509CRLSelector::X509CRLSelector() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CRLSelector((jobject)0) {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::security::cert::X509CRLSelector::setIssuers(const ::java::util::Collection& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIssuers", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::setIssuerNames(const ::java::util::Collection& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIssuerNames", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::addIssuer(const ::javax::security::auth::x500::X500Principal& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIssuer", "(Ljavax/security/auth/x500/X500Principal;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::addIssuerName(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIssuerName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::addIssuerName(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIssuerName", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::setMinCRLNumber(const ::java::math::BigInteger& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinCRLNumber", "(Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::setMaxCRLNumber(const ::java::math::BigInteger& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxCRLNumber", "(Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::setDateAndTime(const ::java::util::Date& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDateAndTime", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRLSelector::setCertificateChecking(const ::java::security::cert::X509Certificate& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertificateChecking", "(Ljava/security/cert/X509Certificate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Collection java::security::cert::X509CRLSelector::getIssuers() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuers", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::X509CRLSelector::getIssuerNames() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerNames", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::cert::X509CRLSelector::getMinCRL() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinCRL", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::security::cert::X509CRLSelector::getMaxCRL() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxCRL", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::util::Date java::security::cert::X509CRLSelector::getDateAndTime() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDateAndTime", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::security::cert::X509Certificate java::security::cert::X509CRLSelector::getCertificateChecking() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateChecking", "()Ljava/security/cert/X509Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::X509Certificate _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::X509CRLSelector::toString() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::X509CRLSelector::match(const ::java::security::cert::CRL& arg0) const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Ljava/security/cert/CRL;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::security::cert::X509CRLSelector::clone() const {
    if (!::java::security::cert::X509CRLSelector::_class) ::java::security::cert::X509CRLSelector::_class = java::fetch_class("java/security/cert/X509CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertStoreException::CertStoreException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertStoreException::_class) ::java::security::cert::CertStoreException::_class = java::fetch_class("java/security/cert/CertStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertStoreException::CertStoreException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertStoreException::_class) ::java::security::cert::CertStoreException::_class = java::fetch_class("java/security/cert/CertStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertStoreException::CertStoreException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertStoreException::_class) ::java::security::cert::CertStoreException::_class = java::fetch_class("java/security/cert/CertStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertStoreException::CertStoreException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertStoreException::_class) ::java::security::cert::CertStoreException::_class = java::fetch_class("java/security/cert/CertStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::cert::CertStoreParameters::clone() const {
    if (!::java::security::cert::CertStoreParameters::_class) ::java::security::cert::CertStoreParameters::_class = java::fetch_class("java/security/cert/CertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathValidatorSpi::CertPathValidatorSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::CertPathValidatorSpi::_class) ::java::security::cert::CertPathValidatorSpi::_class = java::fetch_class("java/security/cert/CertPathValidatorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::cert::CertPathValidatorResult java::security::cert::CertPathValidatorSpi::engineValidate(const ::java::security::cert::CertPath& arg0, const ::java::security::cert::CertPathParameters& arg1) const {
    if (!::java::security::cert::CertPathValidatorSpi::_class) ::java::security::cert::CertPathValidatorSpi::_class = java::fetch_class("java/security/cert/CertPathValidatorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineValidate", "(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::cert::CertPathValidatorResult _ret(ret);
    return _ret;
}

void java::security::cert::X509Certificate::checkValidity() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkValidity", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::security::cert::X509Certificate::checkValidity(const ::java::util::Date& arg0) const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkValidity", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::security::cert::X509Certificate::getVersion() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::math::BigInteger java::security::cert::X509Certificate::getSerialNumber() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerialNumber", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::security::Principal java::security::cert::X509Certificate::getIssuerDN() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerDN", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::javax::security::auth::x500::X500Principal java::security::cert::X509Certificate::getIssuerX500Principal() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerX500Principal", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

::java::security::Principal java::security::cert::X509Certificate::getSubjectDN() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectDN", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::javax::security::auth::x500::X500Principal java::security::cert::X509Certificate::getSubjectX500Principal() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectX500Principal", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

::java::util::Date java::security::cert::X509Certificate::getNotBefore() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotBefore", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Date java::security::cert::X509Certificate::getNotAfter() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotAfter", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509Certificate::getTBSCertificate() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTBSCertificate", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509Certificate::getSignature() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSignature", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::cert::X509Certificate::getSigAlgName() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::X509Certificate::getSigAlgOID() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgOID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509Certificate::getSigAlgParams() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgParams", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< bool> java::security::cert::X509Certificate::getIssuerUniqueID() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerUniqueID", "()[Z");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< bool> java::security::cert::X509Certificate::getSubjectUniqueID() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectUniqueID", "()[Z");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< bool> java::security::cert::X509Certificate::getKeyUsage() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyUsage", "()[Z");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::util::List java::security::cert::X509Certificate::getExtendedKeyUsage() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtendedKeyUsage", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t java::security::cert::X509Certificate::getBasicConstraints() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBasicConstraints", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Collection java::security::cert::X509Certificate::getSubjectAlternativeNames() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectAlternativeNames", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::X509Certificate::getIssuerAlternativeNames() const {
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerAlternativeNames", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::security::cert::PKIXCertPathChecker::clone() const {
    if (!::java::security::cert::PKIXCertPathChecker::_class) ::java::security::cert::PKIXCertPathChecker::_class = java::fetch_class("java/security/cert/PKIXCertPathChecker");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::security::cert::PKIXCertPathChecker::init(bool arg0) const {
    if (!::java::security::cert::PKIXCertPathChecker::_class) ::java::security::cert::PKIXCertPathChecker::_class = java::fetch_class("java/security/cert/PKIXCertPathChecker");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::PKIXCertPathChecker::isForwardCheckingSupported() const {
    if (!::java::security::cert::PKIXCertPathChecker::_class) ::java::security::cert::PKIXCertPathChecker::_class = java::fetch_class("java/security/cert/PKIXCertPathChecker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isForwardCheckingSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Set java::security::cert::PKIXCertPathChecker::getSupportedExtensions() const {
    if (!::java::security::cert::PKIXCertPathChecker::_class) ::java::security::cert::PKIXCertPathChecker::_class = java::fetch_class("java/security/cert/PKIXCertPathChecker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedExtensions", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void java::security::cert::PKIXCertPathChecker::check(const ::java::security::cert::Certificate& arg0, const ::java::util::Collection& arg1) const {
    if (!::java::security::cert::PKIXCertPathChecker::_class) ::java::security::cert::PKIXCertPathChecker::_class = java::fetch_class("java/security/cert/PKIXCertPathChecker");
    static jmethodID mid = java::jni->GetMethodID(_class, "check", "(Ljava/security/cert/Certificate;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PKIXCertPathBuilderResult::PKIXCertPathBuilderResult(const ::java::security::cert::CertPath& arg0, const ::java::security::cert::TrustAnchor& arg1, const ::java::security::cert::PolicyNode& arg2, const ::java::security::PublicKey& arg3) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathBuilderResult((jobject)0), ::java::security::cert::CertPathValidatorResult((jobject)0), ::java::security::cert::PKIXCertPathValidatorResult((jobject)0) {
    if (!::java::security::cert::PKIXCertPathBuilderResult::_class) ::java::security::cert::PKIXCertPathBuilderResult::_class = java::fetch_class("java/security/cert/PKIXCertPathBuilderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::security::cert::CertPath java::security::cert::PKIXCertPathBuilderResult::getCertPath() const {
    if (!::java::security::cert::PKIXCertPathBuilderResult::_class) ::java::security::cert::PKIXCertPathBuilderResult::_class = java::fetch_class("java/security/cert/PKIXCertPathBuilderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertPath", "()Ljava/security/cert/CertPath;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::PKIXCertPathBuilderResult::toString() const {
    if (!::java::security::cert::PKIXCertPathBuilderResult::_class) ::java::security::cert::PKIXCertPathBuilderResult::_class = java::fetch_class("java/security/cert/PKIXCertPathBuilderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateException::CertificateException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertificateException::_class) ::java::security::cert::CertificateException::_class = java::fetch_class("java/security/cert/CertificateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateException::CertificateException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertificateException::_class) ::java::security::cert::CertificateException::_class = java::fetch_class("java/security/cert/CertificateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateException::CertificateException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertificateException::_class) ::java::security::cert::CertificateException::_class = java::fetch_class("java/security/cert/CertificateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateException::CertificateException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertificateException::_class) ::java::security::cert::CertificateException::_class = java::fetch_class("java/security/cert/CertificateException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PolicyQualifierInfo::PolicyQualifierInfo(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::PolicyQualifierInfo::_class) ::java::security::cert::PolicyQualifierInfo::_class = java::fetch_class("java/security/cert/PolicyQualifierInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< int8_t> java::security::cert::PolicyQualifierInfo::getEncoded() const {
    if (!::java::security::cert::PolicyQualifierInfo::_class) ::java::security::cert::PolicyQualifierInfo::_class = java::fetch_class("java/security/cert/PolicyQualifierInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::cert::PolicyQualifierInfo::getPolicyQualifierId() const {
    if (!::java::security::cert::PolicyQualifierInfo::_class) ::java::security::cert::PolicyQualifierInfo::_class = java::fetch_class("java/security/cert/PolicyQualifierInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPolicyQualifierId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::PolicyQualifierInfo::getPolicyQualifier() const {
    if (!::java::security::cert::PolicyQualifierInfo::_class) ::java::security::cert::PolicyQualifierInfo::_class = java::fetch_class("java/security/cert/PolicyQualifierInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPolicyQualifier", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::cert::PolicyQualifierInfo::toString() const {
    if (!::java::security::cert::PolicyQualifierInfo::_class) ::java::security::cert::PolicyQualifierInfo::_class = java::fetch_class("java/security/cert/PolicyQualifierInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateExpiredException::CertificateExpiredException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateExpiredException::_class) ::java::security::cert::CertificateExpiredException::_class = java::fetch_class("java/security/cert/CertificateExpiredException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateExpiredException::CertificateExpiredException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateExpiredException::_class) ::java::security::cert::CertificateExpiredException::_class = java::fetch_class("java/security/cert/CertificateExpiredException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateEncodingException::CertificateEncodingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateEncodingException::_class) ::java::security::cert::CertificateEncodingException::_class = java::fetch_class("java/security/cert/CertificateEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateEncodingException::CertificateEncodingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateEncodingException::_class) ::java::security::cert::CertificateEncodingException::_class = java::fetch_class("java/security/cert/CertificateEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateEncodingException::CertificateEncodingException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateEncodingException::_class) ::java::security::cert::CertificateEncodingException::_class = java::fetch_class("java/security/cert/CertificateEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateEncodingException::CertificateEncodingException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateEncodingException::_class) ::java::security::cert::CertificateEncodingException::_class = java::fetch_class("java/security/cert/CertificateEncodingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::security::cert::CertStore java::security::cert::CertStore::getInstance(const ::java::lang::String& arg0, const ::java::security::cert::CertStoreParameters& arg1){
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertStore _ret(ret);
    return _ret;
}

::java::security::cert::CertStore java::security::cert::CertStore::getInstance(const ::java::lang::String& arg0, const ::java::security::cert::CertStoreParameters& arg1, const ::java::lang::String& arg2){
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::security::cert::CertStore _ret(ret);
    return _ret;
}

::java::security::cert::CertStore java::security::cert::CertStore::getInstance(const ::java::lang::String& arg0, const ::java::security::cert::CertStoreParameters& arg1, const ::java::security::Provider& arg2){
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::security::cert::CertStore _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CertStore::getType() const {
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider java::security::cert::CertStore::getProvider() const {
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::security::cert::CertStoreParameters java::security::cert::CertStore::getCertStoreParameters() const {
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertStoreParameters", "()Ljava/security/cert/CertStoreParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertStoreParameters _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertStore::getCertificates(const ::java::security::cert::CertSelector& arg0) const {
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertStore::getCRLs(const ::java::security::cert::CRLSelector& arg0) const {
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CertStore::getDefaultType(){
    if (!::java::security::cert::CertStore::_class) ::java::security::cert::CertStore::_class = java::fetch_class("java/security/cert/CertStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::X509CRLEntry::X509CRLEntry() : ::java::lang::Object((jobject)0), ::java::security::cert::X509Extension((jobject)0) {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::security::cert::X509CRLEntry::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::cert::X509CRLEntry::hashCode() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> java::security::cert::X509CRLEntry::getEncoded() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::math::BigInteger java::security::cert::X509CRLEntry::getSerialNumber() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerialNumber", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::javax::security::auth::x500::X500Principal java::security::cert::X509CRLEntry::getCertificateIssuer() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateIssuer", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

::java::util::Date java::security::cert::X509CRLEntry::getRevocationDate() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRevocationDate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

bool java::security::cert::X509CRLEntry::hasExtensions() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasExtensions", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::security::cert::X509CRLEntry::toString() const {
    if (!::java::security::cert::X509CRLEntry::_class) ::java::security::cert::X509CRLEntry::_class = java::fetch_class("java/security/cert/X509CRLEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CollectionCertStoreParameters::CollectionCertStoreParameters() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {
    if (!::java::security::cert::CollectionCertStoreParameters::_class) ::java::security::cert::CollectionCertStoreParameters::_class = java::fetch_class("java/security/cert/CollectionCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CollectionCertStoreParameters::CollectionCertStoreParameters(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {
    if (!::java::security::cert::CollectionCertStoreParameters::_class) ::java::security::cert::CollectionCertStoreParameters::_class = java::fetch_class("java/security/cert/CollectionCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::cert::CollectionCertStoreParameters::clone() const {
    if (!::java::security::cert::CollectionCertStoreParameters::_class) ::java::security::cert::CollectionCertStoreParameters::_class = java::fetch_class("java/security/cert/CollectionCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CollectionCertStoreParameters::getCollection() const {
    if (!::java::security::cert::CollectionCertStoreParameters::_class) ::java::security::cert::CollectionCertStoreParameters::_class = java::fetch_class("java/security/cert/CollectionCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollection", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CollectionCertStoreParameters::toString() const {
    if (!::java::security::cert::CollectionCertStoreParameters::_class) ::java::security::cert::CollectionCertStoreParameters::_class = java::fetch_class("java/security/cert/CollectionCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::TrustAnchor::TrustAnchor(const ::java::security::cert::X509Certificate& arg0, const std::vector< int8_t>& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/X509Certificate;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::TrustAnchor::TrustAnchor(const ::java::lang::String& arg0, const ::java::security::PublicKey& arg1, const std::vector< int8_t>& arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/security/PublicKey;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::TrustAnchor::TrustAnchor(const ::javax::security::auth::x500::X500Principal& arg0, const ::java::security::PublicKey& arg1, const std::vector< int8_t>& arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/security/auth/x500/X500Principal;Ljava/security/PublicKey;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jbyteArray _arg2 = java::jni->NewByteArray(arg2.size());
    java::jni->SetByteArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

std::vector< int8_t> java::security::cert::TrustAnchor::getNameConstraints() const {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNameConstraints", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::security::cert::X509Certificate java::security::cert::TrustAnchor::getTrustedCert() const {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrustedCert", "()Ljava/security/cert/X509Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::X509Certificate _ret(ret);
    return _ret;
}

::javax::security::auth::x500::X500Principal java::security::cert::TrustAnchor::getCA() const {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCA", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::TrustAnchor::getCAName() const {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCAName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::PublicKey java::security::cert::TrustAnchor::getCAPublicKey() const {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCAPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::TrustAnchor::toString() const {
    if (!::java::security::cert::TrustAnchor::_class) ::java::security::cert::TrustAnchor::_class = java::fetch_class("java/security/cert/TrustAnchor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertStoreSpi::CertStoreSpi(const ::java::security::cert::CertStoreParameters& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::CertStoreSpi::_class) ::java::security::cert::CertStoreSpi::_class = java::fetch_class("java/security/cert/CertStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/CertStoreParameters;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Collection java::security::cert::CertStoreSpi::engineGetCertificates(const ::java::security::cert::CertSelector& arg0) const {
    if (!::java::security::cert::CertStoreSpi::_class) ::java::security::cert::CertStoreSpi::_class = java::fetch_class("java/security/cert/CertStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertStoreSpi::engineGetCRLs(const ::java::security::cert::CRLSelector& arg0) const {
    if (!::java::security::cert::CertStoreSpi::_class) ::java::security::cert::CertStoreSpi::_class = java::fetch_class("java/security/cert/CertStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::security::cert::CertPathParameters::clone() const {
    if (!::java::security::cert::CertPathParameters::_class) ::java::security::cert::CertPathParameters::_class = java::fetch_class("java/security/cert/CertPathParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::cert::CRLSelector::clone() const {
    if (!::java::security::cert::CRLSelector::_class) ::java::security::cert::CRLSelector::_class = java::fetch_class("java/security/cert/CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::security::cert::CRLSelector::match(const ::java::security::cert::CRL& arg0) const {
    if (!::java::security::cert::CRLSelector::_class) ::java::security::cert::CRLSelector::_class = java::fetch_class("java/security/cert/CRLSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Ljava/security/cert/CRL;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::CertPathBuilder::getAlgorithm() const {
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider java::security::cert::CertPathBuilder::getProvider() const {
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::security::cert::CertPathBuilder java::security::cert::CertPathBuilder::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::cert::CertPathBuilder _ret(ret);
    return _ret;
}

::java::security::cert::CertPathBuilder java::security::cert::CertPathBuilder::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertPathBuilder _ret(ret);
    return _ret;
}

::java::security::cert::CertPathBuilder java::security::cert::CertPathBuilder::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertPathBuilder _ret(ret);
    return _ret;
}

::java::security::cert::CertPathBuilderResult java::security::cert::CertPathBuilder::build(const ::java::security::cert::CertPathParameters& arg0) const {
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CertPathBuilderResult _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CertPathBuilder::getDefaultType(){
    if (!::java::security::cert::CertPathBuilder::_class) ::java::security::cert::CertPathBuilder::_class = java::fetch_class("java/security/cert/CertPathBuilder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Set java::security::cert::X509Extension::getCriticalExtensionOIDs() const {
    if (!::java::security::cert::X509Extension::_class) ::java::security::cert::X509Extension::_class = java::fetch_class("java/security/cert/X509Extension");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCriticalExtensionOIDs", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509Extension::getExtensionValue(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::X509Extension::_class) ::java::security::cert::X509Extension::_class = java::fetch_class("java/security/cert/X509Extension");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtensionValue", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::util::Set java::security::cert::X509Extension::getNonCriticalExtensionOIDs() const {
    if (!::java::security::cert::X509Extension::_class) ::java::security::cert::X509Extension::_class = java::fetch_class("java/security/cert/X509Extension");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNonCriticalExtensionOIDs", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

bool java::security::cert::X509Extension::hasUnsupportedCriticalExtension() const {
    if (!::java::security::cert::X509Extension::_class) ::java::security::cert::X509Extension::_class = java::fetch_class("java/security/cert/X509Extension");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasUnsupportedCriticalExtension", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathValidatorException::CertPathValidatorException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1, const ::java::security::cert::CertPath& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathValidatorException::CertPathValidatorException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathValidatorException::CertPathValidatorException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathValidatorException::CertPathValidatorException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathValidatorException::CertPathValidatorException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::cert::CertPath java::security::cert::CertPathValidatorException::getCertPath() const {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertPath", "()Ljava/security/cert/CertPath;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

int32_t java::security::cert::CertPathValidatorException::getIndex() const {
    if (!::java::security::cert::CertPathValidatorException::_class) ::java::security::cert::CertPathValidatorException::_class = java::fetch_class("java/security/cert/CertPathValidatorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateNotYetValidException::CertificateNotYetValidException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateNotYetValidException::_class) ::java::security::cert::CertificateNotYetValidException::_class = java::fetch_class("java/security/cert/CertificateNotYetValidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateNotYetValidException::CertificateNotYetValidException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateNotYetValidException::_class) ::java::security::cert::CertificateNotYetValidException::_class = java::fetch_class("java/security/cert/CertificateNotYetValidException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::cert::CertificateFactory java::security::cert::CertificateFactory::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::cert::CertificateFactory _ret(ret);
    return _ret;
}

::java::security::cert::CertificateFactory java::security::cert::CertificateFactory::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertificateFactory _ret(ret);
    return _ret;
}

::java::security::cert::CertificateFactory java::security::cert::CertificateFactory::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertificateFactory _ret(ret);
    return _ret;
}

::java::security::Provider java::security::cert::CertificateFactory::getProvider() const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CertificateFactory::getType() const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::cert::Certificate java::security::cert::CertificateFactory::generateCertificate(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCertificate", "(Ljava/io/InputStream;)Ljava/security/cert/Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::Certificate _ret(ret);
    return _ret;
}

::java::util::Iterator java::security::cert::CertificateFactory::getCertPathEncodings() const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertPathEncodings", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertificateFactory::generateCertPath(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCertPath", "(Ljava/io/InputStream;)Ljava/security/cert/CertPath;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertificateFactory::generateCertPath(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCertPath", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertificateFactory::generateCertPath(const ::java::util::List& arg0) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCertPath", "(Ljava/util/List;)Ljava/security/cert/CertPath;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertificateFactory::generateCertificates(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCertificates", "(Ljava/io/InputStream;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::security::cert::CRL java::security::cert::CertificateFactory::generateCRL(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCRL", "(Ljava/io/InputStream;)Ljava/security/cert/CRL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CRL _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertificateFactory::generateCRLs(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactory::_class) ::java::security::cert::CertificateFactory::_class = java::fetch_class("java/security/cert/CertificateFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateCRLs", "(Ljava/io/InputStream;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::security::cert::CertPathValidatorResult::clone() const {
    if (!::java::security::cert::CertPathValidatorResult::_class) ::java::security::cert::CertPathValidatorResult::_class = java::fetch_class("java/security/cert/CertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CRLException::CRLException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CRLException::_class) ::java::security::cert::CRLException::_class = java::fetch_class("java/security/cert/CRLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CRLException::CRLException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CRLException::_class) ::java::security::cert::CRLException::_class = java::fetch_class("java/security/cert/CRLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CRLException::CRLException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CRLException::_class) ::java::security::cert::CRLException::_class = java::fetch_class("java/security/cert/CRLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CRLException::CRLException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CRLException::_class) ::java::security::cert::CRLException::_class = java::fetch_class("java/security/cert/CRLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::cert::CRL::getType() const {
    if (!::java::security::cert::CRL::_class) ::java::security::cert::CRL::_class = java::fetch_class("java/security/cert/CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::CRL::isRevoked(const ::java::security::cert::Certificate& arg0) const {
    if (!::java::security::cert::CRL::_class) ::java::security::cert::CRL::_class = java::fetch_class("java/security/cert/CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRevoked", "(Ljava/security/cert/Certificate;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::CRL::toString() const {
    if (!::java::security::cert::CRL::_class) ::java::security::cert::CRL::_class = java::fetch_class("java/security/cert/CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateFactorySpi::CertificateFactorySpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::cert::Certificate java::security::cert::CertificateFactorySpi::engineGenerateCertificate(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCertificate", "(Ljava/io/InputStream;)Ljava/security/cert/Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::Certificate _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertificateFactorySpi::engineGenerateCertificates(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCertificates", "(Ljava/io/InputStream;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::security::cert::CRL java::security::cert::CertificateFactorySpi::engineGenerateCRL(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCRL", "(Ljava/io/InputStream;)Ljava/security/cert/CRL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CRL _ret(ret);
    return _ret;
}

::java::util::Collection java::security::cert::CertificateFactorySpi::engineGenerateCRLs(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCRLs", "(Ljava/io/InputStream;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertificateFactorySpi::engineGenerateCertPath(const ::java::io::InputStream& arg0) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCertPath", "(Ljava/io/InputStream;)Ljava/security/cert/CertPath;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertificateFactorySpi::engineGenerateCertPath(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCertPath", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertificateFactorySpi::engineGenerateCertPath(const ::java::util::List& arg0) const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGenerateCertPath", "(Ljava/util/List;)Ljava/security/cert/CertPath;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::util::Iterator java::security::cert::CertificateFactorySpi::engineGetCertPathEncodings() const {
    if (!::java::security::cert::CertificateFactorySpi::_class) ::java::security::cert::CertificateFactorySpi::_class = java::fetch_class("java/security/cert/CertificateFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCertPathEncodings", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CertPathValidator::getAlgorithm() const {
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider java::security::cert::CertPathValidator::getProvider() const {
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::security::cert::CertPathValidator java::security::cert::CertPathValidator::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::cert::CertPathValidator _ret(ret);
    return _ret;
}

::java::security::cert::CertPathValidator java::security::cert::CertPathValidator::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertPathValidator _ret(ret);
    return _ret;
}

::java::security::cert::CertPathValidator java::security::cert::CertPathValidator::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::cert::CertPathValidator _ret(ret);
    return _ret;
}

::java::security::cert::CertPathValidatorResult java::security::cert::CertPathValidator::validate(const ::java::security::cert::CertPath& arg0, const ::java::security::cert::CertPathParameters& arg1) const {
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::cert::CertPathValidatorResult _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::CertPathValidator::getDefaultType(){
    if (!::java::security::cert::CertPathValidator::_class) ::java::security::cert::CertPathValidator::_class = java::fetch_class("java/security/cert/CertPathValidator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::X509CRL::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::cert::X509CRL::hashCode() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> java::security::cert::X509CRL::getEncoded() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CRL::verify(const ::java::security::PublicKey& arg0) const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CRL::verify(const ::java::security::PublicKey& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t java::security::cert::X509CRL::getVersion() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::security::Principal java::security::cert::X509CRL::getIssuerDN() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerDN", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::javax::security::auth::x500::X500Principal java::security::cert::X509CRL::getIssuerX500Principal() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerX500Principal", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

::java::util::Date java::security::cert::X509CRL::getThisUpdate() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThisUpdate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Date java::security::cert::X509CRL::getNextUpdate() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextUpdate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::security::cert::X509CRLEntry java::security::cert::X509CRL::getRevokedCertificate(const ::java::math::BigInteger& arg0) const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRevokedCertificate", "(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::X509CRLEntry _ret(ret);
    return _ret;
}

::java::security::cert::X509CRLEntry java::security::cert::X509CRL::getRevokedCertificate(const ::java::security::cert::X509Certificate& arg0) const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRevokedCertificate", "(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::X509CRLEntry _ret(ret);
    return _ret;
}

::java::util::Set java::security::cert::X509CRL::getRevokedCertificates() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRevokedCertificates", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509CRL::getTBSCertList() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTBSCertList", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509CRL::getSignature() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSignature", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::cert::X509CRL::getSigAlgName() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::X509CRL::getSigAlgOID() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgOID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::X509CRL::getSigAlgParams() const {
    if (!::java::security::cert::X509CRL::_class) ::java::security::cert::X509CRL::_class = java::fetch_class("java/security/cert/X509CRL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigAlgParams", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::Object java::security::cert::CertSelector::clone() const {
    if (!::java::security::cert::CertSelector::_class) ::java::security::cert::CertSelector::_class = java::fetch_class("java/security/cert/CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::security::cert::CertSelector::match(const ::java::security::cert::Certificate& arg0) const {
    if (!::java::security::cert::CertSelector::_class) ::java::security::cert::CertSelector::_class = java::fetch_class("java/security/cert/CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Ljava/security/cert/Certificate;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::LDAPCertStoreParameters::LDAPCertStoreParameters(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::LDAPCertStoreParameters::LDAPCertStoreParameters() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::LDAPCertStoreParameters::LDAPCertStoreParameters(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertStoreParameters((jobject)0) {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::cert::LDAPCertStoreParameters::clone() const {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::security::cert::LDAPCertStoreParameters::getPort() const {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::cert::LDAPCertStoreParameters::getServerName() const {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServerName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::LDAPCertStoreParameters::toString() const {
    if (!::java::security::cert::LDAPCertStoreParameters::_class) ::java::security::cert::LDAPCertStoreParameters::_class = java::fetch_class("java/security/cert/LDAPCertStoreParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Iterator java::security::cert::PolicyNode::getChildren() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildren", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t java::security::cert::PolicyNode::getDepth() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDepth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Set java::security::cert::PolicyNode::getExpectedPolicies() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpectedPolicies", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::security::cert::PolicyNode java::security::cert::PolicyNode::getParent() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/security/cert/PolicyNode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::PolicyNode _ret(ret);
    return _ret;
}

::java::util::Set java::security::cert::PolicyNode::getPolicyQualifiers() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPolicyQualifiers", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::PolicyNode::getValidPolicy() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValidPolicy", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::PolicyNode::isCritical() const {
    if (!::java::security::cert::PolicyNode::_class) ::java::security::cert::PolicyNode::_class = java::fetch_class("java/security/cert/PolicyNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCritical", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathBuilderSpi::CertPathBuilderSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::cert::CertPathBuilderSpi::_class) ::java::security::cert::CertPathBuilderSpi::_class = java::fetch_class("java/security/cert/CertPathBuilderSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::cert::CertPathBuilderResult java::security::cert::CertPathBuilderSpi::engineBuild(const ::java::security::cert::CertPathParameters& arg0) const {
    if (!::java::security::cert::CertPathBuilderSpi::_class) ::java::security::cert::CertPathBuilderSpi::_class = java::fetch_class("java/security/cert/CertPathBuilderSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineBuild", "(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::CertPathBuilderResult _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathBuilderException::CertPathBuilderException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathBuilderException::_class) ::java::security::cert::CertPathBuilderException::_class = java::fetch_class("java/security/cert/CertPathBuilderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathBuilderException::CertPathBuilderException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathBuilderException::_class) ::java::security::cert::CertPathBuilderException::_class = java::fetch_class("java/security/cert/CertPathBuilderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathBuilderException::CertPathBuilderException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathBuilderException::_class) ::java::security::cert::CertPathBuilderException::_class = java::fetch_class("java/security/cert/CertPathBuilderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertPathBuilderException::CertPathBuilderException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::cert::CertPathBuilderException::_class) ::java::security::cert::CertPathBuilderException::_class = java::fetch_class("java/security/cert/CertPathBuilderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::cert::Certificate::getType() const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::Certificate::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::cert::Certificate::hashCode() const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< int8_t> java::security::cert::Certificate::getEncoded() const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::Certificate::verify(const ::java::security::PublicKey& arg0) const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::Certificate::verify(const ::java::security::PublicKey& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::security::cert::Certificate::toString() const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::PublicKey java::security::cert::Certificate::getPublicKey() const {
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PKIXBuilderParameters::PKIXBuilderParameters(const ::java::util::Set& arg0, const ::java::security::cert::CertSelector& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0), ::java::security::cert::PKIXParameters((jobject)0) {
    if (!::java::security::cert::PKIXBuilderParameters::_class) ::java::security::cert::PKIXBuilderParameters::_class = java::fetch_class("java/security/cert/PKIXBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Set;Ljava/security/cert/CertSelector;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PKIXBuilderParameters::PKIXBuilderParameters(const ::java::security::KeyStore& arg0, const ::java::security::cert::CertSelector& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0), ::java::security::cert::PKIXParameters((jobject)0) {
    if (!::java::security::cert::PKIXBuilderParameters::_class) ::java::security::cert::PKIXBuilderParameters::_class = java::fetch_class("java/security/cert/PKIXBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::security::cert::PKIXBuilderParameters::getMaxPathLength() const {
    if (!::java::security::cert::PKIXBuilderParameters::_class) ::java::security::cert::PKIXBuilderParameters::_class = java::fetch_class("java/security/cert/PKIXBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxPathLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::security::cert::PKIXBuilderParameters::setMaxPathLength(int32_t arg0) const {
    if (!::java::security::cert::PKIXBuilderParameters::_class) ::java::security::cert::PKIXBuilderParameters::_class = java::fetch_class("java/security/cert/PKIXBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxPathLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::PKIXBuilderParameters::toString() const {
    if (!::java::security::cert::PKIXBuilderParameters::_class) ::java::security::cert::PKIXBuilderParameters::_class = java::fetch_class("java/security/cert/PKIXBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::security::cert::CertPathBuilderResult::clone() const {
    if (!::java::security::cert::CertPathBuilderResult::_class) ::java::security::cert::CertPathBuilderResult::_class = java::fetch_class("java/security/cert/CertPathBuilderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::security::cert::CertPath java::security::cert::CertPathBuilderResult::getCertPath() const {
    if (!::java::security::cert::CertPathBuilderResult::_class) ::java::security::cert::CertPathBuilderResult::_class = java::fetch_class("java/security/cert/CertPathBuilderResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertPath", "()Ljava/security/cert/CertPath;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PKIXCertPathValidatorResult::PKIXCertPathValidatorResult(const ::java::security::cert::TrustAnchor& arg0, const ::java::security::cert::PolicyNode& arg1, const ::java::security::PublicKey& arg2) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathValidatorResult((jobject)0) {
    if (!::java::security::cert::PKIXCertPathValidatorResult::_class) ::java::security::cert::PKIXCertPathValidatorResult::_class = java::fetch_class("java/security/cert/PKIXCertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::security::cert::PolicyNode java::security::cert::PKIXCertPathValidatorResult::getPolicyTree() const {
    if (!::java::security::cert::PKIXCertPathValidatorResult::_class) ::java::security::cert::PKIXCertPathValidatorResult::_class = java::fetch_class("java/security/cert/PKIXCertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPolicyTree", "()Ljava/security/cert/PolicyNode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::PolicyNode _ret(ret);
    return _ret;
}

::java::security::PublicKey java::security::cert::PKIXCertPathValidatorResult::getPublicKey() const {
    if (!::java::security::cert::PKIXCertPathValidatorResult::_class) ::java::security::cert::PKIXCertPathValidatorResult::_class = java::fetch_class("java/security/cert/PKIXCertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

::java::security::cert::TrustAnchor java::security::cert::PKIXCertPathValidatorResult::getTrustAnchor() const {
    if (!::java::security::cert::PKIXCertPathValidatorResult::_class) ::java::security::cert::PKIXCertPathValidatorResult::_class = java::fetch_class("java/security/cert/PKIXCertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrustAnchor", "()Ljava/security/cert/TrustAnchor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::TrustAnchor _ret(ret);
    return _ret;
}

::java::lang::Object java::security::cert::PKIXCertPathValidatorResult::clone() const {
    if (!::java::security::cert::PKIXCertPathValidatorResult::_class) ::java::security::cert::PKIXCertPathValidatorResult::_class = java::fetch_class("java/security/cert/PKIXCertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::PKIXCertPathValidatorResult::toString() const {
    if (!::java::security::cert::PKIXCertPathValidatorResult::_class) ::java::security::cert::PKIXCertPathValidatorResult::_class = java::fetch_class("java/security/cert/PKIXCertPathValidatorResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateParsingException::CertificateParsingException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateParsingException::_class) ::java::security::cert::CertificateParsingException::_class = java::fetch_class("java/security/cert/CertificateParsingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateParsingException::CertificateParsingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateParsingException::_class) ::java::security::cert::CertificateParsingException::_class = java::fetch_class("java/security/cert/CertificateParsingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateParsingException::CertificateParsingException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateParsingException::_class) ::java::security::cert::CertificateParsingException::_class = java::fetch_class("java/security/cert/CertificateParsingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::CertificateParsingException::CertificateParsingException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::cert::CertificateException((jobject)0) {
    if (!::java::security::cert::CertificateParsingException::_class) ::java::security::cert::CertificateParsingException::_class = java::fetch_class("java/security/cert/CertificateParsingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::cert::CertPath::getType() const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::CertPath::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::cert::CertPath::hashCode() const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::cert::CertPath::toString() const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List java::security::cert::CertPath::getCertificates() const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificates", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::cert::CertPath::getEncoded() const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::security::cert::CertPath::getEncoded(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::util::Iterator java::security::cert::CertPath::getEncodings() const {
    if (!::java::security::cert::CertPath::_class) ::java::security::cert::CertPath::_class = java::fetch_class("java/security/cert/CertPath");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncodings", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PKIXParameters::PKIXParameters(const ::java::util::Set& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0) {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::PKIXParameters::PKIXParameters(const ::java::security::KeyStore& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0) {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyStore;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Set java::security::cert::PKIXParameters::getTrustAnchors() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrustAnchors", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setTrustAnchors(const ::java::util::Set& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTrustAnchors", "(Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::PKIXParameters::isAnyPolicyInhibited() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnyPolicyInhibited", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::cert::PKIXParameters::setAnyPolicyInhibited(bool arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnyPolicyInhibited", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List java::security::cert::PKIXParameters::getCertPathCheckers() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertPathCheckers", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setCertPathCheckers(const ::java::util::List& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertPathCheckers", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::PKIXParameters::addCertPathChecker(const ::java::security::cert::PKIXCertPathChecker& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCertPathChecker", "(Ljava/security/cert/PKIXCertPathChecker;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List java::security::cert::PKIXParameters::getCertStores() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertStores", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setCertStores(const ::java::util::List& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertStores", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::PKIXParameters::addCertStore(const ::java::security::cert::CertStore& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCertStore", "(Ljava/security/cert/CertStore;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Date java::security::cert::PKIXParameters::getDate() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setDate(const ::java::util::Date& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::PKIXParameters::isExplicitPolicyRequired() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExplicitPolicyRequired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::cert::PKIXParameters::setExplicitPolicyRequired(bool arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExplicitPolicyRequired", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set java::security::cert::PKIXParameters::getInitialPolicies() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInitialPolicies", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setInitialPolicies(const ::java::util::Set& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInitialPolicies", "(Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::PKIXParameters::isPolicyMappingInhibited() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPolicyMappingInhibited", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::cert::PKIXParameters::setPolicyMappingInhibited(bool arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPolicyMappingInhibited", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::PKIXParameters::getPolicyQualifiersRejected() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPolicyQualifiersRejected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::cert::PKIXParameters::setPolicyQualifiersRejected(bool arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPolicyQualifiersRejected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::PKIXParameters::isRevocationEnabled() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRevocationEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::cert::PKIXParameters::setRevocationEnabled(bool arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRevocationEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::PKIXParameters::getSigProvider() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSigProvider", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setSigProvider(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSigProvider", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::cert::CertSelector java::security::cert::PKIXParameters::getTargetCertConstraints() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTargetCertConstraints", "()Ljava/security/cert/CertSelector;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertSelector _ret(ret);
    return _ret;
}

void java::security::cert::PKIXParameters::setTargetCertConstraints(const ::java::security::cert::CertSelector& arg0) const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetCertConstraints", "(Ljava/security/cert/CertSelector;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::security::cert::PKIXParameters::clone() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::PKIXParameters::toString() const {
    if (!::java::security::cert::PKIXParameters::_class) ::java::security::cert::PKIXParameters::_class = java::fetch_class("java/security/cert/PKIXParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::cert::X509CertSelector::X509CertSelector() : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertSelector((jobject)0) {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::security::cert::X509CertSelector::setCertificate(const ::java::security::cert::X509Certificate& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertificate", "(Ljava/security/cert/X509Certificate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::cert::X509Certificate java::security::cert::X509CertSelector::getCertificate() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificate", "()Ljava/security/cert/X509Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::X509Certificate _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setSerialNumber(const ::java::math::BigInteger& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSerialNumber", "(Ljava/math/BigInteger;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::math::BigInteger java::security::cert::X509CertSelector::getSerialNumber() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerialNumber", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setIssuer(const ::javax::security::auth::x500::X500Principal& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIssuer", "(Ljavax/security/auth/x500/X500Principal;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::security::auth::x500::X500Principal java::security::cert::X509CertSelector::getIssuer() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuer", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setIssuer(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIssuer", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::X509CertSelector::getIssuerAsString() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerAsString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setIssuer(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIssuer", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::cert::X509CertSelector::getIssuerAsBytes() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIssuerAsBytes", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CertSelector::setSubject(const ::javax::security::auth::x500::X500Principal& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubject", "(Ljavax/security/auth/x500/X500Principal;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::security::auth::x500::X500Principal java::security::cert::X509CertSelector::getSubject() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubject", "()Ljavax/security/auth/x500/X500Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::x500::X500Principal _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setSubject(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubject", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::X509CertSelector::getSubjectAsString() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectAsString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setSubject(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubject", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::cert::X509CertSelector::getSubjectAsBytes() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectAsBytes", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CertSelector::setSubjectKeyIdentifier(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubjectKeyIdentifier", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::cert::X509CertSelector::getSubjectKeyIdentifier() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectKeyIdentifier", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CertSelector::setAuthorityKeyIdentifier(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuthorityKeyIdentifier", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::cert::X509CertSelector::getAuthorityKeyIdentifier() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthorityKeyIdentifier", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CertSelector::setCertificateValid(const ::java::util::Date& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertificateValid", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Date java::security::cert::X509CertSelector::getCertificateValid() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateValid", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setPrivateKeyValid(const ::java::util::Date& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrivateKeyValid", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Date java::security::cert::X509CertSelector::getPrivateKeyValid() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateKeyValid", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setSubjectPublicKeyAlgID(const ::java::lang::String& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubjectPublicKeyAlgID", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::cert::X509CertSelector::getSubjectPublicKeyAlgID() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectPublicKeyAlgID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setSubjectPublicKey(const ::java::security::PublicKey& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubjectPublicKey", "(Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CertSelector::setSubjectPublicKey(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubjectPublicKey", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::PublicKey java::security::cert::X509CertSelector::getSubjectPublicKey() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setKeyUsage(const std::vector< bool>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyUsage", "([Z)V");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< bool> java::security::cert::X509CertSelector::getKeyUsage() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyUsage", "()[Z");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CertSelector::setExtendedKeyUsage(const ::java::util::Set& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtendedKeyUsage", "(Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set java::security::cert::X509CertSelector::getExtendedKeyUsage() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtendedKeyUsage", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setMatchAllSubjectAltNames(bool arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMatchAllSubjectAltNames", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::cert::X509CertSelector::getMatchAllSubjectAltNames() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMatchAllSubjectAltNames", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::cert::X509CertSelector::setSubjectAlternativeNames(const ::java::util::Collection& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubjectAlternativeNames", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CertSelector::addSubjectAlternativeName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubjectAlternativeName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::cert::X509CertSelector::addSubjectAlternativeName(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addSubjectAlternativeName", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::Collection java::security::cert::X509CertSelector::getSubjectAlternativeNames() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubjectAlternativeNames", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::setNameConstraints(const std::vector< int8_t>& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNameConstraints", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::cert::X509CertSelector::getNameConstraints() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNameConstraints", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::cert::X509CertSelector::setBasicConstraints(int32_t arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBasicConstraints", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::security::cert::X509CertSelector::getBasicConstraints() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBasicConstraints", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::security::cert::X509CertSelector::setPolicy(const ::java::util::Set& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPolicy", "(Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set java::security::cert::X509CertSelector::getPolicy() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPolicy", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void java::security::cert::X509CertSelector::addPathToName(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPathToName", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::cert::X509CertSelector::setPathToNames(const ::java::util::Collection& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPathToNames", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::cert::X509CertSelector::addPathToName(int32_t arg0, const std::vector< int8_t>& arg1) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPathToName", "(I[B)V");
    int32_t _arg0 = arg0;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::Collection java::security::cert::X509CertSelector::getPathToNames() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPathToNames", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::String java::security::cert::X509CertSelector::toString() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::cert::X509CertSelector::match(const ::java::security::cert::Certificate& arg0) const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "(Ljava/security/cert/Certificate;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::security::cert::X509CertSelector::clone() const {
    if (!::java::security::cert::X509CertSelector::_class) ::java::security::cert::X509CertSelector::_class = java::fetch_class("java/security/cert/X509CertSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}


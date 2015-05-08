#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.URL.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.security.AccessControlContext.hpp"
#include "java.security.AccessControlException.hpp"
#include "java.security.AccessController.hpp"
#include "java.security.AlgorithmParameterGenerator.hpp"
#include "java.security.AlgorithmParameterGeneratorSpi.hpp"
#include "java.security.AlgorithmParameters.hpp"
#include "java.security.AlgorithmParametersSpi.hpp"
#include "java.security.AllPermission.hpp"
#include "java.security.AuthProvider.hpp"
#include "java.security.BasicPermission.hpp"
#include "java.security.Certificate.hpp"
#include "java.security.CodeSigner.hpp"
#include "java.security.CodeSource.hpp"
#include "java.security.DigestException.hpp"
#include "java.security.DigestInputStream.hpp"
#include "java.security.DigestOutputStream.hpp"
#include "java.security.DomainCombiner.hpp"
#include "java.security.GeneralSecurityException.hpp"
#include "java.security.Guard.hpp"
#include "java.security.GuardedObject.hpp"
#include "java.security.Identity.hpp"
#include "java.security.IdentityScope.hpp"
#include "java.security.InvalidAlgorithmParameterException.hpp"
#include "java.security.InvalidKeyException.hpp"
#include "java.security.InvalidParameterException.hpp"
#include "java.security.Key.hpp"
#include "java.security.KeyException.hpp"
#include "java.security.KeyFactory.hpp"
#include "java.security.KeyFactorySpi.hpp"
#include "java.security.KeyManagementException.hpp"
#include "java.security.KeyPair.hpp"
#include "java.security.KeyPairGenerator.hpp"
#include "java.security.KeyPairGeneratorSpi.hpp"
#include "java.security.KeyRep.hpp"
#include "java.security.KeyStore.hpp"
#include "java.security.KeyStoreException.hpp"
#include "java.security.KeyStoreSpi.hpp"
#include "java.security.MessageDigest.hpp"
#include "java.security.MessageDigestSpi.hpp"
#include "java.security.NoSuchAlgorithmException.hpp"
#include "java.security.NoSuchProviderException.hpp"
#include "java.security.Permission.hpp"
#include "java.security.PermissionCollection.hpp"
#include "java.security.Permissions.hpp"
#include "java.security.Policy.hpp"
#include "java.security.PolicySpi.hpp"
#include "java.security.Principal.hpp"
#include "java.security.PrivateKey.hpp"
#include "java.security.PrivilegedAction.hpp"
#include "java.security.PrivilegedActionException.hpp"
#include "java.security.PrivilegedExceptionAction.hpp"
#include "java.security.ProtectionDomain.hpp"
#include "java.security.Provider.hpp"
#include "java.security.ProviderException.hpp"
#include "java.security.PublicKey.hpp"
#include "java.security.SecureClassLoader.hpp"
#include "java.security.SecureRandom.hpp"
#include "java.security.SecureRandomSpi.hpp"
#include "java.security.Security.hpp"
#include "java.security.SecurityPermission.hpp"
#include "java.security.Signature.hpp"
#include "java.security.SignatureException.hpp"
#include "java.security.SignatureSpi.hpp"
#include "java.security.SignedObject.hpp"
#include "java.security.Signer.hpp"
#include "java.security.Timestamp.hpp"
#include "java.security.UnrecoverableEntryException.hpp"
#include "java.security.UnrecoverableKeyException.hpp"
#include "java.security.UnresolvedPermission.hpp"
#include "java.security.cert.CertPath.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"
#include "java.security.spec.KeySpec.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Date.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.Set.hpp"
#include "javax.crypto.SecretKey.hpp"
#include "javax.security.auth.Subject.hpp"
#include "javax.security.auth.callback.CallbackHandler.hpp"

jclass java::security::DigestException::_class = nullptr;
jclass java::security::PrivilegedExceptionAction::_class = nullptr;
jclass java::security::PrivilegedActionException::_class = nullptr;
jclass java::security::DigestInputStream::_class = nullptr;
jclass java::security::KeyStoreSpi::_class = nullptr;
jclass java::security::Timestamp::_class = nullptr;
jclass java::security::Permission::_class = nullptr;
jclass java::security::SignedObject::_class = nullptr;
jclass java::security::Identity::_class = nullptr;
jclass java::security::GuardedObject::_class = nullptr;
jclass java::security::CodeSigner::_class = nullptr;
jclass java::security::KeyStore_PrivateKeyEntry::_class = nullptr;
jclass java::security::MessageDigestSpi::_class = nullptr;
jclass java::security::KeyStore_ProtectionParameter::_class = nullptr;
jclass java::security::KeyStore_CallbackHandlerProtection::_class = nullptr;
jclass java::security::PrivilegedAction::_class = nullptr;
jclass java::security::SignatureException::_class = nullptr;
jclass java::security::NoSuchProviderException::_class = nullptr;
jclass java::security::SecureRandomSpi::_class = nullptr;
jclass java::security::UnrecoverableEntryException::_class = nullptr;
jclass java::security::SecurityPermission::_class = nullptr;
jclass java::security::AccessControlException::_class = nullptr;
jclass java::security::GeneralSecurityException::_class = nullptr;
jclass java::security::UnrecoverableKeyException::_class = nullptr;
jclass java::security::SignatureSpi::_class = nullptr;
jclass java::security::ProtectionDomain::_class = nullptr;
jclass java::security::KeyStoreException::_class = nullptr;
jclass java::security::AllPermission::_class = nullptr;
jclass java::security::Policy_Parameters::_class = nullptr;
jclass java::security::Signer::_class = nullptr;
jclass java::security::NoSuchAlgorithmException::_class = nullptr;
jclass java::security::DomainCombiner::_class = nullptr;
jclass java::security::KeyStore_Builder::_class = nullptr;
jclass java::security::PrivateKey::_class = nullptr;
jclass java::security::KeyPairGeneratorSpi::_class = nullptr;
jclass java::security::CodeSource::_class = nullptr;
jclass java::security::BasicPermission::_class = nullptr;
jclass java::security::KeyRep_Type::_class = nullptr;
jclass java::security::Policy::_class = nullptr;
jclass java::security::Permissions::_class = nullptr;
jclass java::security::KeyFactorySpi::_class = nullptr;
jclass java::security::SecureClassLoader::_class = nullptr;
jclass java::security::AlgorithmParameters::_class = nullptr;
jclass java::security::AuthProvider::_class = nullptr;
jclass java::security::UnresolvedPermission::_class = nullptr;
jclass java::security::Provider::_class = nullptr;
jclass java::security::IdentityScope::_class = nullptr;
jclass java::security::InvalidParameterException::_class = nullptr;
jclass java::security::ProviderException::_class = nullptr;
jclass java::security::Key::_class = nullptr;
jclass java::security::KeyStore_PasswordProtection::_class = nullptr;
jclass java::security::PermissionCollection::_class = nullptr;
jclass java::security::SecureRandom::_class = nullptr;
jclass java::security::Guard::_class = nullptr;
jclass java::security::Principal::_class = nullptr;
jclass java::security::KeyFactory::_class = nullptr;
jclass java::security::KeyManagementException::_class = nullptr;
jclass java::security::AccessController::_class = nullptr;
jclass java::security::Signature::_class = nullptr;
jclass java::security::InvalidAlgorithmParameterException::_class = nullptr;
jclass java::security::Provider_Service::_class = nullptr;
jclass java::security::AlgorithmParameterGeneratorSpi::_class = nullptr;
jclass java::security::AccessControlContext::_class = nullptr;
jclass java::security::KeyRep::_class = nullptr;
jclass java::security::Security::_class = nullptr;
jclass java::security::KeyPair::_class = nullptr;
jclass java::security::InvalidKeyException::_class = nullptr;
jclass java::security::Certificate::_class = nullptr;
jclass java::security::KeyPairGenerator::_class = nullptr;
jclass java::security::KeyStore::_class = nullptr;
jclass java::security::KeyStore_SecretKeyEntry::_class = nullptr;
jclass java::security::PublicKey::_class = nullptr;
jclass java::security::KeyStore_Entry::_class = nullptr;
jclass java::security::DigestOutputStream::_class = nullptr;
jclass java::security::AlgorithmParameterGenerator::_class = nullptr;
jclass java::security::MessageDigest::_class = nullptr;
jclass java::security::PolicySpi::_class = nullptr;
jclass java::security::AlgorithmParametersSpi::_class = nullptr;
jclass java::security::KeyStore_LoadStoreParameter::_class = nullptr;
jclass java::security::KeyStore_TrustedCertificateEntry::_class = nullptr;
jclass java::security::KeyException::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::DigestException::DigestException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::DigestException::_class) ::java::security::DigestException::_class = java::fetch_class("java/security/DigestException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::DigestException::DigestException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::DigestException::_class) ::java::security::DigestException::_class = java::fetch_class("java/security/DigestException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::DigestException::DigestException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::DigestException::_class) ::java::security::DigestException::_class = java::fetch_class("java/security/DigestException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::DigestException::DigestException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::DigestException::_class) ::java::security::DigestException::_class = java::fetch_class("java/security/DigestException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::PrivilegedExceptionAction::run() const {
    if (!::java::security::PrivilegedExceptionAction::_class) ::java::security::PrivilegedExceptionAction::_class = java::fetch_class("java/security/PrivilegedExceptionAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::PrivilegedActionException::PrivilegedActionException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::PrivilegedActionException::_class) ::java::security::PrivilegedActionException::_class = java::fetch_class("java/security/PrivilegedActionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Exception java::security::PrivilegedActionException::getException() const {
    if (!::java::security::PrivilegedActionException::_class) ::java::security::PrivilegedActionException::_class = java::fetch_class("java/security/PrivilegedActionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Ljava/lang/Exception;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Exception _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::DigestInputStream::DigestInputStream(const ::java::io::InputStream& arg0, const ::java::security::MessageDigest& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/security/MessageDigest;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::MessageDigest java::security::DigestInputStream::getMessageDigest() const {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageDigest", "()Ljava/security/MessageDigest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::MessageDigest _ret(ret);
    return _ret;
}

void java::security::DigestInputStream::setMessageDigest(const ::java::security::MessageDigest& arg0) const {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessageDigest", "(Ljava/security/MessageDigest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::security::DigestInputStream::read() const {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::security::DigestInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::DigestInputStream::on(bool arg0) const {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "on", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::DigestInputStream::toString() const {
    if (!::java::security::DigestInputStream::_class) ::java::security::DigestInputStream::_class = java::fetch_class("java/security/DigestInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStoreSpi::KeyStoreSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::Key java::security::KeyStoreSpi::engineGetKey(const ::java::lang::String& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetKey", "(Ljava/lang/String;[C)Ljava/security/Key;");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::Key _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> java::security::KeyStoreSpi::engineGetCertificateChain(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::Certificate> _ret(rets, ::java::security::cert::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::cert::Certificate java::security::KeyStoreSpi::engineGetCertificate(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCertificate", "(Ljava/lang/String;)Ljava/security/cert/Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::Certificate _ret(ret);
    return _ret;
}

::java::util::Date java::security::KeyStoreSpi::engineGetCreationDate(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCreationDate", "(Ljava/lang/String;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Date _ret(ret);
    return _ret;
}

void java::security::KeyStoreSpi::engineSetKeyEntry(const ::java::lang::String& arg0, const ::java::security::Key& arg1, const std::vector< uint16_t>& arg2, const std::vector< ::java::security::cert::Certificate>& arg3) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineSetKeyEntry", "(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    unsigned arg3s = arg3.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::security::cert::Certificate& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::security::KeyStoreSpi::engineSetKeyEntry(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1, const std::vector< ::java::security::cert::Certificate>& arg2) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineSetKeyEntry", "(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    unsigned arg2s = arg2.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::security::cert::Certificate& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::KeyStoreSpi::engineSetCertificateEntry(const ::java::lang::String& arg0, const ::java::security::cert::Certificate& arg1) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineSetCertificateEntry", "(Ljava/lang/String;Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyStoreSpi::engineDeleteEntry(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineDeleteEntry", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::KeyStoreSpi::engineAliases() const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineAliases", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::security::KeyStoreSpi::engineContainsAlias(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineContainsAlias", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::KeyStoreSpi::engineSize() const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::security::KeyStoreSpi::engineIsKeyEntry(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineIsKeyEntry", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::KeyStoreSpi::engineIsCertificateEntry(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineIsCertificateEntry", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::KeyStoreSpi::engineGetCertificateAlias(const ::java::security::cert::Certificate& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetCertificateAlias", "(Ljava/security/cert/Certificate;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::KeyStoreSpi::engineStore(const ::java::io::OutputStream& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineStore", "(Ljava/io/OutputStream;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyStoreSpi::engineStore(const ::java::security::KeyStore_LoadStoreParameter& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineStore", "(Ljava/security/KeyStore$LoadStoreParameter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::KeyStoreSpi::engineLoad(const ::java::io::InputStream& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineLoad", "(Ljava/io/InputStream;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyStoreSpi::engineLoad(const ::java::security::KeyStore_LoadStoreParameter& arg0) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineLoad", "(Ljava/security/KeyStore$LoadStoreParameter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::KeyStore_Entry java::security::KeyStoreSpi::engineGetEntry(const ::java::lang::String& arg0, const ::java::security::KeyStore_ProtectionParameter& arg1) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineGetEntry", "(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::KeyStore_Entry _ret(ret);
    return _ret;
}

void java::security::KeyStoreSpi::engineSetEntry(const ::java::lang::String& arg0, const ::java::security::KeyStore_Entry& arg1, const ::java::security::KeyStore_ProtectionParameter& arg2) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineSetEntry", "(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::security::KeyStoreSpi::engineEntryInstanceOf(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) const {
    if (!::java::security::KeyStoreSpi::_class) ::java::security::KeyStoreSpi::_class = java::fetch_class("java/security/KeyStoreSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "engineEntryInstanceOf", "(Ljava/lang/String;Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Timestamp::Timestamp(const ::java::util::Date& arg0, const ::java::security::cert::CertPath& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::Timestamp::_class) ::java::security::Timestamp::_class = java::fetch_class("java/security/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Date;Ljava/security/cert/CertPath;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::security::Timestamp::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::Timestamp::_class) ::java::security::Timestamp::_class = java::fetch_class("java/security/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::security::cert::CertPath java::security::Timestamp::getSignerCertPath() const {
    if (!::java::security::Timestamp::_class) ::java::security::Timestamp::_class = java::fetch_class("java/security/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSignerCertPath", "()Ljava/security/cert/CertPath;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::util::Date java::security::Timestamp::getTimestamp() const {
    if (!::java::security::Timestamp::_class) ::java::security::Timestamp::_class = java::fetch_class("java/security/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

int32_t java::security::Timestamp::hashCode() const {
    if (!::java::security::Timestamp::_class) ::java::security::Timestamp::_class = java::fetch_class("java/security/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::Timestamp::toString() const {
    if (!::java::security::Timestamp::_class) ::java::security::Timestamp::_class = java::fetch_class("java/security/Timestamp");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Permission::Permission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0) {
    if (!::java::security::Permission::_class) ::java::security::Permission::_class = java::fetch_class("java/security/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::Permission::getName() const {
    if (!::java::security::Permission::_class) ::java::security::Permission::_class = java::fetch_class("java/security/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::Permission::checkGuard(const ::java::lang::Object& arg0) const {
    if (!::java::security::Permission::_class) ::java::security::Permission::_class = java::fetch_class("java/security/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkGuard", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::PermissionCollection java::security::Permission::newPermissionCollection() const {
    if (!::java::security::Permission::_class) ::java::security::Permission::_class = java::fetch_class("java/security/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "newPermissionCollection", "()Ljava/security/PermissionCollection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PermissionCollection _ret(ret);
    return _ret;
}

::java::lang::String java::security::Permission::getActions() const {
    if (!::java::security::Permission::_class) ::java::security::Permission::_class = java::fetch_class("java/security/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::Permission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::Permission::_class) ::java::security::Permission::_class = java::fetch_class("java/security/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SignedObject::SignedObject(const ::java::io::Serializable& arg0, const ::java::security::PrivateKey& arg1, const ::java::security::Signature& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::SignedObject::_class) ::java::security::SignedObject::_class = java::fetch_class("java/security/SignedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::SignedObject::getObject() const {
    if (!::java::security::SignedObject::_class) ::java::security::SignedObject::_class = java::fetch_class("java/security/SignedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::SignedObject::getSignature() const {
    if (!::java::security::SignedObject::_class) ::java::security::SignedObject::_class = java::fetch_class("java/security/SignedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSignature", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::SignedObject::getAlgorithm() const {
    if (!::java::security::SignedObject::_class) ::java::security::SignedObject::_class = java::fetch_class("java/security/SignedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::SignedObject::verify(const ::java::security::PublicKey& arg0, const ::java::security::Signature& arg1) const {
    if (!::java::security::SignedObject::_class) ::java::security::SignedObject::_class = java::fetch_class("java/security/SignedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/security/PublicKey;Ljava/security/Signature;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Identity::Identity(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Identity::Identity(const ::java::lang::String& arg0, const ::java::security::IdentityScope& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::security::Identity::addCertificate(const ::java::security::Certificate& arg0) const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCertificate", "(Ljava/security/Certificate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Identity::removeCertificate(const ::java::security::Certificate& arg0) const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCertificate", "(Ljava/security/Certificate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::security::Certificate> java::security::Identity::certificates() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "certificates", "()[Ljava/security/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::Certificate> _ret(rets, ::java::security::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::security::Identity::toString(bool arg0) const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(Z)Ljava/lang/String;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::IdentityScope java::security::Identity::getScope() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScope", "()Ljava/security/IdentityScope;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::IdentityScope _ret(ret);
    return _ret;
}

void java::security::Identity::setPublicKey(const ::java::security::PublicKey& arg0) const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublicKey", "(Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::PublicKey java::security::Identity::getPublicKey() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

void java::security::Identity::setInfo(const ::java::lang::String& arg0) const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInfo", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Identity::getInfo() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::Identity::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Identity::getName() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::security::Identity::hashCode() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::Identity::toString() const {
    if (!::java::security::Identity::_class) ::java::security::Identity::_class = java::fetch_class("java/security/Identity");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::GuardedObject::GuardedObject(const ::java::lang::Object& arg0, const ::java::security::Guard& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::GuardedObject::_class) ::java::security::GuardedObject::_class = java::fetch_class("java/security/GuardedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/security/Guard;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::GuardedObject::getObject() const {
    if (!::java::security::GuardedObject::_class) ::java::security::GuardedObject::_class = java::fetch_class("java/security/GuardedObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::CodeSigner::CodeSigner(const ::java::security::cert::CertPath& arg0, const ::java::security::Timestamp& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::security::CodeSigner::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::security::cert::CertPath java::security::CodeSigner::getSignerCertPath() const {
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSignerCertPath", "()Ljava/security/cert/CertPath;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertPath _ret(ret);
    return _ret;
}

::java::security::Timestamp java::security::CodeSigner::getTimestamp() const {
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimestamp", "()Ljava/security/Timestamp;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Timestamp _ret(ret);
    return _ret;
}

int32_t java::security::CodeSigner::hashCode() const {
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::CodeSigner::toString() const {
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStore_PrivateKeyEntry::KeyStore_PrivateKeyEntry(const ::java::security::PrivateKey& arg0, const std::vector< ::java::security::cert::Certificate>& arg1) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {
    if (!::java::security::KeyStore_PrivateKeyEntry::_class) ::java::security::KeyStore_PrivateKeyEntry::_class = java::fetch_class("java/security/KeyStore$PrivateKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/PrivateKey;[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::cert::Certificate& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::PrivateKey java::security::KeyStore_PrivateKeyEntry::getPrivateKey() const {
    if (!::java::security::KeyStore_PrivateKeyEntry::_class) ::java::security::KeyStore_PrivateKeyEntry::_class = java::fetch_class("java/security/KeyStore$PrivateKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateKey", "()Ljava/security/PrivateKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PrivateKey _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> java::security::KeyStore_PrivateKeyEntry::getCertificateChain() const {
    if (!::java::security::KeyStore_PrivateKeyEntry::_class) ::java::security::KeyStore_PrivateKeyEntry::_class = java::fetch_class("java/security/KeyStore$PrivateKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateChain", "()[Ljava/security/cert/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::Certificate> _ret(rets, ::java::security::cert::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::cert::Certificate java::security::KeyStore_PrivateKeyEntry::getCertificate() const {
    if (!::java::security::KeyStore_PrivateKeyEntry::_class) ::java::security::KeyStore_PrivateKeyEntry::_class = java::fetch_class("java/security/KeyStore$PrivateKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificate", "()Ljava/security/cert/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::Certificate _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyStore_PrivateKeyEntry::toString() const {
    if (!::java::security::KeyStore_PrivateKeyEntry::_class) ::java::security::KeyStore_PrivateKeyEntry::_class = java::fetch_class("java/security/KeyStore$PrivateKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::MessageDigestSpi::MessageDigestSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::MessageDigestSpi::_class) ::java::security::MessageDigestSpi::_class = java::fetch_class("java/security/MessageDigestSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::MessageDigestSpi::clone() const {
    if (!::java::security::MessageDigestSpi::_class) ::java::security::MessageDigestSpi::_class = java::fetch_class("java/security/MessageDigestSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStore_CallbackHandlerProtection::KeyStore_CallbackHandlerProtection(const ::javax::security::auth::callback::CallbackHandler& arg0) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_ProtectionParameter((jobject)0) {
    if (!::java::security::KeyStore_CallbackHandlerProtection::_class) ::java::security::KeyStore_CallbackHandlerProtection::_class = java::fetch_class("java/security/KeyStore$CallbackHandlerProtection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/security/auth/callback/CallbackHandler;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::javax::security::auth::callback::CallbackHandler java::security::KeyStore_CallbackHandlerProtection::getCallbackHandler() const {
    if (!::java::security::KeyStore_CallbackHandlerProtection::_class) ::java::security::KeyStore_CallbackHandlerProtection::_class = java::fetch_class("java/security/KeyStore$CallbackHandlerProtection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallbackHandler", "()Ljavax/security/auth/callback/CallbackHandler;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::callback::CallbackHandler _ret(ret);
    return _ret;
}

::java::lang::Object java::security::PrivilegedAction::run() const {
    if (!::java::security::PrivilegedAction::_class) ::java::security::PrivilegedAction::_class = java::fetch_class("java/security/PrivilegedAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SignatureException::SignatureException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::SignatureException::_class) ::java::security::SignatureException::_class = java::fetch_class("java/security/SignatureException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SignatureException::SignatureException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::SignatureException::_class) ::java::security::SignatureException::_class = java::fetch_class("java/security/SignatureException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SignatureException::SignatureException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::SignatureException::_class) ::java::security::SignatureException::_class = java::fetch_class("java/security/SignatureException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SignatureException::SignatureException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::SignatureException::_class) ::java::security::SignatureException::_class = java::fetch_class("java/security/SignatureException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::NoSuchProviderException::NoSuchProviderException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::NoSuchProviderException::_class) ::java::security::NoSuchProviderException::_class = java::fetch_class("java/security/NoSuchProviderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::NoSuchProviderException::NoSuchProviderException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::NoSuchProviderException::_class) ::java::security::NoSuchProviderException::_class = java::fetch_class("java/security/NoSuchProviderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SecureRandomSpi::SecureRandomSpi() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::SecureRandomSpi::_class) ::java::security::SecureRandomSpi::_class = java::fetch_class("java/security/SecureRandomSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::UnrecoverableEntryException::UnrecoverableEntryException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::UnrecoverableEntryException::_class) ::java::security::UnrecoverableEntryException::_class = java::fetch_class("java/security/UnrecoverableEntryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::UnrecoverableEntryException::UnrecoverableEntryException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::UnrecoverableEntryException::_class) ::java::security::UnrecoverableEntryException::_class = java::fetch_class("java/security/UnrecoverableEntryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SecurityPermission::SecurityPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::SecurityPermission::_class) ::java::security::SecurityPermission::_class = java::fetch_class("java/security/SecurityPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SecurityPermission::SecurityPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::SecurityPermission::_class) ::java::security::SecurityPermission::_class = java::fetch_class("java/security/SecurityPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::SecurityPermission::getActions() const {
    if (!::java::security::SecurityPermission::_class) ::java::security::SecurityPermission::_class = java::fetch_class("java/security/SecurityPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::SecurityPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::SecurityPermission::_class) ::java::security::SecurityPermission::_class = java::fetch_class("java/security/SecurityPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AccessControlException::AccessControlException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::SecurityException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::AccessControlException::_class) ::java::security::AccessControlException::_class = java::fetch_class("java/security/AccessControlException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AccessControlException::AccessControlException(const ::java::lang::String& arg0, const ::java::security::Permission& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::SecurityException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::AccessControlException::_class) ::java::security::AccessControlException::_class = java::fetch_class("java/security/AccessControlException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/security/Permission;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::Permission java::security::AccessControlException::getPermission() const {
    if (!::java::security::AccessControlException::_class) ::java::security::AccessControlException::_class = java::fetch_class("java/security/AccessControlException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermission", "()Ljava/security/Permission;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Permission _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::GeneralSecurityException::GeneralSecurityException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::GeneralSecurityException::_class) ::java::security::GeneralSecurityException::_class = java::fetch_class("java/security/GeneralSecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::GeneralSecurityException::GeneralSecurityException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::GeneralSecurityException::_class) ::java::security::GeneralSecurityException::_class = java::fetch_class("java/security/GeneralSecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::GeneralSecurityException::GeneralSecurityException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::GeneralSecurityException::_class) ::java::security::GeneralSecurityException::_class = java::fetch_class("java/security/GeneralSecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::GeneralSecurityException::GeneralSecurityException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::GeneralSecurityException::_class) ::java::security::GeneralSecurityException::_class = java::fetch_class("java/security/GeneralSecurityException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::UnrecoverableKeyException::UnrecoverableKeyException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::UnrecoverableEntryException((jobject)0) {
    if (!::java::security::UnrecoverableKeyException::_class) ::java::security::UnrecoverableKeyException::_class = java::fetch_class("java/security/UnrecoverableKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::UnrecoverableKeyException::UnrecoverableKeyException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::UnrecoverableEntryException((jobject)0) {
    if (!::java::security::UnrecoverableKeyException::_class) ::java::security::UnrecoverableKeyException::_class = java::fetch_class("java/security/UnrecoverableKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SignatureSpi::SignatureSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::SignatureSpi::_class) ::java::security::SignatureSpi::_class = java::fetch_class("java/security/SignatureSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::SignatureSpi::clone() const {
    if (!::java::security::SignatureSpi::_class) ::java::security::SignatureSpi::_class = java::fetch_class("java/security/SignatureSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::ProtectionDomain::ProtectionDomain(const ::java::security::CodeSource& arg0, const ::java::security::PermissionCollection& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::ProtectionDomain::ProtectionDomain(const ::java::security::CodeSource& arg0, const ::java::security::PermissionCollection& arg1, const ::java::lang::ClassLoader& arg2, const std::vector< ::java::security::Principal>& arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::security::Principal& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::ClassLoader java::security::ProtectionDomain::getClassLoader() const {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassLoader", "()Ljava/lang/ClassLoader;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::ClassLoader _ret(ret);
    return _ret;
}

::java::security::CodeSource java::security::ProtectionDomain::getCodeSource() const {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCodeSource", "()Ljava/security/CodeSource;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::CodeSource _ret(ret);
    return _ret;
}

::java::security::PermissionCollection java::security::ProtectionDomain::getPermissions() const {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissions", "()Ljava/security/PermissionCollection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PermissionCollection _ret(ret);
    return _ret;
}

std::vector< ::java::security::Principal> java::security::ProtectionDomain::getPrincipals() const {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrincipals", "()[Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::Principal> _ret(rets, ::java::security::Principal((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::Principal retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::security::ProtectionDomain::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStoreException::KeyStoreException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyStoreException::_class) ::java::security::KeyStoreException::_class = java::fetch_class("java/security/KeyStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStoreException::KeyStoreException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyStoreException::_class) ::java::security::KeyStoreException::_class = java::fetch_class("java/security/KeyStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStoreException::KeyStoreException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyStoreException::_class) ::java::security::KeyStoreException::_class = java::fetch_class("java/security/KeyStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStoreException::KeyStoreException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyStoreException::_class) ::java::security::KeyStoreException::_class = java::fetch_class("java/security/KeyStoreException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AllPermission::AllPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::AllPermission::_class) ::java::security::AllPermission::_class = java::fetch_class("java/security/AllPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AllPermission::AllPermission() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::AllPermission::_class) ::java::security::AllPermission::_class = java::fetch_class("java/security/AllPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::AllPermission::getActions() const {
    if (!::java::security::AllPermission::_class) ::java::security::AllPermission::_class = java::fetch_class("java/security/AllPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::AllPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::AllPermission::_class) ::java::security::AllPermission::_class = java::fetch_class("java/security/AllPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Signer::Signer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::java::security::Signer::_class) ::java::security::Signer::_class = java::fetch_class("java/security/Signer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Signer::Signer(const ::java::lang::String& arg0, const ::java::security::IdentityScope& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::java::security::Signer::_class) ::java::security::Signer::_class = java::fetch_class("java/security/Signer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::PrivateKey java::security::Signer::getPrivateKey() const {
    if (!::java::security::Signer::_class) ::java::security::Signer::_class = java::fetch_class("java/security/Signer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateKey", "()Ljava/security/PrivateKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PrivateKey _ret(ret);
    return _ret;
}

void java::security::Signer::setKeyPair(const ::java::security::KeyPair& arg0) const {
    if (!::java::security::Signer::_class) ::java::security::Signer::_class = java::fetch_class("java/security/Signer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyPair", "(Ljava/security/KeyPair;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Signer::toString() const {
    if (!::java::security::Signer::_class) ::java::security::Signer::_class = java::fetch_class("java/security/Signer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::NoSuchAlgorithmException::NoSuchAlgorithmException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::NoSuchAlgorithmException::_class) ::java::security::NoSuchAlgorithmException::_class = java::fetch_class("java/security/NoSuchAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::NoSuchAlgorithmException::NoSuchAlgorithmException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::NoSuchAlgorithmException::_class) ::java::security::NoSuchAlgorithmException::_class = java::fetch_class("java/security/NoSuchAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::NoSuchAlgorithmException::NoSuchAlgorithmException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::NoSuchAlgorithmException::_class) ::java::security::NoSuchAlgorithmException::_class = java::fetch_class("java/security/NoSuchAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::NoSuchAlgorithmException::NoSuchAlgorithmException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::NoSuchAlgorithmException::_class) ::java::security::NoSuchAlgorithmException::_class = java::fetch_class("java/security/NoSuchAlgorithmException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::java::security::ProtectionDomain> java::security::DomainCombiner::combine(const std::vector< ::java::security::ProtectionDomain>& arg0, const std::vector< ::java::security::ProtectionDomain>& arg1) const {
    if (!::java::security::DomainCombiner::_class) ::java::security::DomainCombiner::_class = java::fetch_class("java/security/DomainCombiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;");
    unsigned arg0s = arg0.size();
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::security::ProtectionDomain::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::security::ProtectionDomain& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::ProtectionDomain::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::ProtectionDomain& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::ProtectionDomain> _ret(rets, ::java::security::ProtectionDomain((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::ProtectionDomain retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::KeyStore java::security::KeyStore_Builder::getKeyStore() const {
    if (!::java::security::KeyStore_Builder::_class) ::java::security::KeyStore_Builder::_class = java::fetch_class("java/security/KeyStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyStore", "()Ljava/security/KeyStore;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::KeyStore _ret(ret);
    return _ret;
}

::java::security::KeyStore_ProtectionParameter java::security::KeyStore_Builder::getProtectionParameter(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore_Builder::_class) ::java::security::KeyStore_Builder::_class = java::fetch_class("java/security/KeyStore$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtectionParameter", "(Ljava/lang/String;)Ljava/security/KeyStore$ProtectionParameter;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::KeyStore_ProtectionParameter _ret(ret);
    return _ret;
}

::java::security::KeyStore_Builder java::security::KeyStore_Builder::newInstance(const ::java::security::KeyStore& arg0, const ::java::security::KeyStore_ProtectionParameter& arg1){
    if (!::java::security::KeyStore_Builder::_class) ::java::security::KeyStore_Builder::_class = java::fetch_class("java/security/KeyStore$Builder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/security/KeyStore;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyStore_Builder _ret(ret);
    return _ret;
}

::java::security::KeyStore_Builder java::security::KeyStore_Builder::newInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1, const ::java::io::File& arg2, const ::java::security::KeyStore_ProtectionParameter& arg3){
    if (!::java::security::KeyStore_Builder::_class) ::java::security::KeyStore_Builder::_class = java::fetch_class("java/security/KeyStore$Builder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/security/Provider;Ljava/io/File;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::security::KeyStore_Builder _ret(ret);
    return _ret;
}

::java::security::KeyStore_Builder java::security::KeyStore_Builder::newInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1, const ::java::security::KeyStore_ProtectionParameter& arg2){
    if (!::java::security::KeyStore_Builder::_class) ::java::security::KeyStore_Builder::_class = java::fetch_class("java/security/KeyStore$Builder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "(Ljava/lang/String;Ljava/security/Provider;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::security::KeyStore_Builder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyPairGeneratorSpi::KeyPairGeneratorSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::KeyPairGeneratorSpi::_class) ::java::security::KeyPairGeneratorSpi::_class = java::fetch_class("java/security/KeyPairGeneratorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::KeyPair java::security::KeyPairGeneratorSpi::generateKeyPair() const {
    if (!::java::security::KeyPairGeneratorSpi::_class) ::java::security::KeyPairGeneratorSpi::_class = java::fetch_class("java/security/KeyPairGeneratorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateKeyPair", "()Ljava/security/KeyPair;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::KeyPair _ret(ret);
    return _ret;
}

void java::security::KeyPairGeneratorSpi::initialize(int32_t arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::KeyPairGeneratorSpi::_class) ::java::security::KeyPairGeneratorSpi::_class = java::fetch_class("java/security/KeyPairGeneratorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(ILjava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyPairGeneratorSpi::initialize(const ::java::security::spec::AlgorithmParameterSpec& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::KeyPairGeneratorSpi::_class) ::java::security::KeyPairGeneratorSpi::_class = java::fetch_class("java/security/KeyPairGeneratorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::CodeSource::CodeSource(const ::java::net::URL& arg0, const std::vector< ::java::security::cert::Certificate>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::CodeSource::_class) ::java::security::CodeSource::_class = java::fetch_class("java/security/CodeSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URL;[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::cert::Certificate& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::CodeSource::CodeSource(const ::java::net::URL& arg0, const std::vector< ::java::security::CodeSigner>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::CodeSource::_class) ::java::security::CodeSource::_class = java::fetch_class("java/security/CodeSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URL;[Ljava/security/CodeSigner;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::CodeSigner::_class) ::java::security::CodeSigner::_class = java::fetch_class("java/security/CodeSigner");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::CodeSigner::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::CodeSigner& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::java::security::cert::Certificate> java::security::CodeSource::getCertificates() const {
    if (!::java::security::CodeSource::_class) ::java::security::CodeSource::_class = java::fetch_class("java/security/CodeSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificates", "()[Ljava/security/cert/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::Certificate> _ret(rets, ::java::security::cert::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::security::CodeSigner> java::security::CodeSource::getCodeSigners() const {
    if (!::java::security::CodeSource::_class) ::java::security::CodeSource::_class = java::fetch_class("java/security/CodeSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCodeSigners", "()[Ljava/security/CodeSigner;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::CodeSigner> _ret(rets, ::java::security::CodeSigner((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::CodeSigner retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::net::URL java::security::CodeSource::getLocation() const {
    if (!::java::security::CodeSource::_class) ::java::security::CodeSource::_class = java::fetch_class("java/security/CodeSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocation", "()Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URL _ret(ret);
    return _ret;
}

bool java::security::CodeSource::implies(const ::java::security::CodeSource& arg0) const {
    if (!::java::security::CodeSource::_class) ::java::security::CodeSource::_class = java::fetch_class("java/security/CodeSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/CodeSource;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::BasicPermission::BasicPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::BasicPermission::_class) ::java::security::BasicPermission::_class = java::fetch_class("java/security/BasicPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::BasicPermission::BasicPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::BasicPermission::_class) ::java::security::BasicPermission::_class = java::fetch_class("java/security/BasicPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::BasicPermission::getActions() const {
    if (!::java::security::BasicPermission::_class) ::java::security::BasicPermission::_class = java::fetch_class("java/security/BasicPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::BasicPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::BasicPermission::_class) ::java::security::BasicPermission::_class = java::fetch_class("java/security/BasicPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::security::KeyRep_Type> java::security::KeyRep_Type::values(){
    if (!::java::security::KeyRep_Type::_class) ::java::security::KeyRep_Type::_class = java::fetch_class("java/security/KeyRep$Type");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/security/KeyRep$Type;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::KeyRep_Type> _ret(rets, ::java::security::KeyRep_Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::KeyRep_Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::KeyRep_Type java::security::KeyRep_Type::valueOf(const ::java::lang::String& arg0){
    if (!::java::security::KeyRep_Type::_class) ::java::security::KeyRep_Type::_class = java::fetch_class("java/security/KeyRep$Type");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/security/KeyRep$Type;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::KeyRep_Type _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Policy::Policy() : ::java::lang::Object((jobject)0) {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::Policy java::security::Policy::getInstance(const ::java::lang::String& arg0, const ::java::security::Policy_Parameters& arg1){
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Policy$Parameters;)Ljava/security/Policy;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::Policy _ret(ret);
    return _ret;
}

::java::security::Policy java::security::Policy::getInstance(const ::java::lang::String& arg0, const ::java::security::Policy_Parameters& arg1, const ::java::lang::String& arg2){
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/lang/String;)Ljava/security/Policy;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::security::Policy _ret(ret);
    return _ret;
}

::java::security::Policy java::security::Policy::getInstance(const ::java::lang::String& arg0, const ::java::security::Policy_Parameters& arg1, const ::java::security::Provider& arg2){
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Policy$Parameters;Ljava/security/Provider;)Ljava/security/Policy;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::security::Policy _ret(ret);
    return _ret;
}

::java::security::Policy_Parameters java::security::Policy::getParameters() const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Ljava/security/Policy$Parameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Policy_Parameters _ret(ret);
    return _ret;
}

::java::security::Provider java::security::Policy::getProvider() const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::Policy::getType() const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::PermissionCollection java::security::Policy::getPermissions(const ::java::security::CodeSource& arg0) const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::PermissionCollection _ret(ret);
    return _ret;
}

void java::security::Policy::refresh() const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "refresh", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::security::PermissionCollection java::security::Policy::getPermissions(const ::java::security::ProtectionDomain& arg0) const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissions", "(Ljava/security/ProtectionDomain;)Ljava/security/PermissionCollection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::PermissionCollection _ret(ret);
    return _ret;
}

bool java::security::Policy::implies(const ::java::security::ProtectionDomain& arg0, const ::java::security::Permission& arg1) const {
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::security::Policy java::security::Policy::getPolicy(){
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPolicy", "()Ljava/security/Policy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::security::Policy _ret(ret);
    return _ret;
}

void java::security::Policy::setPolicy(const ::java::security::Policy& arg0){
    if (!::java::security::Policy::_class) ::java::security::Policy::_class = java::fetch_class("java/security/Policy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setPolicy", "(Ljava/security/Policy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Permissions::Permissions() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::PermissionCollection((jobject)0) {
    if (!::java::security::Permissions::_class) ::java::security::Permissions::_class = java::fetch_class("java/security/Permissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::security::Permissions::add(const ::java::security::Permission& arg0) const {
    if (!::java::security::Permissions::_class) ::java::security::Permissions::_class = java::fetch_class("java/security/Permissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/security/Permission;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::Permissions::elements() const {
    if (!::java::security::Permissions::_class) ::java::security::Permissions::_class = java::fetch_class("java/security/Permissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "elements", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::security::Permissions::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::Permissions::_class) ::java::security::Permissions::_class = java::fetch_class("java/security/Permissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyFactorySpi::KeyFactorySpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::KeyFactorySpi::_class) ::java::security::KeyFactorySpi::_class = java::fetch_class("java/security/KeyFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::AlgorithmParameters java::security::AlgorithmParameters::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/AlgorithmParameters;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

::java::security::AlgorithmParameters java::security::AlgorithmParameters::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameters;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

::java::security::AlgorithmParameters java::security::AlgorithmParameters::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameters;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

::java::security::Provider java::security::AlgorithmParameters::getProvider() const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::AlgorithmParameters::getAlgorithm() const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::AlgorithmParameters::init(const ::java::security::spec::AlgorithmParameterSpec& arg0) const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::AlgorithmParameters::init(const std::vector< int8_t>& arg0) const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::AlgorithmParameters::init(const std::vector< int8_t>& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "([BLjava/lang/String;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::security::spec::AlgorithmParameterSpec java::security::AlgorithmParameters::getParameterSpec(const ::java::lang::Class& arg0) const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterSpec", "(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::spec::AlgorithmParameterSpec _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::AlgorithmParameters::getEncoded() const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::security::AlgorithmParameters::getEncoded(const ::java::lang::String& arg0) const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoded", "(Ljava/lang/String;)[B");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::AlgorithmParameters::toString() const {
    if (!::java::security::AlgorithmParameters::_class) ::java::security::AlgorithmParameters::_class = java::fetch_class("java/security/AlgorithmParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::AuthProvider::login(const ::javax::security::auth::Subject& arg0, const ::javax::security::auth::callback::CallbackHandler& arg1) const {
    if (!::java::security::AuthProvider::_class) ::java::security::AuthProvider::_class = java::fetch_class("java/security/AuthProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "login", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::AuthProvider::logout() const {
    if (!::java::security::AuthProvider::_class) ::java::security::AuthProvider::_class = java::fetch_class("java/security/AuthProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "logout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::security::AuthProvider::setCallbackHandler(const ::javax::security::auth::callback::CallbackHandler& arg0) const {
    if (!::java::security::AuthProvider::_class) ::java::security::AuthProvider::_class = java::fetch_class("java/security/AuthProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallbackHandler", "(Ljavax/security/auth/callback/CallbackHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::UnresolvedPermission::UnresolvedPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< ::java::security::cert::Certificate>& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::security::cert::Certificate& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::UnresolvedPermission::getUnresolvedName() const {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnresolvedName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::UnresolvedPermission::getUnresolvedActions() const {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnresolvedActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::UnresolvedPermission::getUnresolvedType() const {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnresolvedType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> java::security::UnresolvedPermission::getUnresolvedCerts() const {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnresolvedCerts", "()[Ljava/security/cert/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::Certificate> _ret(rets, ::java::security::cert::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::security::UnresolvedPermission::getActions() const {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::UnresolvedPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::UnresolvedPermission::_class) ::java::security::UnresolvedPermission::_class = java::fetch_class("java/security/UnresolvedPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Provider::getName() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

double java::security::Provider::getVersion() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

::java::lang::String java::security::Provider::getInfo() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::Provider::toString() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::Provider::clear() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::security::Provider::load(const ::java::io::InputStream& arg0) const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Provider::putAll(const ::java::util::Map& arg0) const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set java::security::Provider::entrySet() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set java::security::Provider::keySet() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection java::security::Provider::values() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::security::Provider::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::Provider::remove(const ::java::lang::Object& arg0) const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::security::Provider_Service java::security::Provider::getService(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getService", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::Provider_Service _ret(ret);
    return _ret;
}

::java::util::Set java::security::Provider::getServices() const {
    if (!::java::security::Provider::_class) ::java::security::Provider::_class = java::fetch_class("java/security/Provider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServices", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::IdentityScope::IdentityScope(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::IdentityScope::IdentityScope(const ::java::lang::String& arg0, const ::java::security::IdentityScope& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/security/IdentityScope;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::IdentityScope java::security::IdentityScope::getSystemScope(){
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSystemScope", "()Ljava/security/IdentityScope;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::security::IdentityScope _ret(ret);
    return _ret;
}

int32_t java::security::IdentityScope::size() const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::security::Identity java::security::IdentityScope::getIdentity(const ::java::lang::String& arg0) const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdentity", "(Ljava/lang/String;)Ljava/security/Identity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::Identity _ret(ret);
    return _ret;
}

::java::security::Identity java::security::IdentityScope::getIdentity(const ::java::security::Principal& arg0) const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdentity", "(Ljava/security/Principal;)Ljava/security/Identity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::Identity _ret(ret);
    return _ret;
}

::java::security::Identity java::security::IdentityScope::getIdentity(const ::java::security::PublicKey& arg0) const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIdentity", "(Ljava/security/PublicKey;)Ljava/security/Identity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::Identity _ret(ret);
    return _ret;
}

void java::security::IdentityScope::addIdentity(const ::java::security::Identity& arg0) const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "addIdentity", "(Ljava/security/Identity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::IdentityScope::removeIdentity(const ::java::security::Identity& arg0) const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeIdentity", "(Ljava/security/Identity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::IdentityScope::identities() const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "identities", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::String java::security::IdentityScope::toString() const {
    if (!::java::security::IdentityScope::_class) ::java::security::IdentityScope::_class = java::fetch_class("java/security/IdentityScope");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidParameterException::InvalidParameterException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::InvalidParameterException::_class) ::java::security::InvalidParameterException::_class = java::fetch_class("java/security/InvalidParameterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidParameterException::InvalidParameterException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::InvalidParameterException::_class) ::java::security::InvalidParameterException::_class = java::fetch_class("java/security/InvalidParameterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::ProviderException::ProviderException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::ProviderException::_class) ::java::security::ProviderException::_class = java::fetch_class("java/security/ProviderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::ProviderException::ProviderException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::ProviderException::_class) ::java::security::ProviderException::_class = java::fetch_class("java/security/ProviderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::ProviderException::ProviderException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::ProviderException::_class) ::java::security::ProviderException::_class = java::fetch_class("java/security/ProviderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::ProviderException::ProviderException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::ProviderException::_class) ::java::security::ProviderException::_class = java::fetch_class("java/security/ProviderException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::Key::getAlgorithm() const {
    if (!::java::security::Key::_class) ::java::security::Key::_class = java::fetch_class("java/security/Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::Key::getFormat() const {
    if (!::java::security::Key::_class) ::java::security::Key::_class = java::fetch_class("java/security/Key");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> java::security::Key::getEncoded() const {
    if (!::java::security::Key::_class) ::java::security::Key::_class = java::fetch_class("java/security/Key");
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
::java::security::KeyStore_PasswordProtection::KeyStore_PasswordProtection(const std::vector< uint16_t>& arg0) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_ProtectionParameter((jobject)0), ::javax::security::auth::Destroyable((jobject)0) {
    if (!::java::security::KeyStore_PasswordProtection::_class) ::java::security::KeyStore_PasswordProtection::_class = java::fetch_class("java/security/KeyStore$PasswordProtection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< uint16_t> java::security::KeyStore_PasswordProtection::getPassword() const {
    if (!::java::security::KeyStore_PasswordProtection::_class) ::java::security::KeyStore_PasswordProtection::_class = java::fetch_class("java/security/KeyStore$PasswordProtection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::KeyStore_PasswordProtection::destroy() const {
    if (!::java::security::KeyStore_PasswordProtection::_class) ::java::security::KeyStore_PasswordProtection::_class = java::fetch_class("java/security/KeyStore$PasswordProtection");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::security::KeyStore_PasswordProtection::isDestroyed() const {
    if (!::java::security::KeyStore_PasswordProtection::_class) ::java::security::KeyStore_PasswordProtection::_class = java::fetch_class("java/security/KeyStore$PasswordProtection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDestroyed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::PermissionCollection::PermissionCollection() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::PermissionCollection::_class) ::java::security::PermissionCollection::_class = java::fetch_class("java/security/PermissionCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::security::PermissionCollection::add(const ::java::security::Permission& arg0) const {
    if (!::java::security::PermissionCollection::_class) ::java::security::PermissionCollection::_class = java::fetch_class("java/security/PermissionCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/security/Permission;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::PermissionCollection::elements() const {
    if (!::java::security::PermissionCollection::_class) ::java::security::PermissionCollection::_class = java::fetch_class("java/security/PermissionCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "elements", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::security::PermissionCollection::implies(const ::java::security::Permission& arg0) const {
    if (!::java::security::PermissionCollection::_class) ::java::security::PermissionCollection::_class = java::fetch_class("java/security/PermissionCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::PermissionCollection::isReadOnly() const {
    if (!::java::security::PermissionCollection::_class) ::java::security::PermissionCollection::_class = java::fetch_class("java/security/PermissionCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::security::PermissionCollection::setReadOnly() const {
    if (!::java::security::PermissionCollection::_class) ::java::security::PermissionCollection::_class = java::fetch_class("java/security/PermissionCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadOnly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SecureRandom::SecureRandom() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Random((jobject)0) {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::SecureRandom::SecureRandom(const std::vector< int8_t>& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Random((jobject)0) {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::security::SecureRandom java::security::SecureRandom::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/SecureRandom;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::SecureRandom _ret(ret);
    return _ret;
}

::java::security::SecureRandom java::security::SecureRandom::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::SecureRandom _ret(ret);
    return _ret;
}

::java::security::SecureRandom java::security::SecureRandom::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::SecureRandom _ret(ret);
    return _ret;
}

::java::security::Provider java::security::SecureRandom::getProvider() const {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::SecureRandom::getAlgorithm() const {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::SecureRandom::setSeed(const std::vector< int8_t>& arg0) const {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSeed", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::SecureRandom::setSeed(int64_t arg0) const {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSeed", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::SecureRandom::nextBytes(const std::vector< int8_t>& arg0) const {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBytes", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::SecureRandom::getSeed(int32_t arg0){
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSeed", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::security::SecureRandom::generateSeed(int32_t arg0) const {
    if (!::java::security::SecureRandom::_class) ::java::security::SecureRandom::_class = java::fetch_class("java/security/SecureRandom");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateSeed", "(I)[B");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

void java::security::Guard::checkGuard(const ::java::lang::Object& arg0) const {
    if (!::java::security::Guard::_class) ::java::security::Guard::_class = java::fetch_class("java/security/Guard");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkGuard", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::security::Principal::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Principal::getName() const {
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::security::Principal::hashCode() const {
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::security::Principal::toString() const {
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::KeyFactory java::security::KeyFactory::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/KeyFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::KeyFactory _ret(ret);
    return _ret;
}

::java::security::KeyFactory java::security::KeyFactory::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyFactory _ret(ret);
    return _ret;
}

::java::security::KeyFactory java::security::KeyFactory::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyFactory _ret(ret);
    return _ret;
}

::java::security::Provider java::security::KeyFactory::getProvider() const {
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyFactory::getAlgorithm() const {
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::PublicKey java::security::KeyFactory::generatePublic(const ::java::security::spec::KeySpec& arg0) const {
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generatePublic", "(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

::java::security::PrivateKey java::security::KeyFactory::generatePrivate(const ::java::security::spec::KeySpec& arg0) const {
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "generatePrivate", "(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::PrivateKey _ret(ret);
    return _ret;
}

::java::security::spec::KeySpec java::security::KeyFactory::getKeySpec(const ::java::security::Key& arg0, const ::java::lang::Class& arg1) const {
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeySpec", "(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::spec::KeySpec _ret(ret);
    return _ret;
}

::java::security::Key java::security::KeyFactory::translateKey(const ::java::security::Key& arg0) const {
    if (!::java::security::KeyFactory::_class) ::java::security::KeyFactory::_class = java::fetch_class("java/security/KeyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "translateKey", "(Ljava/security/Key;)Ljava/security/Key;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::Key _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyManagementException::KeyManagementException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::KeyManagementException::_class) ::java::security::KeyManagementException::_class = java::fetch_class("java/security/KeyManagementException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyManagementException::KeyManagementException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::KeyManagementException::_class) ::java::security::KeyManagementException::_class = java::fetch_class("java/security/KeyManagementException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyManagementException::KeyManagementException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::KeyManagementException::_class) ::java::security::KeyManagementException::_class = java::fetch_class("java/security/KeyManagementException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyManagementException::KeyManagementException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::KeyManagementException::_class) ::java::security::KeyManagementException::_class = java::fetch_class("java/security/KeyManagementException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::security::AccessController::doPrivileged(const ::java::security::PrivilegedAction& arg0){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doPrivileged", "(Ljava/security/PrivilegedAction;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::AccessController::doPrivileged(const ::java::security::PrivilegedAction& arg0, const ::java::security::AccessControlContext& arg1){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doPrivileged", "(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::AccessController::doPrivileged(const ::java::security::PrivilegedExceptionAction& arg0){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doPrivileged", "(Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::AccessController::doPrivileged(const ::java::security::PrivilegedExceptionAction& arg0, const ::java::security::AccessControlContext& arg1){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doPrivileged", "(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::AccessController::doPrivilegedWithCombiner(const ::java::security::PrivilegedAction& arg0){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doPrivilegedWithCombiner", "(Ljava/security/PrivilegedAction;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::AccessController::doPrivilegedWithCombiner(const ::java::security::PrivilegedExceptionAction& arg0){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doPrivilegedWithCombiner", "(Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::security::AccessController::checkPermission(const ::java::security::Permission& arg0){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkPermission", "(Ljava/security/Permission;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::security::AccessControlContext java::security::AccessController::getContext(){
    if (!::java::security::AccessController::_class) ::java::security::AccessController::_class = java::fetch_class("java/security/AccessController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContext", "()Ljava/security/AccessControlContext;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::security::AccessControlContext _ret(ret);
    return _ret;
}

::java::security::Signature java::security::Signature::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/Signature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::Signature _ret(ret);
    return _ret;
}

::java::security::Signature java::security::Signature::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::Signature _ret(ret);
    return _ret;
}

::java::security::Signature java::security::Signature::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::Signature _ret(ret);
    return _ret;
}

::java::security::Provider java::security::Signature::getProvider() const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::Signature::getAlgorithm() const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::Signature::initVerify(const ::java::security::PublicKey& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "initVerify", "(Ljava/security/PublicKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Signature::initVerify(const ::java::security::cert::Certificate& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "initVerify", "(Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Signature::initSign(const ::java::security::PrivateKey& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "initSign", "(Ljava/security/PrivateKey;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Signature::initSign(const ::java::security::PrivateKey& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "initSign", "(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int8_t> java::security::Signature::sign() const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "sign", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::security::Signature::sign(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "sign", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::security::Signature::verify(const std::vector< int8_t>& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "([B)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::Signature::verify(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "([BII)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::Signature::update(int8_t arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Signature::update(const std::vector< int8_t>& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Signature::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::Signature::update(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/nio/ByteBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Signature::toString() const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::Signature::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::Signature::setParameter(const ::java::security::spec::AlgorithmParameterSpec& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::AlgorithmParameters java::security::Signature::getParameters() const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Ljava/security/AlgorithmParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

::java::lang::Object java::security::Signature::getParameter(const ::java::lang::String& arg0) const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::security::Signature::clone() const {
    if (!::java::security::Signature::_class) ::java::security::Signature::_class = java::fetch_class("java/security/Signature");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::InvalidAlgorithmParameterException::_class) ::java::security::InvalidAlgorithmParameterException::_class = java::fetch_class("java/security/InvalidAlgorithmParameterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidAlgorithmParameterException::InvalidAlgorithmParameterException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::InvalidAlgorithmParameterException::_class) ::java::security::InvalidAlgorithmParameterException::_class = java::fetch_class("java/security/InvalidAlgorithmParameterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::InvalidAlgorithmParameterException::_class) ::java::security::InvalidAlgorithmParameterException::_class = java::fetch_class("java/security/InvalidAlgorithmParameterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::InvalidAlgorithmParameterException::_class) ::java::security::InvalidAlgorithmParameterException::_class = java::fetch_class("java/security/InvalidAlgorithmParameterException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::Provider_Service::Provider_Service(const ::java::security::Provider& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::util::List& arg4, const ::java::util::Map& arg5) : ::java::lang::Object((jobject)0) {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::Provider_Service::getType() const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::Provider_Service::getAlgorithm() const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider java::security::Provider_Service::getProvider() const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::Provider_Service::getClassName() const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::Provider_Service::getAttribute(const ::java::lang::String& arg0) const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::security::Provider_Service::newInstance(const ::java::lang::Object& arg0) const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "newInstance", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::security::Provider_Service::supportsParameter(const ::java::lang::Object& arg0) const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsParameter", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Provider_Service::toString() const {
    if (!::java::security::Provider_Service::_class) ::java::security::Provider_Service::_class = java::fetch_class("java/security/Provider$Service");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::AlgorithmParameterGeneratorSpi::_class) ::java::security::AlgorithmParameterGeneratorSpi::_class = java::fetch_class("java/security/AlgorithmParameterGeneratorSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AccessControlContext::AccessControlContext(const ::java::security::AccessControlContext& arg0, const ::java::security::DomainCombiner& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::security::AccessControlContext::_class) ::java::security::AccessControlContext::_class = java::fetch_class("java/security/AccessControlContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AccessControlContext::AccessControlContext(const std::vector< ::java::security::ProtectionDomain>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::security::AccessControlContext::_class) ::java::security::AccessControlContext::_class = java::fetch_class("java/security/AccessControlContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/security/ProtectionDomain;)V");
    unsigned arg0s = arg0.size();
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::security::ProtectionDomain::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::security::ProtectionDomain& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::security::AccessControlContext::checkPermission(const ::java::security::Permission& arg0) const {
    if (!::java::security::AccessControlContext::_class) ::java::security::AccessControlContext::_class = java::fetch_class("java/security/AccessControlContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/security/Permission;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::DomainCombiner java::security::AccessControlContext::getDomainCombiner() const {
    if (!::java::security::AccessControlContext::_class) ::java::security::AccessControlContext::_class = java::fetch_class("java/security/AccessControlContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomainCombiner", "()Ljava/security/DomainCombiner;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::DomainCombiner _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyRep::KeyRep(const ::java::security::KeyRep_Type& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< int8_t>& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::KeyRep::_class) ::java::security::KeyRep::_class = java::fetch_class("java/security/KeyRep");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jbyteArray _arg3 = java::jni->NewByteArray(arg3.size());
    java::jni->SetByteArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::String java::security::Security::getAlgorithmProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAlgorithmProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::security::Security::insertProviderAt(const ::java::security::Provider& arg0, int32_t arg1){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "insertProviderAt", "(Ljava/security/Provider;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::security::Security::addProvider(const ::java::security::Provider& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addProvider", "(Ljava/security/Provider;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void java::security::Security::removeProvider(const ::java::lang::String& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeProvider", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

std::vector< ::java::security::Provider> java::security::Security::getProviders(){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProviders", "()[Ljava/security/Provider;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::Provider> _ret(rets, ::java::security::Provider((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::Provider retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::Provider java::security::Security::getProvider(const ::java::lang::String& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProvider", "(Ljava/lang/String;)Ljava/security/Provider;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::Provider _ret(ret);
    return _ret;
}

std::vector< ::java::security::Provider> java::security::Security::getProviders(const ::java::lang::String& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProviders", "(Ljava/lang/String;)[Ljava/security/Provider;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::Provider> _ret(rets, ::java::security::Provider((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::Provider retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::security::Provider> java::security::Security::getProviders(const ::java::util::Map& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProviders", "(Ljava/util/Map;)[Ljava/security/Provider;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::Provider> _ret(rets, ::java::security::Provider((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::Provider retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::security::Security::getProperty(const ::java::lang::String& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::Security::setProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Set java::security::Security::getAlgorithms(const ::java::lang::String& arg0){
    if (!::java::security::Security::_class) ::java::security::Security::_class = java::fetch_class("java/security/Security");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAlgorithms", "(Ljava/lang/String;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyPair::KeyPair(const ::java::security::PublicKey& arg0, const ::java::security::PrivateKey& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::security::KeyPair::_class) ::java::security::KeyPair::_class = java::fetch_class("java/security/KeyPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/PublicKey;Ljava/security/PrivateKey;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::PrivateKey java::security::KeyPair::getPrivate() const {
    if (!::java::security::KeyPair::_class) ::java::security::KeyPair::_class = java::fetch_class("java/security/KeyPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivate", "()Ljava/security/PrivateKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PrivateKey _ret(ret);
    return _ret;
}

::java::security::PublicKey java::security::KeyPair::getPublic() const {
    if (!::java::security::KeyPair::_class) ::java::security::KeyPair::_class = java::fetch_class("java/security/KeyPair");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublic", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidKeyException::InvalidKeyException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::InvalidKeyException::_class) ::java::security::InvalidKeyException::_class = java::fetch_class("java/security/InvalidKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidKeyException::InvalidKeyException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::InvalidKeyException::_class) ::java::security::InvalidKeyException::_class = java::fetch_class("java/security/InvalidKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidKeyException::InvalidKeyException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::InvalidKeyException::_class) ::java::security::InvalidKeyException::_class = java::fetch_class("java/security/InvalidKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::InvalidKeyException::InvalidKeyException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0), ::java::security::KeyException((jobject)0) {
    if (!::java::security::InvalidKeyException::_class) ::java::security::InvalidKeyException::_class = java::fetch_class("java/security/InvalidKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::security::Certificate::decode(const ::java::io::InputStream& arg0) const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "decode", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::Certificate::encode(const ::java::io::OutputStream& arg0) const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "encode", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::Certificate::getFormat() const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Principal java::security::Certificate::getGuarantor() const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGuarantor", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::security::Principal java::security::Certificate::getPrincipal() const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::security::PublicKey java::security::Certificate::getPublicKey() const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicKey", "()Ljava/security/PublicKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::PublicKey _ret(ret);
    return _ret;
}

::java::lang::String java::security::Certificate::toString(bool arg0) const {
    if (!::java::security::Certificate::_class) ::java::security::Certificate::_class = java::fetch_class("java/security/Certificate");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "(Z)Ljava/lang/String;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyPairGenerator::getAlgorithm() const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::KeyPairGenerator java::security::KeyPairGenerator::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/KeyPairGenerator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::KeyPairGenerator _ret(ret);
    return _ret;
}

::java::security::KeyPairGenerator java::security::KeyPairGenerator::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyPairGenerator _ret(ret);
    return _ret;
}

::java::security::KeyPairGenerator java::security::KeyPairGenerator::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyPairGenerator _ret(ret);
    return _ret;
}

::java::security::Provider java::security::KeyPairGenerator::getProvider() const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

void java::security::KeyPairGenerator::initialize(int32_t arg0) const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::KeyPairGenerator::initialize(const ::java::security::spec::AlgorithmParameterSpec& arg0) const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::KeyPair java::security::KeyPairGenerator::genKeyPair() const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "genKeyPair", "()Ljava/security/KeyPair;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::KeyPair _ret(ret);
    return _ret;
}

::java::security::KeyPair java::security::KeyPairGenerator::generateKeyPair() const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateKeyPair", "()Ljava/security/KeyPair;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::KeyPair _ret(ret);
    return _ret;
}

void java::security::KeyPairGenerator::initialize(int32_t arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(ILjava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyPairGenerator::initialize(const ::java::security::spec::AlgorithmParameterSpec& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::KeyPairGenerator::_class) ::java::security::KeyPairGenerator::_class = java::fetch_class("java/security/KeyPairGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "initialize", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::security::KeyStore java::security::KeyStore::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/KeyStore;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::KeyStore _ret(ret);
    return _ret;
}

::java::security::KeyStore java::security::KeyStore::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyStore;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyStore _ret(ret);
    return _ret;
}

::java::security::KeyStore java::security::KeyStore::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyStore;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::KeyStore _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyStore::getDefaultType(){
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider java::security::KeyStore::getProvider() const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyStore::getType() const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Key java::security::KeyStore::getKey(const ::java::lang::String& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "(Ljava/lang/String;[C)Ljava/security/Key;");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::Key _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> java::security::KeyStore::getCertificateChain(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::Certificate> _ret(rets, ::java::security::cert::Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::cert::Certificate java::security::KeyStore::getCertificate(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificate", "(Ljava/lang/String;)Ljava/security/cert/Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::cert::Certificate _ret(ret);
    return _ret;
}

::java::util::Date java::security::KeyStore::getCreationDate(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCreationDate", "(Ljava/lang/String;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Date _ret(ret);
    return _ret;
}

void java::security::KeyStore::setKeyEntry(const ::java::lang::String& arg0, const ::java::security::Key& arg1, const std::vector< uint16_t>& arg2, const std::vector< ::java::security::cert::Certificate>& arg3) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyEntry", "(Ljava/lang/String;Ljava/security/Key;[C[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jcharArray _arg2 = java::jni->NewCharArray(arg2.size());
    java::jni->SetCharArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    unsigned arg3s = arg3.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::security::cert::Certificate& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::security::KeyStore::setKeyEntry(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1, const std::vector< ::java::security::cert::Certificate>& arg2) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyEntry", "(Ljava/lang/String;[B[Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    unsigned arg2s = arg2.size();
    if (!::java::security::cert::Certificate::_class) ::java::security::cert::Certificate::_class = java::fetch_class("java/security/cert/Certificate");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::security::cert::Certificate::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::security::cert::Certificate& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::KeyStore::setCertificateEntry(const ::java::lang::String& arg0, const ::java::security::cert::Certificate& arg1) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertificateEntry", "(Ljava/lang/String;Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyStore::deleteEntry(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteEntry", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::KeyStore::aliases() const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "aliases", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::security::KeyStore::containsAlias(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAlias", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::security::KeyStore::size() const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::security::KeyStore::isKeyEntry(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "isKeyEntry", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::KeyStore::isCertificateEntry(const ::java::lang::String& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCertificateEntry", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::KeyStore::getCertificateAlias(const ::java::security::cert::Certificate& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateAlias", "(Ljava/security/cert/Certificate;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::KeyStore::store(const ::java::io::OutputStream& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "store", "(Ljava/io/OutputStream;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyStore::store(const ::java::security::KeyStore_LoadStoreParameter& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "store", "(Ljava/security/KeyStore$LoadStoreParameter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::KeyStore::load(const ::java::io::InputStream& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/InputStream;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::KeyStore::load(const ::java::security::KeyStore_LoadStoreParameter& arg0) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/security/KeyStore$LoadStoreParameter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::security::KeyStore_Entry java::security::KeyStore::getEntry(const ::java::lang::String& arg0, const ::java::security::KeyStore_ProtectionParameter& arg1) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntry", "(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::security::KeyStore_Entry _ret(ret);
    return _ret;
}

void java::security::KeyStore::setEntry(const ::java::lang::String& arg0, const ::java::security::KeyStore_Entry& arg1, const ::java::security::KeyStore_ProtectionParameter& arg2) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntry", "(Ljava/lang/String;Ljava/security/KeyStore$Entry;Ljava/security/KeyStore$ProtectionParameter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::security::KeyStore::entryInstanceOf(const ::java::lang::String& arg0, const ::java::lang::Class& arg1) const {
    if (!::java::security::KeyStore::_class) ::java::security::KeyStore::_class = java::fetch_class("java/security/KeyStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "entryInstanceOf", "(Ljava/lang/String;Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStore_SecretKeyEntry::KeyStore_SecretKeyEntry(const ::javax::crypto::SecretKey& arg0) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {
    if (!::java::security::KeyStore_SecretKeyEntry::_class) ::java::security::KeyStore_SecretKeyEntry::_class = java::fetch_class("java/security/KeyStore$SecretKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/crypto/SecretKey;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::javax::crypto::SecretKey java::security::KeyStore_SecretKeyEntry::getSecretKey() const {
    if (!::java::security::KeyStore_SecretKeyEntry::_class) ::java::security::KeyStore_SecretKeyEntry::_class = java::fetch_class("java/security/KeyStore$SecretKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecretKey", "()Ljavax/crypto/SecretKey;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::crypto::SecretKey _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyStore_SecretKeyEntry::toString() const {
    if (!::java::security::KeyStore_SecretKeyEntry::_class) ::java::security::KeyStore_SecretKeyEntry::_class = java::fetch_class("java/security/KeyStore$SecretKeyEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::DigestOutputStream::DigestOutputStream(const ::java::io::OutputStream& arg0, const ::java::security::MessageDigest& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/security/MessageDigest;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::security::MessageDigest java::security::DigestOutputStream::getMessageDigest() const {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessageDigest", "()Ljava/security/MessageDigest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::MessageDigest _ret(ret);
    return _ret;
}

void java::security::DigestOutputStream::setMessageDigest(const ::java::security::MessageDigest& arg0) const {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessageDigest", "(Ljava/security/MessageDigest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::DigestOutputStream::write(int32_t arg0) const {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::DigestOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::DigestOutputStream::on(bool arg0) const {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "on", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::security::DigestOutputStream::toString() const {
    if (!::java::security::DigestOutputStream::_class) ::java::security::DigestOutputStream::_class = java::fetch_class("java/security/DigestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::security::AlgorithmParameterGenerator::getAlgorithm() const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::AlgorithmParameterGenerator java::security::AlgorithmParameterGenerator::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::AlgorithmParameterGenerator _ret(ret);
    return _ret;
}

::java::security::AlgorithmParameterGenerator java::security::AlgorithmParameterGenerator::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::AlgorithmParameterGenerator _ret(ret);
    return _ret;
}

::java::security::AlgorithmParameterGenerator java::security::AlgorithmParameterGenerator::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::AlgorithmParameterGenerator _ret(ret);
    return _ret;
}

::java::security::Provider java::security::AlgorithmParameterGenerator::getProvider() const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

void java::security::AlgorithmParameterGenerator::init(int32_t arg0) const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::AlgorithmParameterGenerator::init(int32_t arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(ILjava/security/SecureRandom;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::security::AlgorithmParameterGenerator::init(const ::java::security::spec::AlgorithmParameterSpec& arg0) const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/spec/AlgorithmParameterSpec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::AlgorithmParameterGenerator::init(const ::java::security::spec::AlgorithmParameterSpec& arg0, const ::java::security::SecureRandom& arg1) const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::security::AlgorithmParameters java::security::AlgorithmParameterGenerator::generateParameters() const {
    if (!::java::security::AlgorithmParameterGenerator::_class) ::java::security::AlgorithmParameterGenerator::_class = java::fetch_class("java/security/AlgorithmParameterGenerator");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateParameters", "()Ljava/security/AlgorithmParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::AlgorithmParameters _ret(ret);
    return _ret;
}

::java::security::MessageDigest java::security::MessageDigest::getInstance(const ::java::lang::String& arg0){
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/security/MessageDigest;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::security::MessageDigest _ret(ret);
    return _ret;
}

::java::security::MessageDigest java::security::MessageDigest::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::MessageDigest _ret(ret);
    return _ret;
}

::java::security::MessageDigest java::security::MessageDigest::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::security::MessageDigest _ret(ret);
    return _ret;
}

void java::security::MessageDigest::reset() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::security::MessageDigest::update(int8_t arg0) const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::security::MessageDigest::update(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::security::MessageDigest::update(const std::vector< int8_t>& arg0) const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::security::MessageDigest::digest() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "digest", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::security::MessageDigest::digest(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "digest", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< int8_t> java::security::MessageDigest::digest(const std::vector< int8_t>& arg0) const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "digest", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::security::MessageDigest::toString() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::MessageDigest::isEqual(const std::vector< int8_t>& arg0, const std::vector< int8_t>& arg1){
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isEqual", "([B[B)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String java::security::MessageDigest::getAlgorithm() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider java::security::MessageDigest::getProvider() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

int32_t java::security::MessageDigest::getDigestLength() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigestLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::security::MessageDigest::clone() const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::security::MessageDigest::update(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::security::MessageDigest::_class) ::java::security::MessageDigest::_class = java::fetch_class("java/security/MessageDigest");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/nio/ByteBuffer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::PolicySpi::PolicySpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::PolicySpi::_class) ::java::security::PolicySpi::_class = java::fetch_class("java/security/PolicySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::AlgorithmParametersSpi::AlgorithmParametersSpi() : ::java::lang::Object((jobject)0) {
    if (!::java::security::AlgorithmParametersSpi::_class) ::java::security::AlgorithmParametersSpi::_class = java::fetch_class("java/security/AlgorithmParametersSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::security::KeyStore_ProtectionParameter java::security::KeyStore_LoadStoreParameter::getProtectionParameter() const {
    if (!::java::security::KeyStore_LoadStoreParameter::_class) ::java::security::KeyStore_LoadStoreParameter::_class = java::fetch_class("java/security/KeyStore$LoadStoreParameter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtectionParameter", "()Ljava/security/KeyStore$ProtectionParameter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::KeyStore_ProtectionParameter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(const ::java::security::cert::Certificate& arg0) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {
    if (!::java::security::KeyStore_TrustedCertificateEntry::_class) ::java::security::KeyStore_TrustedCertificateEntry::_class = java::fetch_class("java/security/KeyStore$TrustedCertificateEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/Certificate;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::security::cert::Certificate java::security::KeyStore_TrustedCertificateEntry::getTrustedCertificate() const {
    if (!::java::security::KeyStore_TrustedCertificateEntry::_class) ::java::security::KeyStore_TrustedCertificateEntry::_class = java::fetch_class("java/security/KeyStore$TrustedCertificateEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrustedCertificate", "()Ljava/security/cert/Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::Certificate _ret(ret);
    return _ret;
}

::java::lang::String java::security::KeyStore_TrustedCertificateEntry::toString() const {
    if (!::java::security::KeyStore_TrustedCertificateEntry::_class) ::java::security::KeyStore_TrustedCertificateEntry::_class = java::fetch_class("java/security/KeyStore$TrustedCertificateEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyException::KeyException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyException::_class) ::java::security::KeyException::_class = java::fetch_class("java/security/KeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyException::KeyException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyException::_class) ::java::security::KeyException::_class = java::fetch_class("java/security/KeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyException::KeyException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyException::_class) ::java::security::KeyException::_class = java::fetch_class("java/security/KeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::KeyException::KeyException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::security::GeneralSecurityException((jobject)0) {
    if (!::java::security::KeyException::_class) ::java::security::KeyException::_class = java::fetch_class("java/security/KeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop


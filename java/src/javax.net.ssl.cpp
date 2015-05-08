#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.Socket.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.security.KeyStore.hpp"
#include "java.security.Permission.hpp"
#include "java.security.Principal.hpp"
#include "java.security.PrivateKey.hpp"
#include "java.security.Provider.hpp"
#include "java.security.SecureRandom.hpp"
#include "java.security.cert.CertPathParameters.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.security.cert.X509Certificate.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.List.hpp"
#include "javax.net.ServerSocketFactory.hpp"
#include "javax.net.SocketFactory.hpp"
#include "javax.net.ssl.CertPathTrustManagerParameters.hpp"
#include "javax.net.ssl.HandshakeCompletedEvent.hpp"
#include "javax.net.ssl.HandshakeCompletedListener.hpp"
#include "javax.net.ssl.HostnameVerifier.hpp"
#include "javax.net.ssl.HttpsURLConnection.hpp"
#include "javax.net.ssl.KeyManager.hpp"
#include "javax.net.ssl.KeyManagerFactory.hpp"
#include "javax.net.ssl.KeyManagerFactorySpi.hpp"
#include "javax.net.ssl.KeyStoreBuilderParameters.hpp"
#include "javax.net.ssl.ManagerFactoryParameters.hpp"
#include "javax.net.ssl.SSLContext.hpp"
#include "javax.net.ssl.SSLContextSpi.hpp"
#include "javax.net.ssl.SSLEngine.hpp"
#include "javax.net.ssl.SSLEngineResult.hpp"
#include "javax.net.ssl.SSLException.hpp"
#include "javax.net.ssl.SSLHandshakeException.hpp"
#include "javax.net.ssl.SSLKeyException.hpp"
#include "javax.net.ssl.SSLParameters.hpp"
#include "javax.net.ssl.SSLPeerUnverifiedException.hpp"
#include "javax.net.ssl.SSLPermission.hpp"
#include "javax.net.ssl.SSLProtocolException.hpp"
#include "javax.net.ssl.SSLServerSocket.hpp"
#include "javax.net.ssl.SSLServerSocketFactory.hpp"
#include "javax.net.ssl.SSLSession.hpp"
#include "javax.net.ssl.SSLSessionBindingEvent.hpp"
#include "javax.net.ssl.SSLSessionBindingListener.hpp"
#include "javax.net.ssl.SSLSessionContext.hpp"
#include "javax.net.ssl.SSLSocket.hpp"
#include "javax.net.ssl.SSLSocketFactory.hpp"
#include "javax.net.ssl.TrustManager.hpp"
#include "javax.net.ssl.TrustManagerFactory.hpp"
#include "javax.net.ssl.TrustManagerFactorySpi.hpp"
#include "javax.net.ssl.X509ExtendedKeyManager.hpp"
#include "javax.net.ssl.X509KeyManager.hpp"
#include "javax.net.ssl.X509TrustManager.hpp"
#include "javax.security.cert.X509Certificate.hpp"

jclass javax::net::ssl::TrustManager::_class = nullptr;
jclass javax::net::ssl::HostnameVerifier::_class = nullptr;
jclass javax::net::ssl::X509ExtendedKeyManager::_class = nullptr;
jclass javax::net::ssl::HttpsURLConnection::_class = nullptr;
jclass javax::net::ssl::SSLPeerUnverifiedException::_class = nullptr;
jclass javax::net::ssl::SSLSessionContext::_class = nullptr;
jclass javax::net::ssl::X509TrustManager::_class = nullptr;
jclass javax::net::ssl::SSLSession::_class = nullptr;
jclass javax::net::ssl::SSLException::_class = nullptr;
jclass javax::net::ssl::SSLContext::_class = nullptr;
jclass javax::net::ssl::SSLProtocolException::_class = nullptr;
jclass javax::net::ssl::SSLKeyException::_class = nullptr;
jclass javax::net::ssl::SSLSessionBindingListener::_class = nullptr;
jclass javax::net::ssl::SSLEngineResult::_class = nullptr;
jclass javax::net::ssl::SSLEngineResult_HandshakeStatus::_class = nullptr;
jclass javax::net::ssl::SSLParameters::_class = nullptr;
jclass javax::net::ssl::HandshakeCompletedListener::_class = nullptr;
jclass javax::net::ssl::SSLServerSocketFactory::_class = nullptr;
jclass javax::net::ssl::SSLEngineResult_Status::_class = nullptr;
jclass javax::net::ssl::ManagerFactoryParameters::_class = nullptr;
jclass javax::net::ssl::HandshakeCompletedEvent::_class = nullptr;
jclass javax::net::ssl::SSLContextSpi::_class = nullptr;
jclass javax::net::ssl::TrustManagerFactory::_class = nullptr;
jclass javax::net::ssl::KeyManagerFactory::_class = nullptr;
jclass javax::net::ssl::KeyManagerFactorySpi::_class = nullptr;
jclass javax::net::ssl::KeyStoreBuilderParameters::_class = nullptr;
jclass javax::net::ssl::CertPathTrustManagerParameters::_class = nullptr;
jclass javax::net::ssl::SSLHandshakeException::_class = nullptr;
jclass javax::net::ssl::KeyManager::_class = nullptr;
jclass javax::net::ssl::SSLServerSocket::_class = nullptr;
jclass javax::net::ssl::TrustManagerFactorySpi::_class = nullptr;
jclass javax::net::ssl::SSLPermission::_class = nullptr;
jclass javax::net::ssl::SSLEngine::_class = nullptr;
jclass javax::net::ssl::SSLSocket::_class = nullptr;
jclass javax::net::ssl::SSLSocketFactory::_class = nullptr;
jclass javax::net::ssl::SSLSessionBindingEvent::_class = nullptr;
jclass javax::net::ssl::X509KeyManager::_class = nullptr;

bool javax::net::ssl::HostnameVerifier::verify(const ::java::lang::String& arg0, const ::javax::net::ssl::SSLSession& arg1) const {
    if (!::javax::net::ssl::HostnameVerifier::_class) ::javax::net::ssl::HostnameVerifier::_class = java::fetch_class("javax/net/ssl/HostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String javax::net::ssl::X509ExtendedKeyManager::chooseEngineClientAlias(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::security::Principal>& arg1, const ::javax::net::ssl::SSLEngine& arg2) const {
    if (!::javax::net::ssl::X509ExtendedKeyManager::_class) ::javax::net::ssl::X509ExtendedKeyManager::_class = java::fetch_class("javax/net/ssl/X509ExtendedKeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseEngineClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::Principal& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::X509ExtendedKeyManager::chooseEngineServerAlias(const ::java::lang::String& arg0, const std::vector< ::java::security::Principal>& arg1, const ::javax::net::ssl::SSLEngine& arg2) const {
    if (!::javax::net::ssl::X509ExtendedKeyManager::_class) ::javax::net::ssl::X509ExtendedKeyManager::_class = java::fetch_class("javax/net/ssl/X509ExtendedKeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseEngineServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljavax/net/ssl/SSLEngine;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::Principal& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

void javax::net::ssl::HttpsURLConnection::setDefaultHostnameVerifier(const ::javax::net::ssl::HostnameVerifier& arg0){
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultHostnameVerifier", "(Ljavax/net/ssl/HostnameVerifier;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::javax::net::ssl::HostnameVerifier javax::net::ssl::HttpsURLConnection::getDefaultHostnameVerifier(){
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultHostnameVerifier", "()Ljavax/net/ssl/HostnameVerifier;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::ssl::HostnameVerifier _ret(ret);
    return _ret;
}

void javax::net::ssl::HttpsURLConnection::setDefaultSSLSocketFactory(const ::javax::net::ssl::SSLSocketFactory& arg0){
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultSSLSocketFactory", "(Ljavax/net/ssl/SSLSocketFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::javax::net::ssl::SSLSocketFactory javax::net::ssl::HttpsURLConnection::getDefaultSSLSocketFactory(){
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::HttpsURLConnection::getCipherSuite() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCipherSuite", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> javax::net::ssl::HttpsURLConnection::getLocalCertificates() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalCertificates", "()[Ljava/security/cert/Certificate;");
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

std::vector< ::java::security::cert::Certificate> javax::net::ssl::HttpsURLConnection::getServerCertificates() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServerCertificates", "()[Ljava/security/cert/Certificate;");
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

::java::security::Principal javax::net::ssl::HttpsURLConnection::getPeerPrincipal() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::security::Principal javax::net::ssl::HttpsURLConnection::getLocalPrincipal() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

void javax::net::ssl::HttpsURLConnection::setHostnameVerifier(const ::javax::net::ssl::HostnameVerifier& arg0) const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHostnameVerifier", "(Ljavax/net/ssl/HostnameVerifier;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::net::ssl::HostnameVerifier javax::net::ssl::HttpsURLConnection::getHostnameVerifier() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHostnameVerifier", "()Ljavax/net/ssl/HostnameVerifier;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::HostnameVerifier _ret(ret);
    return _ret;
}

void javax::net::ssl::HttpsURLConnection::setSSLSocketFactory(const ::javax::net::ssl::SSLSocketFactory& arg0) const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSSLSocketFactory", "(Ljavax/net/ssl/SSLSocketFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::net::ssl::SSLSocketFactory javax::net::ssl::HttpsURLConnection::getSSLSocketFactory() const {
    if (!::javax::net::ssl::HttpsURLConnection::_class) ::javax::net::ssl::HttpsURLConnection::_class = java::fetch_class("javax/net/ssl/HttpsURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLPeerUnverifiedException::SSLPeerUnverifiedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::net::ssl::SSLException((jobject)0) {
    if (!::javax::net::ssl::SSLPeerUnverifiedException::_class) ::javax::net::ssl::SSLPeerUnverifiedException::_class = java::fetch_class("javax/net/ssl/SSLPeerUnverifiedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Enumeration javax::net::ssl::SSLSessionContext::getIds() const {
    if (!::javax::net::ssl::SSLSessionContext::_class) ::javax::net::ssl::SSLSessionContext::_class = java::fetch_class("javax/net/ssl/SSLSessionContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIds", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSession javax::net::ssl::SSLSessionContext::getSession(const std::vector< int8_t>& arg0) const {
    if (!::javax::net::ssl::SSLSessionContext::_class) ::javax::net::ssl::SSLSessionContext::_class = java::fetch_class("javax/net/ssl/SSLSessionContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSession", "([B)Ljavax/net/ssl/SSLSession;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

int32_t javax::net::ssl::SSLSessionContext::getSessionCacheSize() const {
    if (!::javax::net::ssl::SSLSessionContext::_class) ::javax::net::ssl::SSLSessionContext::_class = java::fetch_class("javax/net/ssl/SSLSessionContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionCacheSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::net::ssl::SSLSessionContext::getSessionTimeout() const {
    if (!::javax::net::ssl::SSLSessionContext::_class) ::javax::net::ssl::SSLSessionContext::_class = java::fetch_class("javax/net/ssl/SSLSessionContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void javax::net::ssl::SSLSessionContext::setSessionCacheSize(int32_t arg0) const {
    if (!::javax::net::ssl::SSLSessionContext::_class) ::javax::net::ssl::SSLSessionContext::_class = java::fetch_class("javax/net/ssl/SSLSessionContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionCacheSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLSessionContext::setSessionTimeout(int32_t arg0) const {
    if (!::javax::net::ssl::SSLSessionContext::_class) ::javax::net::ssl::SSLSessionContext::_class = java::fetch_class("javax/net/ssl/SSLSessionContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSessionTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::X509TrustManager::checkClientTrusted(const std::vector< ::java::security::cert::X509Certificate>& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::net::ssl::X509TrustManager::_class) ::javax::net::ssl::X509TrustManager::_class = java::fetch_class("javax/net/ssl/X509TrustManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::security::cert::X509Certificate::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::security::cert::X509Certificate& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::net::ssl::X509TrustManager::checkServerTrusted(const std::vector< ::java::security::cert::X509Certificate>& arg0, const ::java::lang::String& arg1) const {
    if (!::javax::net::ssl::X509TrustManager::_class) ::javax::net::ssl::X509TrustManager::_class = java::fetch_class("javax/net/ssl/X509TrustManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::security::cert::X509Certificate::_class) ::java::security::cert::X509Certificate::_class = java::fetch_class("java/security/cert/X509Certificate");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::security::cert::X509Certificate::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::security::cert::X509Certificate& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::java::security::cert::X509Certificate> javax::net::ssl::X509TrustManager::getAcceptedIssuers() const {
    if (!::javax::net::ssl::X509TrustManager::_class) ::javax::net::ssl::X509TrustManager::_class = java::fetch_class("javax/net/ssl/X509TrustManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::X509Certificate> _ret(rets, ::java::security::cert::X509Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::X509Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t javax::net::ssl::SSLSession::getApplicationBufferSize() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::net::ssl::SSLSession::getCipherSuite() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCipherSuite", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t javax::net::ssl::SSLSession::getCreationTime() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCreationTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

std::vector< int8_t> javax::net::ssl::SSLSession::getId() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int64_t javax::net::ssl::SSLSession::getLastAccessedTime() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastAccessedTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

std::vector< ::java::security::cert::Certificate> javax::net::ssl::SSLSession::getLocalCertificates() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalCertificates", "()[Ljava/security/cert/Certificate;");
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

::java::security::Principal javax::net::ssl::SSLSession::getLocalPrincipal() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

int32_t javax::net::ssl::SSLSession::getPacketBufferSize() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPacketBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::javax::security::cert::X509Certificate> javax::net::ssl::SSLSession::getPeerCertificateChain() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerCertificateChain", "()[Ljavax/security/cert/X509Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::javax::security::cert::X509Certificate> _ret(rets, ::javax::security::cert::X509Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::javax::security::cert::X509Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::security::cert::Certificate> javax::net::ssl::SSLSession::getPeerCertificates() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerCertificates", "()[Ljava/security/cert/Certificate;");
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

::java::lang::String javax::net::ssl::SSLSession::getPeerHost() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::net::ssl::SSLSession::getPeerPort() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::security::Principal javax::net::ssl::SSLSession::getPeerPrincipal() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::SSLSession::getProtocol() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSessionContext javax::net::ssl::SSLSession::getSessionContext() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSessionContext", "()Ljavax/net/ssl/SSLSessionContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSessionContext _ret(ret);
    return _ret;
}

::java::lang::Object javax::net::ssl::SSLSession::getValue(const ::java::lang::String& arg0) const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSession::getValueNames() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValueNames", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLSession::invalidate() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool javax::net::ssl::SSLSession::isValid() const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLSession::putValue(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "putValue", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::net::ssl::SSLSession::removeValue(const ::java::lang::String& arg0) const {
    if (!::javax::net::ssl::SSLSession::_class) ::javax::net::ssl::SSLSession::_class = java::fetch_class("javax/net/ssl/SSLSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLException::SSLException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::net::ssl::SSLException::_class) ::javax::net::ssl::SSLException::_class = java::fetch_class("javax/net/ssl/SSLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLException::SSLException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::net::ssl::SSLException::_class) ::javax::net::ssl::SSLException::_class = java::fetch_class("javax/net/ssl/SSLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLException::SSLException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::net::ssl::SSLException::_class) ::javax::net::ssl::SSLException::_class = java::fetch_class("javax/net/ssl/SSLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::javax::net::ssl::SSLContext javax::net::ssl::SSLContext::getDefault(){
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljavax/net/ssl/SSLContext;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::ssl::SSLContext _ret(ret);
    return _ret;
}

void javax::net::ssl::SSLContext::setDefault(const ::javax::net::ssl::SSLContext& arg0){
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljavax/net/ssl/SSLContext;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::javax::net::ssl::SSLContext javax::net::ssl::SSLContext::getInstance(const ::java::lang::String& arg0){
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::net::ssl::SSLContext _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLContext javax::net::ssl::SSLContext::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/SSLContext;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLContext _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLContext javax::net::ssl::SSLContext::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/SSLContext;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLContext _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::SSLContext::getProtocol() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::net::ssl::SSLContext::getProvider() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

void javax::net::ssl::SSLContext::init(const std::vector< ::javax::net::ssl::KeyManager>& arg0, const std::vector< ::javax::net::ssl::TrustManager>& arg1, const ::java::security::SecureRandom& arg2) const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V");
    unsigned arg0s = arg0.size();
    if (!::javax::net::ssl::KeyManager::_class) ::javax::net::ssl::KeyManager::_class = java::fetch_class("javax/net/ssl/KeyManager");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::javax::net::ssl::KeyManager::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::javax::net::ssl::KeyManager& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::javax::net::ssl::TrustManager::_class) ::javax::net::ssl::TrustManager::_class = java::fetch_class("javax/net/ssl/TrustManager");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::javax::net::ssl::TrustManager::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::javax::net::ssl::TrustManager& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::javax::net::ssl::SSLSocketFactory javax::net::ssl::SSLContext::getSocketFactory() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLServerSocketFactory javax::net::ssl::SSLContext::getServerSocketFactory() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServerSocketFactory", "()Ljavax/net/ssl/SSLServerSocketFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLServerSocketFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngine javax::net::ssl::SSLContext::createSSLEngine() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSSLEngine", "()Ljavax/net/ssl/SSLEngine;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLEngine _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngine javax::net::ssl::SSLContext::createSSLEngine(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSSLEngine", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLEngine _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSessionContext javax::net::ssl::SSLContext::getServerSessionContext() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServerSessionContext", "()Ljavax/net/ssl/SSLSessionContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSessionContext _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSessionContext javax::net::ssl::SSLContext::getClientSessionContext() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientSessionContext", "()Ljavax/net/ssl/SSLSessionContext;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSessionContext _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLParameters javax::net::ssl::SSLContext::getDefaultSSLParameters() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultSSLParameters", "()Ljavax/net/ssl/SSLParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLParameters _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLParameters javax::net::ssl::SSLContext::getSupportedSSLParameters() const {
    if (!::javax::net::ssl::SSLContext::_class) ::javax::net::ssl::SSLContext::_class = java::fetch_class("javax/net/ssl/SSLContext");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedSSLParameters", "()Ljavax/net/ssl/SSLParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLParameters _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLProtocolException::SSLProtocolException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::net::ssl::SSLException((jobject)0) {
    if (!::javax::net::ssl::SSLProtocolException::_class) ::javax::net::ssl::SSLProtocolException::_class = java::fetch_class("javax/net/ssl/SSLProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLKeyException::SSLKeyException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::net::ssl::SSLException((jobject)0) {
    if (!::javax::net::ssl::SSLKeyException::_class) ::javax::net::ssl::SSLKeyException::_class = java::fetch_class("javax/net/ssl/SSLKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void javax::net::ssl::SSLSessionBindingListener::valueBound(const ::javax::net::ssl::SSLSessionBindingEvent& arg0) const {
    if (!::javax::net::ssl::SSLSessionBindingListener::_class) ::javax::net::ssl::SSLSessionBindingListener::_class = java::fetch_class("javax/net/ssl/SSLSessionBindingListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueBound", "(Ljavax/net/ssl/SSLSessionBindingEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLSessionBindingListener::valueUnbound(const ::javax::net::ssl::SSLSessionBindingEvent& arg0) const {
    if (!::javax::net::ssl::SSLSessionBindingListener::_class) ::javax::net::ssl::SSLSessionBindingListener::_class = java::fetch_class("javax/net/ssl/SSLSessionBindingListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "valueUnbound", "(Ljavax/net/ssl/SSLSessionBindingEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLEngineResult::SSLEngineResult(const ::javax::net::ssl::SSLEngineResult_Status& arg0, const ::javax::net::ssl::SSLEngineResult_HandshakeStatus& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::SSLEngineResult::_class) ::javax::net::ssl::SSLEngineResult::_class = java::fetch_class("javax/net/ssl/SSLEngineResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::javax::net::ssl::SSLEngineResult_Status javax::net::ssl::SSLEngineResult::getStatus() const {
    if (!::javax::net::ssl::SSLEngineResult::_class) ::javax::net::ssl::SSLEngineResult::_class = java::fetch_class("javax/net/ssl/SSLEngineResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatus", "()Ljavax/net/ssl/SSLEngineResult$Status;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLEngineResult_Status _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngineResult_HandshakeStatus javax::net::ssl::SSLEngineResult::getHandshakeStatus() const {
    if (!::javax::net::ssl::SSLEngineResult::_class) ::javax::net::ssl::SSLEngineResult::_class = java::fetch_class("javax/net/ssl/SSLEngineResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHandshakeStatus", "()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLEngineResult_HandshakeStatus _ret(ret);
    return _ret;
}

int32_t javax::net::ssl::SSLEngineResult::bytesConsumed() const {
    if (!::javax::net::ssl::SSLEngineResult::_class) ::javax::net::ssl::SSLEngineResult::_class = java::fetch_class("javax/net/ssl/SSLEngineResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "bytesConsumed", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t javax::net::ssl::SSLEngineResult::bytesProduced() const {
    if (!::javax::net::ssl::SSLEngineResult::_class) ::javax::net::ssl::SSLEngineResult::_class = java::fetch_class("javax/net/ssl/SSLEngineResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "bytesProduced", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String javax::net::ssl::SSLEngineResult::toString() const {
    if (!::javax::net::ssl::SSLEngineResult::_class) ::javax::net::ssl::SSLEngineResult::_class = java::fetch_class("javax/net/ssl/SSLEngineResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::javax::net::ssl::SSLEngineResult_HandshakeStatus> javax::net::ssl::SSLEngineResult_HandshakeStatus::values(){
    if (!::javax::net::ssl::SSLEngineResult_HandshakeStatus::_class) ::javax::net::ssl::SSLEngineResult_HandshakeStatus::_class = java::fetch_class("javax/net/ssl/SSLEngineResult$HandshakeStatus");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::javax::net::ssl::SSLEngineResult_HandshakeStatus> _ret(rets, ::javax::net::ssl::SSLEngineResult_HandshakeStatus((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::javax::net::ssl::SSLEngineResult_HandshakeStatus retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::javax::net::ssl::SSLEngineResult_HandshakeStatus javax::net::ssl::SSLEngineResult_HandshakeStatus::valueOf(const ::java::lang::String& arg0){
    if (!::javax::net::ssl::SSLEngineResult_HandshakeStatus::_class) ::javax::net::ssl::SSLEngineResult_HandshakeStatus::_class = java::fetch_class("javax/net/ssl/SSLEngineResult$HandshakeStatus");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::net::ssl::SSLEngineResult_HandshakeStatus _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLParameters::SSLParameters() : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLParameters::SSLParameters(const std::vector< ::java::lang::String>& arg0) : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLParameters::SSLParameters(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/lang/String;[Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::String> javax::net::ssl::SSLParameters::getCipherSuites() const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLParameters::setCipherSuites(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCipherSuites", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> javax::net::ssl::SSLParameters::getProtocols() const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLParameters::setProtocols(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProtocols", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLParameters::getNeedClientAuth() const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNeedClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLParameters::setNeedClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeedClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLParameters::getWantClientAuth() const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLParameters::setWantClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLParameters::_class) ::javax::net::ssl::SSLParameters::_class = java::fetch_class("javax/net/ssl/SSLParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWantClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::HandshakeCompletedListener::handshakeCompleted(const ::javax::net::ssl::HandshakeCompletedEvent& arg0) const {
    if (!::javax::net::ssl::HandshakeCompletedListener::_class) ::javax::net::ssl::HandshakeCompletedListener::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "handshakeCompleted", "(Ljavax/net/ssl/HandshakeCompletedEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::net::ServerSocketFactory javax::net::ssl::SSLServerSocketFactory::getDefault(){
    if (!::javax::net::ssl::SSLServerSocketFactory::_class) ::javax::net::ssl::SSLServerSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLServerSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljavax/net/ServerSocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::ServerSocketFactory _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLServerSocketFactory::getDefaultCipherSuites() const {
    if (!::javax::net::ssl::SSLServerSocketFactory::_class) ::javax::net::ssl::SSLServerSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLServerSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLServerSocketFactory::getSupportedCipherSuites() const {
    if (!::javax::net::ssl::SSLServerSocketFactory::_class) ::javax::net::ssl::SSLServerSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLServerSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::javax::net::ssl::SSLEngineResult_Status> javax::net::ssl::SSLEngineResult_Status::values(){
    if (!::javax::net::ssl::SSLEngineResult_Status::_class) ::javax::net::ssl::SSLEngineResult_Status::_class = java::fetch_class("javax/net/ssl/SSLEngineResult$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljavax/net/ssl/SSLEngineResult$Status;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::javax::net::ssl::SSLEngineResult_Status> _ret(rets, ::javax::net::ssl::SSLEngineResult_Status((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::javax::net::ssl::SSLEngineResult_Status retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::javax::net::ssl::SSLEngineResult_Status javax::net::ssl::SSLEngineResult_Status::valueOf(const ::java::lang::String& arg0){
    if (!::javax::net::ssl::SSLEngineResult_Status::_class) ::javax::net::ssl::SSLEngineResult_Status::_class = java::fetch_class("javax/net/ssl/SSLEngineResult$Status");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::net::ssl::SSLEngineResult_Status _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::HandshakeCompletedEvent::HandshakeCompletedEvent(const ::javax::net::ssl::SSLSocket& arg0, const ::javax::net::ssl::SSLSession& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::javax::net::ssl::SSLSession javax::net::ssl::HandshakeCompletedEvent::getSession() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSession", "()Ljavax/net/ssl/SSLSession;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::HandshakeCompletedEvent::getCipherSuite() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCipherSuite", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> javax::net::ssl::HandshakeCompletedEvent::getLocalCertificates() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalCertificates", "()[Ljava/security/cert/Certificate;");
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

std::vector< ::java::security::cert::Certificate> javax::net::ssl::HandshakeCompletedEvent::getPeerCertificates() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerCertificates", "()[Ljava/security/cert/Certificate;");
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

std::vector< ::javax::security::cert::X509Certificate> javax::net::ssl::HandshakeCompletedEvent::getPeerCertificateChain() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerCertificateChain", "()[Ljavax/security/cert/X509Certificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::javax::security::cert::X509Certificate> _ret(rets, ::javax::security::cert::X509Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::javax::security::cert::X509Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::Principal javax::net::ssl::HandshakeCompletedEvent::getPeerPrincipal() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::security::Principal javax::net::ssl::HandshakeCompletedEvent::getLocalPrincipal() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSocket javax::net::ssl::HandshakeCompletedEvent::getSocket() const {
    if (!::javax::net::ssl::HandshakeCompletedEvent::_class) ::javax::net::ssl::HandshakeCompletedEvent::_class = java::fetch_class("javax/net/ssl/HandshakeCompletedEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocket", "()Ljavax/net/ssl/SSLSocket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSocket _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLContextSpi::SSLContextSpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::SSLContextSpi::_class) ::javax::net::ssl::SSLContextSpi::_class = java::fetch_class("javax/net/ssl/SSLContextSpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String javax::net::ssl::TrustManagerFactory::getDefaultAlgorithm(){
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::net::ssl::TrustManagerFactory javax::net::ssl::TrustManagerFactory::getInstance(const ::java::lang::String& arg0){
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::net::ssl::TrustManagerFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::TrustManagerFactory javax::net::ssl::TrustManagerFactory::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::TrustManagerFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::TrustManagerFactory javax::net::ssl::TrustManagerFactory::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::TrustManagerFactory _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::TrustManagerFactory::getAlgorithm() const {
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::net::ssl::TrustManagerFactory::getProvider() const {
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

void javax::net::ssl::TrustManagerFactory::init(const ::java::security::KeyStore& arg0) const {
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/KeyStore;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::TrustManagerFactory::init(const ::javax::net::ssl::ManagerFactoryParameters& arg0) const {
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljavax/net/ssl/ManagerFactoryParameters;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::javax::net::ssl::TrustManager> javax::net::ssl::TrustManagerFactory::getTrustManagers() const {
    if (!::javax::net::ssl::TrustManagerFactory::_class) ::javax::net::ssl::TrustManagerFactory::_class = java::fetch_class("javax/net/ssl/TrustManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrustManagers", "()[Ljavax/net/ssl/TrustManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::javax::net::ssl::TrustManager> _ret(rets, ::javax::net::ssl::TrustManager((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::javax::net::ssl::TrustManager retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String javax::net::ssl::KeyManagerFactory::getDefaultAlgorithm(){
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::net::ssl::KeyManagerFactory javax::net::ssl::KeyManagerFactory::getInstance(const ::java::lang::String& arg0){
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::net::ssl::KeyManagerFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::KeyManagerFactory javax::net::ssl::KeyManagerFactory::getInstance(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/KeyManagerFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::KeyManagerFactory _ret(ret);
    return _ret;
}

::javax::net::ssl::KeyManagerFactory javax::net::ssl::KeyManagerFactory::getInstance(const ::java::lang::String& arg0, const ::java::security::Provider& arg1){
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/KeyManagerFactory;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::javax::net::ssl::KeyManagerFactory _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::KeyManagerFactory::getAlgorithm() const {
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlgorithm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::security::Provider javax::net::ssl::KeyManagerFactory::getProvider() const {
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/security/Provider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Provider _ret(ret);
    return _ret;
}

void javax::net::ssl::KeyManagerFactory::init(const ::java::security::KeyStore& arg0, const std::vector< uint16_t>& arg1) const {
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljava/security/KeyStore;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void javax::net::ssl::KeyManagerFactory::init(const ::javax::net::ssl::ManagerFactoryParameters& arg0) const {
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(Ljavax/net/ssl/ManagerFactoryParameters;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::javax::net::ssl::KeyManager> javax::net::ssl::KeyManagerFactory::getKeyManagers() const {
    if (!::javax::net::ssl::KeyManagerFactory::_class) ::javax::net::ssl::KeyManagerFactory::_class = java::fetch_class("javax/net/ssl/KeyManagerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyManagers", "()[Ljavax/net/ssl/KeyManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::javax::net::ssl::KeyManager> _ret(rets, ::javax::net::ssl::KeyManager((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::javax::net::ssl::KeyManager retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::KeyManagerFactorySpi::KeyManagerFactorySpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::KeyManagerFactorySpi::_class) ::javax::net::ssl::KeyManagerFactorySpi::_class = java::fetch_class("javax/net/ssl/KeyManagerFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::KeyStoreBuilderParameters::KeyStoreBuilderParameters(const ::java::security::KeyStore_Builder& arg0) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {
    if (!::javax::net::ssl::KeyStoreBuilderParameters::_class) ::javax::net::ssl::KeyStoreBuilderParameters::_class = java::fetch_class("javax/net/ssl/KeyStoreBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyStore$Builder;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::KeyStoreBuilderParameters::KeyStoreBuilderParameters(const ::java::util::List& arg0) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {
    if (!::javax::net::ssl::KeyStoreBuilderParameters::_class) ::javax::net::ssl::KeyStoreBuilderParameters::_class = java::fetch_class("javax/net/ssl/KeyStoreBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::List javax::net::ssl::KeyStoreBuilderParameters::getParameters() const {
    if (!::javax::net::ssl::KeyStoreBuilderParameters::_class) ::javax::net::ssl::KeyStoreBuilderParameters::_class = java::fetch_class("javax/net/ssl/KeyStoreBuilderParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::CertPathTrustManagerParameters::CertPathTrustManagerParameters(const ::java::security::cert::CertPathParameters& arg0) : ::java::lang::Object((jobject)0), ::javax::net::ssl::ManagerFactoryParameters((jobject)0) {
    if (!::javax::net::ssl::CertPathTrustManagerParameters::_class) ::javax::net::ssl::CertPathTrustManagerParameters::_class = java::fetch_class("javax/net/ssl/CertPathTrustManagerParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/cert/CertPathParameters;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::security::cert::CertPathParameters javax::net::ssl::CertPathTrustManagerParameters::getParameters() const {
    if (!::javax::net::ssl::CertPathTrustManagerParameters::_class) ::javax::net::ssl::CertPathTrustManagerParameters::_class = java::fetch_class("javax/net/ssl/CertPathTrustManagerParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Ljava/security/cert/CertPathParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::cert::CertPathParameters _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLHandshakeException::SSLHandshakeException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::javax::net::ssl::SSLException((jobject)0) {
    if (!::javax::net::ssl::SSLHandshakeException::_class) ::javax::net::ssl::SSLHandshakeException::_class = java::fetch_class("javax/net/ssl/SSLHandshakeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::String> javax::net::ssl::SSLServerSocket::getEnabledCipherSuites() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLServerSocket::setEnabledCipherSuites(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabledCipherSuites", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> javax::net::ssl::SSLServerSocket::getSupportedCipherSuites() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLServerSocket::getSupportedProtocols() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLServerSocket::getEnabledProtocols() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLServerSocket::setEnabledProtocols(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabledProtocols", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLServerSocket::setNeedClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeedClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLServerSocket::getNeedClientAuth() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNeedClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLServerSocket::setWantClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWantClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLServerSocket::getWantClientAuth() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLServerSocket::setUseClientMode(bool arg0) const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseClientMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLServerSocket::getUseClientMode() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseClientMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLServerSocket::setEnableSessionCreation(bool arg0) const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnableSessionCreation", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLServerSocket::getEnableSessionCreation() const {
    if (!::javax::net::ssl::SSLServerSocket::_class) ::javax::net::ssl::SSLServerSocket::_class = java::fetch_class("javax/net/ssl/SSLServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnableSessionCreation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::TrustManagerFactorySpi::TrustManagerFactorySpi() : ::java::lang::Object((jobject)0) {
    if (!::javax::net::ssl::TrustManagerFactorySpi::_class) ::javax::net::ssl::TrustManagerFactorySpi::_class = java::fetch_class("javax/net/ssl/TrustManagerFactorySpi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLPermission::SSLPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::javax::net::ssl::SSLPermission::_class) ::javax::net::ssl::SSLPermission::_class = java::fetch_class("javax/net/ssl/SSLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLPermission::SSLPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::javax::net::ssl::SSLPermission::_class) ::javax::net::ssl::SSLPermission::_class = java::fetch_class("javax/net/ssl/SSLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::net::ssl::SSLPermission::getActions() const {
    if (!::javax::net::ssl::SSLPermission::_class) ::javax::net::ssl::SSLPermission::_class = java::fetch_class("javax/net/ssl/SSLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::net::ssl::SSLPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::javax::net::ssl::SSLPermission::_class) ::javax::net::ssl::SSLPermission::_class = java::fetch_class("javax/net/ssl/SSLPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String javax::net::ssl::SSLEngine::getPeerHost() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t javax::net::ssl::SSLEngine::getPeerPort() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void javax::net::ssl::SSLEngine::beginHandshake() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginHandshake", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::net::ssl::SSLEngine::closeInbound() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeInbound", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::net::ssl::SSLEngine::closeOutbound() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeOutbound", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Runnable javax::net::ssl::SSLEngine::getDelegatedTask() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDelegatedTask", "()Ljava/lang/Runnable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Runnable _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLEngine::getEnabledCipherSuites() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLEngine::getEnabledProtocols() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool javax::net::ssl::SSLEngine::getEnableSessionCreation() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnableSessionCreation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::javax::net::ssl::SSLEngineResult_HandshakeStatus javax::net::ssl::SSLEngine::getHandshakeStatus() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHandshakeStatus", "()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLEngineResult_HandshakeStatus _ret(ret);
    return _ret;
}

bool javax::net::ssl::SSLEngine::getNeedClientAuth() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNeedClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::javax::net::ssl::SSLSession javax::net::ssl::SSLEngine::getSession() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSession", "()Ljavax/net/ssl/SSLSession;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLEngine::getSupportedCipherSuites() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLEngine::getSupportedProtocols() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool javax::net::ssl::SSLEngine::getUseClientMode() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseClientMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::net::ssl::SSLEngine::getWantClientAuth() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::net::ssl::SSLEngine::isInboundDone() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInboundDone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::net::ssl::SSLEngine::isOutboundDone() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOutboundDone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLEngine::setEnabledCipherSuites(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabledCipherSuites", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLEngine::setEnabledProtocols(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabledProtocols", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLEngine::setEnableSessionCreation(bool arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnableSessionCreation", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLEngine::setNeedClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeedClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLEngine::setUseClientMode(bool arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseClientMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLEngine::setWantClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWantClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::net::ssl::SSLEngineResult javax::net::ssl::SSLEngine::unwrap(const ::java::nio::ByteBuffer& arg0, const std::vector< ::java::nio::ByteBuffer>& arg1, int32_t arg2, int32_t arg3) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "unwrap", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::nio::ByteBuffer& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::net::ssl::SSLEngineResult _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngineResult javax::net::ssl::SSLEngine::wrap(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2, const ::java::nio::ByteBuffer& arg3) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::javax::net::ssl::SSLEngineResult _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngineResult javax::net::ssl::SSLEngine::unwrap(const ::java::nio::ByteBuffer& arg0, const ::java::nio::ByteBuffer& arg1) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "unwrap", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLEngineResult _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngineResult javax::net::ssl::SSLEngine::unwrap(const ::java::nio::ByteBuffer& arg0, const std::vector< ::java::nio::ByteBuffer>& arg1) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "unwrap", "(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::nio::ByteBuffer& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLEngineResult _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngineResult javax::net::ssl::SSLEngine::wrap(const std::vector< ::java::nio::ByteBuffer>& arg0, const ::java::nio::ByteBuffer& arg1) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLEngineResult _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLEngineResult javax::net::ssl::SSLEngine::wrap(const ::java::nio::ByteBuffer& arg0, const ::java::nio::ByteBuffer& arg1) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "wrap", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::javax::net::ssl::SSLEngineResult _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLParameters javax::net::ssl::SSLEngine::getSSLParameters() const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSSLParameters", "()Ljavax/net/ssl/SSLParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLParameters _ret(ret);
    return _ret;
}

void javax::net::ssl::SSLEngine::setSSLParameters(const ::javax::net::ssl::SSLParameters& arg0) const {
    if (!::javax::net::ssl::SSLEngine::_class) ::javax::net::ssl::SSLEngine::_class = java::fetch_class("javax/net/ssl/SSLEngine");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLSocket::shutdownInput() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::net::ssl::SSLSocket::shutdownOutput() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownOutput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSocket::getSupportedCipherSuites() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSocket::getEnabledCipherSuites() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLSocket::setEnabledCipherSuites(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabledCipherSuites", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSocket::getSupportedProtocols() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSocket::getEnabledProtocols() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledProtocols", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void javax::net::ssl::SSLSocket::setEnabledProtocols(const std::vector< ::java::lang::String>& arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabledProtocols", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::javax::net::ssl::SSLSession javax::net::ssl::SSLSocket::getSession() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSession", "()Ljavax/net/ssl/SSLSession;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

void javax::net::ssl::SSLSocket::addHandshakeCompletedListener(const ::javax::net::ssl::HandshakeCompletedListener& arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLSocket::removeHandshakeCompletedListener(const ::javax::net::ssl::HandshakeCompletedListener& arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLSocket::startHandshake() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "startHandshake", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void javax::net::ssl::SSLSocket::setUseClientMode(bool arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseClientMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLSocket::getUseClientMode() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseClientMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLSocket::setNeedClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeedClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void javax::net::ssl::SSLSocket::setWantClientAuth(bool arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWantClientAuth", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLSocket::getNeedClientAuth() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNeedClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool javax::net::ssl::SSLSocket::getWantClientAuth() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWantClientAuth", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void javax::net::ssl::SSLSocket::setEnableSessionCreation(bool arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnableSessionCreation", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool javax::net::ssl::SSLSocket::getEnableSessionCreation() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnableSessionCreation", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::javax::net::ssl::SSLParameters javax::net::ssl::SSLSocket::getSSLParameters() const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSSLParameters", "()Ljavax/net/ssl/SSLParameters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLParameters _ret(ret);
    return _ret;
}

void javax::net::ssl::SSLSocket::setSSLParameters(const ::javax::net::ssl::SSLParameters& arg0) const {
    if (!::javax::net::ssl::SSLSocket::_class) ::javax::net::ssl::SSLSocket::_class = java::fetch_class("javax/net/ssl/SSLSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLSocketFactory::SSLSocketFactory() : ::java::lang::Object((jobject)0), ::javax::net::SocketFactory((jobject)0) {
    if (!::javax::net::ssl::SSLSocketFactory::_class) ::javax::net::ssl::SSLSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::javax::net::SocketFactory javax::net::ssl::SSLSocketFactory::getDefault(){
    if (!::javax::net::ssl::SSLSocketFactory::_class) ::javax::net::ssl::SSLSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljavax/net/SocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::SocketFactory _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSocketFactory::getDefaultCipherSuites() const {
    if (!::javax::net::ssl::SSLSocketFactory::_class) ::javax::net::ssl::SSLSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::SSLSocketFactory::getSupportedCipherSuites() const {
    if (!::javax::net::ssl::SSLSocketFactory::_class) ::javax::net::ssl::SSLSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportedCipherSuites", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::net::Socket javax::net::ssl::SSLSocketFactory::createSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, bool arg3) const {
    if (!::javax::net::ssl::SSLSocketFactory::_class) ::javax::net::ssl::SSLSocketFactory::_class = java::fetch_class("javax/net/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::net::ssl::SSLSessionBindingEvent::SSLSessionBindingEvent(const ::javax::net::ssl::SSLSession& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::EventObject((jobject)0) {
    if (!::javax::net::ssl::SSLSessionBindingEvent::_class) ::javax::net::ssl::SSLSessionBindingEvent::_class = java::fetch_class("javax/net/ssl/SSLSessionBindingEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::net::ssl::SSLSessionBindingEvent::getName() const {
    if (!::javax::net::ssl::SSLSessionBindingEvent::_class) ::javax::net::ssl::SSLSessionBindingEvent::_class = java::fetch_class("javax/net/ssl/SSLSessionBindingEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::net::ssl::SSLSession javax::net::ssl::SSLSessionBindingEvent::getSession() const {
    if (!::javax::net::ssl::SSLSessionBindingEvent::_class) ::javax::net::ssl::SSLSessionBindingEvent::_class = java::fetch_class("javax/net/ssl/SSLSessionBindingEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSession", "()Ljavax/net/ssl/SSLSession;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::net::ssl::SSLSession _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::X509KeyManager::chooseClientAlias(const std::vector< ::java::lang::String>& arg0, const std::vector< ::java::security::Principal>& arg1, const ::java::net::Socket& arg2) const {
    if (!::javax::net::ssl::X509KeyManager::_class) ::javax::net::ssl::X509KeyManager::_class = java::fetch_class("javax/net/ssl/X509KeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseClientAlias", "([Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::Principal& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::net::ssl::X509KeyManager::chooseServerAlias(const ::java::lang::String& arg0, const std::vector< ::java::security::Principal>& arg1, const ::java::net::Socket& arg2) const {
    if (!::javax::net::ssl::X509KeyManager::_class) ::javax::net::ssl::X509KeyManager::_class = java::fetch_class("javax/net/ssl/X509KeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseServerAlias", "(Ljava/lang/String;[Ljava/security/Principal;Ljava/net/Socket;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::Principal& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::X509Certificate> javax::net::ssl::X509KeyManager::getCertificateChain(const ::java::lang::String& arg0) const {
    if (!::javax::net::ssl::X509KeyManager::_class) ::javax::net::ssl::X509KeyManager::_class = java::fetch_class("javax/net/ssl/X509KeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificateChain", "(Ljava/lang/String;)[Ljava/security/cert/X509Certificate;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::cert::X509Certificate> _ret(rets, ::java::security::cert::X509Certificate((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::cert::X509Certificate retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::X509KeyManager::getClientAliases(const ::java::lang::String& arg0, const std::vector< ::java::security::Principal>& arg1) const {
    if (!::javax::net::ssl::X509KeyManager::_class) ::javax::net::ssl::X509KeyManager::_class = java::fetch_class("javax/net/ssl/X509KeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClientAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::Principal& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> javax::net::ssl::X509KeyManager::getServerAliases(const ::java::lang::String& arg0, const std::vector< ::java::security::Principal>& arg1) const {
    if (!::javax::net::ssl::X509KeyManager::_class) ::javax::net::ssl::X509KeyManager::_class = java::fetch_class("javax/net/ssl/X509KeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServerAliases", "(Ljava/lang/String;[Ljava/security/Principal;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::security::Principal::_class) ::java::security::Principal::_class = java::fetch_class("java/security/Principal");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::Principal::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::Principal& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::security::PrivateKey javax::net::ssl::X509KeyManager::getPrivateKey(const ::java::lang::String& arg0) const {
    if (!::javax::net::ssl::X509KeyManager::_class) ::javax::net::ssl::X509KeyManager::_class = java::fetch_class("javax/net/ssl/X509KeyManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateKey", "(Ljava/lang/String;)Ljava/security/PrivateKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::security::PrivateKey _ret(ret);
    return _ret;
}


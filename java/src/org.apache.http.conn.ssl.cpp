#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.Socket.hpp"
#include "java.security.KeyStore.hpp"
#include "java.security.SecureRandom.hpp"
#include "java.security.cert.X509Certificate.hpp"
#include "javax.net.ssl.SSLSession.hpp"
#include "javax.net.ssl.SSLSocket.hpp"
#include "org.apache.http.conn.scheme.HostNameResolver.hpp"
#include "org.apache.http.conn.ssl.AbstractVerifier.hpp"
#include "org.apache.http.conn.ssl.AllowAllHostnameVerifier.hpp"
#include "org.apache.http.conn.ssl.BrowserCompatHostnameVerifier.hpp"
#include "org.apache.http.conn.ssl.SSLSocketFactory.hpp"
#include "org.apache.http.conn.ssl.StrictHostnameVerifier.hpp"
#include "org.apache.http.conn.ssl.X509HostnameVerifier.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class = nullptr;
jclass org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class = nullptr;
jclass org::apache::http::conn::ssl::AbstractVerifier::_class = nullptr;
jclass org::apache::http::conn::ssl::SSLSocketFactory::_class = nullptr;
jclass org::apache::http::conn::ssl::X509HostnameVerifier::_class = nullptr;
jclass org::apache::http::conn::ssl::StrictHostnameVerifier::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::AllowAllHostnameVerifier::AllowAllHostnameVerifier() : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::AbstractVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {
    if (!::org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class) ::org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AllowAllHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::ssl::AllowAllHostnameVerifier::verify(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class) ::org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AllowAllHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::apache::http::conn::ssl::AllowAllHostnameVerifier::toString() const {
    if (!::org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class) ::org::apache::http::conn::ssl::AllowAllHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AllowAllHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier() : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::AbstractVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {
    if (!::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class) ::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/BrowserCompatHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::verify(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class) ::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/BrowserCompatHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::toString() const {
    if (!::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class) ::org::apache::http::conn::ssl::BrowserCompatHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/BrowserCompatHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::AbstractVerifier::AbstractVerifier() : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::ssl::AbstractVerifier::verify(const ::java::lang::String& arg0, const ::javax::net::ssl::SSLSocket& arg1) const {
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::apache::http::conn::ssl::AbstractVerifier::verify(const ::java::lang::String& arg0, const ::javax::net::ssl::SSLSession& arg1) const {
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(const ::java::lang::String& arg0, const ::java::security::cert::X509Certificate& arg1) const {
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::String>& arg2, bool arg3) const {
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool org::apache::http::conn::ssl::AbstractVerifier::acceptableCountryWildcard(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "acceptableCountryWildcard", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

std::vector< ::java::lang::String> org::apache::http::conn::ssl::AbstractVerifier::getCNs(const ::java::security::cert::X509Certificate& arg0){
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCNs", "(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> org::apache::http::conn::ssl::AbstractVerifier::getDNSSubjectAlts(const ::java::security::cert::X509Certificate& arg0){
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDNSSubjectAlts", "(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t org::apache::http::conn::ssl::AbstractVerifier::countDots(const ::java::lang::String& arg0){
    if (!::org::apache::http::conn::ssl::AbstractVerifier::_class) ::org::apache::http::conn::ssl::AbstractVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/AbstractVerifier");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "countDots", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::SSLSocketFactory::SSLSocketFactory(const ::java::lang::String& arg0, const ::java::security::KeyStore& arg1, const ::java::lang::String& arg2, const ::java::security::KeyStore& arg3, const ::java::security::SecureRandom& arg4, const ::org::apache::http::conn::scheme::HostNameResolver& arg5) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::LayeredSocketFactory((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;Ljava/security/SecureRandom;Lorg/apache/http/conn/scheme/HostNameResolver;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::SSLSocketFactory::SSLSocketFactory(const ::java::security::KeyStore& arg0, const ::java::lang::String& arg1, const ::java::security::KeyStore& arg2) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::LayeredSocketFactory((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::SSLSocketFactory::SSLSocketFactory(const ::java::security::KeyStore& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::LayeredSocketFactory((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyStore;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::SSLSocketFactory::SSLSocketFactory(const ::java::security::KeyStore& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::LayeredSocketFactory((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/security/KeyStore;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::ssl::SSLSocketFactory org::apache::http::conn::ssl::SSLSocketFactory::getSocketFactory(){
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSocketFactory", "()Lorg/apache/http/conn/ssl/SSLSocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::apache::http::conn::ssl::SSLSocketFactory _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::ssl::SSLSocketFactory::createSocket() const {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::ssl::SSLSocketFactory::connectSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::net::InetAddress& arg3, int32_t arg4, const ::org::apache::http::params::HttpParams& arg5) const {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectSocket", "(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::net::Socket _ret(ret);
    return _ret;
}

bool org::apache::http::conn::ssl::SSLSocketFactory::isSecure(const ::java::net::Socket& arg0) const {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "(Ljava/net/Socket;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::net::Socket org::apache::http::conn::ssl::SSLSocketFactory::createSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, bool arg3) const {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

void org::apache::http::conn::ssl::SSLSocketFactory::setHostnameVerifier(const ::org::apache::http::conn::ssl::X509HostnameVerifier& arg0) const {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHostnameVerifier", "(Lorg/apache/http/conn/ssl/X509HostnameVerifier;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::apache::http::conn::ssl::X509HostnameVerifier org::apache::http::conn::ssl::SSLSocketFactory::getHostnameVerifier() const {
    if (!::org::apache::http::conn::ssl::SSLSocketFactory::_class) ::org::apache::http::conn::ssl::SSLSocketFactory::_class = java::fetch_class("org/apache/http/conn/ssl/SSLSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHostnameVerifier", "()Lorg/apache/http/conn/ssl/X509HostnameVerifier;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::ssl::X509HostnameVerifier _ret(ret);
    return _ret;
}

bool org::apache::http::conn::ssl::X509HostnameVerifier::verify(const ::java::lang::String& arg0, const ::javax::net::ssl::SSLSession& arg1) const {
    if (!::org::apache::http::conn::ssl::X509HostnameVerifier::_class) ::org::apache::http::conn::ssl::X509HostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/X509HostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ssl::X509HostnameVerifier::verify(const ::java::lang::String& arg0, const ::javax::net::ssl::SSLSocket& arg1) const {
    if (!::org::apache::http::conn::ssl::X509HostnameVerifier::_class) ::org::apache::http::conn::ssl::X509HostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/X509HostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ssl::X509HostnameVerifier::verify(const ::java::lang::String& arg0, const ::java::security::cert::X509Certificate& arg1) const {
    if (!::org::apache::http::conn::ssl::X509HostnameVerifier::_class) ::org::apache::http::conn::ssl::X509HostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/X509HostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::apache::http::conn::ssl::X509HostnameVerifier::verify(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::org::apache::http::conn::ssl::X509HostnameVerifier::_class) ::org::apache::http::conn::ssl::X509HostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/X509HostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::ssl::StrictHostnameVerifier::StrictHostnameVerifier() : ::java::lang::Object((jobject)0), ::javax::net::ssl::HostnameVerifier((jobject)0), ::org::apache::http::conn::ssl::AbstractVerifier((jobject)0), ::org::apache::http::conn::ssl::X509HostnameVerifier((jobject)0) {
    if (!::org::apache::http::conn::ssl::StrictHostnameVerifier::_class) ::org::apache::http::conn::ssl::StrictHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/StrictHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::apache::http::conn::ssl::StrictHostnameVerifier::verify(const ::java::lang::String& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::org::apache::http::conn::ssl::StrictHostnameVerifier::_class) ::org::apache::http::conn::ssl::StrictHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/StrictHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "verify", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::apache::http::conn::ssl::StrictHostnameVerifier::toString() const {
    if (!::org::apache::http::conn::ssl::StrictHostnameVerifier::_class) ::org::apache::http::conn::ssl::StrictHostnameVerifier::_class = java::fetch_class("org/apache/http/conn/ssl/StrictHostnameVerifier");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}


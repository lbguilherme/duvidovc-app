#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.Socket.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "org.apache.http.HttpHost.hpp"
#include "org.apache.http.conn.scheme.HostNameResolver.hpp"
#include "org.apache.http.conn.scheme.LayeredSocketFactory.hpp"
#include "org.apache.http.conn.scheme.PlainSocketFactory.hpp"
#include "org.apache.http.conn.scheme.Scheme.hpp"
#include "org.apache.http.conn.scheme.SchemeRegistry.hpp"
#include "org.apache.http.conn.scheme.SocketFactory.hpp"
#include "org.apache.http.params.HttpParams.hpp"

jclass org::apache::http::conn::scheme::PlainSocketFactory::_class = nullptr;
jclass org::apache::http::conn::scheme::SchemeRegistry::_class = nullptr;
jclass org::apache::http::conn::scheme::HostNameResolver::_class = nullptr;
jclass org::apache::http::conn::scheme::LayeredSocketFactory::_class = nullptr;
jclass org::apache::http::conn::scheme::SocketFactory::_class = nullptr;
jclass org::apache::http::conn::scheme::Scheme::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::scheme::PlainSocketFactory::PlainSocketFactory(const ::org::apache::http::conn::scheme::HostNameResolver& arg0) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lorg/apache/http/conn/scheme/HostNameResolver;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::scheme::PlainSocketFactory::PlainSocketFactory() : ::java::lang::Object((jobject)0), ::org::apache::http::conn::scheme::SocketFactory((jobject)0) {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::scheme::PlainSocketFactory org::apache::http::conn::scheme::PlainSocketFactory::getSocketFactory(){
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSocketFactory", "()Lorg/apache/http/conn/scheme/PlainSocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::org::apache::http::conn::scheme::PlainSocketFactory _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::scheme::PlainSocketFactory::createSocket() const {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::scheme::PlainSocketFactory::connectSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::net::InetAddress& arg3, int32_t arg4, const ::org::apache::http::params::HttpParams& arg5) const {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
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

bool org::apache::http::conn::scheme::PlainSocketFactory::isSecure(const ::java::net::Socket& arg0) const {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "(Ljava/net/Socket;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::apache::http::conn::scheme::PlainSocketFactory::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::conn::scheme::PlainSocketFactory::hashCode() const {
    if (!::org::apache::http::conn::scheme::PlainSocketFactory::_class) ::org::apache::http::conn::scheme::PlainSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/PlainSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::scheme::SchemeRegistry::SchemeRegistry() : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::apache::http::conn::scheme::Scheme org::apache::http::conn::scheme::SchemeRegistry::getScheme(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScheme", "(Ljava/lang/String;)Lorg/apache/http/conn/scheme/Scheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::conn::scheme::Scheme _ret(ret);
    return _ret;
}

::org::apache::http::conn::scheme::Scheme org::apache::http::conn::scheme::SchemeRegistry::getScheme(const ::org::apache::http::HttpHost& arg0) const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScheme", "(Lorg/apache/http/HttpHost;)Lorg/apache/http/conn/scheme/Scheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::conn::scheme::Scheme _ret(ret);
    return _ret;
}

::org::apache::http::conn::scheme::Scheme org::apache::http::conn::scheme::SchemeRegistry::get(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Lorg/apache/http/conn/scheme/Scheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::conn::scheme::Scheme _ret(ret);
    return _ret;
}

::org::apache::http::conn::scheme::Scheme org::apache::http::conn::scheme::SchemeRegistry::register_(const ::org::apache::http::conn::scheme::Scheme& arg0) const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Lorg/apache/http/conn/scheme/Scheme;)Lorg/apache/http/conn/scheme/Scheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::conn::scheme::Scheme _ret(ret);
    return _ret;
}

::org::apache::http::conn::scheme::Scheme org::apache::http::conn::scheme::SchemeRegistry::unregister(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregister", "(Ljava/lang/String;)Lorg/apache/http/conn/scheme/Scheme;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::apache::http::conn::scheme::Scheme _ret(ret);
    return _ret;
}

::java::util::List org::apache::http::conn::scheme::SchemeRegistry::getSchemeNames() const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeNames", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void org::apache::http::conn::scheme::SchemeRegistry::setItems(const ::java::util::Map& arg0) const {
    if (!::org::apache::http::conn::scheme::SchemeRegistry::_class) ::org::apache::http::conn::scheme::SchemeRegistry::_class = java::fetch_class("org/apache/http/conn/scheme/SchemeRegistry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItems", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::InetAddress org::apache::http::conn::scheme::HostNameResolver::resolve(const ::java::lang::String& arg0) const {
    if (!::org::apache::http::conn::scheme::HostNameResolver::_class) ::org::apache::http::conn::scheme::HostNameResolver::_class = java::fetch_class("org/apache/http/conn/scheme/HostNameResolver");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolve", "(Ljava/lang/String;)Ljava/net/InetAddress;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::scheme::LayeredSocketFactory::createSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, bool arg3) const {
    if (!::org::apache::http::conn::scheme::LayeredSocketFactory::_class) ::org::apache::http::conn::scheme::LayeredSocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/LayeredSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::scheme::SocketFactory::createSocket() const {
    if (!::org::apache::http::conn::scheme::SocketFactory::_class) ::org::apache::http::conn::scheme::SocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket org::apache::http::conn::scheme::SocketFactory::connectSocket(const ::java::net::Socket& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::net::InetAddress& arg3, int32_t arg4, const ::org::apache::http::params::HttpParams& arg5) const {
    if (!::org::apache::http::conn::scheme::SocketFactory::_class) ::org::apache::http::conn::scheme::SocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/SocketFactory");
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

bool org::apache::http::conn::scheme::SocketFactory::isSecure(const ::java::net::Socket& arg0) const {
    if (!::org::apache::http::conn::scheme::SocketFactory::_class) ::org::apache::http::conn::scheme::SocketFactory::_class = java::fetch_class("org/apache/http/conn/scheme/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSecure", "(Ljava/net/Socket;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::apache::http::conn::scheme::Scheme::Scheme(const ::java::lang::String& arg0, const ::org::apache::http::conn::scheme::SocketFactory& arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Lorg/apache/http/conn/scheme/SocketFactory;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t org::apache::http::conn::scheme::Scheme::getDefaultPort() const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::apache::http::conn::scheme::SocketFactory org::apache::http::conn::scheme::Scheme::getSocketFactory() const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketFactory", "()Lorg/apache/http/conn/scheme/SocketFactory;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::apache::http::conn::scheme::SocketFactory _ret(ret);
    return _ret;
}

::java::lang::String org::apache::http::conn::scheme::Scheme::getName() const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::conn::scheme::Scheme::isLayered() const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLayered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t org::apache::http::conn::scheme::Scheme::resolvePort(int32_t arg0) const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolvePort", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String org::apache::http::conn::scheme::Scheme::toString() const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::apache::http::conn::scheme::Scheme::equals(const ::java::lang::Object& arg0) const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t org::apache::http::conn::scheme::Scheme::hashCode() const {
    if (!::org::apache::http::conn::scheme::Scheme::_class) ::org::apache::http::conn::scheme::Scheme::_class = java::fetch_class("org/apache/http/conn/scheme/Scheme");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}


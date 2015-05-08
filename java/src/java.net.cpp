#include "java-core.hpp"
#include <memory>
#include "java.io.IOException.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.Authenticator.hpp"
#include "java.net.BindException.hpp"
#include "java.net.CacheRequest.hpp"
#include "java.net.CacheResponse.hpp"
#include "java.net.ConnectException.hpp"
#include "java.net.ContentHandler.hpp"
#include "java.net.ContentHandlerFactory.hpp"
#include "java.net.CookieHandler.hpp"
#include "java.net.CookieManager.hpp"
#include "java.net.CookiePolicy.hpp"
#include "java.net.CookieStore.hpp"
#include "java.net.DatagramPacket.hpp"
#include "java.net.DatagramSocket.hpp"
#include "java.net.DatagramSocketImpl.hpp"
#include "java.net.DatagramSocketImplFactory.hpp"
#include "java.net.FileNameMap.hpp"
#include "java.net.HttpCookie.hpp"
#include "java.net.HttpRetryException.hpp"
#include "java.net.HttpURLConnection.hpp"
#include "java.net.IDN.hpp"
#include "java.net.Inet4Address.hpp"
#include "java.net.Inet6Address.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.InetSocketAddress.hpp"
#include "java.net.InterfaceAddress.hpp"
#include "java.net.JarURLConnection.hpp"
#include "java.net.MalformedURLException.hpp"
#include "java.net.MulticastSocket.hpp"
#include "java.net.NetPermission.hpp"
#include "java.net.NetworkInterface.hpp"
#include "java.net.NoRouteToHostException.hpp"
#include "java.net.PasswordAuthentication.hpp"
#include "java.net.PortUnreachableException.hpp"
#include "java.net.ProtocolException.hpp"
#include "java.net.Proxy.hpp"
#include "java.net.ProxySelector.hpp"
#include "java.net.ResponseCache.hpp"
#include "java.net.SecureCacheResponse.hpp"
#include "java.net.ServerSocket.hpp"
#include "java.net.Socket.hpp"
#include "java.net.SocketAddress.hpp"
#include "java.net.SocketException.hpp"
#include "java.net.SocketImpl.hpp"
#include "java.net.SocketImplFactory.hpp"
#include "java.net.SocketOptions.hpp"
#include "java.net.SocketPermission.hpp"
#include "java.net.SocketTimeoutException.hpp"
#include "java.net.URI.hpp"
#include "java.net.URISyntaxException.hpp"
#include "java.net.URL.hpp"
#include "java.net.URLClassLoader.hpp"
#include "java.net.URLConnection.hpp"
#include "java.net.URLDecoder.hpp"
#include "java.net.URLEncoder.hpp"
#include "java.net.URLStreamHandler.hpp"
#include "java.net.URLStreamHandlerFactory.hpp"
#include "java.net.UnknownHostException.hpp"
#include "java.net.UnknownServiceException.hpp"
#include "java.nio.channels.DatagramChannel.hpp"
#include "java.nio.channels.ServerSocketChannel.hpp"
#include "java.nio.channels.SocketChannel.hpp"
#include "java.security.Permission.hpp"
#include "java.security.Principal.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.jar.Attributes.hpp"
#include "java.util.jar.JarEntry.hpp"
#include "java.util.jar.JarFile.hpp"
#include "java.util.jar.Manifest.hpp"

jclass java::net::Socket::_class = nullptr;
jclass java::net::SocketImpl::_class = nullptr;
jclass java::net::SocketAddress::_class = nullptr;
jclass java::net::URLEncoder::_class = nullptr;
jclass java::net::ProxySelector::_class = nullptr;
jclass java::net::Inet4Address::_class = nullptr;
jclass java::net::PasswordAuthentication::_class = nullptr;
jclass java::net::InetSocketAddress::_class = nullptr;
jclass java::net::URL::_class = nullptr;
jclass java::net::URI::_class = nullptr;
jclass java::net::Authenticator_RequestorType::_class = nullptr;
jclass java::net::URLClassLoader::_class = nullptr;
jclass java::net::SocketPermission::_class = nullptr;
jclass java::net::Authenticator::_class = nullptr;
jclass java::net::NetPermission::_class = nullptr;
jclass java::net::DatagramPacket::_class = nullptr;
jclass java::net::NoRouteToHostException::_class = nullptr;
jclass java::net::DatagramSocketImpl::_class = nullptr;
jclass java::net::Proxy::_class = nullptr;
jclass java::net::BindException::_class = nullptr;
jclass java::net::UnknownServiceException::_class = nullptr;
jclass java::net::DatagramSocketImplFactory::_class = nullptr;
jclass java::net::SocketTimeoutException::_class = nullptr;
jclass java::net::Inet6Address::_class = nullptr;
jclass java::net::Proxy_Type::_class = nullptr;
jclass java::net::URLStreamHandler::_class = nullptr;
jclass java::net::URLDecoder::_class = nullptr;
jclass java::net::InetAddress::_class = nullptr;
jclass java::net::CacheResponse::_class = nullptr;
jclass java::net::URISyntaxException::_class = nullptr;
jclass java::net::ProtocolException::_class = nullptr;
jclass java::net::ContentHandler::_class = nullptr;
jclass java::net::InterfaceAddress::_class = nullptr;
jclass java::net::CookieStore::_class = nullptr;
jclass java::net::URLStreamHandlerFactory::_class = nullptr;
jclass java::net::SocketImplFactory::_class = nullptr;
jclass java::net::ContentHandlerFactory::_class = nullptr;
jclass java::net::HttpRetryException::_class = nullptr;
jclass java::net::DatagramSocket::_class = nullptr;
jclass java::net::MalformedURLException::_class = nullptr;
jclass java::net::SocketException::_class = nullptr;
jclass java::net::IDN::_class = nullptr;
jclass java::net::SecureCacheResponse::_class = nullptr;
jclass java::net::SocketOptions::_class = nullptr;
jclass java::net::URLConnection::_class = nullptr;
jclass java::net::CookieHandler::_class = nullptr;
jclass java::net::PortUnreachableException::_class = nullptr;
jclass java::net::CookieManager::_class = nullptr;
jclass java::net::CacheRequest::_class = nullptr;
jclass java::net::MulticastSocket::_class = nullptr;
jclass java::net::JarURLConnection::_class = nullptr;
jclass java::net::ServerSocket::_class = nullptr;
jclass java::net::HttpURLConnection::_class = nullptr;
jclass java::net::ConnectException::_class = nullptr;
jclass java::net::NetworkInterface::_class = nullptr;
jclass java::net::HttpCookie::_class = nullptr;
jclass java::net::UnknownHostException::_class = nullptr;
jclass java::net::ResponseCache::_class = nullptr;
jclass java::net::CookiePolicy::_class = nullptr;
jclass java::net::FileNameMap::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket() : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::net::Proxy& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/Proxy;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::lang::String& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/net/InetAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::lang::String& arg0, int32_t arg1, bool arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::net::InetAddress& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/InetAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::net::InetAddress& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Socket::Socket(const ::java::net::InetAddress& arg0, int32_t arg1, bool arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/InetAddress;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void java::net::Socket::close() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::net::InetAddress java::net::Socket::getInetAddress() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInetAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::io::InputStream java::net::Socket::getInputStream() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

bool java::net::Socket::getKeepAlive() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeepAlive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::InetAddress java::net::Socket::getLocalAddress() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t java::net::Socket::getLocalPort() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::io::OutputStream java::net::Socket::getOutputStream() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

int32_t java::net::Socket::getPort() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::Socket::getSoLinger() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoLinger", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::Socket::getReceiveBufferSize() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiveBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::Socket::getSendBufferSize() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSendBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::Socket::getSoTimeout() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::net::Socket::getTcpNoDelay() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTcpNoDelay", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::Socket::setKeepAlive(bool arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeepAlive", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::Socket::setSocketImplFactory(const ::java::net::SocketImplFactory& arg0){
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSocketImplFactory", "(Ljava/net/SocketImplFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::Socket::setSendBufferSize(int32_t arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSendBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::Socket::setReceiveBufferSize(int32_t arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReceiveBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::Socket::setSoLinger(bool arg0, int32_t arg1) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoLinger", "(ZI)V");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::Socket::setSoTimeout(int32_t arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::Socket::setTcpNoDelay(bool arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTcpNoDelay", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::net::Socket::toString() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::net::Socket::shutdownInput() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownInput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::net::Socket::shutdownOutput() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "shutdownOutput", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::net::SocketAddress java::net::Socket::getLocalSocketAddress() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalSocketAddress", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

::java::net::SocketAddress java::net::Socket::getRemoteSocketAddress() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteSocketAddress", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

bool java::net::Socket::isBound() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBound", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Socket::isConnected() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Socket::isClosed() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::Socket::bind(const ::java::net::SocketAddress& arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::Socket::connect(const ::java::net::SocketAddress& arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::Socket::connect(const ::java::net::SocketAddress& arg0, int32_t arg1) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/net/SocketAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::net::Socket::isInputShutdown() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInputShutdown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Socket::isOutputShutdown() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOutputShutdown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::Socket::setReuseAddress(bool arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReuseAddress", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::Socket::getReuseAddress() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReuseAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::Socket::setOOBInline(bool arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOOBInline", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::Socket::getOOBInline() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOOBInline", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::Socket::setTrafficClass(int32_t arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTrafficClass", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::net::Socket::getTrafficClass() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrafficClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::net::Socket::sendUrgentData(int32_t arg0) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendUrgentData", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::nio::channels::SocketChannel java::net::Socket::getChannel() const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannel", "()Ljava/nio/channels/SocketChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::SocketChannel _ret(ret);
    return _ret;
}

void java::net::Socket::setPerformancePreferences(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::net::Socket::_class) ::java::net::Socket::_class = java::fetch_class("java/net/Socket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPerformancePreferences", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketImpl::SocketImpl() : ::java::lang::Object((jobject)0), ::java::net::SocketOptions((jobject)0) {
    if (!::java::net::SocketImpl::_class) ::java::net::SocketImpl::_class = java::fetch_class("java/net/SocketImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::SocketImpl::toString() const {
    if (!::java::net::SocketImpl::_class) ::java::net::SocketImpl::_class = java::fetch_class("java/net/SocketImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketAddress::SocketAddress() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::SocketAddress::_class) ::java::net::SocketAddress::_class = java::fetch_class("java/net/SocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::URLEncoder::encode(const ::java::lang::String& arg0){
    if (!::java::net::URLEncoder::_class) ::java::net::URLEncoder::_class = java::fetch_class("java/net/URLEncoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URLEncoder::encode(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::net::URLEncoder::_class) ::java::net::URLEncoder::_class = java::fetch_class("java/net/URLEncoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "encode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ProxySelector::ProxySelector() : ::java::lang::Object((jobject)0) {
    if (!::java::net::ProxySelector::_class) ::java::net::ProxySelector::_class = java::fetch_class("java/net/ProxySelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::net::ProxySelector java::net::ProxySelector::getDefault(){
    if (!::java::net::ProxySelector::_class) ::java::net::ProxySelector::_class = java::fetch_class("java/net/ProxySelector");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljava/net/ProxySelector;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::net::ProxySelector _ret(ret);
    return _ret;
}

void java::net::ProxySelector::setDefault(const ::java::net::ProxySelector& arg0){
    if (!::java::net::ProxySelector::_class) ::java::net::ProxySelector::_class = java::fetch_class("java/net/ProxySelector");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljava/net/ProxySelector;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::util::List java::net::ProxySelector::select(const ::java::net::URI& arg0) const {
    if (!::java::net::ProxySelector::_class) ::java::net::ProxySelector::_class = java::fetch_class("java/net/ProxySelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "select", "(Ljava/net/URI;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void java::net::ProxySelector::connectFailed(const ::java::net::URI& arg0, const ::java::net::SocketAddress& arg1, const ::java::io::IOException& arg2) const {
    if (!::java::net::ProxySelector::_class) ::java::net::ProxySelector::_class = java::fetch_class("java/net/ProxySelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "connectFailed", "(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool java::net::Inet4Address::isAnyLocalAddress() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnyLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isLinkLocalAddress() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLinkLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isLoopbackAddress() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoopbackAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isMCGlobal() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCGlobal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isMCLinkLocal() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCLinkLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isMCNodeLocal() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCNodeLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isMCOrgLocal() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCOrgLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isMCSiteLocal() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCSiteLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isMulticastAddress() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMulticastAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet4Address::isSiteLocalAddress() const {
    if (!::java::net::Inet4Address::_class) ::java::net::Inet4Address::_class = java::fetch_class("java/net/Inet4Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSiteLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::PasswordAuthentication::PasswordAuthentication(const ::java::lang::String& arg0, const std::vector< uint16_t>& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::PasswordAuthentication::_class) ::java::net::PasswordAuthentication::_class = java::fetch_class("java/net/PasswordAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;[C)V");
    jobject _arg0 = arg0.obj;
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< uint16_t> java::net::PasswordAuthentication::getPassword() const {
    if (!::java::net::PasswordAuthentication::_class) ::java::net::PasswordAuthentication::_class = java::fetch_class("java/net/PasswordAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPassword", "()[C");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

::java::lang::String java::net::PasswordAuthentication::getUserName() const {
    if (!::java::net::PasswordAuthentication::_class) ::java::net::PasswordAuthentication::_class = java::fetch_class("java/net/PasswordAuthentication");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::InetSocketAddress::InetSocketAddress(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::SocketAddress((jobject)0) {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::InetSocketAddress::InetSocketAddress(const ::java::net::InetAddress& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::SocketAddress((jobject)0) {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/InetAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::InetSocketAddress::InetSocketAddress(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::SocketAddress((jobject)0) {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::net::InetSocketAddress java::net::InetSocketAddress::createUnresolved(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createUnresolved", "(Ljava/lang/String;I)Ljava/net/InetSocketAddress;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::net::InetSocketAddress _ret(ret);
    return _ret;
}

int32_t java::net::InetSocketAddress::getPort() const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::InetAddress java::net::InetSocketAddress::getAddress() const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::lang::String java::net::InetSocketAddress::getHostName() const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHostName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::InetSocketAddress::isUnresolved() const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUnresolved", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::net::InetSocketAddress::toString() const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::InetSocketAddress::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::net::InetSocketAddress::hashCode() const {
    if (!::java::net::InetSocketAddress::_class) ::java::net::InetSocketAddress::_class = java::fetch_class("java/net/InetSocketAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URL::URL(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URL::URL(const ::java::net::URL& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URL;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URL::URL(const ::java::net::URL& arg0, const ::java::lang::String& arg1, const ::java::net::URLStreamHandler& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URL::URL(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URL::URL(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URL::URL(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::java::lang::String& arg3, const ::java::net::URLStreamHandler& arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void java::net::URL::setURLStreamHandlerFactory(const ::java::net::URLStreamHandlerFactory& arg0){
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setURLStreamHandlerFactory", "(Ljava/net/URLStreamHandlerFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool java::net::URL::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::net::URL::sameFile(const ::java::net::URL& arg0) const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "sameFile", "(Ljava/net/URL;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::net::URL::hashCode() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::net::URL::getContent() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::net::URL::getContent(const std::vector< ::java::lang::Class>& arg0) const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Class& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::io::InputStream java::net::URL::openStream() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "openStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::net::URLConnection java::net::URL::openConnection() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "openConnection", "()Ljava/net/URLConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URLConnection _ret(ret);
    return _ret;
}

::java::net::URLConnection java::net::URL::openConnection(const ::java::net::Proxy& arg0) const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "openConnection", "(Ljava/net/Proxy;)Ljava/net/URLConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URLConnection _ret(ret);
    return _ret;
}

::java::net::URI java::net::URL::toURI() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "toURI", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::toString() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::toExternalForm() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "toExternalForm", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getProtocol() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProtocol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getAuthority() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getUserInfo() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getHost() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::URL::getPort() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::URL::getDefaultPort() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::URL::getFile() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFile", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getPath() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getQuery() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URL::getRef() const {
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URI::URI(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URI::URI(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URI::URI(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::lang::String& arg6) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URI::URI(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URI::URI(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

int32_t java::net::URI::compareTo(const ::java::net::URI& arg0) const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/net/URI;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::net::URI java::net::URI::create(const ::java::lang::String& arg0){
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/lang/String;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::URI _ret(ret);
    return _ret;
}

bool java::net::URI::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::net::URI::getScheme() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScheme", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getSchemeSpecificPart() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemeSpecificPart", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getRawSchemeSpecificPart() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawSchemeSpecificPart", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getAuthority() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getRawAuthority() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getUserInfo() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getRawUserInfo() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawUserInfo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getHost() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHost", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::URI::getPort() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::URI::getPath() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getRawPath() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getQuery() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getRawQuery() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawQuery", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getFragment() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::getRawFragment() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawFragment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::URI::hashCode() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::net::URI::isAbsolute() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAbsolute", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::URI::isOpaque() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::URI java::net::URI::normalize() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalize", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI java::net::URI::parseServerAuthority() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "parseServerAuthority", "()Ljava/net/URI;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI java::net::URI::relativize(const ::java::net::URI& arg0) const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "relativize", "(Ljava/net/URI;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI java::net::URI::resolve(const ::java::net::URI& arg0) const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolve", "(Ljava/net/URI;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::net::URI java::net::URI::resolve(const ::java::lang::String& arg0) const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolve", "(Ljava/lang/String;)Ljava/net/URI;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URI _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::toASCIIString() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "toASCIIString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URI::toString() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::URL java::net::URI::toURL() const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "toURL", "()Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URL _ret(ret);
    return _ret;
}

int32_t java::net::URI::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::net::URI::_class) ::java::net::URI::_class = java::fetch_class("java/net/URI");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< ::java::net::Authenticator_RequestorType> java::net::Authenticator_RequestorType::values(){
    if (!::java::net::Authenticator_RequestorType::_class) ::java::net::Authenticator_RequestorType::_class = java::fetch_class("java/net/Authenticator$RequestorType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/net/Authenticator$RequestorType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::net::Authenticator_RequestorType> _ret(rets, ::java::net::Authenticator_RequestorType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::net::Authenticator_RequestorType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::net::Authenticator_RequestorType java::net::Authenticator_RequestorType::valueOf(const ::java::lang::String& arg0){
    if (!::java::net::Authenticator_RequestorType::_class) ::java::net::Authenticator_RequestorType::_class = java::fetch_class("java/net/Authenticator$RequestorType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::Authenticator_RequestorType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URLClassLoader::URLClassLoader(const std::vector< ::java::net::URL>& arg0) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0), ::java::security::SecureClassLoader((jobject)0) {
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/net/URL;)V");
    unsigned arg0s = arg0.size();
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::net::URL::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::net::URL& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URLClassLoader::URLClassLoader(const std::vector< ::java::net::URL>& arg0, const ::java::lang::ClassLoader& arg1) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0), ::java::security::SecureClassLoader((jobject)0) {
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;)V");
    unsigned arg0s = arg0.size();
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::net::URL::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::net::URL& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URLClassLoader::URLClassLoader(const std::vector< ::java::net::URL>& arg0, const ::java::lang::ClassLoader& arg1, const ::java::net::URLStreamHandlerFactory& arg2) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0), ::java::security::SecureClassLoader((jobject)0) {
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V");
    unsigned arg0s = arg0.size();
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::net::URL::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::net::URL& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::util::Enumeration java::net::URLClassLoader::findResources(const ::java::lang::String& arg0) const {
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

std::vector< ::java::net::URL> java::net::URLClassLoader::getURLs() const {
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURLs", "()[Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::net::URL> _ret(rets, ::java::net::URL((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::net::URL retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::net::URLClassLoader java::net::URLClassLoader::newInstance(const std::vector< ::java::net::URL>& arg0){
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "([Ljava/net/URL;)Ljava/net/URLClassLoader;");
    unsigned arg0s = arg0.size();
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::net::URL::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::net::URL& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::URLClassLoader _ret(ret);
    return _ret;
}

::java::net::URLClassLoader java::net::URLClassLoader::newInstance(const std::vector< ::java::net::URL>& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInstance", "([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;");
    unsigned arg0s = arg0.size();
    if (!::java::net::URL::_class) ::java::net::URL::_class = java::fetch_class("java/net/URL");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::net::URL::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::net::URL& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::net::URLClassLoader _ret(ret);
    return _ret;
}

::java::net::URL java::net::URLClassLoader::findResource(const ::java::lang::String& arg0) const {
    if (!::java::net::URLClassLoader::_class) ::java::net::URLClassLoader::_class = java::fetch_class("java/net/URLClassLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "findResource", "(Ljava/lang/String;)Ljava/net/URL;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URL _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketPermission::SocketPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::net::SocketPermission::_class) ::java::net::SocketPermission::_class = java::fetch_class("java/net/SocketPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::SocketPermission::getActions() const {
    if (!::java::net::SocketPermission::_class) ::java::net::SocketPermission::_class = java::fetch_class("java/net/SocketPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::SocketPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::net::SocketPermission::_class) ::java::net::SocketPermission::_class = java::fetch_class("java/net/SocketPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Authenticator::Authenticator() : ::java::lang::Object((jobject)0) {
    if (!::java::net::Authenticator::_class) ::java::net::Authenticator::_class = java::fetch_class("java/net/Authenticator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::net::PasswordAuthentication java::net::Authenticator::requestPasswordAuthentication(const ::java::net::InetAddress& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4){
    if (!::java::net::Authenticator::_class) ::java::net::Authenticator::_class = java::fetch_class("java/net/Authenticator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestPasswordAuthentication", "(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::net::PasswordAuthentication _ret(ret);
    return _ret;
}

void java::net::Authenticator::setDefault(const ::java::net::Authenticator& arg0){
    if (!::java::net::Authenticator::_class) ::java::net::Authenticator::_class = java::fetch_class("java/net/Authenticator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljava/net/Authenticator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::net::PasswordAuthentication java::net::Authenticator::requestPasswordAuthentication(const ::java::lang::String& arg0, const ::java::net::InetAddress& arg1, int32_t arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5){
    if (!::java::net::Authenticator::_class) ::java::net::Authenticator::_class = java::fetch_class("java/net/Authenticator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestPasswordAuthentication", "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::net::PasswordAuthentication _ret(ret);
    return _ret;
}

::java::net::PasswordAuthentication java::net::Authenticator::requestPasswordAuthentication(const ::java::lang::String& arg0, const ::java::net::InetAddress& arg1, int32_t arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::java::net::URL& arg6, const ::java::net::Authenticator_RequestorType& arg7){
    if (!::java::net::Authenticator::_class) ::java::net::Authenticator::_class = java::fetch_class("java/net/Authenticator");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "requestPasswordAuthentication", "(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::java::net::PasswordAuthentication _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::NetPermission::NetPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::net::NetPermission::_class) ::java::net::NetPermission::_class = java::fetch_class("java/net/NetPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::NetPermission::NetPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::net::NetPermission::_class) ::java::net::NetPermission::_class = java::fetch_class("java/net/NetPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::NetPermission::getActions() const {
    if (!::java::net::NetPermission::_class) ::java::net::NetPermission::_class = java::fetch_class("java/net/NetPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::NetPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::net::NetPermission::_class) ::java::net::NetPermission::_class = java::fetch_class("java/net/NetPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramPacket::DatagramPacket(const std::vector< int8_t>& arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BI)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramPacket::DatagramPacket(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramPacket::DatagramPacket(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::java::net::InetAddress& arg3, int32_t arg4) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIILjava/net/InetAddress;I)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramPacket::DatagramPacket(const std::vector< int8_t>& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BILjava/net/InetAddress;I)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramPacket::DatagramPacket(const std::vector< int8_t>& arg0, int32_t arg1, const ::java::net::SocketAddress& arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BILjava/net/SocketAddress;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramPacket::DatagramPacket(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, const ::java::net::SocketAddress& arg3) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([BIILjava/net/SocketAddress;)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::net::InetAddress java::net::DatagramPacket::getAddress() const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

std::vector< int8_t> java::net::DatagramPacket::getData() const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::net::DatagramPacket::getLength() const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::DatagramPacket::getOffset() const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::DatagramPacket::getPort() const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::net::DatagramPacket::setAddress(const ::java::net::InetAddress& arg0) const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddress", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramPacket::setData(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::net::DatagramPacket::setData(const std::vector< int8_t>& arg0) const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramPacket::setLength(int32_t arg0) const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLength", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramPacket::setPort(int32_t arg0) const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPort", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::SocketAddress java::net::DatagramPacket::getSocketAddress() const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocketAddress", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

void java::net::DatagramPacket::setSocketAddress(const ::java::net::SocketAddress& arg0) const {
    if (!::java::net::DatagramPacket::_class) ::java::net::DatagramPacket::_class = java::fetch_class("java/net/DatagramPacket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSocketAddress", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::NoRouteToHostException::NoRouteToHostException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::NoRouteToHostException::_class) ::java::net::NoRouteToHostException::_class = java::fetch_class("java/net/NoRouteToHostException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::NoRouteToHostException::NoRouteToHostException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::NoRouteToHostException::_class) ::java::net::NoRouteToHostException::_class = java::fetch_class("java/net/NoRouteToHostException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramSocketImpl::DatagramSocketImpl() : ::java::lang::Object((jobject)0), ::java::net::SocketOptions((jobject)0) {
    if (!::java::net::DatagramSocketImpl::_class) ::java::net::DatagramSocketImpl::_class = java::fetch_class("java/net/DatagramSocketImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::Proxy::Proxy(const ::java::net::Proxy_Type& arg0, const ::java::net::SocketAddress& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::Proxy::_class) ::java::net::Proxy::_class = java::fetch_class("java/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::net::Proxy_Type java::net::Proxy::type() const {
    if (!::java::net::Proxy::_class) ::java::net::Proxy::_class = java::fetch_class("java/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "type", "()Ljava/net/Proxy$Type;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Proxy_Type _ret(ret);
    return _ret;
}

::java::net::SocketAddress java::net::Proxy::address() const {
    if (!::java::net::Proxy::_class) ::java::net::Proxy::_class = java::fetch_class("java/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "address", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

::java::lang::String java::net::Proxy::toString() const {
    if (!::java::net::Proxy::_class) ::java::net::Proxy::_class = java::fetch_class("java/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::Proxy::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::Proxy::_class) ::java::net::Proxy::_class = java::fetch_class("java/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::net::Proxy::hashCode() const {
    if (!::java::net::Proxy::_class) ::java::net::Proxy::_class = java::fetch_class("java/net/Proxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::BindException::BindException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::BindException::_class) ::java::net::BindException::_class = java::fetch_class("java/net/BindException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::BindException::BindException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::BindException::_class) ::java::net::BindException::_class = java::fetch_class("java/net/BindException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::UnknownServiceException::UnknownServiceException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::UnknownServiceException::_class) ::java::net::UnknownServiceException::_class = java::fetch_class("java/net/UnknownServiceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::UnknownServiceException::UnknownServiceException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::UnknownServiceException::_class) ::java::net::UnknownServiceException::_class = java::fetch_class("java/net/UnknownServiceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::net::DatagramSocketImpl java::net::DatagramSocketImplFactory::createDatagramSocketImpl() const {
    if (!::java::net::DatagramSocketImplFactory::_class) ::java::net::DatagramSocketImplFactory::_class = java::fetch_class("java/net/DatagramSocketImplFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDatagramSocketImpl", "()Ljava/net/DatagramSocketImpl;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::DatagramSocketImpl _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketTimeoutException::SocketTimeoutException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::SocketTimeoutException::_class) ::java::net::SocketTimeoutException::_class = java::fetch_class("java/net/SocketTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketTimeoutException::SocketTimeoutException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::InterruptedIOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::SocketTimeoutException::_class) ::java::net::SocketTimeoutException::_class = java::fetch_class("java/net/SocketTimeoutException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::net::Inet6Address java::net::Inet6Address::getByAddress(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1, int32_t arg2){
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByAddress", "(Ljava/lang/String;[BI)Ljava/net/Inet6Address;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::net::Inet6Address _ret(ret);
    return _ret;
}

::java::net::Inet6Address java::net::Inet6Address::getByAddress(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1, const ::java::net::NetworkInterface& arg2){
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByAddress", "(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::net::Inet6Address _ret(ret);
    return _ret;
}

bool java::net::Inet6Address::isAnyLocalAddress() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnyLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isIPv4CompatibleAddress() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIPv4CompatibleAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isLinkLocalAddress() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLinkLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isLoopbackAddress() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoopbackAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isMCGlobal() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCGlobal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isMCLinkLocal() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCLinkLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isMCNodeLocal() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCNodeLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isMCOrgLocal() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCOrgLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isMCSiteLocal() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCSiteLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isMulticastAddress() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMulticastAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::Inet6Address::isSiteLocalAddress() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSiteLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::net::Inet6Address::getScopeId() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScopeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::NetworkInterface java::net::Inet6Address::getScopedInterface() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScopedInterface", "()Ljava/net/NetworkInterface;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::NetworkInterface _ret(ret);
    return _ret;
}

::java::lang::String java::net::Inet6Address::toString() const {
    if (!::java::net::Inet6Address::_class) ::java::net::Inet6Address::_class = java::fetch_class("java/net/Inet6Address");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::net::Proxy_Type> java::net::Proxy_Type::values(){
    if (!::java::net::Proxy_Type::_class) ::java::net::Proxy_Type::_class = java::fetch_class("java/net/Proxy$Type");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/net/Proxy$Type;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::net::Proxy_Type> _ret(rets, ::java::net::Proxy_Type((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::net::Proxy_Type retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::net::Proxy_Type java::net::Proxy_Type::valueOf(const ::java::lang::String& arg0){
    if (!::java::net::Proxy_Type::_class) ::java::net::Proxy_Type::_class = java::fetch_class("java/net/Proxy$Type");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/net/Proxy$Type;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::Proxy_Type _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URLStreamHandler::URLStreamHandler() : ::java::lang::Object((jobject)0) {
    if (!::java::net::URLStreamHandler::_class) ::java::net::URLStreamHandler::_class = java::fetch_class("java/net/URLStreamHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URLDecoder::URLDecoder() : ::java::lang::Object((jobject)0) {
    if (!::java::net::URLDecoder::_class) ::java::net::URLDecoder::_class = java::fetch_class("java/net/URLDecoder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::URLDecoder::decode(const ::java::lang::String& arg0){
    if (!::java::net::URLDecoder::_class) ::java::net::URLDecoder::_class = java::fetch_class("java/net/URLDecoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URLDecoder::decode(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::net::URLDecoder::_class) ::java::net::URLDecoder::_class = java::fetch_class("java/net/URLDecoder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::InetAddress::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< int8_t> java::net::InetAddress::getAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::net::InetAddress> java::net::InetAddress::getAllByName(const ::java::lang::String& arg0){
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAllByName", "(Ljava/lang/String;)[Ljava/net/InetAddress;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::net::InetAddress> _ret(rets, ::java::net::InetAddress((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::net::InetAddress retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::net::InetAddress java::net::InetAddress::getByName(const ::java::lang::String& arg0){
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByName", "(Ljava/lang/String;)Ljava/net/InetAddress;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::lang::String java::net::InetAddress::getHostAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHostAddress", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::InetAddress::getHostName() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHostName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::InetAddress::getCanonicalHostName() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCanonicalHostName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::InetAddress java::net::InetAddress::getLocalHost(){
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLocalHost", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t java::net::InetAddress::hashCode() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::InetAddress::toString() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::InetAddress::isAnyLocalAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAnyLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isLinkLocalAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLinkLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isLoopbackAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoopbackAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isMCGlobal() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCGlobal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isMCLinkLocal() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCLinkLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isMCNodeLocal() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCNodeLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isMCOrgLocal() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCOrgLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isMCSiteLocal() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMCSiteLocal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isMulticastAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMulticastAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isSiteLocalAddress() const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSiteLocalAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::InetAddress::isReachable(int32_t arg0) const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReachable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::net::InetAddress::isReachable(const ::java::net::NetworkInterface& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReachable", "(Ljava/net/NetworkInterface;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::net::InetAddress java::net::InetAddress::getByAddress(const std::vector< int8_t>& arg0){
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByAddress", "([B)Ljava/net/InetAddress;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::net::InetAddress java::net::InetAddress::getByAddress(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1){
    if (!::java::net::InetAddress::_class) ::java::net::InetAddress::_class = java::fetch_class("java/net/InetAddress");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByAddress", "(Ljava/lang/String;[B)Ljava/net/InetAddress;");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::CacheResponse::CacheResponse() : ::java::lang::Object((jobject)0) {
    if (!::java::net::CacheResponse::_class) ::java::net::CacheResponse::_class = java::fetch_class("java/net/CacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::io::InputStream java::net::CacheResponse::getBody() const {
    if (!::java::net::CacheResponse::_class) ::java::net::CacheResponse::_class = java::fetch_class("java/net/CacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBody", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::util::Map java::net::CacheResponse::getHeaders() const {
    if (!::java::net::CacheResponse::_class) ::java::net::CacheResponse::_class = java::fetch_class("java/net/CacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaders", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URISyntaxException::URISyntaxException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::URISyntaxException::_class) ::java::net::URISyntaxException::_class = java::fetch_class("java/net/URISyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::URISyntaxException::URISyntaxException(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::URISyntaxException::_class) ::java::net::URISyntaxException::_class = java::fetch_class("java/net/URISyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t java::net::URISyntaxException::getIndex() const {
    if (!::java::net::URISyntaxException::_class) ::java::net::URISyntaxException::_class = java::fetch_class("java/net/URISyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::URISyntaxException::getReason() const {
    if (!::java::net::URISyntaxException::_class) ::java::net::URISyntaxException::_class = java::fetch_class("java/net/URISyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReason", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URISyntaxException::getInput() const {
    if (!::java::net::URISyntaxException::_class) ::java::net::URISyntaxException::_class = java::fetch_class("java/net/URISyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInput", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URISyntaxException::getMessage() const {
    if (!::java::net::URISyntaxException::_class) ::java::net::URISyntaxException::_class = java::fetch_class("java/net/URISyntaxException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ProtocolException::ProtocolException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::ProtocolException::_class) ::java::net::ProtocolException::_class = java::fetch_class("java/net/ProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ProtocolException::ProtocolException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::ProtocolException::_class) ::java::net::ProtocolException::_class = java::fetch_class("java/net/ProtocolException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ContentHandler::ContentHandler() : ::java::lang::Object((jobject)0) {
    if (!::java::net::ContentHandler::_class) ::java::net::ContentHandler::_class = java::fetch_class("java/net/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::net::ContentHandler::getContent(const ::java::net::URLConnection& arg0) const {
    if (!::java::net::ContentHandler::_class) ::java::net::ContentHandler::_class = java::fetch_class("java/net/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::net::ContentHandler::getContent(const ::java::net::URLConnection& arg0, const std::vector< ::java::lang::Class>& arg1) const {
    if (!::java::net::ContentHandler::_class) ::java::net::ContentHandler::_class = java::fetch_class("java/net/ContentHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Class& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::net::InterfaceAddress::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::InterfaceAddress::_class) ::java::net::InterfaceAddress::_class = java::fetch_class("java/net/InterfaceAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::net::InterfaceAddress::hashCode() const {
    if (!::java::net::InterfaceAddress::_class) ::java::net::InterfaceAddress::_class = java::fetch_class("java/net/InterfaceAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::InterfaceAddress::toString() const {
    if (!::java::net::InterfaceAddress::_class) ::java::net::InterfaceAddress::_class = java::fetch_class("java/net/InterfaceAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::InetAddress java::net::InterfaceAddress::getAddress() const {
    if (!::java::net::InterfaceAddress::_class) ::java::net::InterfaceAddress::_class = java::fetch_class("java/net/InterfaceAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::net::InetAddress java::net::InterfaceAddress::getBroadcast() const {
    if (!::java::net::InterfaceAddress::_class) ::java::net::InterfaceAddress::_class = java::fetch_class("java/net/InterfaceAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBroadcast", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int16_t java::net::InterfaceAddress::getNetworkPrefixLength() const {
    if (!::java::net::InterfaceAddress::_class) ::java::net::InterfaceAddress::_class = java::fetch_class("java/net/InterfaceAddress");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkPrefixLength", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

void java::net::CookieStore::add(const ::java::net::URI& arg0, const ::java::net::HttpCookie& arg1) const {
    if (!::java::net::CookieStore::_class) ::java::net::CookieStore::_class = java::fetch_class("java/net/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/net/URI;Ljava/net/HttpCookie;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List java::net::CookieStore::get(const ::java::net::URI& arg0) const {
    if (!::java::net::CookieStore::_class) ::java::net::CookieStore::_class = java::fetch_class("java/net/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/net/URI;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List java::net::CookieStore::getCookies() const {
    if (!::java::net::CookieStore::_class) ::java::net::CookieStore::_class = java::fetch_class("java/net/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookies", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List java::net::CookieStore::getURIs() const {
    if (!::java::net::CookieStore::_class) ::java::net::CookieStore::_class = java::fetch_class("java/net/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURIs", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

bool java::net::CookieStore::remove(const ::java::net::URI& arg0, const ::java::net::HttpCookie& arg1) const {
    if (!::java::net::CookieStore::_class) ::java::net::CookieStore::_class = java::fetch_class("java/net/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::net::CookieStore::removeAll() const {
    if (!::java::net::CookieStore::_class) ::java::net::CookieStore::_class = java::fetch_class("java/net/CookieStore");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::URLStreamHandler java::net::URLStreamHandlerFactory::createURLStreamHandler(const ::java::lang::String& arg0) const {
    if (!::java::net::URLStreamHandlerFactory::_class) ::java::net::URLStreamHandlerFactory::_class = java::fetch_class("java/net/URLStreamHandlerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::URLStreamHandler _ret(ret);
    return _ret;
}

::java::net::SocketImpl java::net::SocketImplFactory::createSocketImpl() const {
    if (!::java::net::SocketImplFactory::_class) ::java::net::SocketImplFactory::_class = java::fetch_class("java/net/SocketImplFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocketImpl", "()Ljava/net/SocketImpl;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketImpl _ret(ret);
    return _ret;
}

::java::net::ContentHandler java::net::ContentHandlerFactory::createContentHandler(const ::java::lang::String& arg0) const {
    if (!::java::net::ContentHandlerFactory::_class) ::java::net::ContentHandlerFactory::_class = java::fetch_class("java/net/ContentHandlerFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::ContentHandler _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::HttpRetryException::HttpRetryException(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::HttpRetryException::_class) ::java::net::HttpRetryException::_class = java::fetch_class("java/net/HttpRetryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::HttpRetryException::HttpRetryException(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::HttpRetryException::_class) ::java::net::HttpRetryException::_class = java::fetch_class("java/net/HttpRetryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::HttpRetryException::getLocation() const {
    if (!::java::net::HttpRetryException::_class) ::java::net::HttpRetryException::_class = java::fetch_class("java/net/HttpRetryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocation", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::HttpRetryException::getReason() const {
    if (!::java::net::HttpRetryException::_class) ::java::net::HttpRetryException::_class = java::fetch_class("java/net/HttpRetryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReason", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::HttpRetryException::responseCode() const {
    if (!::java::net::HttpRetryException::_class) ::java::net::HttpRetryException::_class = java::fetch_class("java/net/HttpRetryException");
    static jmethodID mid = java::jni->GetMethodID(_class, "responseCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramSocket::DatagramSocket() : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramSocket::DatagramSocket(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramSocket::DatagramSocket(int32_t arg0, const ::java::net::InetAddress& arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/net/InetAddress;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::DatagramSocket::DatagramSocket(const ::java::net::SocketAddress& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::net::DatagramSocket::close() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::net::DatagramSocket::disconnect() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "disconnect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::net::InetAddress java::net::DatagramSocket::getInetAddress() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInetAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::net::InetAddress java::net::DatagramSocket::getLocalAddress() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t java::net::DatagramSocket::getLocalPort() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::DatagramSocket::getPort() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::DatagramSocket::getReceiveBufferSize() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiveBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::DatagramSocket::getSendBufferSize() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSendBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::DatagramSocket::getSoTimeout() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::net::DatagramSocket::receive(const ::java::net::DatagramPacket& arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "receive", "(Ljava/net/DatagramPacket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::send(const ::java::net::DatagramPacket& arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Ljava/net/DatagramPacket;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::setSendBufferSize(int32_t arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSendBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::setReceiveBufferSize(int32_t arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReceiveBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::setSoTimeout(int32_t arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::setDatagramSocketImplFactory(const ::java::net::DatagramSocketImplFactory& arg0){
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDatagramSocketImplFactory", "(Ljava/net/DatagramSocketImplFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::DatagramSocket::bind(const ::java::net::SocketAddress& arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::connect(const ::java::net::SocketAddress& arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::DatagramSocket::connect(const ::java::net::InetAddress& arg0, int32_t arg1) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/net/InetAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::net::DatagramSocket::isBound() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBound", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::DatagramSocket::isConnected() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::net::SocketAddress java::net::DatagramSocket::getRemoteSocketAddress() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemoteSocketAddress", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

::java::net::SocketAddress java::net::DatagramSocket::getLocalSocketAddress() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalSocketAddress", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

void java::net::DatagramSocket::setReuseAddress(bool arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReuseAddress", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::DatagramSocket::getReuseAddress() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReuseAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::DatagramSocket::setBroadcast(bool arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBroadcast", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::DatagramSocket::getBroadcast() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBroadcast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::DatagramSocket::setTrafficClass(int32_t arg0) const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTrafficClass", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::net::DatagramSocket::getTrafficClass() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTrafficClass", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::net::DatagramSocket::isClosed() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::channels::DatagramChannel java::net::DatagramSocket::getChannel() const {
    if (!::java::net::DatagramSocket::_class) ::java::net::DatagramSocket::_class = java::fetch_class("java/net/DatagramSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannel", "()Ljava/nio/channels/DatagramChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::DatagramChannel _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::MalformedURLException::MalformedURLException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::MalformedURLException::_class) ::java::net::MalformedURLException::_class = java::fetch_class("java/net/MalformedURLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::MalformedURLException::MalformedURLException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::MalformedURLException::_class) ::java::net::MalformedURLException::_class = java::fetch_class("java/net/MalformedURLException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketException::SocketException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::SocketException::_class) ::java::net::SocketException::_class = java::fetch_class("java/net/SocketException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SocketException::SocketException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::SocketException::_class) ::java::net::SocketException::_class = java::fetch_class("java/net/SocketException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::IDN::toASCII(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::net::IDN::_class) ::java::net::IDN::_class = java::fetch_class("java/net/IDN");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toASCII", "(Ljava/lang/String;I)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::IDN::toASCII(const ::java::lang::String& arg0){
    if (!::java::net::IDN::_class) ::java::net::IDN::_class = java::fetch_class("java/net/IDN");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toASCII", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::IDN::toUnicode(const ::java::lang::String& arg0, int32_t arg1){
    if (!::java::net::IDN::_class) ::java::net::IDN::_class = java::fetch_class("java/net/IDN");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toUnicode", "(Ljava/lang/String;I)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::IDN::toUnicode(const ::java::lang::String& arg0){
    if (!::java::net::IDN::_class) ::java::net::IDN::_class = java::fetch_class("java/net/IDN");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toUnicode", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::SecureCacheResponse::SecureCacheResponse() : ::java::lang::Object((jobject)0), ::java::net::CacheResponse((jobject)0) {
    if (!::java::net::SecureCacheResponse::_class) ::java::net::SecureCacheResponse::_class = java::fetch_class("java/net/SecureCacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::SecureCacheResponse::getCipherSuite() const {
    if (!::java::net::SecureCacheResponse::_class) ::java::net::SecureCacheResponse::_class = java::fetch_class("java/net/SecureCacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCipherSuite", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List java::net::SecureCacheResponse::getLocalCertificateChain() const {
    if (!::java::net::SecureCacheResponse::_class) ::java::net::SecureCacheResponse::_class = java::fetch_class("java/net/SecureCacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalCertificateChain", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List java::net::SecureCacheResponse::getServerCertificateChain() const {
    if (!::java::net::SecureCacheResponse::_class) ::java::net::SecureCacheResponse::_class = java::fetch_class("java/net/SecureCacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServerCertificateChain", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::security::Principal java::net::SecureCacheResponse::getPeerPrincipal() const {
    if (!::java::net::SecureCacheResponse::_class) ::java::net::SecureCacheResponse::_class = java::fetch_class("java/net/SecureCacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeerPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::security::Principal java::net::SecureCacheResponse::getLocalPrincipal() const {
    if (!::java::net::SecureCacheResponse::_class) ::java::net::SecureCacheResponse::_class = java::fetch_class("java/net/SecureCacheResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

::java::lang::Object java::net::SocketOptions::getOption(int32_t arg0) const {
    if (!::java::net::SocketOptions::_class) ::java::net::SocketOptions::_class = java::fetch_class("java/net/SocketOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOption", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::net::SocketOptions::setOption(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::net::SocketOptions::_class) ::java::net::SocketOptions::_class = java::fetch_class("java/net/SocketOptions");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOption", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::URLConnection::connect() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::net::URLConnection::getAllowUserInteraction() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowUserInteraction", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::net::URLConnection::getContent() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::net::URLConnection::getContent(const std::vector< ::java::lang::Class>& arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Class& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::net::URLConnection::getContentEncoding() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::URLConnection::getContentLength() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::URLConnection::getContentType() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::net::URLConnection::getDate() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool java::net::URLConnection::getDefaultAllowUserInteraction(){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultAllowUserInteraction", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::java::lang::String java::net::URLConnection::getDefaultRequestProperty(const ::java::lang::String& arg0){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::URLConnection::getDefaultUseCaches() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultUseCaches", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::URLConnection::getDoInput() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoInput", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::URLConnection::getDoOutput() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoOutput", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t java::net::URLConnection::getExpiration() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpiration", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::net::FileNameMap java::net::URLConnection::getFileNameMap(){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFileNameMap", "()Ljava/net/FileNameMap;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::net::FileNameMap _ret(ret);
    return _ret;
}

::java::lang::String java::net::URLConnection::getHeaderField(int32_t arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderField", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Map java::net::URLConnection::getHeaderFields() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderFields", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::Map java::net::URLConnection::getRequestProperties() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestProperties", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

void java::net::URLConnection::addRequestProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::net::URLConnection::getHeaderField(const ::java::lang::String& arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::net::URLConnection::getHeaderFieldDate(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderFieldDate", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int32_t java::net::URLConnection::getHeaderFieldInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderFieldInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::net::URLConnection::getHeaderFieldKey(int32_t arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderFieldKey", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::net::URLConnection::getIfModifiedSince() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIfModifiedSince", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::InputStream java::net::URLConnection::getInputStream() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

int64_t java::net::URLConnection::getLastModified() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastModified", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::io::OutputStream java::net::URLConnection::getOutputStream() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::java::security::Permission java::net::URLConnection::getPermission() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermission", "()Ljava/security/Permission;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Permission _ret(ret);
    return _ret;
}

::java::lang::String java::net::URLConnection::getRequestProperty(const ::java::lang::String& arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::URL java::net::URLConnection::getURL() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "()Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URL _ret(ret);
    return _ret;
}

bool java::net::URLConnection::getUseCaches() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseCaches", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::net::URLConnection::guessContentTypeFromName(const ::java::lang::String& arg0){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "guessContentTypeFromName", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::URLConnection::guessContentTypeFromStream(const ::java::io::InputStream& arg0){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "guessContentTypeFromStream", "(Ljava/io/InputStream;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::net::URLConnection::setAllowUserInteraction(bool arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowUserInteraction", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::URLConnection::setContentHandlerFactory(const ::java::net::ContentHandlerFactory& arg0){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setContentHandlerFactory", "(Ljava/net/ContentHandlerFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::URLConnection::setDefaultAllowUserInteraction(bool arg0){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultAllowUserInteraction", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::URLConnection::setDefaultRequestProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::net::URLConnection::setDefaultUseCaches(bool arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultUseCaches", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::URLConnection::setDoInput(bool arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDoInput", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::URLConnection::setDoOutput(bool arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDoOutput", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::URLConnection::setFileNameMap(const ::java::net::FileNameMap& arg0){
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFileNameMap", "(Ljava/net/FileNameMap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::URLConnection::setIfModifiedSince(int64_t arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIfModifiedSince", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::URLConnection::setRequestProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::URLConnection::setUseCaches(bool arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseCaches", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::URLConnection::setConnectTimeout(int32_t arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setConnectTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::net::URLConnection::getConnectTimeout() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnectTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::net::URLConnection::setReadTimeout(int32_t arg0) const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::net::URLConnection::getReadTimeout() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReadTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::URLConnection::toString() const {
    if (!::java::net::URLConnection::_class) ::java::net::URLConnection::_class = java::fetch_class("java/net/URLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::CookieHandler::CookieHandler() : ::java::lang::Object((jobject)0) {
    if (!::java::net::CookieHandler::_class) ::java::net::CookieHandler::_class = java::fetch_class("java/net/CookieHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::net::CookieHandler java::net::CookieHandler::getDefault(){
    if (!::java::net::CookieHandler::_class) ::java::net::CookieHandler::_class = java::fetch_class("java/net/CookieHandler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljava/net/CookieHandler;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::net::CookieHandler _ret(ret);
    return _ret;
}

void java::net::CookieHandler::setDefault(const ::java::net::CookieHandler& arg0){
    if (!::java::net::CookieHandler::_class) ::java::net::CookieHandler::_class = java::fetch_class("java/net/CookieHandler");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljava/net/CookieHandler;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::util::Map java::net::CookieHandler::get(const ::java::net::URI& arg0, const ::java::util::Map& arg1) const {
    if (!::java::net::CookieHandler::_class) ::java::net::CookieHandler::_class = java::fetch_class("java/net/CookieHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Map _ret(ret);
    return _ret;
}

void java::net::CookieHandler::put(const ::java::net::URI& arg0, const ::java::util::Map& arg1) const {
    if (!::java::net::CookieHandler::_class) ::java::net::CookieHandler::_class = java::fetch_class("java/net/CookieHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/net/URI;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::PortUnreachableException::PortUnreachableException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::PortUnreachableException::_class) ::java::net::PortUnreachableException::_class = java::fetch_class("java/net/PortUnreachableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::PortUnreachableException::PortUnreachableException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::PortUnreachableException::_class) ::java::net::PortUnreachableException::_class = java::fetch_class("java/net/PortUnreachableException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::CookieManager::CookieManager() : ::java::lang::Object((jobject)0), ::java::net::CookieHandler((jobject)0) {
    if (!::java::net::CookieManager::_class) ::java::net::CookieManager::_class = java::fetch_class("java/net/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::CookieManager::CookieManager(const ::java::net::CookieStore& arg0, const ::java::net::CookiePolicy& arg1) : ::java::lang::Object((jobject)0), ::java::net::CookieHandler((jobject)0) {
    if (!::java::net::CookieManager::_class) ::java::net::CookieManager::_class = java::fetch_class("java/net/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/CookieStore;Ljava/net/CookiePolicy;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::Map java::net::CookieManager::get(const ::java::net::URI& arg0, const ::java::util::Map& arg1) const {
    if (!::java::net::CookieManager::_class) ::java::net::CookieManager::_class = java::fetch_class("java/net/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Map _ret(ret);
    return _ret;
}

void java::net::CookieManager::put(const ::java::net::URI& arg0, const ::java::util::Map& arg1) const {
    if (!::java::net::CookieManager::_class) ::java::net::CookieManager::_class = java::fetch_class("java/net/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/net/URI;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::CookieManager::setCookiePolicy(const ::java::net::CookiePolicy& arg0) const {
    if (!::java::net::CookieManager::_class) ::java::net::CookieManager::_class = java::fetch_class("java/net/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookiePolicy", "(Ljava/net/CookiePolicy;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::net::CookieStore java::net::CookieManager::getCookieStore() const {
    if (!::java::net::CookieManager::_class) ::java::net::CookieManager::_class = java::fetch_class("java/net/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookieStore", "()Ljava/net/CookieStore;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::CookieStore _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::CacheRequest::CacheRequest() : ::java::lang::Object((jobject)0) {
    if (!::java::net::CacheRequest::_class) ::java::net::CacheRequest::_class = java::fetch_class("java/net/CacheRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::net::CacheRequest::abort() const {
    if (!::java::net::CacheRequest::_class) ::java::net::CacheRequest::_class = java::fetch_class("java/net/CacheRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::OutputStream java::net::CacheRequest::getBody() const {
    if (!::java::net::CacheRequest::_class) ::java::net::CacheRequest::_class = java::fetch_class("java/net/CacheRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBody", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::MulticastSocket::MulticastSocket() : ::java::lang::Object((jobject)0), ::java::net::DatagramSocket((jobject)0) {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::MulticastSocket::MulticastSocket(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::net::DatagramSocket((jobject)0) {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::MulticastSocket::MulticastSocket(const ::java::net::SocketAddress& arg0) : ::java::lang::Object((jobject)0), ::java::net::DatagramSocket((jobject)0) {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::net::InetAddress java::net::MulticastSocket::getInterface() const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterface", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

::java::net::NetworkInterface java::net::MulticastSocket::getNetworkInterface() const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNetworkInterface", "()Ljava/net/NetworkInterface;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::NetworkInterface _ret(ret);
    return _ret;
}

int32_t java::net::MulticastSocket::getTimeToLive() const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeToLive", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int8_t java::net::MulticastSocket::getTTL() const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTTL", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

void java::net::MulticastSocket::joinGroup(const ::java::net::InetAddress& arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "joinGroup", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::MulticastSocket::joinGroup(const ::java::net::SocketAddress& arg0, const ::java::net::NetworkInterface& arg1) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "joinGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::MulticastSocket::leaveGroup(const ::java::net::InetAddress& arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "leaveGroup", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::MulticastSocket::leaveGroup(const ::java::net::SocketAddress& arg0, const ::java::net::NetworkInterface& arg1) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "leaveGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::MulticastSocket::send(const ::java::net::DatagramPacket& arg0, int8_t arg1) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Ljava/net/DatagramPacket;B)V");
    jobject _arg0 = arg0.obj;
    int8_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::net::MulticastSocket::setInterface(const ::java::net::InetAddress& arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterface", "(Ljava/net/InetAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::MulticastSocket::setNetworkInterface(const ::java::net::NetworkInterface& arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNetworkInterface", "(Ljava/net/NetworkInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::MulticastSocket::setTimeToLive(int32_t arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeToLive", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::MulticastSocket::setTTL(int8_t arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTTL", "(B)V");
    int8_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::MulticastSocket::getLoopbackMode() const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoopbackMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::MulticastSocket::setLoopbackMode(bool arg0) const {
    if (!::java::net::MulticastSocket::_class) ::java::net::MulticastSocket::_class = java::fetch_class("java/net/MulticastSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoopbackMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::jar::Attributes java::net::JarURLConnection::getAttributes() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()Ljava/util/jar/Attributes;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Attributes _ret(ret);
    return _ret;
}

std::vector< ::java::security::cert::Certificate> java::net::JarURLConnection::getCertificates() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
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

::java::lang::String java::net::JarURLConnection::getEntryName() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntryName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::jar::JarEntry java::net::JarURLConnection::getJarEntry() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJarEntry", "()Ljava/util/jar/JarEntry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::JarEntry _ret(ret);
    return _ret;
}

::java::util::jar::Manifest java::net::JarURLConnection::getManifest() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getManifest", "()Ljava/util/jar/Manifest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Manifest _ret(ret);
    return _ret;
}

::java::util::jar::JarFile java::net::JarURLConnection::getJarFile() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJarFile", "()Ljava/util/jar/JarFile;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::JarFile _ret(ret);
    return _ret;
}

::java::net::URL java::net::JarURLConnection::getJarFileURL() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJarFileURL", "()Ljava/net/URL;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::URL _ret(ret);
    return _ret;
}

::java::util::jar::Attributes java::net::JarURLConnection::getMainAttributes() const {
    if (!::java::net::JarURLConnection::_class) ::java::net::JarURLConnection::_class = java::fetch_class("java/net/JarURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMainAttributes", "()Ljava/util/jar/Attributes;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::jar::Attributes _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ServerSocket::ServerSocket() : ::java::lang::Object((jobject)0) {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ServerSocket::ServerSocket(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ServerSocket::ServerSocket(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ServerSocket::ServerSocket(int32_t arg0, int32_t arg1, const ::java::net::InetAddress& arg2) : ::java::lang::Object((jobject)0) {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IILjava/net/InetAddress;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::net::Socket java::net::ServerSocket::accept() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

void java::net::ServerSocket::close() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::net::InetAddress java::net::ServerSocket::getInetAddress() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInetAddress", "()Ljava/net/InetAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::InetAddress _ret(ret);
    return _ret;
}

int32_t java::net::ServerSocket::getLocalPort() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPort", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::net::ServerSocket::getSoTimeout() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::net::ServerSocket::setSocketFactory(const ::java::net::SocketImplFactory& arg0){
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSocketFactory", "(Ljava/net/SocketImplFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::ServerSocket::setSoTimeout(int32_t arg0) const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::net::ServerSocket::toString() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::net::ServerSocket::bind(const ::java::net::SocketAddress& arg0) const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Ljava/net/SocketAddress;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::ServerSocket::bind(const ::java::net::SocketAddress& arg0, int32_t arg1) const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Ljava/net/SocketAddress;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::net::SocketAddress java::net::ServerSocket::getLocalSocketAddress() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalSocketAddress", "()Ljava/net/SocketAddress;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

bool java::net::ServerSocket::isBound() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBound", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::ServerSocket::isClosed() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClosed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::ServerSocket::setReuseAddress(bool arg0) const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReuseAddress", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::ServerSocket::getReuseAddress() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReuseAddress", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::ServerSocket::setReceiveBufferSize(int32_t arg0) const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReceiveBufferSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::net::ServerSocket::getReceiveBufferSize() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getReceiveBufferSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::channels::ServerSocketChannel java::net::ServerSocket::getChannel() const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChannel", "()Ljava/nio/channels/ServerSocketChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::ServerSocketChannel _ret(ret);
    return _ret;
}

void java::net::ServerSocket::setPerformancePreferences(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::net::ServerSocket::_class) ::java::net::ServerSocket::_class = java::fetch_class("java/net/ServerSocket");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPerformancePreferences", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::net::HttpURLConnection::disconnect() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "disconnect", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::InputStream java::net::HttpURLConnection::getErrorStream() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

bool java::net::HttpURLConnection::getFollowRedirects(){
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFollowRedirects", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::java::security::Permission java::net::HttpURLConnection::getPermission() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermission", "()Ljava/security/Permission;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Permission _ret(ret);
    return _ret;
}

::java::lang::String java::net::HttpURLConnection::getRequestMethod() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestMethod", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::HttpURLConnection::getResponseCode() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::HttpURLConnection::getResponseMessage() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResponseMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::net::HttpURLConnection::setFollowRedirects(bool arg0){
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFollowRedirects", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::net::HttpURLConnection::setRequestMethod(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRequestMethod", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::net::HttpURLConnection::usingProxy() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "usingProxy", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::net::HttpURLConnection::getContentEncoding() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::HttpURLConnection::getInstanceFollowRedirects() const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstanceFollowRedirects", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::HttpURLConnection::setInstanceFollowRedirects(bool arg0) const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInstanceFollowRedirects", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t java::net::HttpURLConnection::getHeaderFieldDate(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderFieldDate", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void java::net::HttpURLConnection::setFixedLengthStreamingMode(int32_t arg0) const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFixedLengthStreamingMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpURLConnection::setChunkedStreamingMode(int32_t arg0) const {
    if (!::java::net::HttpURLConnection::_class) ::java::net::HttpURLConnection::_class = java::fetch_class("java/net/HttpURLConnection");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChunkedStreamingMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ConnectException::ConnectException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::ConnectException::_class) ::java::net::ConnectException::_class = java::fetch_class("java/net/ConnectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ConnectException::ConnectException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::net::SocketException((jobject)0) {
    if (!::java::net::ConnectException::_class) ::java::net::ConnectException::_class = java::fetch_class("java/net/ConnectException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::net::NetworkInterface::getName() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Enumeration java::net::NetworkInterface::getInetAddresses() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInetAddresses", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::String java::net::NetworkInterface::getDisplayName() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::net::NetworkInterface java::net::NetworkInterface::getByName(const ::java::lang::String& arg0){
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByName", "(Ljava/lang/String;)Ljava/net/NetworkInterface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::NetworkInterface _ret(ret);
    return _ret;
}

::java::net::NetworkInterface java::net::NetworkInterface::getByInetAddress(const ::java::net::InetAddress& arg0){
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getByInetAddress", "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::NetworkInterface _ret(ret);
    return _ret;
}

::java::util::Enumeration java::net::NetworkInterface::getNetworkInterfaces(){
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNetworkInterfaces", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::net::NetworkInterface::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::net::NetworkInterface::hashCode() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::NetworkInterface::toString() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List java::net::NetworkInterface::getInterfaceAddresses() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterfaceAddresses", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Enumeration java::net::NetworkInterface::getSubInterfaces() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubInterfaces", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::net::NetworkInterface java::net::NetworkInterface::getParent() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Ljava/net/NetworkInterface;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::NetworkInterface _ret(ret);
    return _ret;
}

bool java::net::NetworkInterface::isUp() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isUp", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::NetworkInterface::isLoopback() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLoopback", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::NetworkInterface::isPointToPoint() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPointToPoint", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::net::NetworkInterface::supportsMulticast() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsMulticast", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< int8_t> java::net::NetworkInterface::getHardwareAddress() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHardwareAddress", "()[B");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t java::net::NetworkInterface::getMTU() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMTU", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::net::NetworkInterface::isVirtual() const {
    if (!::java::net::NetworkInterface::_class) ::java::net::NetworkInterface::_class = java::fetch_class("java/net/NetworkInterface");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVirtual", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::HttpCookie::HttpCookie(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool java::net::HttpCookie::domainMatches(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "domainMatches", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::util::List java::net::HttpCookie::parse(const ::java::lang::String& arg0){
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String java::net::HttpCookie::getComment() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::HttpCookie::getCommentURL() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCommentURL", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::HttpCookie::getDiscard() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDiscard", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::net::HttpCookie::getDomain() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::net::HttpCookie::getMaxAge() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxAge", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String java::net::HttpCookie::getName() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::HttpCookie::getPath() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::net::HttpCookie::getPortlist() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPortlist", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::net::HttpCookie::getSecure() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecure", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String java::net::HttpCookie::getValue() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::net::HttpCookie::getVersion() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::net::HttpCookie::hasExpired() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasExpired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::net::HttpCookie::setComment(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setComment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setCommentURL(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCommentURL", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setDiscard(bool arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDiscard", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setDomain(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDomain", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setMaxAge(int64_t arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxAge", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setPath(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setPortlist(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPortlist", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setSecure(bool arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecure", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setValue(const ::java::lang::String& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::net::HttpCookie::setVersion(int32_t arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVersion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::net::HttpCookie::clone() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::net::HttpCookie::equals(const ::java::lang::Object& arg0) const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::net::HttpCookie::hashCode() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::net::HttpCookie::toString() const {
    if (!::java::net::HttpCookie::_class) ::java::net::HttpCookie::_class = java::fetch_class("java/net/HttpCookie");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::UnknownHostException::UnknownHostException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::UnknownHostException::_class) ::java::net::UnknownHostException::_class = java::fetch_class("java/net/UnknownHostException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::UnknownHostException::UnknownHostException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::net::UnknownHostException::_class) ::java::net::UnknownHostException::_class = java::fetch_class("java/net/UnknownHostException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::net::ResponseCache::ResponseCache() : ::java::lang::Object((jobject)0) {
    if (!::java::net::ResponseCache::_class) ::java::net::ResponseCache::_class = java::fetch_class("java/net/ResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::net::ResponseCache java::net::ResponseCache::getDefault(){
    if (!::java::net::ResponseCache::_class) ::java::net::ResponseCache::_class = java::fetch_class("java/net/ResponseCache");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljava/net/ResponseCache;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::net::ResponseCache _ret(ret);
    return _ret;
}

void java::net::ResponseCache::setDefault(const ::java::net::ResponseCache& arg0){
    if (!::java::net::ResponseCache::_class) ::java::net::ResponseCache::_class = java::fetch_class("java/net/ResponseCache");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljava/net/ResponseCache;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::net::CacheResponse java::net::ResponseCache::get(const ::java::net::URI& arg0, const ::java::lang::String& arg1, const ::java::util::Map& arg2) const {
    if (!::java::net::ResponseCache::_class) ::java::net::ResponseCache::_class = java::fetch_class("java/net/ResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::net::CacheResponse _ret(ret);
    return _ret;
}

::java::net::CacheRequest java::net::ResponseCache::put(const ::java::net::URI& arg0, const ::java::net::URLConnection& arg1) const {
    if (!::java::net::ResponseCache::_class) ::java::net::ResponseCache::_class = java::fetch_class("java/net/ResponseCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::CacheRequest _ret(ret);
    return _ret;
}

bool java::net::CookiePolicy::shouldAccept(const ::java::net::URI& arg0, const ::java::net::HttpCookie& arg1) const {
    if (!::java::net::CookiePolicy::_class) ::java::net::CookiePolicy::_class = java::fetch_class("java/net/CookiePolicy");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldAccept", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::net::FileNameMap::getContentTypeFor(const ::java::lang::String& arg0) const {
    if (!::java::net::FileNameMap::_class) ::java::net::FileNameMap::_class = java::fetch_class("java/net/FileNameMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentTypeFor", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}


#include "java-core.hpp"
#include <memory>
#include "java.lang.String.hpp"
#include "java.net.InetAddress.hpp"
#include "java.net.ServerSocket.hpp"
#include "java.net.Socket.hpp"
#include "javax.net.ServerSocketFactory.hpp"
#include "javax.net.SocketFactory.hpp"

jclass javax::net::ServerSocketFactory::_class = nullptr;
jclass javax::net::SocketFactory::_class = nullptr;

::javax::net::ServerSocketFactory javax::net::ServerSocketFactory::getDefault(){
    if (!::javax::net::ServerSocketFactory::_class) ::javax::net::ServerSocketFactory::_class = java::fetch_class("javax/net/ServerSocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljavax/net/ServerSocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::ServerSocketFactory _ret(ret);
    return _ret;
}

::java::net::ServerSocket javax::net::ServerSocketFactory::createServerSocket() const {
    if (!::javax::net::ServerSocketFactory::_class) ::javax::net::ServerSocketFactory::_class = java::fetch_class("javax/net/ServerSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createServerSocket", "()Ljava/net/ServerSocket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::ServerSocket _ret(ret);
    return _ret;
}

::java::net::ServerSocket javax::net::ServerSocketFactory::createServerSocket(int32_t arg0) const {
    if (!::javax::net::ServerSocketFactory::_class) ::javax::net::ServerSocketFactory::_class = java::fetch_class("javax/net/ServerSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createServerSocket", "(I)Ljava/net/ServerSocket;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::ServerSocket _ret(ret);
    return _ret;
}

::java::net::ServerSocket javax::net::ServerSocketFactory::createServerSocket(int32_t arg0, int32_t arg1) const {
    if (!::javax::net::ServerSocketFactory::_class) ::javax::net::ServerSocketFactory::_class = java::fetch_class("javax/net/ServerSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createServerSocket", "(II)Ljava/net/ServerSocket;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::ServerSocket _ret(ret);
    return _ret;
}

::java::net::ServerSocket javax::net::ServerSocketFactory::createServerSocket(int32_t arg0, int32_t arg1, const ::java::net::InetAddress& arg2) const {
    if (!::javax::net::ServerSocketFactory::_class) ::javax::net::ServerSocketFactory::_class = java::fetch_class("javax/net/ServerSocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createServerSocket", "(IILjava/net/InetAddress;)Ljava/net/ServerSocket;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::net::ServerSocket _ret(ret);
    return _ret;
}

::javax::net::SocketFactory javax::net::SocketFactory::getDefault(){
    if (!::javax::net::SocketFactory::_class) ::javax::net::SocketFactory::_class = java::fetch_class("javax/net/SocketFactory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljavax/net/SocketFactory;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::javax::net::SocketFactory _ret(ret);
    return _ret;
}

::java::net::Socket javax::net::SocketFactory::createSocket() const {
    if (!::javax::net::SocketFactory::_class) ::javax::net::SocketFactory::_class = java::fetch_class("javax/net/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket javax::net::SocketFactory::createSocket(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::javax::net::SocketFactory::_class) ::javax::net::SocketFactory::_class = java::fetch_class("javax/net/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket javax::net::SocketFactory::createSocket(const ::java::lang::String& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) const {
    if (!::javax::net::SocketFactory::_class) ::javax::net::SocketFactory::_class = java::fetch_class("javax/net/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket javax::net::SocketFactory::createSocket(const ::java::net::InetAddress& arg0, int32_t arg1) const {
    if (!::javax::net::SocketFactory::_class) ::javax::net::SocketFactory::_class = java::fetch_class("javax/net/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/InetAddress;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::net::Socket _ret(ret);
    return _ret;
}

::java::net::Socket javax::net::SocketFactory::createSocket(const ::java::net::InetAddress& arg0, int32_t arg1, const ::java::net::InetAddress& arg2, int32_t arg3) const {
    if (!::javax::net::SocketFactory::_class) ::javax::net::SocketFactory::_class = java::fetch_class("javax/net/SocketFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSocket", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::net::Socket _ret(ret);
    return _ret;
}


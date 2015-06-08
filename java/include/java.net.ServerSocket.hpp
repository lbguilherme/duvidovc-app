#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class Socket; } }
namespace java { namespace net { class SocketAddress; } }
namespace java { namespace net { class SocketImplFactory; } }
namespace java { namespace nio { namespace channels { class ServerSocketChannel; } } }

namespace java {
namespace net {
class ServerSocket : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServerSocket(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServerSocket(const ::java::net::ServerSocket& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ServerSocket(::java::net::ServerSocket&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::ServerSocket& operator=(const ::java::net::ServerSocket& x) {obj = x.obj; return *this;}
    ::java::net::ServerSocket& operator=(::java::net::ServerSocket&& x) {obj = std::move(x.obj); return *this;}
    
    ServerSocket();
    ServerSocket(int32_t);
    ServerSocket(int32_t, int32_t);
    ServerSocket(int32_t, int32_t, const ::java::net::InetAddress&);
    ::java::net::Socket accept() const;
    void close() const;
    ::java::net::InetAddress getInetAddress() const;
    int32_t getLocalPort() const;
    int32_t getSoTimeout() const;
    static void setSocketFactory(const ::java::net::SocketImplFactory&);
    void setSoTimeout(int32_t) const;
    ::java::lang::String toString() const;
    void bind(const ::java::net::SocketAddress&) const;
    void bind(const ::java::net::SocketAddress&, int32_t) const;
    ::java::net::SocketAddress getLocalSocketAddress() const;
    bool isBound() const;
    bool isClosed() const;
    void setReuseAddress(bool) const;
    bool getReuseAddress() const;
    void setReceiveBufferSize(int32_t) const;
    int32_t getReceiveBufferSize() const;
    ::java::nio::channels::ServerSocketChannel getChannel() const;
    void setPerformancePreferences(int32_t, int32_t, int32_t) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class Proxy; } }
namespace java { namespace net { class SocketAddress; } }
namespace java { namespace net { class SocketImplFactory; } }
namespace java { namespace nio { namespace channels { class SocketChannel; } } }

namespace java {
namespace net {
class Socket : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Socket(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Socket(const ::java::net::Socket& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Socket(::java::net::Socket&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::Socket& operator=(const ::java::net::Socket& x) {obj = x.obj; return *this;}
    ::java::net::Socket& operator=(::java::net::Socket&& x) {obj = std::move(x.obj); return *this;}
    
    Socket();
    Socket(const ::java::net::Proxy&);
    Socket(const ::java::lang::String&, int32_t);
    Socket(const ::java::lang::String&, int32_t, const ::java::net::InetAddress&, int32_t);
    Socket(const ::java::lang::String&, int32_t, bool);
    Socket(const ::java::net::InetAddress&, int32_t);
    Socket(const ::java::net::InetAddress&, int32_t, const ::java::net::InetAddress&, int32_t);
    Socket(const ::java::net::InetAddress&, int32_t, bool);
    void close() const ;
    ::java::net::InetAddress getInetAddress() const ;
    ::java::io::InputStream getInputStream() const ;
    bool getKeepAlive() const ;
    ::java::net::InetAddress getLocalAddress() const ;
    int32_t getLocalPort() const ;
    ::java::io::OutputStream getOutputStream() const ;
    int32_t getPort() const ;
    int32_t getSoLinger() const ;
    int32_t getReceiveBufferSize() const ;
    int32_t getSendBufferSize() const ;
    int32_t getSoTimeout() const ;
    bool getTcpNoDelay() const ;
    void setKeepAlive(bool) const ;
    static void setSocketImplFactory(const ::java::net::SocketImplFactory&);
    void setSendBufferSize(int32_t) const ;
    void setReceiveBufferSize(int32_t) const ;
    void setSoLinger(bool, int32_t) const ;
    void setSoTimeout(int32_t) const ;
    void setTcpNoDelay(bool) const ;
    ::java::lang::String toString() const ;
    void shutdownInput() const ;
    void shutdownOutput() const ;
    ::java::net::SocketAddress getLocalSocketAddress() const ;
    ::java::net::SocketAddress getRemoteSocketAddress() const ;
    bool isBound() const ;
    bool isConnected() const ;
    bool isClosed() const ;
    void bind(const ::java::net::SocketAddress&) const ;
    void connect(const ::java::net::SocketAddress&) const ;
    void connect(const ::java::net::SocketAddress&, int32_t) const ;
    bool isInputShutdown() const ;
    bool isOutputShutdown() const ;
    void setReuseAddress(bool) const ;
    bool getReuseAddress() const ;
    void setOOBInline(bool) const ;
    bool getOOBInline() const ;
    void setTrafficClass(int32_t) const ;
    int32_t getTrafficClass() const ;
    void sendUrgentData(int32_t) const ;
    ::java::nio::channels::SocketChannel getChannel() const ;
    void setPerformancePreferences(int32_t, int32_t, int32_t) const ;

};
}
}



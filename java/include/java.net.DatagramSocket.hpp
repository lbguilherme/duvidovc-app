#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class DatagramPacket; } }
namespace java { namespace net { class DatagramSocketImplFactory; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class SocketAddress; } }
namespace java { namespace nio { namespace channels { class DatagramChannel; } } }

namespace java {
namespace net {
class DatagramSocket : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatagramSocket(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatagramSocket(const ::java::net::DatagramSocket& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatagramSocket(::java::net::DatagramSocket&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::DatagramSocket& operator=(const ::java::net::DatagramSocket& x) {obj = x.obj; return *this;}
    ::java::net::DatagramSocket& operator=(::java::net::DatagramSocket&& x) {obj = std::move(x.obj); return *this;}
    
    DatagramSocket();
    DatagramSocket(int32_t);
    DatagramSocket(int32_t, const ::java::net::InetAddress&);
    DatagramSocket(const ::java::net::SocketAddress&);
    void close() const;
    void disconnect() const;
    ::java::net::InetAddress getInetAddress() const;
    ::java::net::InetAddress getLocalAddress() const;
    int32_t getLocalPort() const;
    int32_t getPort() const;
    int32_t getReceiveBufferSize() const;
    int32_t getSendBufferSize() const;
    int32_t getSoTimeout() const;
    void receive(const ::java::net::DatagramPacket&) const;
    void send(const ::java::net::DatagramPacket&) const;
    void setSendBufferSize(int32_t) const;
    void setReceiveBufferSize(int32_t) const;
    void setSoTimeout(int32_t) const;
    static void setDatagramSocketImplFactory(const ::java::net::DatagramSocketImplFactory&);
    void bind(const ::java::net::SocketAddress&) const;
    void connect(const ::java::net::SocketAddress&) const;
    void connect(const ::java::net::InetAddress&, int32_t) const;
    bool isBound() const;
    bool isConnected() const;
    ::java::net::SocketAddress getRemoteSocketAddress() const;
    ::java::net::SocketAddress getLocalSocketAddress() const;
    void setReuseAddress(bool) const;
    bool getReuseAddress() const;
    void setBroadcast(bool) const;
    bool getBroadcast() const;
    void setTrafficClass(int32_t) const;
    int32_t getTrafficClass() const;
    bool isClosed() const;
    ::java::nio::channels::DatagramChannel getChannel() const;

};
}
}



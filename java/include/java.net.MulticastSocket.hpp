#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.DatagramSocket.hpp"

namespace java { namespace net { class DatagramPacket; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class NetworkInterface; } }
namespace java { namespace net { class SocketAddress; } }

namespace java {
namespace net {
class MulticastSocket : public virtual ::java::lang::Object,
                        public virtual ::java::net::DatagramSocket {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MulticastSocket(jobject _obj) : ::java::lang::Object(_obj), ::java::net::DatagramSocket(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MulticastSocket(const ::java::net::MulticastSocket& x) : ::java::lang::Object((jobject)0), ::java::net::DatagramSocket((jobject)0) {obj = x.obj;}
    MulticastSocket(::java::net::MulticastSocket&& x) : ::java::lang::Object((jobject)0), ::java::net::DatagramSocket((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::MulticastSocket& operator=(const ::java::net::MulticastSocket& x) {obj = x.obj; return *this;}
    ::java::net::MulticastSocket& operator=(::java::net::MulticastSocket&& x) {obj = std::move(x.obj); return *this;}
    
    MulticastSocket();
    MulticastSocket(int32_t);
    MulticastSocket(const ::java::net::SocketAddress&);
    ::java::net::InetAddress getInterface() const;
    ::java::net::NetworkInterface getNetworkInterface() const;
    int32_t getTimeToLive() const;
    int8_t getTTL() const;
    void joinGroup(const ::java::net::InetAddress&) const;
    void joinGroup(const ::java::net::SocketAddress&, const ::java::net::NetworkInterface&) const;
    void leaveGroup(const ::java::net::InetAddress&) const;
    void leaveGroup(const ::java::net::SocketAddress&, const ::java::net::NetworkInterface&) const;
    void send(const ::java::net::DatagramPacket&, int8_t) const;
    void setInterface(const ::java::net::InetAddress&) const;
    void setNetworkInterface(const ::java::net::NetworkInterface&) const;
    void setTimeToLive(int32_t) const;
    void setTTL(int8_t) const;
    bool getLoopbackMode() const;
    void setLoopbackMode(bool) const;

};
}
}



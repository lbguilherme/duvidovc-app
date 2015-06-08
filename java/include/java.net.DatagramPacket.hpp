#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class SocketAddress; } }

namespace java {
namespace net {
class DatagramPacket : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatagramPacket(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatagramPacket(const ::java::net::DatagramPacket& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatagramPacket(::java::net::DatagramPacket&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::DatagramPacket& operator=(const ::java::net::DatagramPacket& x) {obj = x.obj; return *this;}
    ::java::net::DatagramPacket& operator=(::java::net::DatagramPacket&& x) {obj = std::move(x.obj); return *this;}
    
    DatagramPacket(const std::vector< int8_t>&, int32_t);
    DatagramPacket(const std::vector< int8_t>&, int32_t, int32_t);
    DatagramPacket(const std::vector< int8_t>&, int32_t, int32_t, const ::java::net::InetAddress&, int32_t);
    DatagramPacket(const std::vector< int8_t>&, int32_t, const ::java::net::InetAddress&, int32_t);
    DatagramPacket(const std::vector< int8_t>&, int32_t, const ::java::net::SocketAddress&);
    DatagramPacket(const std::vector< int8_t>&, int32_t, int32_t, const ::java::net::SocketAddress&);
    ::java::net::InetAddress getAddress() const;
    std::vector< int8_t> getData() const;
    int32_t getLength() const;
    int32_t getOffset() const;
    int32_t getPort() const;
    void setAddress(const ::java::net::InetAddress&) const;
    void setData(const std::vector< int8_t>&, int32_t, int32_t) const;
    void setData(const std::vector< int8_t>&) const;
    void setLength(int32_t) const;
    void setPort(int32_t) const;
    ::java::net::SocketAddress getSocketAddress() const;
    void setSocketAddress(const ::java::net::SocketAddress&) const;

};
}
}



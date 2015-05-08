#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.SocketAddress.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }
namespace java { namespace net { class InetSocketAddress; } }

namespace java {
namespace net {
class InetSocketAddress : public virtual ::java::lang::Object,
                          public virtual ::java::net::SocketAddress {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InetSocketAddress(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::net::SocketAddress(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InetSocketAddress(const ::java::net::InetSocketAddress& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::SocketAddress((jobject)0) {obj = x.obj;}
    InetSocketAddress(::java::net::InetSocketAddress&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::net::SocketAddress((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::InetSocketAddress& operator=(const ::java::net::InetSocketAddress& x) {obj = x.obj; return *this;}
    ::java::net::InetSocketAddress& operator=(::java::net::InetSocketAddress&& x) {obj = std::move(x.obj); return *this;}
    
    InetSocketAddress(int32_t);
    InetSocketAddress(const ::java::net::InetAddress&, int32_t);
    InetSocketAddress(const ::java::lang::String&, int32_t);
    static ::java::net::InetSocketAddress createUnresolved(const ::java::lang::String&, int32_t);
    int32_t getPort() const ;
    ::java::net::InetAddress getAddress() const ;
    ::java::lang::String getHostName() const ;
    bool isUnresolved() const ;
    ::java::lang::String toString() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}



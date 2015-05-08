#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class InetAddress; } }

namespace java {
namespace net {
class InterfaceAddress : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InterfaceAddress(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InterfaceAddress(const ::java::net::InterfaceAddress& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InterfaceAddress(::java::net::InterfaceAddress&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::InterfaceAddress& operator=(const ::java::net::InterfaceAddress& x) {obj = x.obj; return *this;}
    ::java::net::InterfaceAddress& operator=(::java::net::InterfaceAddress&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;
    ::java::net::InetAddress getAddress() const ;
    ::java::net::InetAddress getBroadcast() const ;
    int16_t getNetworkPrefixLength() const ;

};
}
}



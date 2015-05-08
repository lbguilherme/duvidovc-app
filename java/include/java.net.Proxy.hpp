#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class Proxy_Type; } }
namespace java { namespace net { class SocketAddress; } }

namespace java {
namespace net {
class Proxy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Proxy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Proxy(const ::java::net::Proxy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Proxy(::java::net::Proxy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::Proxy& operator=(const ::java::net::Proxy& x) {obj = x.obj; return *this;}
    ::java::net::Proxy& operator=(::java::net::Proxy&& x) {obj = std::move(x.obj); return *this;}
    
    Proxy(const ::java::net::Proxy_Type&, const ::java::net::SocketAddress&);
    ::java::net::Proxy_Type type() const ;
    ::java::net::SocketAddress address() const ;
    ::java::lang::String toString() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}

#include "java.net.Proxy_Type.hpp"


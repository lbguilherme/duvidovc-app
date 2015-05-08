#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"


namespace java {
namespace net {
class SocketAddress : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketAddress(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketAddress(const ::java::net::SocketAddress& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    SocketAddress(::java::net::SocketAddress&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::SocketAddress& operator=(const ::java::net::SocketAddress& x) {obj = x.obj; return *this;}
    ::java::net::SocketAddress& operator=(::java::net::SocketAddress&& x) {obj = std::move(x.obj); return *this;}
    
    SocketAddress();

};
}
}



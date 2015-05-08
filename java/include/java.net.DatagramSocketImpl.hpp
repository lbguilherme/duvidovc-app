#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.SocketOptions.hpp"


namespace java {
namespace net {
class DatagramSocketImpl : public virtual ::java::lang::Object,
                           public virtual ::java::net::SocketOptions {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatagramSocketImpl(jobject _obj) : ::java::lang::Object(_obj), ::java::net::SocketOptions(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatagramSocketImpl(const ::java::net::DatagramSocketImpl& x) : ::java::lang::Object((jobject)0), ::java::net::SocketOptions((jobject)0) {obj = x.obj;}
    DatagramSocketImpl(::java::net::DatagramSocketImpl&& x) : ::java::lang::Object((jobject)0), ::java::net::SocketOptions((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::DatagramSocketImpl& operator=(const ::java::net::DatagramSocketImpl& x) {obj = x.obj; return *this;}
    ::java::net::DatagramSocketImpl& operator=(::java::net::DatagramSocketImpl&& x) {obj = std::move(x.obj); return *this;}
    
    DatagramSocketImpl();

};
}
}



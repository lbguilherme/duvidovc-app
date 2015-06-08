#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace net {
class SocketOptions : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketOptions(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketOptions(const ::java::net::SocketOptions& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SocketOptions(::java::net::SocketOptions&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::SocketOptions& operator=(const ::java::net::SocketOptions& x) {obj = x.obj; return *this;}
    ::java::net::SocketOptions& operator=(::java::net::SocketOptions&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object getOption(int32_t) const;
    void setOption(int32_t, const ::java::lang::Object&) const;

};
}
}



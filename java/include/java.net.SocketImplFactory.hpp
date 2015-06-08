#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class SocketImpl; } }

namespace java {
namespace net {
class SocketImplFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SocketImplFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SocketImplFactory(const ::java::net::SocketImplFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SocketImplFactory(::java::net::SocketImplFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::SocketImplFactory& operator=(const ::java::net::SocketImplFactory& x) {obj = x.obj; return *this;}
    ::java::net::SocketImplFactory& operator=(::java::net::SocketImplFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::SocketImpl createSocketImpl() const;

};
}
}



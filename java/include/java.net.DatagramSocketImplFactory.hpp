#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class DatagramSocketImpl; } }

namespace java {
namespace net {
class DatagramSocketImplFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatagramSocketImplFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatagramSocketImplFactory(const ::java::net::DatagramSocketImplFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatagramSocketImplFactory(::java::net::DatagramSocketImplFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::DatagramSocketImplFactory& operator=(const ::java::net::DatagramSocketImplFactory& x) {obj = x.obj; return *this;}
    ::java::net::DatagramSocketImplFactory& operator=(::java::net::DatagramSocketImplFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::DatagramSocketImpl createDatagramSocketImpl() const ;

};
}
}



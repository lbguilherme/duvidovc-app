#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnConnectionPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnConnectionPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnConnectionPNames(const ::org::apache::http::conn::params::ConnConnectionPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnConnectionPNames(::org::apache::http::conn::params::ConnConnectionPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnConnectionPNames& operator=(const ::org::apache::http::conn::params::ConnConnectionPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnConnectionPNames& operator=(::org::apache::http::conn::params::ConnConnectionPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



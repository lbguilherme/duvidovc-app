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
class ConnManagerPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnManagerPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnManagerPNames(const ::org::apache::http::conn::params::ConnManagerPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnManagerPNames(::org::apache::http::conn::params::ConnManagerPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnManagerPNames& operator=(const ::org::apache::http::conn::params::ConnManagerPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnManagerPNames& operator=(::org::apache::http::conn::params::ConnManagerPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



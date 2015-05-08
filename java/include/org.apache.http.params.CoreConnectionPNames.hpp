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
namespace params {
class CoreConnectionPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CoreConnectionPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CoreConnectionPNames(const ::org::apache::http::params::CoreConnectionPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CoreConnectionPNames(::org::apache::http::params::CoreConnectionPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::CoreConnectionPNames& operator=(const ::org::apache::http::params::CoreConnectionPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::CoreConnectionPNames& operator=(::org::apache::http::params::CoreConnectionPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}



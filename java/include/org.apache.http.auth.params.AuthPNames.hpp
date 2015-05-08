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
namespace auth {
namespace params {
class AuthPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthPNames(const ::org::apache::http::auth::params::AuthPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthPNames(::org::apache::http::auth::params::AuthPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::params::AuthPNames& operator=(const ::org::apache::http::auth::params::AuthPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::params::AuthPNames& operator=(::org::apache::http::auth::params::AuthPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



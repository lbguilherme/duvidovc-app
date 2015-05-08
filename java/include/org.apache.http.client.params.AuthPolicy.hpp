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
namespace client {
namespace params {
class AuthPolicy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthPolicy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthPolicy(const ::org::apache::http::client::params::AuthPolicy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthPolicy(::org::apache::http::client::params::AuthPolicy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::params::AuthPolicy& operator=(const ::org::apache::http::client::params::AuthPolicy& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::params::AuthPolicy& operator=(::org::apache::http::client::params::AuthPolicy&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



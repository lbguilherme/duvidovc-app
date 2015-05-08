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
class CookiePolicy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookiePolicy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookiePolicy(const ::org::apache::http::client::params::CookiePolicy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookiePolicy(::org::apache::http::client::params::CookiePolicy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::params::CookiePolicy& operator=(const ::org::apache::http::client::params::CookiePolicy& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::params::CookiePolicy& operator=(::org::apache::http::client::params::CookiePolicy&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



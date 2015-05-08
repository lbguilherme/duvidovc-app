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
namespace cookie {
namespace params {
class CookieSpecPNames : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSpecPNames(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSpecPNames(const ::org::apache::http::cookie::params::CookieSpecPNames& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieSpecPNames(::org::apache::http::cookie::params::CookieSpecPNames&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::params::CookieSpecPNames& operator=(const ::org::apache::http::cookie::params::CookieSpecPNames& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::params::CookieSpecPNames& operator=(::org::apache::http::cookie::params::CookieSpecPNames&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



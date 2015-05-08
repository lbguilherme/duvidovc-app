#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
namespace params {
class AuthParams : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthParams(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthParams(const ::org::apache::http::auth::params::AuthParams& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthParams(::org::apache::http::auth::params::AuthParams&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::params::AuthParams& operator=(const ::org::apache::http::auth::params::AuthParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::params::AuthParams& operator=(::org::apache::http::auth::params::AuthParams&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getCredentialCharset(const ::org::apache::http::params::HttpParams&);
    static void setCredentialCharset(const ::org::apache::http::params::HttpParams&, const ::java::lang::String&);

};
}
}
}
}
}



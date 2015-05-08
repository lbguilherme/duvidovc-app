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
namespace client {
namespace params {
class HttpClientParams : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpClientParams(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpClientParams(const ::org::apache::http::client::params::HttpClientParams& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpClientParams(::org::apache::http::client::params::HttpClientParams&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::params::HttpClientParams& operator=(const ::org::apache::http::client::params::HttpClientParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::params::HttpClientParams& operator=(::org::apache::http::client::params::HttpClientParams&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isRedirecting(const ::org::apache::http::params::HttpParams&);
    static void setRedirecting(const ::org::apache::http::params::HttpParams&, bool);
    static bool isAuthenticating(const ::org::apache::http::params::HttpParams&);
    static void setAuthenticating(const ::org::apache::http::params::HttpParams&, bool);
    static ::java::lang::String getCookiePolicy(const ::org::apache::http::params::HttpParams&);
    static void setCookiePolicy(const ::org::apache::http::params::HttpParams&, const ::java::lang::String&);

};
}
}
}
}
}



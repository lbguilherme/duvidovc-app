#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class AuthSchemeFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthSchemeFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthSchemeFactory(const ::org::apache::http::auth::AuthSchemeFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthSchemeFactory(::org::apache::http::auth::AuthSchemeFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::AuthSchemeFactory& operator=(const ::org::apache::http::auth::AuthSchemeFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::AuthSchemeFactory& operator=(::org::apache::http::auth::AuthSchemeFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::auth::AuthScheme newInstance(const ::org::apache::http::params::HttpParams&) const ;

};
}
}
}
}



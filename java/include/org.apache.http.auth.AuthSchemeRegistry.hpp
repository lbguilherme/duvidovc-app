#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } }
namespace org { namespace apache { namespace http { namespace auth { class AuthSchemeFactory; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
class AuthSchemeRegistry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthSchemeRegistry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthSchemeRegistry(const ::org::apache::http::auth::AuthSchemeRegistry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthSchemeRegistry(::org::apache::http::auth::AuthSchemeRegistry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::AuthSchemeRegistry& operator=(const ::org::apache::http::auth::AuthSchemeRegistry& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::AuthSchemeRegistry& operator=(::org::apache::http::auth::AuthSchemeRegistry&& x) {obj = std::move(x.obj); return *this;}
    
    AuthSchemeRegistry();
    void register_(const ::java::lang::String&, const ::org::apache::http::auth::AuthSchemeFactory&) const ;
    void unregister(const ::java::lang::String&) const ;
    ::org::apache::http::auth::AuthScheme getAuthScheme(const ::java::lang::String&, const ::org::apache::http::params::HttpParams&) const ;
    ::java::util::List getSchemeNames() const ;
    void setItems(const ::java::util::Map&) const ;

};
}
}
}
}



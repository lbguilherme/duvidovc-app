#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class AuthenticationHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthenticationHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthenticationHandler(const ::org::apache::http::client::AuthenticationHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AuthenticationHandler(::org::apache::http::client::AuthenticationHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::AuthenticationHandler& operator=(const ::org::apache::http::client::AuthenticationHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::AuthenticationHandler& operator=(::org::apache::http::client::AuthenticationHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool isAuthenticationRequested(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;
    ::java::util::Map getChallenges(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;
    ::org::apache::http::auth::AuthScheme selectScheme(const ::java::util::Map&, const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}



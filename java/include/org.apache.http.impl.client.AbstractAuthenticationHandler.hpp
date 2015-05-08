#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.AuthenticationHandler.hpp"

namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class AbstractAuthenticationHandler : public virtual ::java::lang::Object,
                                      public virtual ::org::apache::http::client::AuthenticationHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractAuthenticationHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::AuthenticationHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractAuthenticationHandler(const ::org::apache::http::impl::client::AbstractAuthenticationHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0) {obj = x.obj;}
    AbstractAuthenticationHandler(::org::apache::http::impl::client::AbstractAuthenticationHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::AbstractAuthenticationHandler& operator=(const ::org::apache::http::impl::client::AbstractAuthenticationHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::AbstractAuthenticationHandler& operator=(::org::apache::http::impl::client::AbstractAuthenticationHandler&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractAuthenticationHandler();
    ::org::apache::http::auth::AuthScheme selectScheme(const ::java::util::Map&, const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}
}



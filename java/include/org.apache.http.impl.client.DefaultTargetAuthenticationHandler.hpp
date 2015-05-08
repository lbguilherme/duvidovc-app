#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.client.AbstractAuthenticationHandler.hpp"

namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultTargetAuthenticationHandler : public virtual ::java::lang::Object,
                                           public virtual ::org::apache::http::impl::client::AbstractAuthenticationHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultTargetAuthenticationHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::AuthenticationHandler(_obj), ::org::apache::http::impl::client::AbstractAuthenticationHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultTargetAuthenticationHandler(const ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0), ::org::apache::http::impl::client::AbstractAuthenticationHandler((jobject)0) {obj = x.obj;}
    DefaultTargetAuthenticationHandler(::org::apache::http::impl::client::DefaultTargetAuthenticationHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::AuthenticationHandler((jobject)0), ::org::apache::http::impl::client::AbstractAuthenticationHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler& operator=(const ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultTargetAuthenticationHandler& operator=(::org::apache::http::impl::client::DefaultTargetAuthenticationHandler&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultTargetAuthenticationHandler();
    bool isAuthenticationRequested(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const ;
    ::java::util::Map getChallenges(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}
}



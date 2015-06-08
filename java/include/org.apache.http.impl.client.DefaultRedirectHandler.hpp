#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.RedirectHandler.hpp"

namespace java { namespace net { class URI; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultRedirectHandler : public virtual ::java::lang::Object,
                               public virtual ::org::apache::http::client::RedirectHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultRedirectHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::RedirectHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultRedirectHandler(const ::org::apache::http::impl::client::DefaultRedirectHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::RedirectHandler((jobject)0) {obj = x.obj;}
    DefaultRedirectHandler(::org::apache::http::impl::client::DefaultRedirectHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::RedirectHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultRedirectHandler& operator=(const ::org::apache::http::impl::client::DefaultRedirectHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultRedirectHandler& operator=(::org::apache::http::impl::client::DefaultRedirectHandler&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultRedirectHandler();
    bool isRedirectRequested(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;
    ::java::net::URI getLocationURI(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}
}



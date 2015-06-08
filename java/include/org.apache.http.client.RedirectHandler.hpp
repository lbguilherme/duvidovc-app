#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class URI; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class RedirectHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RedirectHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RedirectHandler(const ::org::apache::http::client::RedirectHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RedirectHandler(::org::apache::http::client::RedirectHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::RedirectHandler& operator=(const ::org::apache::http::client::RedirectHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::RedirectHandler& operator=(::org::apache::http::client::RedirectHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool isRedirectRequested(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;
    ::java::net::URI getLocationURI(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}



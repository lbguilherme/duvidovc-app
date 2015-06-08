#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpResponseInterceptor.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace protocol {
class ResponseProcessCookies : public virtual ::java::lang::Object,
                               public virtual ::org::apache::http::HttpResponseInterceptor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResponseProcessCookies(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpResponseInterceptor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResponseProcessCookies(const ::org::apache::http::client::protocol::ResponseProcessCookies& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj;}
    ResponseProcessCookies(::org::apache::http::client::protocol::ResponseProcessCookies&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::protocol::ResponseProcessCookies& operator=(const ::org::apache::http::client::protocol::ResponseProcessCookies& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::protocol::ResponseProcessCookies& operator=(::org::apache::http::client::protocol::ResponseProcessCookies&& x) {obj = std::move(x.obj); return *this;}
    
    ResponseProcessCookies();
    void process(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}
}



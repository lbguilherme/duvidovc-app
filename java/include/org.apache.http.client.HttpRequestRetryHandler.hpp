#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class IOException; } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class HttpRequestRetryHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestRetryHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestRetryHandler(const ::org::apache::http::client::HttpRequestRetryHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRequestRetryHandler(::org::apache::http::client::HttpRequestRetryHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::HttpRequestRetryHandler& operator=(const ::org::apache::http::client::HttpRequestRetryHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::HttpRequestRetryHandler& operator=(::org::apache::http::client::HttpRequestRetryHandler&& x) {obj = std::move(x.obj); return *this;}
    
    bool retryRequest(const ::java::io::IOException&, int32_t, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}



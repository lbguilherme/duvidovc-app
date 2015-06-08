#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
class HttpRequestInterceptor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestInterceptor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRequestInterceptor(::org::apache::http::HttpRequestInterceptor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpRequestInterceptor& operator=(const ::org::apache::http::HttpRequestInterceptor& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpRequestInterceptor& operator=(::org::apache::http::HttpRequestInterceptor&& x) {obj = std::move(x.obj); return *this;}
    
    void process(const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}



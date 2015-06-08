#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
class HttpResponseInterceptor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseInterceptor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpResponseInterceptor(::org::apache::http::HttpResponseInterceptor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpResponseInterceptor& operator=(const ::org::apache::http::HttpResponseInterceptor& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpResponseInterceptor& operator=(::org::apache::http::HttpResponseInterceptor&& x) {obj = std::move(x.obj); return *this;}
    
    void process(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}



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
namespace protocol {
class ResponseDate : public virtual ::java::lang::Object,
                     public virtual ::org::apache::http::HttpResponseInterceptor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResponseDate(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpResponseInterceptor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResponseDate(const ::org::apache::http::protocol::ResponseDate& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj;}
    ResponseDate(::org::apache::http::protocol::ResponseDate&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::ResponseDate& operator=(const ::org::apache::http::protocol::ResponseDate& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::ResponseDate& operator=(::org::apache::http::protocol::ResponseDate&& x) {obj = std::move(x.obj); return *this;}
    
    ResponseDate();
    void process(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}



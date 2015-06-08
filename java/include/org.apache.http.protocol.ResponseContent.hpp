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
class ResponseContent : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::HttpResponseInterceptor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ResponseContent(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpResponseInterceptor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ResponseContent(const ::org::apache::http::protocol::ResponseContent& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj;}
    ResponseContent(::org::apache::http::protocol::ResponseContent&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::ResponseContent& operator=(const ::org::apache::http::protocol::ResponseContent& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::ResponseContent& operator=(::org::apache::http::protocol::ResponseContent&& x) {obj = std::move(x.obj); return *this;}
    
    ResponseContent();
    void process(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}



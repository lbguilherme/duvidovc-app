#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpRequestInterceptor.hpp"
#include "org.apache.http.HttpResponseInterceptor.hpp"


namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpProcessor : public virtual ::java::lang::Object,
                      public virtual ::org::apache::http::HttpRequestInterceptor,
                      public virtual ::org::apache::http::HttpResponseInterceptor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpProcessor(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpRequestInterceptor(_obj), ::org::apache::http::HttpResponseInterceptor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpProcessor(const ::org::apache::http::protocol::HttpProcessor& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj;}
    HttpProcessor(::org::apache::http::protocol::HttpProcessor&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpProcessor& operator=(const ::org::apache::http::protocol::HttpProcessor& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpProcessor& operator=(::org::apache::http::protocol::HttpProcessor&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}



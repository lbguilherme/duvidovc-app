#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }

namespace org {
namespace apache {
namespace http {
class HttpRequestFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestFactory(const ::org::apache::http::HttpRequestFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRequestFactory(::org::apache::http::HttpRequestFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpRequestFactory& operator=(const ::org::apache::http::HttpRequestFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpRequestFactory& operator=(::org::apache::http::HttpRequestFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::HttpRequest newHttpRequest(const ::org::apache::http::RequestLine&) const ;
    ::org::apache::http::HttpRequest newHttpRequest(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpRequestFactory.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class DefaultHttpRequestFactory : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::HttpRequestFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpRequestFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpRequestFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpRequestFactory(const ::org::apache::http::impl::DefaultHttpRequestFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestFactory((jobject)0) {obj = x.obj;}
    DefaultHttpRequestFactory(::org::apache::http::impl::DefaultHttpRequestFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpRequestFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::DefaultHttpRequestFactory& operator=(const ::org::apache::http::impl::DefaultHttpRequestFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::DefaultHttpRequestFactory& operator=(::org::apache::http::impl::DefaultHttpRequestFactory&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpRequestFactory();
    ::org::apache::http::HttpRequest newHttpRequest(const ::org::apache::http::RequestLine&) const ;
    ::org::apache::http::HttpRequest newHttpRequest(const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}
}
}



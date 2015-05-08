#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.ResponseHandler.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class BasicResponseHandler : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::client::ResponseHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicResponseHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::ResponseHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicResponseHandler(const ::org::apache::http::impl::client::BasicResponseHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::ResponseHandler((jobject)0) {obj = x.obj;}
    BasicResponseHandler(::org::apache::http::impl::client::BasicResponseHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::ResponseHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::BasicResponseHandler& operator=(const ::org::apache::http::impl::client::BasicResponseHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::BasicResponseHandler& operator=(::org::apache::http::impl::client::BasicResponseHandler&& x) {obj = std::move(x.obj); return *this;}
    
    BasicResponseHandler();
    ::java::lang::String handleResponse(const ::org::apache::http::HttpResponse&) const ;

};
}
}
}
}
}



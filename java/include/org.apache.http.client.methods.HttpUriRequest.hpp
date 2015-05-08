#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpRequest.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace methods {
class HttpUriRequest : public virtual ::java::lang::Object,
                       public virtual ::org::apache::http::HttpRequest {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpUriRequest(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpUriRequest(const ::org::apache::http::client::methods::HttpUriRequest& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0) {obj = x.obj;}
    HttpUriRequest(::org::apache::http::client::methods::HttpUriRequest&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::methods::HttpUriRequest& operator=(const ::org::apache::http::client::methods::HttpUriRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::methods::HttpUriRequest& operator=(::org::apache::http::client::methods::HttpUriRequest&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getMethod() const ;
    ::java::net::URI getURI() const ;
    void abort() const ;
    bool isAborted() const ;

};
}
}
}
}
}



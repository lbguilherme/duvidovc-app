#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.methods.HttpEntityEnclosingRequestBase.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace methods {
class HttpPost : public virtual ::java::lang::Object,
                 public virtual ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpPost(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HttpEntityEnclosingRequest(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::client::methods::AbortableHttpRequest(_obj), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase(_obj), ::org::apache::http::client::methods::HttpRequestBase(_obj), ::org::apache::http::client::methods::HttpUriRequest(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpPost(const ::org::apache::http::client::methods::HttpPost& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    HttpPost(::org::apache::http::client::methods::HttpPost&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::methods::HttpPost& operator=(const ::org::apache::http::client::methods::HttpPost& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::methods::HttpPost& operator=(::org::apache::http::client::methods::HttpPost&& x) {obj = std::move(x.obj); return *this;}
    
    HttpPost();
    HttpPost(const ::java::net::URI&);
    HttpPost(const ::java::lang::String&);
    ::java::lang::String getMethod() const ;

};
}
}
}
}
}



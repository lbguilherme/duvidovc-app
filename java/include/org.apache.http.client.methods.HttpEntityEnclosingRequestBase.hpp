#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.client.methods.HttpRequestBase.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace methods {
class HttpEntityEnclosingRequestBase : public virtual ::java::lang::Object,
                                       public virtual ::org::apache::http::HttpEntityEnclosingRequest,
                                       public virtual ::org::apache::http::client::methods::HttpRequestBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpEntityEnclosingRequestBase(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HttpEntityEnclosingRequest(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::client::methods::AbortableHttpRequest(_obj), ::org::apache::http::client::methods::HttpRequestBase(_obj), ::org::apache::http::client::methods::HttpUriRequest(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpEntityEnclosingRequestBase(const ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    HttpEntityEnclosingRequestBase(::org::apache::http::client::methods::HttpEntityEnclosingRequestBase&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpRequestBase((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase& operator=(const ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::methods::HttpEntityEnclosingRequestBase& operator=(::org::apache::http::client::methods::HttpEntityEnclosingRequestBase&& x) {obj = std::move(x.obj); return *this;}
    
    HttpEntityEnclosingRequestBase();
    ::org::apache::http::HttpEntity getEntity() const ;
    void setEntity(const ::org::apache::http::HttpEntity&) const ;
    bool expectContinue() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}
}



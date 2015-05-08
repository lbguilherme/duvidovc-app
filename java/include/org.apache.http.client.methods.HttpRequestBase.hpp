#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.client.methods.AbortableHttpRequest.hpp"
#include "org.apache.http.client.methods.HttpUriRequest.hpp"
#include "org.apache.http.message.AbstractHttpMessage.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionRequest; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ConnectionReleaseTrigger; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace methods {
class HttpRequestBase : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Cloneable,
                        public virtual ::org::apache::http::client::methods::AbortableHttpRequest,
                        public virtual ::org::apache::http::client::methods::HttpUriRequest,
                        public virtual ::org::apache::http::message::AbstractHttpMessage {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestBase(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::client::methods::AbortableHttpRequest(_obj), ::org::apache::http::client::methods::HttpUriRequest(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestBase(const ::org::apache::http::client::methods::HttpRequestBase& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    HttpRequestBase(::org::apache::http::client::methods::HttpRequestBase&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::AbortableHttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::methods::HttpRequestBase& operator=(const ::org::apache::http::client::methods::HttpRequestBase& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::methods::HttpRequestBase& operator=(::org::apache::http::client::methods::HttpRequestBase&& x) {obj = std::move(x.obj); return *this;}
    
    HttpRequestBase();
    ::java::lang::String getMethod() const ;
    ::org::apache::http::ProtocolVersion getProtocolVersion() const ;
    ::java::net::URI getURI() const ;
    ::org::apache::http::RequestLine getRequestLine() const ;
    void setURI(const ::java::net::URI&) const ;
    void setConnectionRequest(const ::org::apache::http::conn::ClientConnectionRequest&) const ;
    void setReleaseTrigger(const ::org::apache::http::conn::ConnectionReleaseTrigger&) const ;
    void abort() const ;
    bool isAborted() const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}
}



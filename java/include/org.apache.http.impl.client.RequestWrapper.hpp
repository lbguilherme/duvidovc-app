#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.methods.HttpUriRequest.hpp"
#include "org.apache.http.message.AbstractHttpMessage.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URI; } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class RequestWrapper : public virtual ::java::lang::Object,
                       public virtual ::org::apache::http::client::methods::HttpUriRequest,
                       public virtual ::org::apache::http::message::AbstractHttpMessage {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RequestWrapper(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::client::methods::HttpUriRequest(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RequestWrapper(const ::org::apache::http::impl::client::RequestWrapper& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    RequestWrapper(::org::apache::http::impl::client::RequestWrapper&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::RequestWrapper& operator=(const ::org::apache::http::impl::client::RequestWrapper& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::RequestWrapper& operator=(::org::apache::http::impl::client::RequestWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    RequestWrapper(const ::org::apache::http::HttpRequest&);
    void resetHeaders() const ;
    ::java::lang::String getMethod() const ;
    void setMethod(const ::java::lang::String&) const ;
    ::org::apache::http::ProtocolVersion getProtocolVersion() const ;
    void setProtocolVersion(const ::org::apache::http::ProtocolVersion&) const ;
    ::java::net::URI getURI() const ;
    void setURI(const ::java::net::URI&) const ;
    ::org::apache::http::RequestLine getRequestLine() const ;
    void abort() const ;
    bool isAborted() const ;
    ::org::apache::http::HttpRequest getOriginal() const ;
    bool isRepeatable() const ;
    int32_t getExecCount() const ;
    void incrementExecCount() const ;

};
}
}
}
}
}



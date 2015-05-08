#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.message.BasicHttpRequest.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHttpEntityEnclosingRequest : public virtual ::java::lang::Object,
                                        public virtual ::org::apache::http::HttpEntityEnclosingRequest,
                                        public virtual ::org::apache::http::message::BasicHttpRequest {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpEntityEnclosingRequest(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntityEnclosingRequest(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj), ::org::apache::http::message::BasicHttpRequest(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpEntityEnclosingRequest(const ::org::apache::http::message::BasicHttpEntityEnclosingRequest& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0), ::org::apache::http::message::BasicHttpRequest((jobject)0) {obj = x.obj;}
    BasicHttpEntityEnclosingRequest(::org::apache::http::message::BasicHttpEntityEnclosingRequest&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0), ::org::apache::http::message::BasicHttpRequest((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHttpEntityEnclosingRequest& operator=(const ::org::apache::http::message::BasicHttpEntityEnclosingRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHttpEntityEnclosingRequest& operator=(::org::apache::http::message::BasicHttpEntityEnclosingRequest&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpEntityEnclosingRequest(const ::java::lang::String&, const ::java::lang::String&);
    BasicHttpEntityEnclosingRequest(const ::java::lang::String&, const ::java::lang::String&, const ::org::apache::http::ProtocolVersion&);
    BasicHttpEntityEnclosingRequest(const ::org::apache::http::RequestLine&);
    ::org::apache::http::HttpEntity getEntity() const ;
    void setEntity(const ::org::apache::http::HttpEntity&) const ;
    bool expectContinue() const ;

};
}
}
}
}



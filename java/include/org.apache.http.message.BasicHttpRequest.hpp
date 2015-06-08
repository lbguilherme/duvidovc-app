#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpRequest.hpp"
#include "org.apache.http.message.AbstractHttpMessage.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class RequestLine; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHttpRequest : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::HttpRequest,
                         public virtual ::org::apache::http::message::AbstractHttpMessage {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpRequest(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpRequest(const ::org::apache::http::message::BasicHttpRequest& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    BasicHttpRequest(::org::apache::http::message::BasicHttpRequest&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHttpRequest& operator=(const ::org::apache::http::message::BasicHttpRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHttpRequest& operator=(::org::apache::http::message::BasicHttpRequest&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpRequest(const ::java::lang::String&, const ::java::lang::String&);
    BasicHttpRequest(const ::java::lang::String&, const ::java::lang::String&, const ::org::apache::http::ProtocolVersion&);
    BasicHttpRequest(const ::org::apache::http::RequestLine&);
    ::org::apache::http::ProtocolVersion getProtocolVersion() const;
    ::org::apache::http::RequestLine getRequestLine() const;

};
}
}
}
}



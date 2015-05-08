#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpResponse.hpp"
#include "org.apache.http.message.AbstractHttpMessage.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class ReasonPhraseCatalog; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }

namespace org {
namespace apache {
namespace http {
namespace message {
class BasicHttpResponse : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::HttpResponse,
                          public virtual ::org::apache::http::message::AbstractHttpMessage {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpResponse(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpResponse(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpResponse(const ::org::apache::http::message::BasicHttpResponse& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpResponse((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    BasicHttpResponse(::org::apache::http::message::BasicHttpResponse&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpResponse((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::message::BasicHttpResponse& operator=(const ::org::apache::http::message::BasicHttpResponse& x) {obj = x.obj; return *this;}
    ::org::apache::http::message::BasicHttpResponse& operator=(::org::apache::http::message::BasicHttpResponse&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpResponse(const ::org::apache::http::StatusLine&, const ::org::apache::http::ReasonPhraseCatalog&, const ::java::util::Locale&);
    BasicHttpResponse(const ::org::apache::http::StatusLine&);
    BasicHttpResponse(const ::org::apache::http::ProtocolVersion&, int32_t, const ::java::lang::String&);
    ::org::apache::http::ProtocolVersion getProtocolVersion() const ;
    ::org::apache::http::StatusLine getStatusLine() const ;
    ::org::apache::http::HttpEntity getEntity() const ;
    ::java::util::Locale getLocale() const ;
    void setStatusLine(const ::org::apache::http::StatusLine&) const ;
    void setStatusLine(const ::org::apache::http::ProtocolVersion&, int32_t) const ;
    void setStatusLine(const ::org::apache::http::ProtocolVersion&, int32_t, const ::java::lang::String&) const ;
    void setStatusCode(int32_t) const ;
    void setReasonPhrase(const ::java::lang::String&) const ;
    void setEntity(const ::org::apache::http::HttpEntity&) const ;
    void setLocale(const ::java::util::Locale&) const ;

};
}
}
}
}



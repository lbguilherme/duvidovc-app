#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpMessage.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }
namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }

namespace org {
namespace apache {
namespace http {
class HttpResponse : public virtual ::java::lang::Object,
                     public virtual ::org::apache::http::HttpMessage {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponse(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponse(const ::org::apache::http::HttpResponse& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0) {obj = x.obj;}
    HttpResponse(::org::apache::http::HttpResponse&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpResponse& operator=(const ::org::apache::http::HttpResponse& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpResponse& operator=(::org::apache::http::HttpResponse&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::StatusLine getStatusLine() const ;
    void setStatusLine(const ::org::apache::http::StatusLine&) const ;
    void setStatusLine(const ::org::apache::http::ProtocolVersion&, int32_t) const ;
    void setStatusLine(const ::org::apache::http::ProtocolVersion&, int32_t, const ::java::lang::String&) const ;
    void setStatusCode(int32_t) const ;
    void setReasonPhrase(const ::java::lang::String&) const ;
    ::org::apache::http::HttpEntity getEntity() const ;
    void setEntity(const ::org::apache::http::HttpEntity&) const ;
    ::java::util::Locale getLocale() const ;
    void setLocale(const ::java::util::Locale&) const ;

};
}
}
}



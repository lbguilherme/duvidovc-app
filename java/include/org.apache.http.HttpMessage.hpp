#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { class HeaderIterator; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
class HttpMessage : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpMessage(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpMessage(const ::org::apache::http::HttpMessage& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpMessage(::org::apache::http::HttpMessage&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpMessage& operator=(const ::org::apache::http::HttpMessage& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpMessage& operator=(::org::apache::http::HttpMessage&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::ProtocolVersion getProtocolVersion() const;
    bool containsHeader(const ::java::lang::String&) const;
    std::vector< ::org::apache::http::Header> getHeaders(const ::java::lang::String&) const;
    ::org::apache::http::Header getFirstHeader(const ::java::lang::String&) const;
    ::org::apache::http::Header getLastHeader(const ::java::lang::String&) const;
    std::vector< ::org::apache::http::Header> getAllHeaders() const;
    void addHeader(const ::org::apache::http::Header&) const;
    void addHeader(const ::java::lang::String&, const ::java::lang::String&) const;
    void setHeader(const ::org::apache::http::Header&) const;
    void setHeader(const ::java::lang::String&, const ::java::lang::String&) const;
    void setHeaders(const std::vector< ::org::apache::http::Header>&) const;
    void removeHeader(const ::org::apache::http::Header&) const;
    void removeHeaders(const ::java::lang::String&) const;
    ::org::apache::http::HeaderIterator headerIterator() const;
    ::org::apache::http::HeaderIterator headerIterator(const ::java::lang::String&) const;
    ::org::apache::http::params::HttpParams getParams() const;
    void setParams(const ::org::apache::http::params::HttpParams&) const;

};
}
}
}



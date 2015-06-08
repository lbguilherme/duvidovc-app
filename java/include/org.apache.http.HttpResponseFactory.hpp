#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
class HttpResponseFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseFactory(const ::org::apache::http::HttpResponseFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpResponseFactory(::org::apache::http::HttpResponseFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpResponseFactory& operator=(const ::org::apache::http::HttpResponseFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpResponseFactory& operator=(::org::apache::http::HttpResponseFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::HttpResponse newHttpResponse(const ::org::apache::http::ProtocolVersion&, int32_t, const ::org::apache::http::protocol::HttpContext&) const;
    ::org::apache::http::HttpResponse newHttpResponse(const ::org::apache::http::StatusLine&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}



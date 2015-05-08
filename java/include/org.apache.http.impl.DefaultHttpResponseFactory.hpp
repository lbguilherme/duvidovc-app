#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpResponseFactory.hpp"

namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { class ReasonPhraseCatalog; } } }
namespace org { namespace apache { namespace http { class StatusLine; } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class DefaultHttpResponseFactory : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::HttpResponseFactory {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultHttpResponseFactory(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpResponseFactory(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultHttpResponseFactory(const ::org::apache::http::impl::DefaultHttpResponseFactory& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseFactory((jobject)0) {obj = x.obj;}
    DefaultHttpResponseFactory(::org::apache::http::impl::DefaultHttpResponseFactory&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpResponseFactory((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::DefaultHttpResponseFactory& operator=(const ::org::apache::http::impl::DefaultHttpResponseFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::DefaultHttpResponseFactory& operator=(::org::apache::http::impl::DefaultHttpResponseFactory&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultHttpResponseFactory(const ::org::apache::http::ReasonPhraseCatalog&);
    DefaultHttpResponseFactory();
    ::org::apache::http::HttpResponse newHttpResponse(const ::org::apache::http::ProtocolVersion&, int32_t, const ::org::apache::http::protocol::HttpContext&) const ;
    ::org::apache::http::HttpResponse newHttpResponse(const ::org::apache::http::StatusLine&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}



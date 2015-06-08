#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class ConnectionReuseStrategy; } } }
namespace org { namespace apache { namespace http { class HttpResponseFactory; } } }
namespace org { namespace apache { namespace http { class HttpServerConnection; } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpExpectationVerifier; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpProcessor; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestHandlerResolver; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpService : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpService(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpService(const ::org::apache::http::protocol::HttpService& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpService(::org::apache::http::protocol::HttpService&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpService& operator=(const ::org::apache::http::protocol::HttpService& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpService& operator=(::org::apache::http::protocol::HttpService&& x) {obj = std::move(x.obj); return *this;}
    
    HttpService(const ::org::apache::http::protocol::HttpProcessor&, const ::org::apache::http::ConnectionReuseStrategy&, const ::org::apache::http::HttpResponseFactory&);
    void setHttpProcessor(const ::org::apache::http::protocol::HttpProcessor&) const;
    void setConnReuseStrategy(const ::org::apache::http::ConnectionReuseStrategy&) const;
    void setResponseFactory(const ::org::apache::http::HttpResponseFactory&) const;
    void setHandlerResolver(const ::org::apache::http::protocol::HttpRequestHandlerResolver&) const;
    void setExpectationVerifier(const ::org::apache::http::protocol::HttpExpectationVerifier&) const;
    ::org::apache::http::params::HttpParams getParams() const;
    void setParams(const ::org::apache::http::params::HttpParams&) const;
    void handleRequest(const ::org::apache::http::HttpServerConnection&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace client { class ResponseHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
class HttpClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpClient(const ::org::apache::http::client::HttpClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpClient(::org::apache::http::client::HttpClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::HttpClient& operator=(const ::org::apache::http::client::HttpClient& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::HttpClient& operator=(::org::apache::http::client::HttpClient&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::params::HttpParams getParams() const;
    ::org::apache::http::conn::ClientConnectionManager getConnectionManager() const;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::client::methods::HttpUriRequest&) const;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::protocol::HttpContext&) const;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&) const;
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const;
    ::java::lang::Object execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::client::ResponseHandler&) const;
    ::java::lang::Object execute(const ::org::apache::http::client::methods::HttpUriRequest&, const ::org::apache::http::client::ResponseHandler&, const ::org::apache::http::protocol::HttpContext&) const;
    ::java::lang::Object execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::client::ResponseHandler&) const;
    ::java::lang::Object execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::client::ResponseHandler&, const ::org::apache::http::protocol::HttpContext&) const;

};
}
}
}
}



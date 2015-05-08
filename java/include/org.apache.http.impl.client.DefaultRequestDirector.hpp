#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.RequestDirector.hpp"

namespace org { namespace apache { namespace http { class ConnectionReuseStrategy; } } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { namespace client { class AuthenticationHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class HttpRequestRetryHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class RedirectHandler; } } } }
namespace org { namespace apache { namespace http { namespace client { class UserTokenHandler; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ConnectionKeepAliveStrategy; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoutePlanner; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpProcessor; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestExecutor; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class DefaultRequestDirector : public virtual ::java::lang::Object,
                               public virtual ::org::apache::http::client::RequestDirector {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultRequestDirector(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::RequestDirector(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultRequestDirector(const ::org::apache::http::impl::client::DefaultRequestDirector& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::RequestDirector((jobject)0) {obj = x.obj;}
    DefaultRequestDirector(::org::apache::http::impl::client::DefaultRequestDirector&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::RequestDirector((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::DefaultRequestDirector& operator=(const ::org::apache::http::impl::client::DefaultRequestDirector& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::DefaultRequestDirector& operator=(::org::apache::http::impl::client::DefaultRequestDirector&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultRequestDirector(const ::org::apache::http::protocol::HttpRequestExecutor&, const ::org::apache::http::conn::ClientConnectionManager&, const ::org::apache::http::ConnectionReuseStrategy&, const ::org::apache::http::conn::ConnectionKeepAliveStrategy&, const ::org::apache::http::conn::routing::HttpRoutePlanner&, const ::org::apache::http::protocol::HttpProcessor&, const ::org::apache::http::client::HttpRequestRetryHandler&, const ::org::apache::http::client::RedirectHandler&, const ::org::apache::http::client::AuthenticationHandler&, const ::org::apache::http::client::AuthenticationHandler&, const ::org::apache::http::client::UserTokenHandler&, const ::org::apache::http::params::HttpParams&);
    ::org::apache::http::HttpResponse execute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}
}



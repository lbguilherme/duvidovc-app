#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.routing.HttpRoutePlanner.hpp"

namespace java { namespace net { class ProxySelector; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class ProxySelectorRoutePlanner : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::conn::routing::HttpRoutePlanner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProxySelectorRoutePlanner(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::routing::HttpRoutePlanner(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProxySelectorRoutePlanner(const ::org::apache::http::impl::conn::ProxySelectorRoutePlanner& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRoutePlanner((jobject)0) {obj = x.obj;}
    ProxySelectorRoutePlanner(::org::apache::http::impl::conn::ProxySelectorRoutePlanner&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::routing::HttpRoutePlanner((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::ProxySelectorRoutePlanner& operator=(const ::org::apache::http::impl::conn::ProxySelectorRoutePlanner& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::ProxySelectorRoutePlanner& operator=(::org::apache::http::impl::conn::ProxySelectorRoutePlanner&& x) {obj = std::move(x.obj); return *this;}
    
    ProxySelectorRoutePlanner(const ::org::apache::http::conn::scheme::SchemeRegistry&, const ::java::net::ProxySelector&);
    ::java::net::ProxySelector getProxySelector() const ;
    void setProxySelector(const ::java::net::ProxySelector&) const ;
    ::org::apache::http::conn::routing::HttpRoute determineRoute(const ::org::apache::http::HttpHost&, const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const ;

};
}
}
}
}
}



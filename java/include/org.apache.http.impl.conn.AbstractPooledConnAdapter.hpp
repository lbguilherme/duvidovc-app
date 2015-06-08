#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.conn.AbstractClientConnAdapter.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class AbstractPooledConnAdapter : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::impl::conn::AbstractClientConnAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractPooledConnAdapter(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::conn::ConnectionReleaseTrigger(_obj), ::org::apache::http::conn::ManagedClientConnection(_obj), ::org::apache::http::impl::conn::AbstractClientConnAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractPooledConnAdapter(const ::org::apache::http::impl::conn::AbstractPooledConnAdapter& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::ManagedClientConnection((jobject)0), ::org::apache::http::impl::conn::AbstractClientConnAdapter((jobject)0) {obj = x.obj;}
    AbstractPooledConnAdapter(::org::apache::http::impl::conn::AbstractPooledConnAdapter&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0), ::org::apache::http::conn::ManagedClientConnection((jobject)0), ::org::apache::http::impl::conn::AbstractClientConnAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::AbstractPooledConnAdapter& operator=(const ::org::apache::http::impl::conn::AbstractPooledConnAdapter& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::AbstractPooledConnAdapter& operator=(::org::apache::http::impl::conn::AbstractPooledConnAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::conn::routing::HttpRoute getRoute() const;
    void open(const ::org::apache::http::conn::routing::HttpRoute&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void tunnelTarget(bool, const ::org::apache::http::params::HttpParams&) const;
    void tunnelProxy(const ::org::apache::http::HttpHost&, bool, const ::org::apache::http::params::HttpParams&) const;
    void layerProtocol(const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void close() const;
    void shutdown() const;
    ::java::lang::Object getState() const;
    void setState(const ::java::lang::Object&) const;

};
}
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpClientConnection.hpp"
#include "org.apache.http.HttpInetConnection.hpp"
#include "org.apache.http.conn.ConnectionReleaseTrigger.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace javax { namespace net { namespace ssl { class SSLSession; } } }
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ManagedClientConnection : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::HttpClientConnection,
                                public virtual ::org::apache::http::HttpInetConnection,
                                public virtual ::org::apache::http::conn::ConnectionReleaseTrigger {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ManagedClientConnection(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpClientConnection(_obj), ::org::apache::http::HttpConnection(_obj), ::org::apache::http::HttpInetConnection(_obj), ::org::apache::http::conn::ConnectionReleaseTrigger(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ManagedClientConnection(const ::org::apache::http::conn::ManagedClientConnection& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0) {obj = x.obj;}
    ManagedClientConnection(::org::apache::http::conn::ManagedClientConnection&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpClientConnection((jobject)0), ::org::apache::http::HttpConnection((jobject)0), ::org::apache::http::HttpInetConnection((jobject)0), ::org::apache::http::conn::ConnectionReleaseTrigger((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ManagedClientConnection& operator=(const ::org::apache::http::conn::ManagedClientConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ManagedClientConnection& operator=(::org::apache::http::conn::ManagedClientConnection&& x) {obj = std::move(x.obj); return *this;}
    
    bool isSecure() const;
    ::org::apache::http::conn::routing::HttpRoute getRoute() const;
    ::javax::net::ssl::SSLSession getSSLSession() const;
    void open(const ::org::apache::http::conn::routing::HttpRoute&, const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void tunnelTarget(bool, const ::org::apache::http::params::HttpParams&) const;
    void tunnelProxy(const ::org::apache::http::HttpHost&, bool, const ::org::apache::http::params::HttpParams&) const;
    void layerProtocol(const ::org::apache::http::protocol::HttpContext&, const ::org::apache::http::params::HttpParams&) const;
    void markReusable() const;
    void unmarkReusable() const;
    bool isMarkedReusable() const;
    void setState(const ::java::lang::Object&) const;
    ::java::lang::Object getState() const;
    void setIdleDuration(int64_t, const ::java::util::concurrent::TimeUnit&) const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.ClientConnectionManager.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionRequest; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class SingleClientConnManager : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::conn::ClientConnectionManager {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SingleClientConnManager(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::ClientConnectionManager(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SingleClientConnManager(const ::org::apache::http::impl::conn::SingleClientConnManager& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionManager((jobject)0) {obj = x.obj;}
    SingleClientConnManager(::org::apache::http::impl::conn::SingleClientConnManager&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::ClientConnectionManager((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::SingleClientConnManager& operator=(const ::org::apache::http::impl::conn::SingleClientConnManager& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::SingleClientConnManager& operator=(::org::apache::http::impl::conn::SingleClientConnManager&& x) {obj = std::move(x.obj); return *this;}
    
    SingleClientConnManager(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::conn::scheme::SchemeRegistry&);
    ::org::apache::http::conn::scheme::SchemeRegistry getSchemeRegistry() const ;
    ::org::apache::http::conn::ClientConnectionRequest requestConnection(const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::Object&) const ;
    ::org::apache::http::conn::ManagedClientConnection getConnection(const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::Object&) const ;
    void releaseConnection(const ::org::apache::http::conn::ManagedClientConnection&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void closeExpiredConnections() const ;
    void closeIdleConnections(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void shutdown() const ;

};
}
}
}
}
}

#include "org.apache.http.impl.conn.SingleClientConnManager_ConnAdapter.hpp"
#include "org.apache.http.impl.conn.SingleClientConnManager_PoolEntry.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.conn.tsccm.AbstractConnPool.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionOperator; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class PoolEntryRequest; } } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class ConnPoolByRoute : public virtual ::java::lang::Object,
                        public virtual ::org::apache::http::impl::conn::tsccm::AbstractConnPool {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnPoolByRoute(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::conn::tsccm::AbstractConnPool(_obj), ::org::apache::http::impl::conn::tsccm::RefQueueHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnPoolByRoute(const ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::tsccm::AbstractConnPool((jobject)0), ::org::apache::http::impl::conn::tsccm::RefQueueHandler((jobject)0) {obj = x.obj;}
    ConnPoolByRoute(::org::apache::http::impl::conn::tsccm::ConnPoolByRoute&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::tsccm::AbstractConnPool((jobject)0), ::org::apache::http::impl::conn::tsccm::RefQueueHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute& operator=(const ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::ConnPoolByRoute& operator=(::org::apache::http::impl::conn::tsccm::ConnPoolByRoute&& x) {obj = std::move(x.obj); return *this;}
    
    ConnPoolByRoute(const ::org::apache::http::conn::ClientConnectionOperator&, const ::org::apache::http::params::HttpParams&);
    int32_t getConnectionsInPool(const ::org::apache::http::conn::routing::HttpRoute&) const ;
    ::org::apache::http::impl::conn::tsccm::PoolEntryRequest requestPoolEntry(const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::Object&) const ;
    void freeEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry&, bool, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void deleteClosedConnections() const ;
    void shutdown() const ;

};
}
}
}
}
}
}



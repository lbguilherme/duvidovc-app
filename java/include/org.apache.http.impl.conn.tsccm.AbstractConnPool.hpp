#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.conn.tsccm.RefQueueHandler.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { namespace ref { class Reference; } } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class PoolEntryRequest; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class AbstractConnPool : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::impl::conn::tsccm::RefQueueHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractConnPool(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::conn::tsccm::RefQueueHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractConnPool(const ::org::apache::http::impl::conn::tsccm::AbstractConnPool& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::tsccm::RefQueueHandler((jobject)0) {obj = x.obj;}
    AbstractConnPool(::org::apache::http::impl::conn::tsccm::AbstractConnPool&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::tsccm::RefQueueHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::AbstractConnPool& operator=(const ::org::apache::http::impl::conn::tsccm::AbstractConnPool& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::AbstractConnPool& operator=(::org::apache::http::impl::conn::tsccm::AbstractConnPool&& x) {obj = std::move(x.obj); return *this;}
    
    void enableConnectionGC() const;
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry getEntry(const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::Object&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    ::org::apache::http::impl::conn::tsccm::PoolEntryRequest requestPoolEntry(const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::Object&) const;
    void freeEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry&, bool, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void handleReference(const ::java::lang::ref::Reference&) const;
    void closeIdleConnections(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void closeExpiredConnections() const;
    void deleteClosedConnections() const;
    void shutdown() const;

};
}
}
}
}
}
}



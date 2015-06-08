#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class WaitingThread; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class RouteSpecificPool : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RouteSpecificPool(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RouteSpecificPool(const ::org::apache::http::impl::conn::tsccm::RouteSpecificPool& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RouteSpecificPool(::org::apache::http::impl::conn::tsccm::RouteSpecificPool&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::RouteSpecificPool& operator=(const ::org::apache::http::impl::conn::tsccm::RouteSpecificPool& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::RouteSpecificPool& operator=(::org::apache::http::impl::conn::tsccm::RouteSpecificPool&& x) {obj = std::move(x.obj); return *this;}
    
    RouteSpecificPool(const ::org::apache::http::conn::routing::HttpRoute&, int32_t);
    ::org::apache::http::conn::routing::HttpRoute getRoute() const;
    int32_t getMaxEntries() const;
    bool isUnused() const;
    int32_t getCapacity() const;
    int32_t getEntryCount() const;
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry allocEntry(const ::java::lang::Object&) const;
    void freeEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry&) const;
    void createdEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry&) const;
    bool deleteEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry&) const;
    void dropEntry() const;
    void queueThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread&) const;
    bool hasThread() const;
    ::org::apache::http::impl::conn::tsccm::WaitingThread nextThread() const;
    void removeThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread&) const;

};
}
}
}
}
}
}



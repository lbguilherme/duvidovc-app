#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Thread; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class RouteSpecificPool; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class WaitingThread : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WaitingThread(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WaitingThread(const ::org::apache::http::impl::conn::tsccm::WaitingThread& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WaitingThread(::org::apache::http::impl::conn::tsccm::WaitingThread&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::WaitingThread& operator=(const ::org::apache::http::impl::conn::tsccm::WaitingThread& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::WaitingThread& operator=(::org::apache::http::impl::conn::tsccm::WaitingThread&& x) {obj = std::move(x.obj); return *this;}
    
    WaitingThread(const ::java::util::concurrent::locks::Condition&, const ::org::apache::http::impl::conn::tsccm::RouteSpecificPool&);
    ::java::util::concurrent::locks::Condition getCondition() const;
    ::org::apache::http::impl::conn::tsccm::RouteSpecificPool getPool() const;
    ::java::lang::Thread getThread() const;
    bool await(const ::java::util::Date&) const;
    void wakeup() const;
    void interrupt() const;

};
}
}
}
}
}
}



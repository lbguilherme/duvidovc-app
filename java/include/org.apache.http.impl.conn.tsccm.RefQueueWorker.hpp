#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace ref { class ReferenceQueue; } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class RefQueueHandler; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class RefQueueWorker : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RefQueueWorker(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RefQueueWorker(const ::org::apache::http::impl::conn::tsccm::RefQueueWorker& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    RefQueueWorker(::org::apache::http::impl::conn::tsccm::RefQueueWorker&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::RefQueueWorker& operator=(const ::org::apache::http::impl::conn::tsccm::RefQueueWorker& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::RefQueueWorker& operator=(::org::apache::http::impl::conn::tsccm::RefQueueWorker&& x) {obj = std::move(x.obj); return *this;}
    
    RefQueueWorker(const ::java::lang::ref::ReferenceQueue&, const ::org::apache::http::impl::conn::tsccm::RefQueueHandler&);
    void run() const;
    void shutdown() const;
    ::java::lang::String toString() const;

};
}
}
}
}
}
}



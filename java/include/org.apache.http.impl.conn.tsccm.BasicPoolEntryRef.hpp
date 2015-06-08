#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ref.WeakReference.hpp"

namespace java { namespace lang { namespace ref { class ReferenceQueue; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class BasicPoolEntryRef : public virtual ::java::lang::Object,
                          public virtual ::java::lang::ref::WeakReference {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicPoolEntryRef(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ref::Reference(_obj), ::java::lang::ref::WeakReference(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicPoolEntryRef(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef& x) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0), ::java::lang::ref::WeakReference((jobject)0) {obj = x.obj;}
    BasicPoolEntryRef(::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef&& x) : ::java::lang::Object((jobject)0), ::java::lang::ref::Reference((jobject)0), ::java::lang::ref::WeakReference((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef& operator=(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef& operator=(::org::apache::http::impl::conn::tsccm::BasicPoolEntryRef&& x) {obj = std::move(x.obj); return *this;}
    
    BasicPoolEntryRef(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry&, const ::java::lang::ref::ReferenceQueue&);
    ::org::apache::http::conn::routing::HttpRoute getRoute() const;

};
}
}
}
}
}
}



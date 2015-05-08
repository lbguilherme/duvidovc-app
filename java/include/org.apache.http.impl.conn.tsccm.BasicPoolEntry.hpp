#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.conn.AbstractPoolEntry.hpp"

namespace java { namespace lang { namespace ref { class ReferenceQueue; } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionOperator; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class BasicPoolEntry : public virtual ::java::lang::Object,
                       public virtual ::org::apache::http::impl::conn::AbstractPoolEntry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicPoolEntry(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::conn::AbstractPoolEntry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicPoolEntry(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::AbstractPoolEntry((jobject)0) {obj = x.obj;}
    BasicPoolEntry(::org::apache::http::impl::conn::tsccm::BasicPoolEntry&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::AbstractPoolEntry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& operator=(const ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry& operator=(::org::apache::http::impl::conn::tsccm::BasicPoolEntry&& x) {obj = std::move(x.obj); return *this;}
    
    BasicPoolEntry(const ::org::apache::http::conn::ClientConnectionOperator&, const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::ref::ReferenceQueue&);

};
}
}
}
}
}
}



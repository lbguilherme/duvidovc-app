#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
namespace tsccm {
class PoolEntryRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PoolEntryRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PoolEntryRequest(const ::org::apache::http::impl::conn::tsccm::PoolEntryRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PoolEntryRequest(::org::apache::http::impl::conn::tsccm::PoolEntryRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::tsccm::PoolEntryRequest& operator=(const ::org::apache::http::impl::conn::tsccm::PoolEntryRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::tsccm::PoolEntryRequest& operator=(::org::apache::http::impl::conn::tsccm::PoolEntryRequest&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::impl::conn::tsccm::BasicPoolEntry getPoolEntry(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void abortRequest() const ;

};
}
}
}
}
}
}



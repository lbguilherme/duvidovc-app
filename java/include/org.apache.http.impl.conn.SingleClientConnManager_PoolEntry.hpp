#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.conn.AbstractPoolEntry.hpp"


namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class SingleClientConnManager_PoolEntry : public virtual ::java::lang::Object,
                                          public virtual ::org::apache::http::impl::conn::AbstractPoolEntry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SingleClientConnManager_PoolEntry(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::impl::conn::AbstractPoolEntry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SingleClientConnManager_PoolEntry(const ::org::apache::http::impl::conn::SingleClientConnManager_PoolEntry& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::AbstractPoolEntry((jobject)0) {obj = x.obj;}
    SingleClientConnManager_PoolEntry(::org::apache::http::impl::conn::SingleClientConnManager_PoolEntry&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::impl::conn::AbstractPoolEntry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::SingleClientConnManager_PoolEntry& operator=(const ::org::apache::http::impl::conn::SingleClientConnManager_PoolEntry& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::SingleClientConnManager_PoolEntry& operator=(::org::apache::http::impl::conn::SingleClientConnManager_PoolEntry&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}
}



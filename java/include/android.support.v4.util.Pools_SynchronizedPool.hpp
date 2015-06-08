#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.util.Pools_SimplePool.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class Pools_SynchronizedPool : public virtual ::java::lang::Object,
                               public virtual ::android::support::v4::util::Pools_SimplePool {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pools_SynchronizedPool(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::util::Pools_Pool(_obj), ::android::support::v4::util::Pools_SimplePool(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pools_SynchronizedPool(const ::android::support::v4::util::Pools_SynchronizedPool& x) : ::java::lang::Object((jobject)0), ::android::support::v4::util::Pools_Pool((jobject)0), ::android::support::v4::util::Pools_SimplePool((jobject)0) {obj = x.obj;}
    Pools_SynchronizedPool(::android::support::v4::util::Pools_SynchronizedPool&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::util::Pools_Pool((jobject)0), ::android::support::v4::util::Pools_SimplePool((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::Pools_SynchronizedPool& operator=(const ::android::support::v4::util::Pools_SynchronizedPool& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::Pools_SynchronizedPool& operator=(::android::support::v4::util::Pools_SynchronizedPool&& x) {obj = std::move(x.obj); return *this;}
    
    Pools_SynchronizedPool(int32_t);
    ::java::lang::Object acquire() const;
    bool release(const ::java::lang::Object&) const;

};
}
}
}
}



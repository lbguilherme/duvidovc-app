#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.util.Pools_Pool.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class Pools_SimplePool : public virtual ::java::lang::Object,
                         public virtual ::android::support::v4::util::Pools_Pool {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pools_SimplePool(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::util::Pools_Pool(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pools_SimplePool(const ::android::support::v4::util::Pools_SimplePool& x) : ::java::lang::Object((jobject)0), ::android::support::v4::util::Pools_Pool((jobject)0) {obj = x.obj;}
    Pools_SimplePool(::android::support::v4::util::Pools_SimplePool&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::util::Pools_Pool((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::Pools_SimplePool& operator=(const ::android::support::v4::util::Pools_SimplePool& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::Pools_SimplePool& operator=(::android::support::v4::util::Pools_SimplePool&& x) {obj = std::move(x.obj); return *this;}
    
    Pools_SimplePool(int32_t);
    ::java::lang::Object acquire() const ;
    bool release(const ::java::lang::Object&) const ;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace util {
class Pools : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pools(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pools(const ::android::support::v4::util::Pools& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pools(::android::support::v4::util::Pools&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::Pools& operator=(const ::android::support::v4::util::Pools& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::Pools& operator=(::android::support::v4::util::Pools&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}

#include "android.support.v4.util.Pools_Pool.hpp"
#include "android.support.v4.util.Pools_SimplePool.hpp"
#include "android.support.v4.util.Pools_SynchronizedPool.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class Pools_Pool : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Pools_Pool(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Pools_Pool(const ::android::support::v4::util::Pools_Pool& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Pools_Pool(::android::support::v4::util::Pools_Pool&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::Pools_Pool& operator=(const ::android::support::v4::util::Pools_Pool& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::Pools_Pool& operator=(::android::support::v4::util::Pools_Pool&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object acquire() const;
    bool release(const ::java::lang::Object&) const;

};
}
}
}
}



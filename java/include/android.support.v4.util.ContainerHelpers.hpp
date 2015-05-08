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
class ContainerHelpers : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContainerHelpers(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContainerHelpers(const ::android::support::v4::util::ContainerHelpers& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContainerHelpers(::android::support::v4::util::ContainerHelpers&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::ContainerHelpers& operator=(const ::android::support::v4::util::ContainerHelpers& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::ContainerHelpers& operator=(::android::support::v4::util::ContainerHelpers&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t idealIntArraySize(int32_t);
    static int32_t idealLongArraySize(int32_t);
    static int32_t idealByteArraySize(int32_t);
    static bool equal(const ::java::lang::Object&, const ::java::lang::Object&);

};
}
}
}
}



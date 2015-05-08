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
namespace app {
class BackStackRecord_Op : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackStackRecord_Op(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackStackRecord_Op(const ::android::support::v4::app::BackStackRecord_Op& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BackStackRecord_Op(::android::support::v4::app::BackStackRecord_Op&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::BackStackRecord_Op& operator=(const ::android::support::v4::app::BackStackRecord_Op& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::BackStackRecord_Op& operator=(::android::support::v4::app::BackStackRecord_Op&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}



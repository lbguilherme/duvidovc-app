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
class ServiceCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ServiceCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ServiceCompat(const ::android::support::v4::app::ServiceCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ServiceCompat(::android::support::v4::app::ServiceCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ServiceCompat& operator=(const ::android::support::v4::app::ServiceCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ServiceCompat& operator=(::android::support::v4::app::ServiceCompat&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}



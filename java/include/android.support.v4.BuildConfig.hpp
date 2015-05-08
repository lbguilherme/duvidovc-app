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
class BuildConfig : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BuildConfig(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BuildConfig(const ::android::support::v4::BuildConfig& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BuildConfig(::android::support::v4::BuildConfig&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::BuildConfig& operator=(const ::android::support::v4::BuildConfig& x) {obj = x.obj; return *this;}
    ::android::support::v4::BuildConfig& operator=(::android::support::v4::BuildConfig&& x) {obj = std::move(x.obj); return *this;}
    
    BuildConfig();

};
}
}
}



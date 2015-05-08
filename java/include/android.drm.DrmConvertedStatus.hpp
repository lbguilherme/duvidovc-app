#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace drm {
class DrmConvertedStatus : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmConvertedStatus(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmConvertedStatus(const ::android::drm::DrmConvertedStatus& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmConvertedStatus(::android::drm::DrmConvertedStatus&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmConvertedStatus& operator=(const ::android::drm::DrmConvertedStatus& x) {obj = x.obj; return *this;}
    ::android::drm::DrmConvertedStatus& operator=(::android::drm::DrmConvertedStatus&& x) {obj = std::move(x.obj); return *this;}
    
    DrmConvertedStatus(int32_t, const std::vector< int8_t>&, int32_t);

};
}
}



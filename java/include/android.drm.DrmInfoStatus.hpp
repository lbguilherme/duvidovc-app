#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace drm { class ProcessedData; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace drm {
class DrmInfoStatus : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmInfoStatus(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmInfoStatus(const ::android::drm::DrmInfoStatus& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmInfoStatus(::android::drm::DrmInfoStatus&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmInfoStatus& operator=(const ::android::drm::DrmInfoStatus& x) {obj = x.obj; return *this;}
    ::android::drm::DrmInfoStatus& operator=(::android::drm::DrmInfoStatus&& x) {obj = std::move(x.obj); return *this;}
    
    DrmInfoStatus(int32_t, int32_t, const ::android::drm::ProcessedData&, const ::java::lang::String&);

};
}
}



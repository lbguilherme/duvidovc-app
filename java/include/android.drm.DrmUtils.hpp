#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace drm { class DrmUtils_ExtendedMetadataParser; } }

namespace android {
namespace drm {
class DrmUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmUtils(const ::android::drm::DrmUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmUtils(::android::drm::DrmUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmUtils& operator=(const ::android::drm::DrmUtils& x) {obj = x.obj; return *this;}
    ::android::drm::DrmUtils& operator=(::android::drm::DrmUtils&& x) {obj = std::move(x.obj); return *this;}
    
    DrmUtils();
    static ::android::drm::DrmUtils_ExtendedMetadataParser getExtendedMetadataParser(const std::vector< int8_t>&);

};
}
}

#include "android.drm.DrmUtils_ExtendedMetadataParser.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace drm {
class DrmStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmStore(const ::android::drm::DrmStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmStore(::android::drm::DrmStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmStore& operator=(const ::android::drm::DrmStore& x) {obj = x.obj; return *this;}
    ::android::drm::DrmStore& operator=(::android::drm::DrmStore&& x) {obj = std::move(x.obj); return *this;}
    
    DrmStore();

};
}
}

#include "android.drm.DrmStore_Action.hpp"
#include "android.drm.DrmStore_ConstraintsColumns.hpp"
#include "android.drm.DrmStore_DrmObjectType.hpp"
#include "android.drm.DrmStore_Playback.hpp"
#include "android.drm.DrmStore_RightsStatus.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace drm {
class DrmStore_Playback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmStore_Playback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmStore_Playback(const ::android::drm::DrmStore_Playback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmStore_Playback(::android::drm::DrmStore_Playback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmStore_Playback& operator=(const ::android::drm::DrmStore_Playback& x) {obj = x.obj; return *this;}
    ::android::drm::DrmStore_Playback& operator=(::android::drm::DrmStore_Playback&& x) {obj = std::move(x.obj); return *this;}
    
    DrmStore_Playback();

};
}
}



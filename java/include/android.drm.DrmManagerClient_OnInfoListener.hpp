#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace drm { class DrmInfoEvent; } }
namespace android { namespace drm { class DrmManagerClient; } }

namespace android {
namespace drm {
class DrmManagerClient_OnInfoListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmManagerClient_OnInfoListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmManagerClient_OnInfoListener(const ::android::drm::DrmManagerClient_OnInfoListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmManagerClient_OnInfoListener(::android::drm::DrmManagerClient_OnInfoListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmManagerClient_OnInfoListener& operator=(const ::android::drm::DrmManagerClient_OnInfoListener& x) {obj = x.obj; return *this;}
    ::android::drm::DrmManagerClient_OnInfoListener& operator=(::android::drm::DrmManagerClient_OnInfoListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onInfo(const ::android::drm::DrmManagerClient&, const ::android::drm::DrmInfoEvent&) const ;

};
}
}



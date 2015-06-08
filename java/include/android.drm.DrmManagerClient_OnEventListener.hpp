#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace drm { class DrmEvent; } }
namespace android { namespace drm { class DrmManagerClient; } }

namespace android {
namespace drm {
class DrmManagerClient_OnEventListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmManagerClient_OnEventListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmManagerClient_OnEventListener(const ::android::drm::DrmManagerClient_OnEventListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmManagerClient_OnEventListener(::android::drm::DrmManagerClient_OnEventListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmManagerClient_OnEventListener& operator=(const ::android::drm::DrmManagerClient_OnEventListener& x) {obj = x.obj; return *this;}
    ::android::drm::DrmManagerClient_OnEventListener& operator=(::android::drm::DrmManagerClient_OnEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onEvent(const ::android::drm::DrmManagerClient&, const ::android::drm::DrmEvent&) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace drm { class DrmErrorEvent; } }
namespace android { namespace drm { class DrmManagerClient; } }

namespace android {
namespace drm {
class DrmManagerClient_OnErrorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmManagerClient_OnErrorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmManagerClient_OnErrorListener(const ::android::drm::DrmManagerClient_OnErrorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmManagerClient_OnErrorListener(::android::drm::DrmManagerClient_OnErrorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmManagerClient_OnErrorListener& operator=(const ::android::drm::DrmManagerClient_OnErrorListener& x) {obj = x.obj; return *this;}
    ::android::drm::DrmManagerClient_OnErrorListener& operator=(::android::drm::DrmManagerClient_OnErrorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onError(const ::android::drm::DrmManagerClient&, const ::android::drm::DrmErrorEvent&) const ;

};
}
}



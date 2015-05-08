#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.drm.DrmEvent.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class HashMap; } }

namespace android {
namespace drm {
class DrmInfoEvent : public virtual ::java::lang::Object,
                     public virtual ::android::drm::DrmEvent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmInfoEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::drm::DrmEvent(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmInfoEvent(const ::android::drm::DrmInfoEvent& x) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {obj = x.obj;}
    DrmInfoEvent(::android::drm::DrmInfoEvent&& x) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmInfoEvent& operator=(const ::android::drm::DrmInfoEvent& x) {obj = x.obj; return *this;}
    ::android::drm::DrmInfoEvent& operator=(::android::drm::DrmInfoEvent&& x) {obj = std::move(x.obj); return *this;}
    
    DrmInfoEvent(int32_t, int32_t, const ::java::lang::String&);
    DrmInfoEvent(int32_t, int32_t, const ::java::lang::String&, const ::java::util::HashMap&);

};
}
}



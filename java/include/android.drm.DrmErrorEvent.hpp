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
class DrmErrorEvent : public virtual ::java::lang::Object,
                      public virtual ::android::drm::DrmEvent {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmErrorEvent(jobject _obj) : ::java::lang::Object(_obj), ::android::drm::DrmEvent(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmErrorEvent(const ::android::drm::DrmErrorEvent& x) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {obj = x.obj;}
    DrmErrorEvent(::android::drm::DrmErrorEvent&& x) : ::java::lang::Object((jobject)0), ::android::drm::DrmEvent((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmErrorEvent& operator=(const ::android::drm::DrmErrorEvent& x) {obj = x.obj; return *this;}
    ::android::drm::DrmErrorEvent& operator=(::android::drm::DrmErrorEvent&& x) {obj = std::move(x.obj); return *this;}
    
    DrmErrorEvent(int32_t, int32_t, const ::java::lang::String&);
    DrmErrorEvent(int32_t, int32_t, const ::java::lang::String&, const ::java::util::HashMap&);

};
}
}



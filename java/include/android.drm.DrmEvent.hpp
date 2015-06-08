#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace drm {
class DrmEvent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrmEvent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrmEvent(const ::android::drm::DrmEvent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrmEvent(::android::drm::DrmEvent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::drm::DrmEvent& operator=(const ::android::drm::DrmEvent& x) {obj = x.obj; return *this;}
    ::android::drm::DrmEvent& operator=(::android::drm::DrmEvent&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getUniqueId() const;
    int32_t getType() const;
    ::java::lang::String getMessage() const;
    ::java::lang::Object getAttribute(const ::java::lang::String&) const;

};
}
}



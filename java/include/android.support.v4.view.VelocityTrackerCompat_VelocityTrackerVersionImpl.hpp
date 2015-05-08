#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class VelocityTracker; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class VelocityTrackerCompat_VelocityTrackerVersionImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VelocityTrackerCompat_VelocityTrackerVersionImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VelocityTrackerCompat_VelocityTrackerVersionImpl(const ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VelocityTrackerCompat_VelocityTrackerVersionImpl(::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl& operator=(const ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl& operator=(::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    float getXVelocity(const ::android::view::VelocityTracker&, int32_t) const ;
    float getYVelocity(const ::android::view::VelocityTracker&, int32_t) const ;

};
}
}
}
}



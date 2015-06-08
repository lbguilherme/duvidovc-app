#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.VelocityTrackerCompat_VelocityTrackerVersionImpl.hpp"

namespace android { namespace view { class VelocityTracker; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl : public virtual ::java::lang::Object,
                                                                  public virtual ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl(const ::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl((jobject)0) {obj = x.obj;}
    VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl(::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl& operator=(const ::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl& operator=(::android::support::v4::view::VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    float getXVelocity(const ::android::view::VelocityTracker&, int32_t) const;
    float getYVelocity(const ::android::view::VelocityTracker&, int32_t) const;

};
}
}
}
}



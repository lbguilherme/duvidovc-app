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
class VelocityTrackerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VelocityTrackerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VelocityTrackerCompat(const ::android::support::v4::view::VelocityTrackerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VelocityTrackerCompat(::android::support::v4::view::VelocityTrackerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::VelocityTrackerCompat& operator=(const ::android::support::v4::view::VelocityTrackerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::VelocityTrackerCompat& operator=(::android::support::v4::view::VelocityTrackerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    VelocityTrackerCompat();
    static float getXVelocity(const ::android::view::VelocityTracker&, int32_t);
    static float getYVelocity(const ::android::view::VelocityTracker&, int32_t);

};
}
}
}
}

#include "android.support.v4.view.VelocityTrackerCompat_BaseVelocityTrackerVersionImpl.hpp"
#include "android.support.v4.view.VelocityTrackerCompat_HoneycombVelocityTrackerVersionImpl.hpp"
#include "android.support.v4.view.VelocityTrackerCompat_VelocityTrackerVersionImpl.hpp"


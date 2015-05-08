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
class VelocityTrackerCompat_BaseVelocityTrackerVersionImpl : public virtual ::java::lang::Object,
                                                             public virtual ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VelocityTrackerCompat_BaseVelocityTrackerVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VelocityTrackerCompat_BaseVelocityTrackerVersionImpl(const ::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl((jobject)0) {obj = x.obj;}
    VelocityTrackerCompat_BaseVelocityTrackerVersionImpl(::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::VelocityTrackerCompat_VelocityTrackerVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl& operator=(const ::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl& operator=(::android::support::v4::view::VelocityTrackerCompat_BaseVelocityTrackerVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    float getXVelocity(const ::android::view::VelocityTracker&, int32_t) const ;
    float getYVelocity(const ::android::view::VelocityTracker&, int32_t) const ;

};
}
}
}
}



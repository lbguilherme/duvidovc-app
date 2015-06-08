#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class VelocityTracker; } }

namespace android {
namespace view {
class VelocityTracker : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VelocityTracker(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VelocityTracker(const ::android::view::VelocityTracker& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VelocityTracker(::android::view::VelocityTracker&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::VelocityTracker& operator=(const ::android::view::VelocityTracker& x) {obj = x.obj; return *this;}
    ::android::view::VelocityTracker& operator=(::android::view::VelocityTracker&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::VelocityTracker obtain();
    void recycle() const;
    void clear() const;
    void addMovement(const ::android::view::MotionEvent&) const;
    void computeCurrentVelocity(int32_t) const;
    void computeCurrentVelocity(int32_t, float) const;
    float getXVelocity() const;
    float getYVelocity() const;
    float getXVelocity(int32_t) const;
    float getYVelocity(int32_t) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace widget {
class AutoScrollHelper_ClampedScroller : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AutoScrollHelper_ClampedScroller(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AutoScrollHelper_ClampedScroller(const ::android::support::v4::widget::AutoScrollHelper_ClampedScroller& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AutoScrollHelper_ClampedScroller(::android::support::v4::widget::AutoScrollHelper_ClampedScroller&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::AutoScrollHelper_ClampedScroller& operator=(const ::android::support::v4::widget::AutoScrollHelper_ClampedScroller& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::AutoScrollHelper_ClampedScroller& operator=(::android::support::v4::widget::AutoScrollHelper_ClampedScroller&& x) {obj = std::move(x.obj); return *this;}
    
    AutoScrollHelper_ClampedScroller();
    void setRampUpDuration(int32_t) const;
    void setRampDownDuration(int32_t) const;
    void start() const;
    void requestStop() const;
    bool isFinished() const;
    void computeScrollDelta() const;
    void setTargetVelocity(float, float) const;
    int32_t getHorizontalDirection() const;
    int32_t getVerticalDirection() const;
    int32_t getDeltaX() const;
    int32_t getDeltaY() const;

};
}
}
}
}



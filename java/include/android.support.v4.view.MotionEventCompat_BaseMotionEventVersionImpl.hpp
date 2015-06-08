#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.MotionEventCompat_MotionEventVersionImpl.hpp"

namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MotionEventCompat_BaseMotionEventVersionImpl : public virtual ::java::lang::Object,
                                                     public virtual ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEventCompat_BaseMotionEventVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEventCompat_BaseMotionEventVersionImpl(const ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl((jobject)0) {obj = x.obj;}
    MotionEventCompat_BaseMotionEventVersionImpl(::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MotionEventCompat_MotionEventVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl& operator=(const ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl& operator=(::android::support::v4::view::MotionEventCompat_BaseMotionEventVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t findPointerIndex(const ::android::view::MotionEvent&, int32_t) const;
    int32_t getPointerId(const ::android::view::MotionEvent&, int32_t) const;
    float getX(const ::android::view::MotionEvent&, int32_t) const;
    float getY(const ::android::view::MotionEvent&, int32_t) const;
    int32_t getPointerCount(const ::android::view::MotionEvent&) const;
    int32_t getSource(const ::android::view::MotionEvent&) const;
    float getAxisValue(const ::android::view::MotionEvent&, int32_t) const;
    float getAxisValue(const ::android::view::MotionEvent&, int32_t, int32_t) const;

};
}
}
}
}



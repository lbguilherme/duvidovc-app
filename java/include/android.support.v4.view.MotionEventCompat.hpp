#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MotionEventCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEventCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEventCompat(const ::android::support::v4::view::MotionEventCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MotionEventCompat(::android::support::v4::view::MotionEventCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MotionEventCompat& operator=(const ::android::support::v4::view::MotionEventCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MotionEventCompat& operator=(::android::support::v4::view::MotionEventCompat&& x) {obj = std::move(x.obj); return *this;}
    
    MotionEventCompat();
    static int32_t getActionMasked(const ::android::view::MotionEvent&);
    static int32_t getActionIndex(const ::android::view::MotionEvent&);
    static int32_t findPointerIndex(const ::android::view::MotionEvent&, int32_t);
    static int32_t getPointerId(const ::android::view::MotionEvent&, int32_t);
    static float getX(const ::android::view::MotionEvent&, int32_t);
    static float getY(const ::android::view::MotionEvent&, int32_t);
    static int32_t getPointerCount(const ::android::view::MotionEvent&);
    static int32_t getSource(const ::android::view::MotionEvent&);
    static float getAxisValue(const ::android::view::MotionEvent&, int32_t);
    static float getAxisValue(const ::android::view::MotionEvent&, int32_t, int32_t);

};
}
}
}
}

#include "android.support.v4.view.MotionEventCompat_BaseMotionEventVersionImpl.hpp"
#include "android.support.v4.view.MotionEventCompat_EclairMotionEventVersionImpl.hpp"
#include "android.support.v4.view.MotionEventCompat_GingerbreadMotionEventVersionImpl.hpp"
#include "android.support.v4.view.MotionEventCompat_HoneycombMr1MotionEventVersionImpl.hpp"
#include "android.support.v4.view.MotionEventCompat_MotionEventVersionImpl.hpp"


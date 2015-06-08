#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class GestureDetector_OnDoubleTapListener; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class GestureDetectorCompat_GestureDetectorCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetectorCompat_GestureDetectorCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetectorCompat_GestureDetectorCompatImpl(const ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureDetectorCompat_GestureDetectorCompatImpl(::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl& operator=(const ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl& operator=(::android::support::v4::view::GestureDetectorCompat_GestureDetectorCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool isLongpressEnabled() const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    void setIsLongpressEnabled(bool) const;
    void setOnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener&) const;

};
}
}
}
}



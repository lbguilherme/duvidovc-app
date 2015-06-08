#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace view {
class GestureDetector_OnDoubleTapListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetector_OnDoubleTapListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetector_OnDoubleTapListener(const ::android::view::GestureDetector_OnDoubleTapListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureDetector_OnDoubleTapListener(::android::view::GestureDetector_OnDoubleTapListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::GestureDetector_OnDoubleTapListener& operator=(const ::android::view::GestureDetector_OnDoubleTapListener& x) {obj = x.obj; return *this;}
    ::android::view::GestureDetector_OnDoubleTapListener& operator=(::android::view::GestureDetector_OnDoubleTapListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onSingleTapConfirmed(const ::android::view::MotionEvent&) const;
    bool onDoubleTap(const ::android::view::MotionEvent&) const;
    bool onDoubleTapEvent(const ::android::view::MotionEvent&) const;

};
}
}



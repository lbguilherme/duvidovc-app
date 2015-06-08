#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace gesture { class GestureOverlayView; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace gesture {
class GestureOverlayView_OnGestureListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureOverlayView_OnGestureListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureOverlayView_OnGestureListener(const ::android::gesture::GestureOverlayView_OnGestureListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureOverlayView_OnGestureListener(::android::gesture::GestureOverlayView_OnGestureListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureOverlayView_OnGestureListener& operator=(const ::android::gesture::GestureOverlayView_OnGestureListener& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureOverlayView_OnGestureListener& operator=(::android::gesture::GestureOverlayView_OnGestureListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGestureStarted(const ::android::gesture::GestureOverlayView&, const ::android::view::MotionEvent&) const;
    void onGesture(const ::android::gesture::GestureOverlayView&, const ::android::view::MotionEvent&) const;
    void onGestureEnded(const ::android::gesture::GestureOverlayView&, const ::android::view::MotionEvent&) const;
    void onGestureCancelled(const ::android::gesture::GestureOverlayView&, const ::android::view::MotionEvent&) const;

};
}
}



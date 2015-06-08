#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.GestureDetector_OnDoubleTapListener.hpp"
#include "android.view.GestureDetector_OnGestureListener.hpp"

namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace view {
class GestureDetector_SimpleOnGestureListener : public virtual ::java::lang::Object,
                                                public virtual ::android::view::GestureDetector_OnDoubleTapListener,
                                                public virtual ::android::view::GestureDetector_OnGestureListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetector_SimpleOnGestureListener(jobject _obj) : ::java::lang::Object(_obj), ::android::view::GestureDetector_OnDoubleTapListener(_obj), ::android::view::GestureDetector_OnGestureListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetector_SimpleOnGestureListener(const ::android::view::GestureDetector_SimpleOnGestureListener& x) : ::java::lang::Object((jobject)0), ::android::view::GestureDetector_OnDoubleTapListener((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0) {obj = x.obj;}
    GestureDetector_SimpleOnGestureListener(::android::view::GestureDetector_SimpleOnGestureListener&& x) : ::java::lang::Object((jobject)0), ::android::view::GestureDetector_OnDoubleTapListener((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::GestureDetector_SimpleOnGestureListener& operator=(const ::android::view::GestureDetector_SimpleOnGestureListener& x) {obj = x.obj; return *this;}
    ::android::view::GestureDetector_SimpleOnGestureListener& operator=(::android::view::GestureDetector_SimpleOnGestureListener&& x) {obj = std::move(x.obj); return *this;}
    
    GestureDetector_SimpleOnGestureListener();
    bool onSingleTapUp(const ::android::view::MotionEvent&) const;
    void onLongPress(const ::android::view::MotionEvent&) const;
    bool onScroll(const ::android::view::MotionEvent&, const ::android::view::MotionEvent&, float, float) const;
    bool onFling(const ::android::view::MotionEvent&, const ::android::view::MotionEvent&, float, float) const;
    void onShowPress(const ::android::view::MotionEvent&) const;
    bool onDown(const ::android::view::MotionEvent&) const;
    bool onDoubleTap(const ::android::view::MotionEvent&) const;
    bool onDoubleTapEvent(const ::android::view::MotionEvent&) const;
    bool onSingleTapConfirmed(const ::android::view::MotionEvent&) const;

};
}
}



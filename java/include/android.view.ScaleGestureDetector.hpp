#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class ScaleGestureDetector_OnScaleGestureListener; } }

namespace android {
namespace view {
class ScaleGestureDetector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScaleGestureDetector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScaleGestureDetector(const ::android::view::ScaleGestureDetector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ScaleGestureDetector(::android::view::ScaleGestureDetector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ScaleGestureDetector& operator=(const ::android::view::ScaleGestureDetector& x) {obj = x.obj; return *this;}
    ::android::view::ScaleGestureDetector& operator=(::android::view::ScaleGestureDetector&& x) {obj = std::move(x.obj); return *this;}
    
    ScaleGestureDetector(const ::android::content::Context&, const ::android::view::ScaleGestureDetector_OnScaleGestureListener&);
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    bool isInProgress() const;
    float getFocusX() const;
    float getFocusY() const;
    float getCurrentSpan() const;
    float getCurrentSpanX() const;
    float getCurrentSpanY() const;
    float getPreviousSpan() const;
    float getPreviousSpanX() const;
    float getPreviousSpanY() const;
    float getScaleFactor() const;
    int64_t getTimeDelta() const;
    int64_t getEventTime() const;

};
}
}

#include "android.view.ScaleGestureDetector_OnScaleGestureListener.hpp"
#include "android.view.ScaleGestureDetector_SimpleOnScaleGestureListener.hpp"


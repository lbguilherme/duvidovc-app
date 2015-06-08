#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ScaleGestureDetector_OnScaleGestureListener.hpp"

namespace android { namespace view { class ScaleGestureDetector; } }

namespace android {
namespace view {
class ScaleGestureDetector_SimpleOnScaleGestureListener : public virtual ::java::lang::Object,
                                                          public virtual ::android::view::ScaleGestureDetector_OnScaleGestureListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScaleGestureDetector_SimpleOnScaleGestureListener(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ScaleGestureDetector_OnScaleGestureListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScaleGestureDetector_SimpleOnScaleGestureListener(const ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener& x) : ::java::lang::Object((jobject)0), ::android::view::ScaleGestureDetector_OnScaleGestureListener((jobject)0) {obj = x.obj;}
    ScaleGestureDetector_SimpleOnScaleGestureListener(::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener&& x) : ::java::lang::Object((jobject)0), ::android::view::ScaleGestureDetector_OnScaleGestureListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener& operator=(const ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener& x) {obj = x.obj; return *this;}
    ::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener& operator=(::android::view::ScaleGestureDetector_SimpleOnScaleGestureListener&& x) {obj = std::move(x.obj); return *this;}
    
    ScaleGestureDetector_SimpleOnScaleGestureListener();
    bool onScale(const ::android::view::ScaleGestureDetector&) const;
    bool onScaleBegin(const ::android::view::ScaleGestureDetector&) const;
    void onScaleEnd(const ::android::view::ScaleGestureDetector&) const;

};
}
}



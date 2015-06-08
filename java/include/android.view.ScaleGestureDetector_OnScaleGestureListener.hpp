#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ScaleGestureDetector; } }

namespace android {
namespace view {
class ScaleGestureDetector_OnScaleGestureListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScaleGestureDetector_OnScaleGestureListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScaleGestureDetector_OnScaleGestureListener(const ::android::view::ScaleGestureDetector_OnScaleGestureListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ScaleGestureDetector_OnScaleGestureListener(::android::view::ScaleGestureDetector_OnScaleGestureListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ScaleGestureDetector_OnScaleGestureListener& operator=(const ::android::view::ScaleGestureDetector_OnScaleGestureListener& x) {obj = x.obj; return *this;}
    ::android::view::ScaleGestureDetector_OnScaleGestureListener& operator=(::android::view::ScaleGestureDetector_OnScaleGestureListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onScale(const ::android::view::ScaleGestureDetector&) const;
    bool onScaleBegin(const ::android::view::ScaleGestureDetector&) const;
    void onScaleEnd(const ::android::view::ScaleGestureDetector&) const;

};
}
}



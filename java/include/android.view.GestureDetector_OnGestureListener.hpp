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
class GestureDetector_OnGestureListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureDetector_OnGestureListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureDetector_OnGestureListener(const ::android::view::GestureDetector_OnGestureListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureDetector_OnGestureListener(::android::view::GestureDetector_OnGestureListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::GestureDetector_OnGestureListener& operator=(const ::android::view::GestureDetector_OnGestureListener& x) {obj = x.obj; return *this;}
    ::android::view::GestureDetector_OnGestureListener& operator=(::android::view::GestureDetector_OnGestureListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onDown(const ::android::view::MotionEvent&) const ;
    void onShowPress(const ::android::view::MotionEvent&) const ;
    bool onSingleTapUp(const ::android::view::MotionEvent&) const ;
    bool onScroll(const ::android::view::MotionEvent&, const ::android::view::MotionEvent&, float, float) const ;
    void onLongPress(const ::android::view::MotionEvent&) const ;
    bool onFling(const ::android::view::MotionEvent&, const ::android::view::MotionEvent&, float, float) const ;

};
}
}



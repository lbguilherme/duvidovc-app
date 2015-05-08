#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MotionEvent_PointerCoords; } }

namespace android {
namespace view {
class MotionEvent_PointerCoords : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEvent_PointerCoords(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEvent_PointerCoords(const ::android::view::MotionEvent_PointerCoords& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MotionEvent_PointerCoords(::android::view::MotionEvent_PointerCoords&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MotionEvent_PointerCoords& operator=(const ::android::view::MotionEvent_PointerCoords& x) {obj = x.obj; return *this;}
    ::android::view::MotionEvent_PointerCoords& operator=(::android::view::MotionEvent_PointerCoords&& x) {obj = std::move(x.obj); return *this;}
    
    MotionEvent_PointerCoords();
    void clear() const ;
    void copyFrom(const ::android::view::MotionEvent_PointerCoords&) const ;
    float getAxisValue(int32_t) const ;
    void setAxisValue(int32_t, float) const ;

};
}
}



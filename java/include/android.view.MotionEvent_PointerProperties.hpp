#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MotionEvent_PointerProperties; } }

namespace android {
namespace view {
class MotionEvent_PointerProperties : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MotionEvent_PointerProperties(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MotionEvent_PointerProperties(const ::android::view::MotionEvent_PointerProperties& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MotionEvent_PointerProperties(::android::view::MotionEvent_PointerProperties&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MotionEvent_PointerProperties& operator=(const ::android::view::MotionEvent_PointerProperties& x) {obj = x.obj; return *this;}
    ::android::view::MotionEvent_PointerProperties& operator=(::android::view::MotionEvent_PointerProperties&& x) {obj = std::move(x.obj); return *this;}
    
    MotionEvent_PointerProperties();
    void clear() const;
    void copyFrom(const ::android::view::MotionEvent_PointerProperties&) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace view {
class TouchDelegate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TouchDelegate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TouchDelegate(const ::android::view::TouchDelegate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TouchDelegate(::android::view::TouchDelegate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::TouchDelegate& operator=(const ::android::view::TouchDelegate& x) {obj = x.obj; return *this;}
    ::android::view::TouchDelegate& operator=(::android::view::TouchDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    TouchDelegate(const ::android::graphics::Rect&, const ::android::view::View&);
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;

};
}
}



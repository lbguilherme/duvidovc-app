#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace view {
class View_OnTouchListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnTouchListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnTouchListener(const ::android::view::View_OnTouchListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnTouchListener(::android::view::View_OnTouchListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnTouchListener& operator=(const ::android::view::View_OnTouchListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnTouchListener& operator=(::android::view::View_OnTouchListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onTouch(const ::android::view::View&, const ::android::view::MotionEvent&) const ;

};
}
}



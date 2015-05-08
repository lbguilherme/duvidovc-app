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
class View_OnHoverListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnHoverListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnHoverListener(const ::android::view::View_OnHoverListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnHoverListener(::android::view::View_OnHoverListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnHoverListener& operator=(const ::android::view::View_OnHoverListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnHoverListener& operator=(::android::view::View_OnHoverListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onHover(const ::android::view::View&, const ::android::view::MotionEvent&) const ;

};
}
}



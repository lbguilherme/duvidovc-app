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
class View_OnGenericMotionListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit View_OnGenericMotionListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    View_OnGenericMotionListener(const ::android::view::View_OnGenericMotionListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    View_OnGenericMotionListener(::android::view::View_OnGenericMotionListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::View_OnGenericMotionListener& operator=(const ::android::view::View_OnGenericMotionListener& x) {obj = x.obj; return *this;}
    ::android::view::View_OnGenericMotionListener& operator=(::android::view::View_OnGenericMotionListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onGenericMotion(const ::android::view::View&, const ::android::view::MotionEvent&) const;

};
}
}



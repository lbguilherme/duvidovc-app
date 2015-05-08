#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Layout; } }
namespace android { namespace text { class Spannable; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace text {
namespace method {
class Touch : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Touch(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Touch(const ::android::text::method::Touch& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Touch(::android::text::method::Touch&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::Touch& operator=(const ::android::text::method::Touch& x) {obj = x.obj; return *this;}
    ::android::text::method::Touch& operator=(::android::text::method::Touch&& x) {obj = std::move(x.obj); return *this;}
    
    static void scrollTo(const ::android::widget::TextView&, const ::android::text::Layout&, int32_t, int32_t);
    static bool onTouchEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&);
    static int32_t getInitialScrollX(const ::android::widget::TextView&, const ::android::text::Spannable&);
    static int32_t getInitialScrollY(const ::android::widget::TextView&, const ::android::text::Spannable&);

};
}
}
}



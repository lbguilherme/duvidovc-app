#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.BaseMovementMethod.hpp"
#include "android.text.method.MovementMethod.hpp"

namespace android { namespace text { class Spannable; } }
namespace android { namespace text { namespace method { class MovementMethod; } } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace text {
namespace method {
class ArrowKeyMovementMethod : public virtual ::java::lang::Object,
                               public virtual ::android::text::method::BaseMovementMethod,
                               public virtual ::android::text::method::MovementMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArrowKeyMovementMethod(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::BaseMovementMethod(_obj), ::android::text::method::MovementMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArrowKeyMovementMethod(const ::android::text::method::ArrowKeyMovementMethod& x) : ::java::lang::Object((jobject)0), ::android::text::method::BaseMovementMethod((jobject)0), ::android::text::method::MovementMethod((jobject)0) {obj = x.obj;}
    ArrowKeyMovementMethod(::android::text::method::ArrowKeyMovementMethod&& x) : ::java::lang::Object((jobject)0), ::android::text::method::BaseMovementMethod((jobject)0), ::android::text::method::MovementMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::ArrowKeyMovementMethod& operator=(const ::android::text::method::ArrowKeyMovementMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::ArrowKeyMovementMethod& operator=(::android::text::method::ArrowKeyMovementMethod&& x) {obj = std::move(x.obj); return *this;}
    
    ArrowKeyMovementMethod();
    bool onTouchEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const;
    bool canSelectArbitrarily() const;
    void initialize(const ::android::widget::TextView&, const ::android::text::Spannable&) const;
    void onTakeFocus(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t) const;
    static ::android::text::method::MovementMethod getInstance();

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.MovementMethod.hpp"

namespace android { namespace text { class Spannable; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace text {
namespace method {
class BaseMovementMethod : public virtual ::java::lang::Object,
                           public virtual ::android::text::method::MovementMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseMovementMethod(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::MovementMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseMovementMethod(const ::android::text::method::BaseMovementMethod& x) : ::java::lang::Object((jobject)0), ::android::text::method::MovementMethod((jobject)0) {obj = x.obj;}
    BaseMovementMethod(::android::text::method::BaseMovementMethod&& x) : ::java::lang::Object((jobject)0), ::android::text::method::MovementMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::BaseMovementMethod& operator=(const ::android::text::method::BaseMovementMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::BaseMovementMethod& operator=(::android::text::method::BaseMovementMethod&& x) {obj = std::move(x.obj); return *this;}
    
    BaseMovementMethod();
    bool canSelectArbitrarily() const;
    void initialize(const ::android::widget::TextView&, const ::android::text::Spannable&) const;
    bool onKeyDown(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyOther(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::KeyEvent&) const;
    bool onKeyUp(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t, const ::android::view::KeyEvent&) const;
    void onTakeFocus(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t) const;
    bool onTouchEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const;
    bool onTrackballEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const;
    bool onGenericMotionEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const;

};
}
}
}



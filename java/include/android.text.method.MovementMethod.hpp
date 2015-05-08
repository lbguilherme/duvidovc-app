#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Spannable; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace widget { class TextView; } }

namespace android {
namespace text {
namespace method {
class MovementMethod : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MovementMethod(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MovementMethod(const ::android::text::method::MovementMethod& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MovementMethod(::android::text::method::MovementMethod&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::MovementMethod& operator=(const ::android::text::method::MovementMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::MovementMethod& operator=(::android::text::method::MovementMethod&& x) {obj = std::move(x.obj); return *this;}
    
    void initialize(const ::android::widget::TextView&, const ::android::text::Spannable&) const ;
    bool onKeyDown(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyOther(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::KeyEvent&) const ;
    void onTakeFocus(const ::android::widget::TextView&, const ::android::text::Spannable&, int32_t) const ;
    bool onTrackballEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const ;
    bool onGenericMotionEvent(const ::android::widget::TextView&, const ::android::text::Spannable&, const ::android::view::MotionEvent&) const ;
    bool canSelectArbitrarily() const ;

};
}
}
}



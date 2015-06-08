#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.GestureDetector_OnGestureListener.hpp"
#include "android.widget.AbsSpinner.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }

namespace android {
namespace widget {
class Gallery : public virtual ::java::lang::Object,
                public virtual ::android::view::GestureDetector_OnGestureListener,
                public virtual ::android::widget::AbsSpinner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Gallery(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::GestureDetector_OnGestureListener(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsSpinner(_obj), ::android::widget::AdapterView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Gallery(const ::android::widget::Gallery& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj;}
    Gallery(::android::widget::Gallery&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Gallery& operator=(const ::android::widget::Gallery& x) {obj = x.obj; return *this;}
    ::android::widget::Gallery& operator=(::android::widget::Gallery&& x) {obj = std::move(x.obj); return *this;}
    
    Gallery(const ::android::content::Context&);
    Gallery(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Gallery(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setCallbackDuringFling(bool) const;
    void setAnimationDuration(int32_t) const;
    void setSpacing(int32_t) const;
    void setUnselectedAlpha(float) const;
    ::android::view::ViewGroup_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    bool onSingleTapUp(const ::android::view::MotionEvent&) const;
    bool onFling(const ::android::view::MotionEvent&, const ::android::view::MotionEvent&, float, float) const;
    bool onScroll(const ::android::view::MotionEvent&, const ::android::view::MotionEvent&, float, float) const;
    bool onDown(const ::android::view::MotionEvent&) const;
    void onLongPress(const ::android::view::MotionEvent&) const;
    void onShowPress(const ::android::view::MotionEvent&) const;
    void dispatchSetSelected(bool) const;
    bool showContextMenuForChild(const ::android::view::View&) const;
    bool showContextMenu() const;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    void setGravity(int32_t) const;

};
}
}

#include "android.widget.Gallery_LayoutParams.hpp"


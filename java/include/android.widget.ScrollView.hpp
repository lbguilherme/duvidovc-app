#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }

namespace android {
namespace widget {
class ScrollView : public virtual ::java::lang::Object,
                   public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScrollView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScrollView(const ::android::widget::ScrollView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    ScrollView(::android::widget::ScrollView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ScrollView& operator=(const ::android::widget::ScrollView& x) {obj = x.obj; return *this;}
    ::android::widget::ScrollView& operator=(::android::widget::ScrollView&& x) {obj = std::move(x.obj); return *this;}
    
    ScrollView(const ::android::content::Context&);
    ScrollView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ScrollView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool shouldDelayChildPressedState() const ;
    int32_t getMaxScrollAmount() const ;
    void addView(const ::android::view::View&) const ;
    void addView(const ::android::view::View&, int32_t) const ;
    void addView(const ::android::view::View&, const ::android::view::ViewGroup_LayoutParams&) const ;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const ;
    bool isFillViewport() const ;
    void setFillViewport(bool) const ;
    bool isSmoothScrollingEnabled() const ;
    void setSmoothScrollingEnabled(bool) const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    bool executeKeyEvent(const ::android::view::KeyEvent&) const ;
    void requestDisallowInterceptTouchEvent(bool) const ;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const ;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const ;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    bool pageScroll(int32_t) const ;
    bool fullScroll(int32_t) const ;
    bool arrowScroll(int32_t) const ;
    void smoothScrollBy(int32_t, int32_t) const ;
    void smoothScrollTo(int32_t, int32_t) const ;
    void computeScroll() const ;
    void requestChildFocus(const ::android::view::View&, const ::android::view::View&) const ;
    bool requestChildRectangleOnScreen(const ::android::view::View&, const ::android::graphics::Rect&, bool) const ;
    void requestLayout() const ;
    void fling(int32_t) const ;
    void scrollTo(int32_t, int32_t) const ;
    void setOverScrollMode(int32_t) const ;
    void draw(const ::android::graphics::Canvas&) const ;

};
}
}



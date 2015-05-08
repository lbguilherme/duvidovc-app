#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class SlidingDrawer_OnDrawerCloseListener; } }
namespace android { namespace widget { class SlidingDrawer_OnDrawerOpenListener; } }
namespace android { namespace widget { class SlidingDrawer_OnDrawerScrollListener; } }

namespace android {
namespace widget {
class SlidingDrawer : public virtual ::java::lang::Object,
                      public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingDrawer(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingDrawer(const ::android::widget::SlidingDrawer& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    SlidingDrawer(::android::widget::SlidingDrawer&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SlidingDrawer& operator=(const ::android::widget::SlidingDrawer& x) {obj = x.obj; return *this;}
    ::android::widget::SlidingDrawer& operator=(::android::widget::SlidingDrawer&& x) {obj = std::move(x.obj); return *this;}
    
    SlidingDrawer(const ::android::content::Context&, const ::android::util::AttributeSet&);
    SlidingDrawer(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void toggle() const ;
    void animateToggle() const ;
    void open() const ;
    void close() const ;
    void animateClose() const ;
    void animateOpen() const ;
    void setOnDrawerOpenListener(const ::android::widget::SlidingDrawer_OnDrawerOpenListener&) const ;
    void setOnDrawerCloseListener(const ::android::widget::SlidingDrawer_OnDrawerCloseListener&) const ;
    void setOnDrawerScrollListener(const ::android::widget::SlidingDrawer_OnDrawerScrollListener&) const ;
    ::android::view::View getHandle() const ;
    ::android::view::View getContent() const ;
    void unlock() const ;
    void lock() const ;
    bool isOpened() const ;
    bool isMoving() const ;

};
}
}

#include "android.widget.SlidingDrawer_OnDrawerCloseListener.hpp"
#include "android.widget.SlidingDrawer_OnDrawerOpenListener.hpp"
#include "android.widget.SlidingDrawer_OnDrawerScrollListener.hpp"


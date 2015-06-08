#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AdapterViewAnimator.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace widget {
class StackView : public virtual ::java::lang::Object,
                  public virtual ::android::widget::AdapterViewAnimator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StackView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AdapterView(_obj), ::android::widget::AdapterViewAnimator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StackView(const ::android::widget::StackView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {obj = x.obj;}
    StackView(::android::widget::StackView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::StackView& operator=(const ::android::widget::StackView& x) {obj = x.obj; return *this;}
    ::android::widget::StackView& operator=(::android::widget::StackView&& x) {obj = std::move(x.obj); return *this;}
    
    StackView(const ::android::content::Context&);
    StackView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    StackView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void showNext() const;
    void showPrevious() const;
    bool onGenericMotionEvent(const ::android::view::MotionEvent&) const;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const;
    bool onTouchEvent(const ::android::view::MotionEvent&) const;
    void advance() const;

};
}
}



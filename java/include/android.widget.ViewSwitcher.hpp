#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ViewAnimator.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace widget { class ViewSwitcher_ViewFactory; } }

namespace android {
namespace widget {
class ViewSwitcher : public virtual ::java::lang::Object,
                     public virtual ::android::widget::ViewAnimator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewSwitcher(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj), ::android::widget::ViewAnimator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewSwitcher(const ::android::widget::ViewSwitcher& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0) {obj = x.obj;}
    ViewSwitcher(::android::widget::ViewSwitcher&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ViewSwitcher& operator=(const ::android::widget::ViewSwitcher& x) {obj = x.obj; return *this;}
    ::android::widget::ViewSwitcher& operator=(::android::widget::ViewSwitcher&& x) {obj = std::move(x.obj); return *this;}
    
    ViewSwitcher(const ::android::content::Context&);
    ViewSwitcher(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const ;
    ::android::view::View getNextView() const ;
    void setFactory(const ::android::widget::ViewSwitcher_ViewFactory&) const ;
    void reset() const ;

};
}
}

#include "android.widget.ViewSwitcher_ViewFactory.hpp"


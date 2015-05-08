#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { namespace animation { class Animation; } } }

namespace android {
namespace widget {
class ViewAnimator : public virtual ::java::lang::Object,
                     public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewAnimator(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewAnimator(const ::android::widget::ViewAnimator& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    ViewAnimator(::android::widget::ViewAnimator&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ViewAnimator& operator=(const ::android::widget::ViewAnimator& x) {obj = x.obj; return *this;}
    ::android::widget::ViewAnimator& operator=(::android::widget::ViewAnimator&& x) {obj = std::move(x.obj); return *this;}
    
    ViewAnimator(const ::android::content::Context&);
    ViewAnimator(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setDisplayedChild(int32_t) const ;
    int32_t getDisplayedChild() const ;
    void showNext() const ;
    void showPrevious() const ;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const ;
    void removeAllViews() const ;
    void removeView(const ::android::view::View&) const ;
    void removeViewAt(int32_t) const ;
    void removeViewInLayout(const ::android::view::View&) const ;
    void removeViews(int32_t, int32_t) const ;
    void removeViewsInLayout(int32_t, int32_t) const ;
    ::android::view::View getCurrentView() const ;
    ::android::view::animation::Animation getInAnimation() const ;
    void setInAnimation(const ::android::view::animation::Animation&) const ;
    ::android::view::animation::Animation getOutAnimation() const ;
    void setOutAnimation(const ::android::view::animation::Animation&) const ;
    void setInAnimation(const ::android::content::Context&, int32_t) const ;
    void setOutAnimation(const ::android::content::Context&, int32_t) const ;
    void setAnimateFirstView(bool) const ;
    int32_t getBaseline() const ;

};
}
}



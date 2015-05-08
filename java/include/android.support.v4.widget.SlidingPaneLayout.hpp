#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace support { namespace v4 { namespace widget { class SlidingPaneLayout_PanelSlideListener; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SlidingPaneLayout : public virtual ::java::lang::Object,
                          public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingPaneLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingPaneLayout(const ::android::support::v4::widget::SlidingPaneLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    SlidingPaneLayout(::android::support::v4::widget::SlidingPaneLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SlidingPaneLayout& operator=(const ::android::support::v4::widget::SlidingPaneLayout& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SlidingPaneLayout& operator=(::android::support::v4::widget::SlidingPaneLayout&& x) {obj = std::move(x.obj); return *this;}
    
    SlidingPaneLayout(const ::android::content::Context&);
    SlidingPaneLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    SlidingPaneLayout(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setParallaxDistance(int32_t) const ;
    int32_t getParallaxDistance() const ;
    void setSliderFadeColor(int32_t) const ;
    int32_t getSliderFadeColor() const ;
    void setCoveredFadeColor(int32_t) const ;
    int32_t getCoveredFadeColor() const ;
    void setPanelSlideListener(const ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener&) const ;
    void requestChildFocus(const ::android::view::View&, const ::android::view::View&) const ;
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void smoothSlideOpen() const ;
    bool openPane() const ;
    void smoothSlideClosed() const ;
    bool closePane() const ;
    bool isOpen() const ;
    bool canSlide() const ;
    bool isSlideable() const ;
    void computeScroll() const ;
    void setShadowDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setShadowDrawableLeft(const ::android::graphics::drawable::Drawable&) const ;
    void setShadowDrawableRight(const ::android::graphics::drawable::Drawable&) const ;
    void setShadowResource(int32_t) const ;
    void setShadowResourceLeft(int32_t) const ;
    void setShadowResourceRight(int32_t) const ;
    void draw(const ::android::graphics::Canvas&) const ;
    ::android::view::ViewGroup_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const ;

};
}
}
}
}

#include "android.support.v4.widget.SlidingPaneLayout_AccessibilityDelegate.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_DisableLayerRunnable.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_DragHelperCallback.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_LayoutParams.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_PanelSlideListener.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SavedState.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SimplePanelSlideListener.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SlidingPanelLayoutImpl.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SlidingPanelLayoutImplBase.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SlidingPanelLayoutImplJB.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SlidingPanelLayoutImplJBMR1.hpp"


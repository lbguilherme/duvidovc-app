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
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace widget { class RelativeLayout_LayoutParams; } }

namespace android {
namespace widget {
class RelativeLayout : public virtual ::java::lang::Object,
                       public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RelativeLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RelativeLayout(const ::android::widget::RelativeLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    RelativeLayout(::android::widget::RelativeLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RelativeLayout& operator=(const ::android::widget::RelativeLayout& x) {obj = x.obj; return *this;}
    ::android::widget::RelativeLayout& operator=(::android::widget::RelativeLayout&& x) {obj = std::move(x.obj); return *this;}
    
    RelativeLayout(const ::android::content::Context&);
    RelativeLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    RelativeLayout(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool shouldDelayChildPressedState() const;
    void setIgnoreGravity(int32_t) const;
    void setGravity(int32_t) const;
    void setHorizontalGravity(int32_t) const;
    void setVerticalGravity(int32_t) const;
    int32_t getBaseline() const;
    void requestLayout() const;
    ::android::widget::RelativeLayout_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}

#include "android.widget.RelativeLayout_LayoutParams.hpp"


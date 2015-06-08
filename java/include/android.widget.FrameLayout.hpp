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
namespace android { namespace graphics { class Region; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class FrameLayout_LayoutParams; } }

namespace android {
namespace widget {
class FrameLayout : public virtual ::java::lang::Object,
                    public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FrameLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FrameLayout(const ::android::widget::FrameLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    FrameLayout(::android::widget::FrameLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::FrameLayout& operator=(const ::android::widget::FrameLayout& x) {obj = x.obj; return *this;}
    ::android::widget::FrameLayout& operator=(::android::widget::FrameLayout&& x) {obj = std::move(x.obj); return *this;}
    
    FrameLayout(const ::android::content::Context&);
    FrameLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    FrameLayout(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setForegroundGravity(int32_t) const;
    void jumpDrawablesToCurrentState() const;
    void setForeground(const ::android::graphics::drawable::Drawable&) const;
    ::android::graphics::drawable::Drawable getForeground() const;
    void draw(const ::android::graphics::Canvas&) const;
    bool gatherTransparentRegion(const ::android::graphics::Region&) const;
    void setMeasureAllChildren(bool) const;
    bool getConsiderGoneChildrenWhenMeasuring() const;
    bool getMeasureAllChildren() const;
    ::android::widget::FrameLayout_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;
    bool shouldDelayChildPressedState() const;

};
}
}

#include "android.widget.FrameLayout_LayoutParams.hpp"


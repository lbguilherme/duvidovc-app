#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class LinearLayout_LayoutParams; } }

namespace android {
namespace widget {
class LinearLayout : public virtual ::java::lang::Object,
                     public virtual ::android::view::ViewGroup {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinearLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinearLayout(const ::android::widget::LinearLayout& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    LinearLayout(::android::widget::LinearLayout&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::LinearLayout& operator=(const ::android::widget::LinearLayout& x) {obj = x.obj; return *this;}
    ::android::widget::LinearLayout& operator=(::android::widget::LinearLayout&& x) {obj = std::move(x.obj); return *this;}
    
    LinearLayout(const ::android::content::Context&);
    LinearLayout(const ::android::content::Context&, const ::android::util::AttributeSet&);
    LinearLayout(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setShowDividers(int32_t) const;
    bool shouldDelayChildPressedState() const;
    int32_t getShowDividers() const;
    void setDividerDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setDividerPadding(int32_t) const;
    int32_t getDividerPadding() const;
    bool isBaselineAligned() const;
    void setBaselineAligned(bool) const;
    bool isMeasureWithLargestChildEnabled() const;
    void setMeasureWithLargestChildEnabled(bool) const;
    int32_t getBaseline() const;
    int32_t getBaselineAlignedChildIndex() const;
    void setBaselineAlignedChildIndex(int32_t) const;
    float getWeightSum() const;
    void setWeightSum(float) const;
    void setOrientation(int32_t) const;
    int32_t getOrientation() const;
    void setGravity(int32_t) const;
    void setHorizontalGravity(int32_t) const;
    void setVerticalGravity(int32_t) const;
    ::android::widget::LinearLayout_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const;

};
}
}

#include "android.widget.LinearLayout_LayoutParams.hpp"


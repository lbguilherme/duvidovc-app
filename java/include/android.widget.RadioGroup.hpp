#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.LinearLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class ViewGroup_OnHierarchyChangeListener; } }
namespace android { namespace widget { class RadioGroup_LayoutParams; } }
namespace android { namespace widget { class RadioGroup_OnCheckedChangeListener; } }

namespace android {
namespace widget {
class RadioGroup : public virtual ::java::lang::Object,
                   public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RadioGroup(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RadioGroup(const ::android::widget::RadioGroup& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    RadioGroup(::android::widget::RadioGroup&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RadioGroup& operator=(const ::android::widget::RadioGroup& x) {obj = x.obj; return *this;}
    ::android::widget::RadioGroup& operator=(::android::widget::RadioGroup&& x) {obj = std::move(x.obj); return *this;}
    
    RadioGroup(const ::android::content::Context&);
    RadioGroup(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener&) const ;
    void addView(const ::android::view::View&, int32_t, const ::android::view::ViewGroup_LayoutParams&) const ;
    void check(int32_t) const ;
    int32_t getCheckedRadioButtonId() const ;
    void clearCheck() const ;
    void setOnCheckedChangeListener(const ::android::widget::RadioGroup_OnCheckedChangeListener&) const ;
    ::android::widget::RadioGroup_LayoutParams generateLayoutParams(const ::android::util::AttributeSet&) const ;

};
}
}

#include "android.widget.RadioGroup_LayoutParams.hpp"
#include "android.widget.RadioGroup_OnCheckedChangeListener.hpp"


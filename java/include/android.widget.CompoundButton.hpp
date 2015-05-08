#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Button.hpp"
#include "android.widget.Checkable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }
namespace android { namespace widget { class CompoundButton_OnCheckedChangeListener; } }

namespace android {
namespace widget {
class CompoundButton : public virtual ::java::lang::Object,
                       public virtual ::android::widget::Button,
                       public virtual ::android::widget::Checkable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CompoundButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::Checkable(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CompoundButton(const ::android::widget::CompoundButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    CompoundButton(::android::widget::CompoundButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::CompoundButton& operator=(const ::android::widget::CompoundButton& x) {obj = x.obj; return *this;}
    ::android::widget::CompoundButton& operator=(::android::widget::CompoundButton&& x) {obj = std::move(x.obj); return *this;}
    
    CompoundButton(const ::android::content::Context&);
    CompoundButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    CompoundButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void toggle() const ;
    bool performClick() const ;
    bool isChecked() const ;
    void setChecked(bool) const ;
    void setOnCheckedChangeListener(const ::android::widget::CompoundButton_OnCheckedChangeListener&) const ;
    void setButtonDrawable(int32_t) const ;
    void setButtonDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const ;
    void jumpDrawablesToCurrentState() const ;
    ::android::os::Parcelable onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const ;

};
}
}

#include "android.widget.CompoundButton_OnCheckedChangeListener.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Checkable.hpp"
#include "android.widget.TextView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace view { namespace accessibility { class AccessibilityNodeInfo; } } }

namespace android {
namespace widget {
class CheckedTextView : public virtual ::java::lang::Object,
                        public virtual ::android::widget::Checkable,
                        public virtual ::android::widget::TextView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CheckedTextView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Checkable(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CheckedTextView(const ::android::widget::CheckedTextView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    CheckedTextView(::android::widget::CheckedTextView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::CheckedTextView& operator=(const ::android::widget::CheckedTextView& x) {obj = x.obj; return *this;}
    ::android::widget::CheckedTextView& operator=(::android::widget::CheckedTextView&& x) {obj = std::move(x.obj); return *this;}
    
    CheckedTextView(const ::android::content::Context&);
    CheckedTextView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    CheckedTextView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void toggle() const ;
    bool isChecked() const ;
    void setChecked(bool) const ;
    void setCheckMarkDrawable(int32_t) const ;
    void setCheckMarkDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void setPadding(int32_t, int32_t, int32_t, int32_t) const ;
    void onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo&) const ;

};
}
}



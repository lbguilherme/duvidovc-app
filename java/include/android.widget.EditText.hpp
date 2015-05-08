#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.TextView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace text { class Editable; } }
namespace android { namespace text { class TextUtils_TruncateAt; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class TextView_BufferType; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class EditText : public virtual ::java::lang::Object,
                 public virtual ::android::widget::TextView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EditText(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EditText(const ::android::widget::EditText& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    EditText(::android::widget::EditText&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::EditText& operator=(const ::android::widget::EditText& x) {obj = x.obj; return *this;}
    ::android::widget::EditText& operator=(::android::widget::EditText&& x) {obj = std::move(x.obj); return *this;}
    
    EditText(const ::android::content::Context&);
    EditText(const ::android::content::Context&, const ::android::util::AttributeSet&);
    EditText(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ::android::text::Editable getText() const ;
    void setText(const ::java::lang::CharSequence&, const ::android::widget::TextView_BufferType&) const ;
    void setSelection(int32_t, int32_t) const ;
    void setSelection(int32_t) const ;
    void selectAll() const ;
    void extendSelection(int32_t) const ;
    void setEllipsize(const ::android::text::TextUtils_TruncateAt&) const ;

};
}
}



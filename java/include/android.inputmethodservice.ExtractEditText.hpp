#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.EditText.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace inputmethod { class ExtractedText; } } }

namespace android {
namespace inputmethodservice {
class ExtractEditText : public virtual ::java::lang::Object,
                        public virtual ::android::widget::EditText {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExtractEditText(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::EditText(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExtractEditText(const ::android::inputmethodservice::ExtractEditText& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    ExtractEditText(::android::inputmethodservice::ExtractEditText&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::inputmethodservice::ExtractEditText& operator=(const ::android::inputmethodservice::ExtractEditText& x) {obj = x.obj; return *this;}
    ::android::inputmethodservice::ExtractEditText& operator=(::android::inputmethodservice::ExtractEditText&& x) {obj = std::move(x.obj); return *this;}
    
    ExtractEditText(const ::android::content::Context&);
    ExtractEditText(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ExtractEditText(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void startInternalChanges() const ;
    void finishInternalChanges() const ;
    void setExtractedText(const ::android::view::inputmethod::ExtractedText&) const ;
    bool performClick() const ;
    bool onTextContextMenuItem(int32_t) const ;
    bool isInputMethodTarget() const ;
    bool hasVerticalScrollBar() const ;
    bool hasWindowFocus() const ;
    bool isFocused() const ;
    bool hasFocus() const ;

};
}
}



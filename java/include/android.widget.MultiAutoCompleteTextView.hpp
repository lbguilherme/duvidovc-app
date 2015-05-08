#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AutoCompleteTextView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class MultiAutoCompleteTextView_Tokenizer; } }

namespace android {
namespace widget {
class MultiAutoCompleteTextView : public virtual ::java::lang::Object,
                                  public virtual ::android::widget::AutoCompleteTextView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MultiAutoCompleteTextView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AutoCompleteTextView(_obj), ::android::widget::EditText(_obj), ::android::widget::Filter_FilterListener(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MultiAutoCompleteTextView(const ::android::widget::MultiAutoCompleteTextView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AutoCompleteTextView((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    MultiAutoCompleteTextView(::android::widget::MultiAutoCompleteTextView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AutoCompleteTextView((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::MultiAutoCompleteTextView& operator=(const ::android::widget::MultiAutoCompleteTextView& x) {obj = x.obj; return *this;}
    ::android::widget::MultiAutoCompleteTextView& operator=(::android::widget::MultiAutoCompleteTextView&& x) {obj = std::move(x.obj); return *this;}
    
    MultiAutoCompleteTextView(const ::android::content::Context&);
    MultiAutoCompleteTextView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    MultiAutoCompleteTextView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setTokenizer(const ::android::widget::MultiAutoCompleteTextView_Tokenizer&) const ;
    bool enoughToFilter() const ;
    void performValidation() const ;

};
}
}

#include "android.widget.MultiAutoCompleteTextView_CommaTokenizer.hpp"
#include "android.widget.MultiAutoCompleteTextView_Tokenizer.hpp"


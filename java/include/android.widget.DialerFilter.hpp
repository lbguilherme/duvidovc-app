#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.RelativeLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace text { class TextWatcher; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class DialerFilter : public virtual ::java::lang::Object,
                     public virtual ::android::widget::RelativeLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DialerFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::RelativeLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DialerFilter(const ::android::widget::DialerFilter& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {obj = x.obj;}
    DialerFilter(::android::widget::DialerFilter&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::DialerFilter& operator=(const ::android::widget::DialerFilter& x) {obj = x.obj; return *this;}
    ::android::widget::DialerFilter& operator=(::android::widget::DialerFilter&& x) {obj = std::move(x.obj); return *this;}
    
    DialerFilter(const ::android::content::Context&);
    DialerFilter(const ::android::content::Context&, const ::android::util::AttributeSet&);
    bool isQwertyKeyboard() const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    int32_t getMode() const ;
    void setMode(int32_t) const ;
    ::java::lang::CharSequence getLetters() const ;
    ::java::lang::CharSequence getDigits() const ;
    ::java::lang::CharSequence getFilterText() const ;
    void append(const ::java::lang::String&) const ;
    void clearText() const ;
    void setLettersWatcher(const ::android::text::TextWatcher&) const ;
    void setDigitsWatcher(const ::android::text::TextWatcher&) const ;
    void setFilterWatcher(const ::android::text::TextWatcher&) const ;
    void removeFilterWatcher(const ::android::text::TextWatcher&) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.DialogInterface_OnClickListener.hpp"
#include "android.widget.AbsSpinner.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class DialogInterface; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class AdapterView_OnItemClickListener; } }
namespace android { namespace widget { class SpinnerAdapter; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class Spinner : public virtual ::java::lang::Object,
                public virtual ::android::content::DialogInterface_OnClickListener,
                public virtual ::android::widget::AbsSpinner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Spinner(jobject _obj) : ::java::lang::Object(_obj), ::android::content::DialogInterface_OnClickListener(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsSpinner(_obj), ::android::widget::AdapterView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Spinner(const ::android::widget::Spinner& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj;}
    Spinner(::android::widget::Spinner&& x) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Spinner& operator=(const ::android::widget::Spinner& x) {obj = x.obj; return *this;}
    ::android::widget::Spinner& operator=(::android::widget::Spinner&& x) {obj = std::move(x.obj); return *this;}
    
    Spinner(const ::android::content::Context&);
    Spinner(const ::android::content::Context&, int32_t);
    Spinner(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Spinner(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    Spinner(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t, int32_t);
    void setEnabled(bool) const;
    void setGravity(int32_t) const;
    void setAdapter(const ::android::widget::SpinnerAdapter&) const;
    int32_t getBaseline() const;
    void setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener&) const;
    bool performClick() const;
    void onClick(const ::android::content::DialogInterface&, int32_t) const;
    void setPrompt(const ::java::lang::CharSequence&) const;
    void setPromptId(int32_t) const;
    ::java::lang::CharSequence getPrompt() const;
    void setAdapter(const ::android::widget::Adapter&) const;

};
}
}



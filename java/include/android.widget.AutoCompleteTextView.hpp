#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.EditText.hpp"
#include "android.widget.Filter_FilterListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } }
namespace android { namespace widget { class AdapterView_OnItemClickListener; } }
namespace android { namespace widget { class AdapterView_OnItemSelectedListener; } }
namespace android { namespace widget { class AutoCompleteTextView_Validator; } }
namespace android { namespace widget { class ListAdapter; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class AutoCompleteTextView : public virtual ::java::lang::Object,
                             public virtual ::android::widget::EditText,
                             public virtual ::android::widget::Filter_FilterListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AutoCompleteTextView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::EditText(_obj), ::android::widget::Filter_FilterListener(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AutoCompleteTextView(const ::android::widget::AutoCompleteTextView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    AutoCompleteTextView(::android::widget::AutoCompleteTextView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AutoCompleteTextView& operator=(const ::android::widget::AutoCompleteTextView& x) {obj = x.obj; return *this;}
    ::android::widget::AutoCompleteTextView& operator=(::android::widget::AutoCompleteTextView&& x) {obj = std::move(x.obj); return *this;}
    
    AutoCompleteTextView(const ::android::content::Context&);
    AutoCompleteTextView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AutoCompleteTextView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setOnClickListener(const ::android::view::View_OnClickListener&) const;
    void setCompletionHint(const ::java::lang::CharSequence&) const;
    int32_t getDropDownWidth() const;
    void setDropDownWidth(int32_t) const;
    int32_t getDropDownHeight() const;
    void setDropDownHeight(int32_t) const;
    int32_t getDropDownAnchor() const;
    void setDropDownAnchor(int32_t) const;
    ::android::graphics::drawable::Drawable getDropDownBackground() const;
    void setDropDownBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setDropDownBackgroundResource(int32_t) const;
    void setDropDownVerticalOffset(int32_t) const;
    int32_t getDropDownVerticalOffset() const;
    void setDropDownHorizontalOffset(int32_t) const;
    int32_t getDropDownHorizontalOffset() const;
    int32_t getThreshold() const;
    void setThreshold(int32_t) const;
    void setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener&) const;
    void setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener&) const;
    ::android::widget::AdapterView_OnItemClickListener getItemClickListener() const;
    ::android::widget::AdapterView_OnItemSelectedListener getItemSelectedListener() const;
    ::android::widget::AdapterView_OnItemClickListener getOnItemClickListener() const;
    ::android::widget::AdapterView_OnItemSelectedListener getOnItemSelectedListener() const;
    ::android::widget::ListAdapter getAdapter() const;
    void setAdapter(const ::android::widget::ListAdapter&) const;
    bool onKeyPreIme(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool enoughToFilter() const;
    bool isPopupShowing() const;
    void clearListSelection() const;
    void setListSelection(int32_t) const;
    int32_t getListSelection() const;
    void performCompletion() const;
    void onCommitCompletion(const ::android::view::inputmethod::CompletionInfo&) const;
    bool isPerformingCompletion() const;
    void onFilterComplete(int32_t) const;
    void onWindowFocusChanged(bool) const;
    void dismissDropDown() const;
    void showDropDown() const;
    void setValidator(const ::android::widget::AutoCompleteTextView_Validator&) const;
    ::android::widget::AutoCompleteTextView_Validator getValidator() const;
    void performValidation() const;

};
}
}

#include "android.widget.AutoCompleteTextView_Validator.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.CollapsibleActionView.hpp"
#include "android.widget.LinearLayout.hpp"

namespace android { namespace app { class SearchableInfo; } }
namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View_OnClickListener; } }
namespace android { namespace view { class View_OnFocusChangeListener; } }
namespace android { namespace widget { class CursorAdapter; } }
namespace android { namespace widget { class SearchView_OnCloseListener; } }
namespace android { namespace widget { class SearchView_OnQueryTextListener; } }
namespace android { namespace widget { class SearchView_OnSuggestionListener; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class SearchView : public virtual ::java::lang::Object,
                   public virtual ::android::view::CollapsibleActionView,
                   public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::CollapsibleActionView(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchView(const ::android::widget::SearchView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::CollapsibleActionView((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    SearchView(::android::widget::SearchView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::CollapsibleActionView((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SearchView& operator=(const ::android::widget::SearchView& x) {obj = x.obj; return *this;}
    ::android::widget::SearchView& operator=(::android::widget::SearchView&& x) {obj = std::move(x.obj); return *this;}
    
    SearchView(const ::android::content::Context&);
    SearchView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setSearchableInfo(const ::android::app::SearchableInfo&) const ;
    void setImeOptions(int32_t) const ;
    void setInputType(int32_t) const ;
    void setOnQueryTextListener(const ::android::widget::SearchView_OnQueryTextListener&) const ;
    void setOnCloseListener(const ::android::widget::SearchView_OnCloseListener&) const ;
    void setOnQueryTextFocusChangeListener(const ::android::view::View_OnFocusChangeListener&) const ;
    void setOnSuggestionListener(const ::android::widget::SearchView_OnSuggestionListener&) const ;
    void setOnSearchClickListener(const ::android::view::View_OnClickListener&) const ;
    ::java::lang::CharSequence getQuery() const ;
    void setQuery(const ::java::lang::CharSequence&, bool) const ;
    void setQueryHint(const ::java::lang::CharSequence&) const ;
    void setIconifiedByDefault(bool) const ;
    bool isIconfiedByDefault() const ;
    void setIconified(bool) const ;
    bool isIconified() const ;
    void setSubmitButtonEnabled(bool) const ;
    bool isSubmitButtonEnabled() const ;
    void setQueryRefinementEnabled(bool) const ;
    bool isQueryRefinementEnabled() const ;
    void setSuggestionsAdapter(const ::android::widget::CursorAdapter&) const ;
    ::android::widget::CursorAdapter getSuggestionsAdapter() const ;
    void setMaxWidth(int32_t) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    void onWindowFocusChanged(bool) const ;
    void onActionViewCollapsed() const ;
    void onActionViewExpanded() const ;

};
}
}

#include "android.widget.SearchView_OnCloseListener.hpp"
#include "android.widget.SearchView_OnQueryTextListener.hpp"
#include "android.widget.SearchView_OnSuggestionListener.hpp"


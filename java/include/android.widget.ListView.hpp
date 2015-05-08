#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AbsListView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class ListAdapter; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class ListView : public virtual ::java::lang::Object,
                 public virtual ::android::widget::AbsListView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ListView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::text::NoCopySpan(_obj), ::android::text::TextWatcher(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnGlobalLayoutListener(_obj), ::android::view::ViewTreeObserver_OnTouchModeChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsListView(_obj), ::android::widget::AdapterView(_obj), ::android::widget::Filter_FilterListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ListView(const ::android::widget::ListView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {obj = x.obj;}
    ListView(::android::widget::ListView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ListView& operator=(const ::android::widget::ListView& x) {obj = x.obj; return *this;}
    ::android::widget::ListView& operator=(::android::widget::ListView&& x) {obj = std::move(x.obj); return *this;}
    
    ListView(const ::android::content::Context&);
    ListView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ListView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    int32_t getMaxScrollAmount() const ;
    void addHeaderView(const ::android::view::View&, const ::java::lang::Object&, bool) const ;
    void addHeaderView(const ::android::view::View&) const ;
    int32_t getHeaderViewsCount() const ;
    bool removeHeaderView(const ::android::view::View&) const ;
    void addFooterView(const ::android::view::View&, const ::java::lang::Object&, bool) const ;
    void addFooterView(const ::android::view::View&) const ;
    int32_t getFooterViewsCount() const ;
    bool removeFooterView(const ::android::view::View&) const ;
    ::android::widget::ListAdapter getAdapter() const ;
    void setRemoteViewsAdapter(const ::android::content::Intent&) const ;
    void setAdapter(const ::android::widget::ListAdapter&) const ;
    bool requestChildRectangleOnScreen(const ::android::view::View&, const ::android::graphics::Rect&, bool) const ;
    void smoothScrollToPosition(int32_t) const ;
    void smoothScrollByOffset(int32_t) const ;
    void setSelection(int32_t) const ;
    void setSelectionFromTop(int32_t, int32_t) const ;
    void setSelectionAfterHeaderView() const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    void setItemsCanFocus(bool) const ;
    bool getItemsCanFocus() const ;
    bool isOpaque() const ;
    void setCacheColorHint(int32_t) const ;
    ::android::graphics::drawable::Drawable getDivider() const ;
    void setDivider(const ::android::graphics::drawable::Drawable&) const ;
    int32_t getDividerHeight() const ;
    void setDividerHeight(int32_t) const ;
    void setHeaderDividersEnabled(bool) const ;
    void setFooterDividersEnabled(bool) const ;
    void setOverscrollHeader(const ::android::graphics::drawable::Drawable&) const ;
    ::android::graphics::drawable::Drawable getOverscrollHeader() const ;
    void setOverscrollFooter(const ::android::graphics::drawable::Drawable&) const ;
    ::android::graphics::drawable::Drawable getOverscrollFooter() const ;
    std::vector< int64_t> getCheckItemIds() const ;
    void setAdapter(const ::android::widget::Adapter&) const ;

};
}
}

#include "android.widget.ListView_FixedViewInfo.hpp"


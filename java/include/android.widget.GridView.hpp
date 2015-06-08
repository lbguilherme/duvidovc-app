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
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class ListAdapter; } }

namespace android {
namespace widget {
class GridView : public virtual ::java::lang::Object,
                 public virtual ::android::widget::AbsListView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::text::NoCopySpan(_obj), ::android::text::TextWatcher(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnGlobalLayoutListener(_obj), ::android::view::ViewTreeObserver_OnTouchModeChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsListView(_obj), ::android::widget::AdapterView(_obj), ::android::widget::Filter_FilterListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridView(const ::android::widget::GridView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {obj = x.obj;}
    GridView(::android::widget::GridView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::GridView& operator=(const ::android::widget::GridView& x) {obj = x.obj; return *this;}
    ::android::widget::GridView& operator=(::android::widget::GridView&& x) {obj = std::move(x.obj); return *this;}
    
    GridView(const ::android::content::Context&);
    GridView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    GridView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ::android::widget::ListAdapter getAdapter() const;
    void setRemoteViewsAdapter(const ::android::content::Intent&) const;
    void setAdapter(const ::android::widget::ListAdapter&) const;
    void smoothScrollToPosition(int32_t) const;
    void smoothScrollByOffset(int32_t) const;
    void setSelection(int32_t) const;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyMultiple(int32_t, int32_t, const ::android::view::KeyEvent&) const;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const;
    void setGravity(int32_t) const;
    void setHorizontalSpacing(int32_t) const;
    void setVerticalSpacing(int32_t) const;
    void setStretchMode(int32_t) const;
    int32_t getStretchMode() const;
    void setColumnWidth(int32_t) const;
    void setNumColumns(int32_t) const;
    int32_t getNumColumns() const;
    void setAdapter(const ::android::widget::Adapter&) const;

};
}
}



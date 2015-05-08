#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ListView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class Adapter; } }
namespace android { namespace widget { class AdapterView_OnItemClickListener; } }
namespace android { namespace widget { class ExpandableListAdapter; } }
namespace android { namespace widget { class ExpandableListView_OnChildClickListener; } }
namespace android { namespace widget { class ExpandableListView_OnGroupClickListener; } }
namespace android { namespace widget { class ExpandableListView_OnGroupCollapseListener; } }
namespace android { namespace widget { class ExpandableListView_OnGroupExpandListener; } }
namespace android { namespace widget { class ListAdapter; } }

namespace android {
namespace widget {
class ExpandableListView : public virtual ::java::lang::Object,
                           public virtual ::android::widget::ListView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::text::NoCopySpan(_obj), ::android::text::TextWatcher(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::ViewTreeObserver_OnGlobalLayoutListener(_obj), ::android::view::ViewTreeObserver_OnTouchModeChangeListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsListView(_obj), ::android::widget::AdapterView(_obj), ::android::widget::Filter_FilterListener(_obj), ::android::widget::ListView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListView(const ::android::widget::ExpandableListView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::ListView((jobject)0) {obj = x.obj;}
    ExpandableListView(::android::widget::ExpandableListView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::ListView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ExpandableListView& operator=(const ::android::widget::ExpandableListView& x) {obj = x.obj; return *this;}
    ::android::widget::ExpandableListView& operator=(::android::widget::ExpandableListView&& x) {obj = std::move(x.obj); return *this;}
    
    ExpandableListView(const ::android::content::Context&);
    ExpandableListView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ExpandableListView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setChildDivider(const ::android::graphics::drawable::Drawable&) const ;
    void setAdapter(const ::android::widget::ListAdapter&) const ;
    ::android::widget::ListAdapter getAdapter() const ;
    void setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener&) const ;
    void setAdapter(const ::android::widget::ExpandableListAdapter&) const ;
    ::android::widget::ExpandableListAdapter getExpandableListAdapter() const ;
    bool performItemClick(const ::android::view::View&, int32_t, int64_t) const ;
    bool expandGroup(int32_t) const ;
    bool expandGroup(int32_t, bool) const ;
    bool collapseGroup(int32_t) const ;
    void setOnGroupCollapseListener(const ::android::widget::ExpandableListView_OnGroupCollapseListener&) const ;
    void setOnGroupExpandListener(const ::android::widget::ExpandableListView_OnGroupExpandListener&) const ;
    void setOnGroupClickListener(const ::android::widget::ExpandableListView_OnGroupClickListener&) const ;
    void setOnChildClickListener(const ::android::widget::ExpandableListView_OnChildClickListener&) const ;
    int64_t getExpandableListPosition(int32_t) const ;
    int32_t getFlatListPosition(int64_t) const ;
    int64_t getSelectedPosition() const ;
    int64_t getSelectedId() const ;
    void setSelectedGroup(int32_t) const ;
    bool setSelectedChild(int32_t, int32_t, bool) const ;
    bool isGroupExpanded(int32_t) const ;
    static int32_t getPackedPositionType(int64_t);
    static int32_t getPackedPositionGroup(int64_t);
    static int32_t getPackedPositionChild(int64_t);
    static int64_t getPackedPositionForChild(int32_t, int32_t);
    static int64_t getPackedPositionForGroup(int32_t);
    void setChildIndicator(const ::android::graphics::drawable::Drawable&) const ;
    void setChildIndicatorBounds(int32_t, int32_t) const ;
    void setGroupIndicator(const ::android::graphics::drawable::Drawable&) const ;
    void setIndicatorBounds(int32_t, int32_t) const ;
    ::android::os::Parcelable onSaveInstanceState() const ;
    void onRestoreInstanceState(const ::android::os::Parcelable&) const ;
    void setAdapter(const ::android::widget::Adapter&) const ;

};
}
}

#include "android.widget.ExpandableListView_ExpandableListContextMenuInfo.hpp"
#include "android.widget.ExpandableListView_OnChildClickListener.hpp"
#include "android.widget.ExpandableListView_OnGroupClickListener.hpp"
#include "android.widget.ExpandableListView_OnGroupCollapseListener.hpp"
#include "android.widget.ExpandableListView_OnGroupExpandListener.hpp"


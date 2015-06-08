#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Activity.hpp"
#include "android.view.View_OnCreateContextMenuListener.hpp"
#include "android.widget.ExpandableListView_OnChildClickListener.hpp"
#include "android.widget.ExpandableListView_OnGroupCollapseListener.hpp"
#include "android.widget.ExpandableListView_OnGroupExpandListener.hpp"

namespace android { namespace view { class ContextMenu; } }
namespace android { namespace view { class ContextMenu_ContextMenuInfo; } }
namespace android { namespace view { class View; } }
namespace android { namespace widget { class ExpandableListAdapter; } }
namespace android { namespace widget { class ExpandableListView; } }

namespace android {
namespace app {
class ExpandableListActivity : public virtual ::java::lang::Object,
                               public virtual ::android::app::Activity,
                               public virtual ::android::view::View_OnCreateContextMenuListener,
                               public virtual ::android::widget::ExpandableListView_OnChildClickListener,
                               public virtual ::android::widget::ExpandableListView_OnGroupCollapseListener,
                               public virtual ::android::widget::ExpandableListView_OnGroupExpandListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListActivity(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Activity(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj), ::android::view::ContextThemeWrapper(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::LayoutInflater_Factory(_obj), ::android::view::LayoutInflater_Factory2(_obj), ::android::view::View_OnCreateContextMenuListener(_obj), ::android::view::Window_Callback(_obj), ::android::widget::ExpandableListView_OnChildClickListener(_obj), ::android::widget::ExpandableListView_OnGroupCollapseListener(_obj), ::android::widget::ExpandableListView_OnGroupExpandListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListActivity(const ::android::app::ExpandableListActivity& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::ExpandableListView_OnChildClickListener((jobject)0), ::android::widget::ExpandableListView_OnGroupCollapseListener((jobject)0), ::android::widget::ExpandableListView_OnGroupExpandListener((jobject)0) {obj = x.obj;}
    ExpandableListActivity(::android::app::ExpandableListActivity&& x) : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::android::widget::ExpandableListView_OnChildClickListener((jobject)0), ::android::widget::ExpandableListView_OnGroupCollapseListener((jobject)0), ::android::widget::ExpandableListView_OnGroupExpandListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ExpandableListActivity& operator=(const ::android::app::ExpandableListActivity& x) {obj = x.obj; return *this;}
    ::android::app::ExpandableListActivity& operator=(::android::app::ExpandableListActivity&& x) {obj = std::move(x.obj); return *this;}
    
    ExpandableListActivity();
    void onCreateContextMenu(const ::android::view::ContextMenu&, const ::android::view::View&, const ::android::view::ContextMenu_ContextMenuInfo&) const;
    bool onChildClick(const ::android::widget::ExpandableListView&, const ::android::view::View&, int32_t, int32_t, int64_t) const;
    void onGroupCollapse(int32_t) const;
    void onGroupExpand(int32_t) const;
    void onContentChanged() const;
    void setListAdapter(const ::android::widget::ExpandableListAdapter&) const;
    ::android::widget::ExpandableListView getExpandableListView() const;
    ::android::widget::ExpandableListAdapter getExpandableListAdapter() const;
    int64_t getSelectedId() const;
    int64_t getSelectedPosition() const;
    bool setSelectedChild(int32_t, int32_t, bool) const;
    void setSelectedGroup(int32_t) const;

};
}
}



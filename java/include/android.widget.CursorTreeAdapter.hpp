#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.BaseExpandableListAdapter.hpp"
#include "android.widget.Filterable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class Filter; } }
namespace android { namespace widget { class FilterQueryProvider; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class CursorTreeAdapter : public virtual ::java::lang::Object,
                          public virtual ::android::widget::BaseExpandableListAdapter,
                          public virtual ::android::widget::Filterable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CursorTreeAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::BaseExpandableListAdapter(_obj), ::android::widget::ExpandableListAdapter(_obj), ::android::widget::Filterable(_obj), ::android::widget::HeterogeneousExpandableList(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CursorTreeAdapter(const ::android::widget::CursorTreeAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj;}
    CursorTreeAdapter(::android::widget::CursorTreeAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::CursorTreeAdapter& operator=(const ::android::widget::CursorTreeAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::CursorTreeAdapter& operator=(::android::widget::CursorTreeAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    CursorTreeAdapter(const ::android::database::Cursor&, const ::android::content::Context&);
    CursorTreeAdapter(const ::android::database::Cursor&, const ::android::content::Context&, bool);
    void setGroupCursor(const ::android::database::Cursor&) const;
    void setChildrenCursor(int32_t, const ::android::database::Cursor&) const;
    ::android::database::Cursor getChild(int32_t, int32_t) const;
    int64_t getChildId(int32_t, int32_t) const;
    int32_t getChildrenCount(int32_t) const;
    ::android::database::Cursor getGroup(int32_t) const;
    int32_t getGroupCount() const;
    int64_t getGroupId(int32_t) const;
    ::android::view::View getGroupView(int32_t, bool, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    ::android::view::View getChildView(int32_t, int32_t, bool, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    bool isChildSelectable(int32_t, int32_t) const;
    bool hasStableIds() const;
    void notifyDataSetChanged() const;
    void notifyDataSetChanged(bool) const;
    void notifyDataSetInvalidated() const;
    void onGroupCollapsed(int32_t) const;
    ::java::lang::String convertToString(const ::android::database::Cursor&) const;
    ::android::database::Cursor runQueryOnBackgroundThread(const ::java::lang::CharSequence&) const;
    ::android::widget::Filter getFilter() const;
    ::android::widget::FilterQueryProvider getFilterQueryProvider() const;
    void setFilterQueryProvider(const ::android::widget::FilterQueryProvider&) const;
    void changeCursor(const ::android::database::Cursor&) const;
    ::android::database::Cursor getCursor() const;

};
}
}



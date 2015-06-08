#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class ExpandableListAdapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListAdapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListAdapter(const ::android::widget::ExpandableListAdapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExpandableListAdapter(::android::widget::ExpandableListAdapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ExpandableListAdapter& operator=(const ::android::widget::ExpandableListAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::ExpandableListAdapter& operator=(::android::widget::ExpandableListAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    int32_t getGroupCount() const;
    int32_t getChildrenCount(int32_t) const;
    ::java::lang::Object getGroup(int32_t) const;
    ::java::lang::Object getChild(int32_t, int32_t) const;
    int64_t getGroupId(int32_t) const;
    int64_t getChildId(int32_t, int32_t) const;
    bool hasStableIds() const;
    ::android::view::View getGroupView(int32_t, bool, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    ::android::view::View getChildView(int32_t, int32_t, bool, const ::android::view::View&, const ::android::view::ViewGroup&) const;
    bool isChildSelectable(int32_t, int32_t) const;
    bool areAllItemsEnabled() const;
    bool isEmpty() const;
    void onGroupExpanded(int32_t) const;
    void onGroupCollapsed(int32_t) const;
    int64_t getCombinedChildId(int64_t, int64_t) const;
    int64_t getCombinedGroupId(int64_t) const;

};
}
}



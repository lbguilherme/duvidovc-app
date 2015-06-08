#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ExpandableListAdapter.hpp"
#include "android.widget.HeterogeneousExpandableList.hpp"

namespace android { namespace database { class DataSetObserver; } }

namespace android {
namespace widget {
class BaseExpandableListAdapter : public virtual ::java::lang::Object,
                                  public virtual ::android::widget::ExpandableListAdapter,
                                  public virtual ::android::widget::HeterogeneousExpandableList {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseExpandableListAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::ExpandableListAdapter(_obj), ::android::widget::HeterogeneousExpandableList(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseExpandableListAdapter(const ::android::widget::BaseExpandableListAdapter& x) : ::java::lang::Object((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj;}
    BaseExpandableListAdapter(::android::widget::BaseExpandableListAdapter&& x) : ::java::lang::Object((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::BaseExpandableListAdapter& operator=(const ::android::widget::BaseExpandableListAdapter& x) {obj = x.obj; return *this;}
    ::android::widget::BaseExpandableListAdapter& operator=(::android::widget::BaseExpandableListAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    BaseExpandableListAdapter();
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const;
    void notifyDataSetInvalidated() const;
    void notifyDataSetChanged() const;
    bool areAllItemsEnabled() const;
    void onGroupCollapsed(int32_t) const;
    void onGroupExpanded(int32_t) const;
    int64_t getCombinedChildId(int64_t, int64_t) const;
    int64_t getCombinedGroupId(int64_t) const;
    bool isEmpty() const;
    int32_t getChildType(int32_t, int32_t) const;
    int32_t getChildTypeCount() const;
    int32_t getGroupType(int32_t) const;
    int32_t getGroupTypeCount() const;

};
}
}



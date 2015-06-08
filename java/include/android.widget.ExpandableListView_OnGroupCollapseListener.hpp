#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class ExpandableListView_OnGroupCollapseListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListView_OnGroupCollapseListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListView_OnGroupCollapseListener(const ::android::widget::ExpandableListView_OnGroupCollapseListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExpandableListView_OnGroupCollapseListener(::android::widget::ExpandableListView_OnGroupCollapseListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ExpandableListView_OnGroupCollapseListener& operator=(const ::android::widget::ExpandableListView_OnGroupCollapseListener& x) {obj = x.obj; return *this;}
    ::android::widget::ExpandableListView_OnGroupCollapseListener& operator=(::android::widget::ExpandableListView_OnGroupCollapseListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGroupCollapse(int32_t) const;

};
}
}



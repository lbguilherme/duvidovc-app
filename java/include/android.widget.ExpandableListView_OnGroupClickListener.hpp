#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace widget { class ExpandableListView; } }

namespace android {
namespace widget {
class ExpandableListView_OnGroupClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListView_OnGroupClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListView_OnGroupClickListener(const ::android::widget::ExpandableListView_OnGroupClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExpandableListView_OnGroupClickListener(::android::widget::ExpandableListView_OnGroupClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ExpandableListView_OnGroupClickListener& operator=(const ::android::widget::ExpandableListView_OnGroupClickListener& x) {obj = x.obj; return *this;}
    ::android::widget::ExpandableListView_OnGroupClickListener& operator=(::android::widget::ExpandableListView_OnGroupClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onGroupClick(const ::android::widget::ExpandableListView&, const ::android::view::View&, int32_t, int64_t) const ;

};
}
}



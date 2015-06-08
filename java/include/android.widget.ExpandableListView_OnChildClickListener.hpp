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
class ExpandableListView_OnChildClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListView_OnChildClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListView_OnChildClickListener(const ::android::widget::ExpandableListView_OnChildClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExpandableListView_OnChildClickListener(::android::widget::ExpandableListView_OnChildClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ExpandableListView_OnChildClickListener& operator=(const ::android::widget::ExpandableListView_OnChildClickListener& x) {obj = x.obj; return *this;}
    ::android::widget::ExpandableListView_OnChildClickListener& operator=(::android::widget::ExpandableListView_OnChildClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onChildClick(const ::android::widget::ExpandableListView&, const ::android::view::View&, int32_t, int32_t, int64_t) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ContextMenu_ContextMenuInfo.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace widget {
class ExpandableListView_ExpandableListContextMenuInfo : public virtual ::java::lang::Object,
                                                         public virtual ::android::view::ContextMenu_ContextMenuInfo {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExpandableListView_ExpandableListContextMenuInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ContextMenu_ContextMenuInfo(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExpandableListView_ExpandableListContextMenuInfo(const ::android::widget::ExpandableListView_ExpandableListContextMenuInfo& x) : ::java::lang::Object((jobject)0), ::android::view::ContextMenu_ContextMenuInfo((jobject)0) {obj = x.obj;}
    ExpandableListView_ExpandableListContextMenuInfo(::android::widget::ExpandableListView_ExpandableListContextMenuInfo&& x) : ::java::lang::Object((jobject)0), ::android::view::ContextMenu_ContextMenuInfo((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ExpandableListView_ExpandableListContextMenuInfo& operator=(const ::android::widget::ExpandableListView_ExpandableListContextMenuInfo& x) {obj = x.obj; return *this;}
    ::android::widget::ExpandableListView_ExpandableListContextMenuInfo& operator=(::android::widget::ExpandableListView_ExpandableListContextMenuInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ExpandableListView_ExpandableListContextMenuInfo(const ::android::view::View&, int64_t, int64_t);

};
}
}



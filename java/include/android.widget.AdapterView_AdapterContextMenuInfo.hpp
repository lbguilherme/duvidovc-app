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
class AdapterView_AdapterContextMenuInfo : public virtual ::java::lang::Object,
                                           public virtual ::android::view::ContextMenu_ContextMenuInfo {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterView_AdapterContextMenuInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ContextMenu_ContextMenuInfo(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterView_AdapterContextMenuInfo(const ::android::widget::AdapterView_AdapterContextMenuInfo& x) : ::java::lang::Object((jobject)0), ::android::view::ContextMenu_ContextMenuInfo((jobject)0) {obj = x.obj;}
    AdapterView_AdapterContextMenuInfo(::android::widget::AdapterView_AdapterContextMenuInfo&& x) : ::java::lang::Object((jobject)0), ::android::view::ContextMenu_ContextMenuInfo((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterView_AdapterContextMenuInfo& operator=(const ::android::widget::AdapterView_AdapterContextMenuInfo& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterView_AdapterContextMenuInfo& operator=(::android::widget::AdapterView_AdapterContextMenuInfo&& x) {obj = std::move(x.obj); return *this;}
    
    AdapterView_AdapterContextMenuInfo(const ::android::view::View&, int32_t, int64_t);

};
}
}



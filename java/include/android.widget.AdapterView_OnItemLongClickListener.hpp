#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace android { namespace widget { class AdapterView; } }

namespace android {
namespace widget {
class AdapterView_OnItemLongClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterView_OnItemLongClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterView_OnItemLongClickListener(const ::android::widget::AdapterView_OnItemLongClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AdapterView_OnItemLongClickListener(::android::widget::AdapterView_OnItemLongClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterView_OnItemLongClickListener& operator=(const ::android::widget::AdapterView_OnItemLongClickListener& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterView_OnItemLongClickListener& operator=(::android::widget::AdapterView_OnItemLongClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onItemLongClick(const ::android::widget::AdapterView&, const ::android::view::View&, int32_t, int64_t) const ;

};
}
}



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
class AdapterView_OnItemClickListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterView_OnItemClickListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterView_OnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AdapterView_OnItemClickListener(::android::widget::AdapterView_OnItemClickListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterView_OnItemClickListener& operator=(const ::android::widget::AdapterView_OnItemClickListener& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterView_OnItemClickListener& operator=(::android::widget::AdapterView_OnItemClickListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onItemClick(const ::android::widget::AdapterView&, const ::android::view::View&, int32_t, int64_t) const ;

};
}
}



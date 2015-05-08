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
class AdapterView_OnItemSelectedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AdapterView_OnItemSelectedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AdapterView_OnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AdapterView_OnItemSelectedListener(::android::widget::AdapterView_OnItemSelectedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AdapterView_OnItemSelectedListener& operator=(const ::android::widget::AdapterView_OnItemSelectedListener& x) {obj = x.obj; return *this;}
    ::android::widget::AdapterView_OnItemSelectedListener& operator=(::android::widget::AdapterView_OnItemSelectedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onItemSelected(const ::android::widget::AdapterView&, const ::android::view::View&, int32_t, int64_t) const ;
    void onNothingSelected(const ::android::widget::AdapterView&) const ;

};
}
}



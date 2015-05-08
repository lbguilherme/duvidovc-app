#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class DatePicker; } }

namespace android {
namespace widget {
class DatePicker_OnDateChangedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatePicker_OnDateChangedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatePicker_OnDateChangedListener(const ::android::widget::DatePicker_OnDateChangedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatePicker_OnDateChangedListener(::android::widget::DatePicker_OnDateChangedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::DatePicker_OnDateChangedListener& operator=(const ::android::widget::DatePicker_OnDateChangedListener& x) {obj = x.obj; return *this;}
    ::android::widget::DatePicker_OnDateChangedListener& operator=(::android::widget::DatePicker_OnDateChangedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDateChanged(const ::android::widget::DatePicker&, int32_t, int32_t, int32_t) const ;

};
}
}



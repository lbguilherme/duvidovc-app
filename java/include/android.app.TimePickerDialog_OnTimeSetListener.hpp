#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class TimePicker; } }

namespace android {
namespace app {
class TimePickerDialog_OnTimeSetListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimePickerDialog_OnTimeSetListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimePickerDialog_OnTimeSetListener(const ::android::app::TimePickerDialog_OnTimeSetListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TimePickerDialog_OnTimeSetListener(::android::app::TimePickerDialog_OnTimeSetListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::TimePickerDialog_OnTimeSetListener& operator=(const ::android::app::TimePickerDialog_OnTimeSetListener& x) {obj = x.obj; return *this;}
    ::android::app::TimePickerDialog_OnTimeSetListener& operator=(::android::app::TimePickerDialog_OnTimeSetListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onTimeSet(const ::android::widget::TimePicker&, int32_t, int32_t) const ;

};
}
}



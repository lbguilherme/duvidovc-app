#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class DatePicker; } }

namespace android {
namespace app {
class DatePickerDialog_OnDateSetListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatePickerDialog_OnDateSetListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatePickerDialog_OnDateSetListener(const ::android::app::DatePickerDialog_OnDateSetListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatePickerDialog_OnDateSetListener(::android::app::DatePickerDialog_OnDateSetListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::DatePickerDialog_OnDateSetListener& operator=(const ::android::app::DatePickerDialog_OnDateSetListener& x) {obj = x.obj; return *this;}
    ::android::app::DatePickerDialog_OnDateSetListener& operator=(::android::app::DatePickerDialog_OnDateSetListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onDateSet(const ::android::widget::DatePicker&, int32_t, int32_t, int32_t) const;

};
}
}



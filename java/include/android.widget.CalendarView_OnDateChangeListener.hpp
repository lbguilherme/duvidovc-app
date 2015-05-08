#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace widget { class CalendarView; } }

namespace android {
namespace widget {
class CalendarView_OnDateChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarView_OnDateChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarView_OnDateChangeListener(const ::android::widget::CalendarView_OnDateChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarView_OnDateChangeListener(::android::widget::CalendarView_OnDateChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::CalendarView_OnDateChangeListener& operator=(const ::android::widget::CalendarView_OnDateChangeListener& x) {obj = x.obj; return *this;}
    ::android::widget::CalendarView_OnDateChangeListener& operator=(::android::widget::CalendarView_OnDateChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSelectedDayChange(const ::android::widget::CalendarView&, int32_t, int32_t, int32_t) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_EventDaysColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_EventDaysColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_EventDaysColumns(const ::android::provider::CalendarContract_EventDaysColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_EventDaysColumns(::android::provider::CalendarContract_EventDaysColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_EventDaysColumns& operator=(const ::android::provider::CalendarContract_EventDaysColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_EventDaysColumns& operator=(::android::provider::CalendarContract_EventDaysColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



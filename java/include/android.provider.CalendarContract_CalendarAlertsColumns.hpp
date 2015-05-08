#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_CalendarAlertsColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_CalendarAlertsColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_CalendarAlertsColumns(const ::android::provider::CalendarContract_CalendarAlertsColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_CalendarAlertsColumns(::android::provider::CalendarContract_CalendarAlertsColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_CalendarAlertsColumns& operator=(const ::android::provider::CalendarContract_CalendarAlertsColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_CalendarAlertsColumns& operator=(::android::provider::CalendarContract_CalendarAlertsColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



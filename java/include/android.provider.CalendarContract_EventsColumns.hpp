#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_EventsColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_EventsColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_EventsColumns(const ::android::provider::CalendarContract_EventsColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_EventsColumns(::android::provider::CalendarContract_EventsColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_EventsColumns& operator=(const ::android::provider::CalendarContract_EventsColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_EventsColumns& operator=(::android::provider::CalendarContract_EventsColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



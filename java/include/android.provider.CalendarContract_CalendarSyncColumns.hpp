#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_CalendarSyncColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_CalendarSyncColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_CalendarSyncColumns(const ::android::provider::CalendarContract_CalendarSyncColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_CalendarSyncColumns(::android::provider::CalendarContract_CalendarSyncColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_CalendarSyncColumns& operator=(const ::android::provider::CalendarContract_CalendarSyncColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_CalendarSyncColumns& operator=(::android::provider::CalendarContract_CalendarSyncColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



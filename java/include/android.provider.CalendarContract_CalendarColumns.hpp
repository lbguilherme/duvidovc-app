#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_CalendarColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_CalendarColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_CalendarColumns(const ::android::provider::CalendarContract_CalendarColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_CalendarColumns(::android::provider::CalendarContract_CalendarColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_CalendarColumns& operator=(const ::android::provider::CalendarContract_CalendarColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_CalendarColumns& operator=(::android::provider::CalendarContract_CalendarColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



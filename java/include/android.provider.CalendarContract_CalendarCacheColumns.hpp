#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_CalendarCacheColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_CalendarCacheColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_CalendarCacheColumns(const ::android::provider::CalendarContract_CalendarCacheColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_CalendarCacheColumns(::android::provider::CalendarContract_CalendarCacheColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_CalendarCacheColumns& operator=(const ::android::provider::CalendarContract_CalendarCacheColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_CalendarCacheColumns& operator=(::android::provider::CalendarContract_CalendarCacheColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



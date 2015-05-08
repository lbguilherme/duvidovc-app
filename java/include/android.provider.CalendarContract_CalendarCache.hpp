#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.CalendarContract_CalendarCacheColumns.hpp"


namespace android {
namespace provider {
class CalendarContract_CalendarCache : public virtual ::java::lang::Object,
                                       public virtual ::android::provider::CalendarContract_CalendarCacheColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_CalendarCache(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::CalendarContract_CalendarCacheColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_CalendarCache(const ::android::provider::CalendarContract_CalendarCache& x) : ::java::lang::Object((jobject)0), ::android::provider::CalendarContract_CalendarCacheColumns((jobject)0) {obj = x.obj;}
    CalendarContract_CalendarCache(::android::provider::CalendarContract_CalendarCache&& x) : ::java::lang::Object((jobject)0), ::android::provider::CalendarContract_CalendarCacheColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_CalendarCache& operator=(const ::android::provider::CalendarContract_CalendarCache& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_CalendarCache& operator=(::android::provider::CalendarContract_CalendarCache&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



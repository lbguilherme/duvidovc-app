#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.CalendarContract_CalendarSyncColumns.hpp"


namespace android {
namespace provider {
class CalendarContract_SyncColumns : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::CalendarContract_CalendarSyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_SyncColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::CalendarContract_CalendarSyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_SyncColumns(const ::android::provider::CalendarContract_SyncColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::CalendarContract_CalendarSyncColumns((jobject)0) {obj = x.obj;}
    CalendarContract_SyncColumns(::android::provider::CalendarContract_SyncColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::CalendarContract_CalendarSyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_SyncColumns& operator=(const ::android::provider::CalendarContract_SyncColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_SyncColumns& operator=(::android::provider::CalendarContract_SyncColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



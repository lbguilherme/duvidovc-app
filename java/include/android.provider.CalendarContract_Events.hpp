#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.CalendarContract_CalendarColumns.hpp"
#include "android.provider.CalendarContract_EventsColumns.hpp"
#include "android.provider.CalendarContract_SyncColumns.hpp"


namespace android {
namespace provider {
class CalendarContract_Events : public virtual ::java::lang::Object,
                                public virtual ::android::provider::BaseColumns,
                                public virtual ::android::provider::CalendarContract_CalendarColumns,
                                public virtual ::android::provider::CalendarContract_EventsColumns,
                                public virtual ::android::provider::CalendarContract_SyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_Events(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_CalendarColumns(_obj), ::android::provider::CalendarContract_CalendarSyncColumns(_obj), ::android::provider::CalendarContract_EventsColumns(_obj), ::android::provider::CalendarContract_SyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_Events(const ::android::provider::CalendarContract_Events& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarColumns((jobject)0), ::android::provider::CalendarContract_CalendarSyncColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0), ::android::provider::CalendarContract_SyncColumns((jobject)0) {obj = x.obj;}
    CalendarContract_Events(::android::provider::CalendarContract_Events&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarColumns((jobject)0), ::android::provider::CalendarContract_CalendarSyncColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0), ::android::provider::CalendarContract_SyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_Events& operator=(const ::android::provider::CalendarContract_Events& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_Events& operator=(::android::provider::CalendarContract_Events&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



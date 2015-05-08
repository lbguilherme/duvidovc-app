#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.CalendarContract_CalendarAlertsColumns.hpp"
#include "android.provider.CalendarContract_CalendarColumns.hpp"
#include "android.provider.CalendarContract_EventsColumns.hpp"


namespace android {
namespace provider {
class CalendarContract_CalendarAlerts : public virtual ::java::lang::Object,
                                        public virtual ::android::provider::BaseColumns,
                                        public virtual ::android::provider::CalendarContract_CalendarAlertsColumns,
                                        public virtual ::android::provider::CalendarContract_CalendarColumns,
                                        public virtual ::android::provider::CalendarContract_EventsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_CalendarAlerts(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_CalendarAlertsColumns(_obj), ::android::provider::CalendarContract_CalendarColumns(_obj), ::android::provider::CalendarContract_EventsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_CalendarAlerts(const ::android::provider::CalendarContract_CalendarAlerts& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarAlertsColumns((jobject)0), ::android::provider::CalendarContract_CalendarColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0) {obj = x.obj;}
    CalendarContract_CalendarAlerts(::android::provider::CalendarContract_CalendarAlerts&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarAlertsColumns((jobject)0), ::android::provider::CalendarContract_CalendarColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_CalendarAlerts& operator=(const ::android::provider::CalendarContract_CalendarAlerts& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_CalendarAlerts& operator=(::android::provider::CalendarContract_CalendarAlerts&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



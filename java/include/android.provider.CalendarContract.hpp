#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract(const ::android::provider::CalendarContract& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract(::android::provider::CalendarContract&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract& operator=(const ::android::provider::CalendarContract& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract& operator=(::android::provider::CalendarContract&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.provider.CalendarContract_Attendees.hpp"
#include "android.provider.CalendarContract_AttendeesColumns.hpp"
#include "android.provider.CalendarContract_CalendarAlerts.hpp"
#include "android.provider.CalendarContract_CalendarAlertsColumns.hpp"
#include "android.provider.CalendarContract_CalendarCache.hpp"
#include "android.provider.CalendarContract_CalendarCacheColumns.hpp"
#include "android.provider.CalendarContract_CalendarColumns.hpp"
#include "android.provider.CalendarContract_CalendarEntity.hpp"
#include "android.provider.CalendarContract_CalendarSyncColumns.hpp"
#include "android.provider.CalendarContract_Calendars.hpp"
#include "android.provider.CalendarContract_Colors.hpp"
#include "android.provider.CalendarContract_ColorsColumns.hpp"
#include "android.provider.CalendarContract_EventDays.hpp"
#include "android.provider.CalendarContract_EventDaysColumns.hpp"
#include "android.provider.CalendarContract_Events.hpp"
#include "android.provider.CalendarContract_EventsColumns.hpp"
#include "android.provider.CalendarContract_EventsEntity.hpp"
#include "android.provider.CalendarContract_ExtendedProperties.hpp"
#include "android.provider.CalendarContract_ExtendedPropertiesColumns.hpp"
#include "android.provider.CalendarContract_Instances.hpp"
#include "android.provider.CalendarContract_Reminders.hpp"
#include "android.provider.CalendarContract_RemindersColumns.hpp"
#include "android.provider.CalendarContract_SyncColumns.hpp"
#include "android.provider.CalendarContract_SyncState.hpp"


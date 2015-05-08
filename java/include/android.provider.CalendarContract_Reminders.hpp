#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.CalendarContract_EventsColumns.hpp"
#include "android.provider.CalendarContract_RemindersColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class CalendarContract_Reminders : public virtual ::java::lang::Object,
                                   public virtual ::android::provider::BaseColumns,
                                   public virtual ::android::provider::CalendarContract_EventsColumns,
                                   public virtual ::android::provider::CalendarContract_RemindersColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_Reminders(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_EventsColumns(_obj), ::android::provider::CalendarContract_RemindersColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_Reminders(const ::android::provider::CalendarContract_Reminders& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0), ::android::provider::CalendarContract_RemindersColumns((jobject)0) {obj = x.obj;}
    CalendarContract_Reminders(::android::provider::CalendarContract_Reminders&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0), ::android::provider::CalendarContract_RemindersColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_Reminders& operator=(const ::android::provider::CalendarContract_Reminders& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_Reminders& operator=(::android::provider::CalendarContract_Reminders&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, int64_t, const std::vector< ::java::lang::String>&);

};
}
}



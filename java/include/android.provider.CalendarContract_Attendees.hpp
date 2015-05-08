#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.CalendarContract_AttendeesColumns.hpp"
#include "android.provider.CalendarContract_EventsColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class CalendarContract_Attendees : public virtual ::java::lang::Object,
                                   public virtual ::android::provider::BaseColumns,
                                   public virtual ::android::provider::CalendarContract_AttendeesColumns,
                                   public virtual ::android::provider::CalendarContract_EventsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_Attendees(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_AttendeesColumns(_obj), ::android::provider::CalendarContract_EventsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_Attendees(const ::android::provider::CalendarContract_Attendees& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_AttendeesColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0) {obj = x.obj;}
    CalendarContract_Attendees(::android::provider::CalendarContract_Attendees&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_AttendeesColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_Attendees& operator=(const ::android::provider::CalendarContract_Attendees& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_Attendees& operator=(::android::provider::CalendarContract_Attendees&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, int64_t, const std::vector< ::java::lang::String>&);

};
}
}



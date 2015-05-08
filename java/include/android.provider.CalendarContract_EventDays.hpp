#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.CalendarContract_EventDaysColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class CalendarContract_EventDays : public virtual ::java::lang::Object,
                                   public virtual ::android::provider::CalendarContract_EventDaysColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_EventDays(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::CalendarContract_EventDaysColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_EventDays(const ::android::provider::CalendarContract_EventDays& x) : ::java::lang::Object((jobject)0), ::android::provider::CalendarContract_EventDaysColumns((jobject)0) {obj = x.obj;}
    CalendarContract_EventDays(::android::provider::CalendarContract_EventDays&& x) : ::java::lang::Object((jobject)0), ::android::provider::CalendarContract_EventDaysColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_EventDays& operator=(const ::android::provider::CalendarContract_EventDays& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_EventDays& operator=(::android::provider::CalendarContract_EventDays&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, int32_t, int32_t, const std::vector< ::java::lang::String>&);

};
}
}



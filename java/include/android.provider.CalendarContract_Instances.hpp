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

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class CalendarContract_Instances : public virtual ::java::lang::Object,
                                   public virtual ::android::provider::BaseColumns,
                                   public virtual ::android::provider::CalendarContract_CalendarColumns,
                                   public virtual ::android::provider::CalendarContract_EventsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_Instances(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_CalendarColumns(_obj), ::android::provider::CalendarContract_EventsColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_Instances(const ::android::provider::CalendarContract_Instances& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0) {obj = x.obj;}
    CalendarContract_Instances(::android::provider::CalendarContract_Instances&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_Instances& operator=(const ::android::provider::CalendarContract_Instances& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_Instances& operator=(::android::provider::CalendarContract_Instances&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const std::vector< ::java::lang::String>&, int64_t, int64_t);
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const std::vector< ::java::lang::String>&, int64_t, int64_t, const ::java::lang::String&);

};
}
}



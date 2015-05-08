#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.CalendarContract_EventsColumns.hpp"
#include "android.provider.CalendarContract_SyncColumns.hpp"

namespace android { namespace content { class ContentProviderClient; } }
namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class EntityIterator; } }
namespace android { namespace database { class Cursor; } }

namespace android {
namespace provider {
class CalendarContract_EventsEntity : public virtual ::java::lang::Object,
                                      public virtual ::android::provider::BaseColumns,
                                      public virtual ::android::provider::CalendarContract_EventsColumns,
                                      public virtual ::android::provider::CalendarContract_SyncColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_EventsEntity(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_CalendarSyncColumns(_obj), ::android::provider::CalendarContract_EventsColumns(_obj), ::android::provider::CalendarContract_SyncColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_EventsEntity(const ::android::provider::CalendarContract_EventsEntity& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarSyncColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0), ::android::provider::CalendarContract_SyncColumns((jobject)0) {obj = x.obj;}
    CalendarContract_EventsEntity(::android::provider::CalendarContract_EventsEntity&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_CalendarSyncColumns((jobject)0), ::android::provider::CalendarContract_EventsColumns((jobject)0), ::android::provider::CalendarContract_SyncColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_EventsEntity& operator=(const ::android::provider::CalendarContract_EventsEntity& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_EventsEntity& operator=(::android::provider::CalendarContract_EventsEntity&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::content::EntityIterator newEntityIterator(const ::android::database::Cursor&, const ::android::content::ContentResolver&);
    static ::android::content::EntityIterator newEntityIterator(const ::android::database::Cursor&, const ::android::content::ContentProviderClient&);

};
}
}



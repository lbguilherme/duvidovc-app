#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.CalendarContract_ColorsColumns.hpp"


namespace android {
namespace provider {
class CalendarContract_Colors : public virtual ::java::lang::Object,
                                public virtual ::android::provider::CalendarContract_ColorsColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_Colors(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::CalendarContract_ColorsColumns(_obj), ::android::provider::SyncStateContract_Columns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_Colors(const ::android::provider::CalendarContract_Colors& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_ColorsColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {obj = x.obj;}
    CalendarContract_Colors(::android::provider::CalendarContract_Colors&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::CalendarContract_ColorsColumns((jobject)0), ::android::provider::SyncStateContract_Columns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_Colors& operator=(const ::android::provider::CalendarContract_Colors& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_Colors& operator=(::android::provider::CalendarContract_Colors&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



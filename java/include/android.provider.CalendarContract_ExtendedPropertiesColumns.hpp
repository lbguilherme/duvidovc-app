#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class CalendarContract_ExtendedPropertiesColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CalendarContract_ExtendedPropertiesColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CalendarContract_ExtendedPropertiesColumns(const ::android::provider::CalendarContract_ExtendedPropertiesColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CalendarContract_ExtendedPropertiesColumns(::android::provider::CalendarContract_ExtendedPropertiesColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::CalendarContract_ExtendedPropertiesColumns& operator=(const ::android::provider::CalendarContract_ExtendedPropertiesColumns& x) {obj = x.obj; return *this;}
    ::android::provider::CalendarContract_ExtendedPropertiesColumns& operator=(::android::provider::CalendarContract_ExtendedPropertiesColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



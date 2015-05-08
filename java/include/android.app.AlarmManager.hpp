#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class AlarmManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlarmManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlarmManager(const ::android::app::AlarmManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlarmManager(::android::app::AlarmManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::AlarmManager& operator=(const ::android::app::AlarmManager& x) {obj = x.obj; return *this;}
    ::android::app::AlarmManager& operator=(::android::app::AlarmManager&& x) {obj = std::move(x.obj); return *this;}
    
    void set(int32_t, int64_t, const ::android::app::PendingIntent&) const ;
    void setRepeating(int32_t, int64_t, int64_t, const ::android::app::PendingIntent&) const ;
    void setInexactRepeating(int32_t, int64_t, int64_t, const ::android::app::PendingIntent&) const ;
    void cancel(const ::android::app::PendingIntent&) const ;
    void setTime(int64_t) const ;
    void setTimeZone(const ::java::lang::String&) const ;

};
}
}



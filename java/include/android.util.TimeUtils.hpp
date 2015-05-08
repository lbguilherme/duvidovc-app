#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class TimeZone; } }

namespace android {
namespace util {
class TimeUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimeUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimeUtils(const ::android::util::TimeUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TimeUtils(::android::util::TimeUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::TimeUtils& operator=(const ::android::util::TimeUtils& x) {obj = x.obj; return *this;}
    ::android::util::TimeUtils& operator=(::android::util::TimeUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::TimeZone getTimeZone(int32_t, bool, int64_t, const ::java::lang::String&);
    static ::java::lang::String getTimeZoneDatabaseVersion();

};
}
}



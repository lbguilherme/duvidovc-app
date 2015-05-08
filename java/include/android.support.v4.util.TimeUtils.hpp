#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class PrintWriter; } }
namespace java { namespace lang { class StringBuilder; } }

namespace android {
namespace support {
namespace v4 {
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
    TimeUtils(const ::android::support::v4::util::TimeUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TimeUtils(::android::support::v4::util::TimeUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::TimeUtils& operator=(const ::android::support::v4::util::TimeUtils& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::TimeUtils& operator=(::android::support::v4::util::TimeUtils&& x) {obj = std::move(x.obj); return *this;}
    
    TimeUtils();
    static void formatDuration(int64_t, const ::java::lang::StringBuilder&);
    static void formatDuration(int64_t, const ::java::io::PrintWriter&, int32_t);
    static void formatDuration(int64_t, const ::java::io::PrintWriter&);
    static void formatDuration(int64_t, int64_t, const ::java::io::PrintWriter&);

};
}
}
}
}



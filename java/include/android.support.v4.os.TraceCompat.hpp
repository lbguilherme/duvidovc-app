#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace os {
class TraceCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TraceCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TraceCompat(const ::android::support::v4::os::TraceCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TraceCompat(::android::support::v4::os::TraceCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::os::TraceCompat& operator=(const ::android::support::v4::os::TraceCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::os::TraceCompat& operator=(::android::support::v4::os::TraceCompat&& x) {obj = std::move(x.obj); return *this;}
    
    TraceCompat();
    static void beginSection(const ::java::lang::String&);
    static void endSection();

};
}
}
}
}



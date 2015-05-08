#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace os {
class EnvironmentCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnvironmentCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnvironmentCompat(const ::android::support::v4::os::EnvironmentCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EnvironmentCompat(::android::support::v4::os::EnvironmentCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::os::EnvironmentCompat& operator=(const ::android::support::v4::os::EnvironmentCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::os::EnvironmentCompat& operator=(::android::support::v4::os::EnvironmentCompat&& x) {obj = std::move(x.obj); return *this;}
    
    EnvironmentCompat();
    static ::java::lang::String getStorageState(const ::java::io::File&);

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class StringBuilder; } }

namespace android {
namespace support {
namespace v4 {
namespace util {
class DebugUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DebugUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DebugUtils(const ::android::support::v4::util::DebugUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DebugUtils(::android::support::v4::util::DebugUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::util::DebugUtils& operator=(const ::android::support::v4::util::DebugUtils& x) {obj = x.obj; return *this;}
    ::android::support::v4::util::DebugUtils& operator=(::android::support::v4::util::DebugUtils&& x) {obj = std::move(x.obj); return *this;}
    
    DebugUtils();
    static void buildShortClassTag(const ::java::lang::Object&, const ::java::lang::StringBuilder&);

};
}
}
}
}



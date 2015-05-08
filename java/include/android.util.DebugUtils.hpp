#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
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
    DebugUtils(const ::android::util::DebugUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DebugUtils(::android::util::DebugUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::DebugUtils& operator=(const ::android::util::DebugUtils& x) {obj = x.obj; return *this;}
    ::android::util::DebugUtils& operator=(::android::util::DebugUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isObjectSelected(const ::java::lang::Object&);

};
}
}



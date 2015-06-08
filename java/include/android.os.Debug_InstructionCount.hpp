#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class Debug_InstructionCount : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Debug_InstructionCount(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Debug_InstructionCount(const ::android::os::Debug_InstructionCount& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Debug_InstructionCount(::android::os::Debug_InstructionCount&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Debug_InstructionCount& operator=(const ::android::os::Debug_InstructionCount& x) {obj = x.obj; return *this;}
    ::android::os::Debug_InstructionCount& operator=(::android::os::Debug_InstructionCount&& x) {obj = std::move(x.obj); return *this;}
    
    Debug_InstructionCount();
    bool resetAndStart() const;
    bool collect() const;
    int32_t globalTotal() const;
    int32_t globalMethodInvocations() const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace dalvik {
namespace bytecode {
class OpcodeInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OpcodeInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OpcodeInfo(const ::dalvik::bytecode::OpcodeInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OpcodeInfo(::dalvik::bytecode::OpcodeInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::bytecode::OpcodeInfo& operator=(const ::dalvik::bytecode::OpcodeInfo& x) {obj = x.obj; return *this;}
    ::dalvik::bytecode::OpcodeInfo& operator=(::dalvik::bytecode::OpcodeInfo&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



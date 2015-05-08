#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace dalvik {
namespace bytecode {
class Opcodes : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Opcodes(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Opcodes(const ::dalvik::bytecode::Opcodes& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Opcodes(::dalvik::bytecode::Opcodes&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::bytecode::Opcodes& operator=(const ::dalvik::bytecode::Opcodes& x) {obj = x.obj; return *this;}
    ::dalvik::bytecode::Opcodes& operator=(::dalvik::bytecode::Opcodes&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



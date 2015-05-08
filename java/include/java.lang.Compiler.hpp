#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Compiler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Compiler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Compiler(const ::java::lang::Compiler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Compiler(::java::lang::Compiler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Compiler& operator=(const ::java::lang::Compiler& x) {obj = x.obj; return *this;}
    ::java::lang::Compiler& operator=(::java::lang::Compiler&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Object command(const ::java::lang::Object&);
    static bool compileClass(const ::java::lang::Class&);
    static bool compileClasses(const ::java::lang::String&);
    static void disable();
    static void enable();

};
}
}



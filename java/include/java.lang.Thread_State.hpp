#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread_State; } }

namespace java {
namespace lang {
class Thread_State : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Thread_State(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Thread_State(const ::java::lang::Thread_State& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Thread_State(::java::lang::Thread_State&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Thread_State& operator=(const ::java::lang::Thread_State& x) {obj = x.obj; return *this;}
    ::java::lang::Thread_State& operator=(::java::lang::Thread_State&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::lang::Thread_State> values();
    static ::java::lang::Thread_State valueOf(const ::java::lang::String&);

};
}
}



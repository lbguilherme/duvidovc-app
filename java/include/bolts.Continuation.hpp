#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace bolts { class Task; }
namespace java { namespace lang { class Object; } }

namespace bolts {
class Continuation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Continuation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Continuation(const ::bolts::Continuation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Continuation(::bolts::Continuation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::Continuation& operator=(const ::bolts::Continuation& x) {obj = x.obj; return *this;}
    ::bolts::Continuation& operator=(::bolts::Continuation&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object then(const ::bolts::Task&) const ;

};
}



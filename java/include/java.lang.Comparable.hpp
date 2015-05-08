#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace lang {
class Comparable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Comparable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Comparable(const ::java::lang::Comparable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Comparable(::java::lang::Comparable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Comparable& operator=(const ::java::lang::Comparable& x) {obj = x.obj; return *this;}
    ::java::lang::Comparable& operator=(::java::lang::Comparable&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}



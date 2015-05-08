#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace text {
class Annotation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Annotation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Annotation(const ::java::text::Annotation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Annotation(::java::text::Annotation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Annotation& operator=(const ::java::text::Annotation& x) {obj = x.obj; return *this;}
    ::java::text::Annotation& operator=(::java::text::Annotation&& x) {obj = std::move(x.obj); return *this;}
    
    Annotation(const ::java::lang::Object&);
    ::java::lang::Object getValue() const ;
    ::java::lang::String toString() const ;

};
}
}



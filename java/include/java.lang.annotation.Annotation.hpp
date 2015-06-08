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
namespace annotation {
class Annotation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Annotation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Annotation(const ::java::lang::annotation::Annotation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Annotation(::java::lang::annotation::Annotation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::Annotation& operator=(const ::java::lang::annotation::Annotation& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::Annotation& operator=(::java::lang::annotation::Annotation&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Class annotationType() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}
}



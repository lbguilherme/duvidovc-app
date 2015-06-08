#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace java { namespace lang { namespace annotation { class ElementType; } } }

namespace java {
namespace lang {
namespace annotation {
class Target : public virtual ::java::lang::Object,
               public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Target(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Target(const ::java::lang::annotation::Target& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    Target(::java::lang::annotation::Target&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::Target& operator=(const ::java::lang::annotation::Target& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::Target& operator=(::java::lang::annotation::Target&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::annotation::ElementType> value() const;

};
}
}
}



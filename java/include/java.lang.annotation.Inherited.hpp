#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"


namespace java {
namespace lang {
namespace annotation {
class Inherited : public virtual ::java::lang::Object,
                  public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Inherited(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Inherited(const ::java::lang::annotation::Inherited& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    Inherited(::java::lang::annotation::Inherited&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::annotation::Inherited& operator=(const ::java::lang::annotation::Inherited& x) {obj = x.obj; return *this;}
    ::java::lang::annotation::Inherited& operator=(::java::lang::annotation::Inherited&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}



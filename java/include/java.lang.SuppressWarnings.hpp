#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.annotation.Annotation.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class SuppressWarnings : public virtual ::java::lang::Object,
                         public virtual ::java::lang::annotation::Annotation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SuppressWarnings(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::annotation::Annotation(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SuppressWarnings(const ::java::lang::SuppressWarnings& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj;}
    SuppressWarnings(::java::lang::SuppressWarnings&& x) : ::java::lang::Object((jobject)0), ::java::lang::annotation::Annotation((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::SuppressWarnings& operator=(const ::java::lang::SuppressWarnings& x) {obj = x.obj; return *this;}
    ::java::lang::SuppressWarnings& operator=(::java::lang::SuppressWarnings&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::String> value() const;

};
}
}



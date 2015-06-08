#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { namespace annotation { class Annotation; } } }

namespace java {
namespace lang {
namespace reflect {
class AnnotatedElement : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnnotatedElement(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnnotatedElement(const ::java::lang::reflect::AnnotatedElement& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AnnotatedElement(::java::lang::reflect::AnnotatedElement&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::AnnotatedElement& operator=(const ::java::lang::reflect::AnnotatedElement& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::AnnotatedElement& operator=(::java::lang::reflect::AnnotatedElement&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const;
    std::vector< ::java::lang::annotation::Annotation> getAnnotations() const;
    std::vector< ::java::lang::annotation::Annotation> getDeclaredAnnotations() const;
    bool isAnnotationPresent(const ::java::lang::Class&) const;

};
}
}
}



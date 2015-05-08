#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.reflect.AnnotatedElement.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { namespace annotation { class Annotation; } } }
namespace java { namespace lang { namespace reflect { class AccessibleObject; } } }

namespace java {
namespace lang {
namespace reflect {
class AccessibleObject : public virtual ::java::lang::Object,
                         public virtual ::java::lang::reflect::AnnotatedElement {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessibleObject(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::AnnotatedElement(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessibleObject(const ::java::lang::reflect::AccessibleObject& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0) {obj = x.obj;}
    AccessibleObject(::java::lang::reflect::AccessibleObject&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::AccessibleObject& operator=(const ::java::lang::reflect::AccessibleObject& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::AccessibleObject& operator=(::java::lang::reflect::AccessibleObject&& x) {obj = std::move(x.obj); return *this;}
    
    static void setAccessible(const std::vector< ::java::lang::reflect::AccessibleObject>&, bool);
    bool isAccessible() const ;
    void setAccessible(bool) const ;
    bool isAnnotationPresent(const ::java::lang::Class&) const ;
    std::vector< ::java::lang::annotation::Annotation> getDeclaredAnnotations() const ;
    std::vector< ::java::lang::annotation::Annotation> getAnnotations() const ;
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const ;

};
}
}
}



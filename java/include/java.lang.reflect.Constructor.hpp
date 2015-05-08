#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.reflect.AccessibleObject.hpp"
#include "java.lang.reflect.GenericDeclaration.hpp"
#include "java.lang.reflect.Member.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace annotation { class Annotation; } } }
namespace java { namespace lang { namespace reflect { class Type; } } }
namespace java { namespace lang { namespace reflect { class TypeVariable; } } }

namespace java {
namespace lang {
namespace reflect {
class Constructor : public virtual ::java::lang::Object,
                    public virtual ::java::lang::reflect::AccessibleObject,
                    public virtual ::java::lang::reflect::GenericDeclaration,
                    public virtual ::java::lang::reflect::Member {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Constructor(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::AccessibleObject(_obj), ::java::lang::reflect::AnnotatedElement(_obj), ::java::lang::reflect::GenericDeclaration(_obj), ::java::lang::reflect::Member(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Constructor(const ::java::lang::reflect::Constructor& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AccessibleObject((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0), ::java::lang::reflect::GenericDeclaration((jobject)0), ::java::lang::reflect::Member((jobject)0) {obj = x.obj;}
    Constructor(::java::lang::reflect::Constructor&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AccessibleObject((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0), ::java::lang::reflect::GenericDeclaration((jobject)0), ::java::lang::reflect::Member((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Constructor& operator=(const ::java::lang::reflect::Constructor& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Constructor& operator=(::java::lang::reflect::Constructor&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::reflect::TypeVariable> getTypeParameters() const ;
    ::java::lang::String toGenericString() const ;
    std::vector< ::java::lang::reflect::Type> getGenericParameterTypes() const ;
    std::vector< ::java::lang::reflect::Type> getGenericExceptionTypes() const ;
    std::vector< ::java::lang::annotation::Annotation> getDeclaredAnnotations() const ;
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const ;
    bool isAnnotationPresent(const ::java::lang::Class&) const ;
    std::vector< ::java::lang::annotation::Annotation> getParameterAnnotations() const ;
    bool isVarArgs() const ;
    bool isSynthetic() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::Class getDeclaringClass() const ;
    std::vector< ::java::lang::Class> getExceptionTypes() const ;
    int32_t getModifiers() const ;
    ::java::lang::String getName() const ;
    std::vector< ::java::lang::Class> getParameterTypes() const ;
    int32_t hashCode() const ;
    ::java::lang::Object newInstance(const std::vector< ::java::lang::Object>&) const ;
    ::java::lang::String toString() const ;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.reflect.AnnotatedElement.hpp"
#include "java.lang.reflect.GenericDeclaration.hpp"
#include "java.lang.reflect.Type.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Package; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace annotation { class Annotation; } } }
namespace java { namespace lang { namespace reflect { class Constructor; } } }
namespace java { namespace lang { namespace reflect { class Field; } } }
namespace java { namespace lang { namespace reflect { class Method; } } }
namespace java { namespace lang { namespace reflect { class Type; } } }
namespace java { namespace lang { namespace reflect { class TypeVariable; } } }
namespace java { namespace net { class URL; } }
namespace java { namespace security { class ProtectionDomain; } }

namespace java {
namespace lang {
class Class : public virtual ::java::lang::Object,
              public virtual ::java::io::Serializable,
              public virtual ::java::lang::reflect::AnnotatedElement,
              public virtual ::java::lang::reflect::GenericDeclaration,
              public virtual ::java::lang::reflect::Type {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Class(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::reflect::AnnotatedElement(_obj), ::java::lang::reflect::GenericDeclaration(_obj), ::java::lang::reflect::Type(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Class(const ::java::lang::Class& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0), ::java::lang::reflect::GenericDeclaration((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj;}
    Class(::java::lang::Class&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0), ::java::lang::reflect::GenericDeclaration((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Class& operator=(const ::java::lang::Class& x) {obj = x.obj; return *this;}
    ::java::lang::Class& operator=(::java::lang::Class&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::Class forName(const ::java::lang::String&);
    static ::java::lang::Class forName(const ::java::lang::String&, bool, const ::java::lang::ClassLoader&);
    std::vector< ::java::lang::Class> getClasses() const ;
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const ;
    std::vector< ::java::lang::annotation::Annotation> getAnnotations() const ;
    ::java::lang::String getCanonicalName() const ;
    ::java::lang::ClassLoader getClassLoader() const ;
    ::java::lang::Class getComponentType() const ;
    ::java::lang::reflect::Constructor getConstructor(const std::vector< ::java::lang::Class>&) const ;
    std::vector< ::java::lang::reflect::Constructor> getConstructors() const ;
    std::vector< ::java::lang::annotation::Annotation> getDeclaredAnnotations() const ;
    std::vector< ::java::lang::Class> getDeclaredClasses() const ;
    ::java::lang::reflect::Constructor getDeclaredConstructor(const std::vector< ::java::lang::Class>&) const ;
    std::vector< ::java::lang::reflect::Constructor> getDeclaredConstructors() const ;
    ::java::lang::reflect::Field getDeclaredField(const ::java::lang::String&) const ;
    std::vector< ::java::lang::reflect::Field> getDeclaredFields() const ;
    ::java::lang::reflect::Method getDeclaredMethod(const ::java::lang::String&, const std::vector< ::java::lang::Class>&) const ;
    std::vector< ::java::lang::reflect::Method> getDeclaredMethods() const ;
    ::java::lang::Class getDeclaringClass() const ;
    ::java::lang::Class getEnclosingClass() const ;
    ::java::lang::reflect::Constructor getEnclosingConstructor() const ;
    ::java::lang::reflect::Method getEnclosingMethod() const ;
    std::vector< ::java::lang::Object> getEnumConstants() const ;
    ::java::lang::reflect::Field getField(const ::java::lang::String&) const ;
    std::vector< ::java::lang::reflect::Field> getFields() const ;
    std::vector< ::java::lang::reflect::Type> getGenericInterfaces() const ;
    ::java::lang::reflect::Type getGenericSuperclass() const ;
    std::vector< ::java::lang::Class> getInterfaces() const ;
    ::java::lang::reflect::Method getMethod(const ::java::lang::String&, const std::vector< ::java::lang::Class>&) const ;
    std::vector< ::java::lang::reflect::Method> getMethods() const ;
    int32_t getModifiers() const ;
    ::java::lang::String getName() const ;
    ::java::lang::String getSimpleName() const ;
    ::java::security::ProtectionDomain getProtectionDomain() const ;
    ::java::net::URL getResource(const ::java::lang::String&) const ;
    ::java::io::InputStream getResourceAsStream(const ::java::lang::String&) const ;
    std::vector< ::java::lang::Object> getSigners() const ;
    ::java::lang::Class getSuperclass() const ;
    std::vector< ::java::lang::reflect::TypeVariable> getTypeParameters() const ;
    bool isAnnotation() const ;
    bool isAnnotationPresent(const ::java::lang::Class&) const ;
    bool isAnonymousClass() const ;
    bool isArray() const ;
    bool isAssignableFrom(const ::java::lang::Class&) const ;
    bool isEnum() const ;
    bool isInstance(const ::java::lang::Object&) const ;
    bool isInterface() const ;
    bool isLocalClass() const ;
    bool isMemberClass() const ;
    bool isPrimitive() const ;
    bool isSynthetic() const ;
    ::java::lang::Object newInstance() const ;
    ::java::lang::String toString() const ;
    ::java::lang::Package getPackage() const ;
    bool desiredAssertionStatus() const ;
    ::java::lang::Class asSubclass(const ::java::lang::Class&) const ;
    ::java::lang::Object cast(const ::java::lang::Object&) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.reflect.AccessibleObject.hpp"
#include "java.lang.reflect.Member.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { namespace annotation { class Annotation; } } }
namespace java { namespace lang { namespace reflect { class Type; } } }

namespace java {
namespace lang {
namespace reflect {
class Field : public virtual ::java::lang::Object,
              public virtual ::java::lang::reflect::AccessibleObject,
              public virtual ::java::lang::reflect::Member {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Field(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::AccessibleObject(_obj), ::java::lang::reflect::AnnotatedElement(_obj), ::java::lang::reflect::Member(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Field(const ::java::lang::reflect::Field& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AccessibleObject((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0), ::java::lang::reflect::Member((jobject)0) {obj = x.obj;}
    Field(::java::lang::reflect::Field&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::AccessibleObject((jobject)0), ::java::lang::reflect::AnnotatedElement((jobject)0), ::java::lang::reflect::Member((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::Field& operator=(const ::java::lang::reflect::Field& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::Field& operator=(::java::lang::reflect::Field&& x) {obj = std::move(x.obj); return *this;}
    
    bool isSynthetic() const;
    ::java::lang::String toGenericString() const;
    bool isEnumConstant() const;
    ::java::lang::reflect::Type getGenericType() const;
    std::vector< ::java::lang::annotation::Annotation> getDeclaredAnnotations() const;
    ::java::lang::annotation::Annotation getAnnotation(const ::java::lang::Class&) const;
    bool isAnnotationPresent(const ::java::lang::Class&) const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::Object get(const ::java::lang::Object&) const;
    bool getBoolean(const ::java::lang::Object&) const;
    int8_t getByte(const ::java::lang::Object&) const;
    uint16_t getChar(const ::java::lang::Object&) const;
    ::java::lang::Class getDeclaringClass() const;
    double getDouble(const ::java::lang::Object&) const;
    float getFloat(const ::java::lang::Object&) const;
    int32_t getInt(const ::java::lang::Object&) const;
    int64_t getLong(const ::java::lang::Object&) const;
    int32_t getModifiers() const;
    ::java::lang::String getName() const;
    int16_t getShort(const ::java::lang::Object&) const;
    ::java::lang::Class getType() const;
    int32_t hashCode() const;
    void set(const ::java::lang::Object&, const ::java::lang::Object&) const;
    void setBoolean(const ::java::lang::Object&, bool) const;
    void setByte(const ::java::lang::Object&, int8_t) const;
    void setChar(const ::java::lang::Object&, uint16_t) const;
    void setDouble(const ::java::lang::Object&, double) const;
    void setFloat(const ::java::lang::Object&, float) const;
    void setInt(const ::java::lang::Object&, int32_t) const;
    void setLong(const ::java::lang::Object&, int64_t) const;
    void setShort(const ::java::lang::Object&, int16_t) const;
    ::java::lang::String toString() const;

};
}
}
}



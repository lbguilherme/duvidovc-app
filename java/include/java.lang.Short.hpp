#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class Short; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Short : public virtual ::java::lang::Object,
              public virtual ::java::lang::Comparable,
              public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Short(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Short(const ::java::lang::Short& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    Short(::java::lang::Short&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Short& operator=(const ::java::lang::Short& x) {obj = x.obj; return *this;}
    ::java::lang::Short& operator=(::java::lang::Short&& x) {obj = std::move(x.obj); return *this;}
    
    Short(const ::java::lang::String&);
    Short(int16_t);
    int8_t byteValue() const ;
    int32_t compareTo(const ::java::lang::Short&) const ;
    static ::java::lang::Short decode(const ::java::lang::String&);
    double doubleValue() const ;
    bool equals(const ::java::lang::Object&) const ;
    float floatValue() const ;
    int32_t hashCode() const ;
    int32_t intValue() const ;
    int64_t longValue() const ;
    static int16_t parseShort(const ::java::lang::String&);
    static int16_t parseShort(const ::java::lang::String&, int32_t);
    int16_t shortValue() const ;
    ::java::lang::String toString() const ;
    static ::java::lang::String toString(int16_t);
    static ::java::lang::Short valueOf(const ::java::lang::String&);
    static ::java::lang::Short valueOf(const ::java::lang::String&, int32_t);
    static int16_t reverseBytes(int16_t);
    static ::java::lang::Short valueOf(int16_t);
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}



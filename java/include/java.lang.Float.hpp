#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class Float; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Float : public virtual ::java::lang::Object,
              public virtual ::java::lang::Comparable,
              public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Float(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Float(const ::java::lang::Float& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    Float(::java::lang::Float&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Float& operator=(const ::java::lang::Float& x) {obj = x.obj; return *this;}
    ::java::lang::Float& operator=(::java::lang::Float&& x) {obj = std::move(x.obj); return *this;}
    
    Float(float);
    Float(double);
    Float(const ::java::lang::String&);
    int32_t compareTo(const ::java::lang::Float&) const ;
    int8_t byteValue() const ;
    double doubleValue() const ;
    bool equals(const ::java::lang::Object&) const ;
    static int32_t floatToIntBits(float);
    static int32_t floatToRawIntBits(float);
    float floatValue() const ;
    int32_t hashCode() const ;
    static float intBitsToFloat(int32_t);
    int32_t intValue() const ;
    bool isInfinite() const ;
    static bool isInfinite(float);
    bool isNaN() const ;
    static bool isNaN(float);
    int64_t longValue() const ;
    static float parseFloat(const ::java::lang::String&);
    int16_t shortValue() const ;
    ::java::lang::String toString() const ;
    static ::java::lang::String toString(float);
    static ::java::lang::Float valueOf(const ::java::lang::String&);
    static int32_t compare(float, float);
    static ::java::lang::Float valueOf(float);
    static ::java::lang::String toHexString(float);
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class Double; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Double : public virtual ::java::lang::Object,
               public virtual ::java::lang::Comparable,
               public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Double(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Double(const ::java::lang::Double& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    Double(::java::lang::Double&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Double& operator=(const ::java::lang::Double& x) {obj = x.obj; return *this;}
    ::java::lang::Double& operator=(::java::lang::Double&& x) {obj = std::move(x.obj); return *this;}
    
    Double(double);
    Double(const ::java::lang::String&);
    int32_t compareTo(const ::java::lang::Double&) const ;
    int8_t byteValue() const ;
    static int64_t doubleToLongBits(double);
    static int64_t doubleToRawLongBits(double);
    double doubleValue() const ;
    bool equals(const ::java::lang::Object&) const ;
    float floatValue() const ;
    int32_t hashCode() const ;
    int32_t intValue() const ;
    bool isInfinite() const ;
    static bool isInfinite(double);
    bool isNaN() const ;
    static bool isNaN(double);
    static double longBitsToDouble(int64_t);
    int64_t longValue() const ;
    static double parseDouble(const ::java::lang::String&);
    int16_t shortValue() const ;
    ::java::lang::String toString() const ;
    static ::java::lang::String toString(double);
    static ::java::lang::Double valueOf(const ::java::lang::String&);
    static int32_t compare(double, double);
    static ::java::lang::Double valueOf(double);
    static ::java::lang::String toHexString(double);
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}



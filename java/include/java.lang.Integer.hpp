#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class Integer; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Integer : public virtual ::java::lang::Object,
                public virtual ::java::lang::Comparable,
                public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Integer(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Integer(const ::java::lang::Integer& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    Integer(::java::lang::Integer&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Integer& operator=(const ::java::lang::Integer& x) {obj = x.obj; return *this;}
    ::java::lang::Integer& operator=(::java::lang::Integer&& x) {obj = std::move(x.obj); return *this;}
    
    Integer(int32_t);
    Integer(const ::java::lang::String&);
    int8_t byteValue() const;
    int32_t compareTo(const ::java::lang::Integer&) const;
    static ::java::lang::Integer decode(const ::java::lang::String&);
    double doubleValue() const;
    bool equals(const ::java::lang::Object&) const;
    float floatValue() const;
    static ::java::lang::Integer getInteger(const ::java::lang::String&);
    static ::java::lang::Integer getInteger(const ::java::lang::String&, int32_t);
    static ::java::lang::Integer getInteger(const ::java::lang::String&, const ::java::lang::Integer&);
    int32_t hashCode() const;
    int32_t intValue() const;
    int64_t longValue() const;
    static int32_t parseInt(const ::java::lang::String&);
    static int32_t parseInt(const ::java::lang::String&, int32_t);
    int16_t shortValue() const;
    static ::java::lang::String toBinaryString(int32_t);
    static ::java::lang::String toHexString(int32_t);
    static ::java::lang::String toOctalString(int32_t);
    ::java::lang::String toString() const;
    static ::java::lang::String toString(int32_t);
    static ::java::lang::String toString(int32_t, int32_t);
    static ::java::lang::Integer valueOf(const ::java::lang::String&);
    static ::java::lang::Integer valueOf(const ::java::lang::String&, int32_t);
    static int32_t highestOneBit(int32_t);
    static int32_t lowestOneBit(int32_t);
    static int32_t numberOfLeadingZeros(int32_t);
    static int32_t numberOfTrailingZeros(int32_t);
    static int32_t bitCount(int32_t);
    static int32_t rotateLeft(int32_t, int32_t);
    static int32_t rotateRight(int32_t, int32_t);
    static int32_t reverseBytes(int32_t);
    static int32_t reverse(int32_t);
    static int32_t signum(int32_t);
    static ::java::lang::Integer valueOf(int32_t);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}



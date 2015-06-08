#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class Long; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Long : public virtual ::java::lang::Object,
             public virtual ::java::lang::Comparable,
             public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Long(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Long(const ::java::lang::Long& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    Long(::java::lang::Long&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Long& operator=(const ::java::lang::Long& x) {obj = x.obj; return *this;}
    ::java::lang::Long& operator=(::java::lang::Long&& x) {obj = std::move(x.obj); return *this;}
    
    Long(int64_t);
    Long(const ::java::lang::String&);
    int8_t byteValue() const;
    int32_t compareTo(const ::java::lang::Long&) const;
    static ::java::lang::Long decode(const ::java::lang::String&);
    double doubleValue() const;
    bool equals(const ::java::lang::Object&) const;
    float floatValue() const;
    static ::java::lang::Long getLong(const ::java::lang::String&);
    static ::java::lang::Long getLong(const ::java::lang::String&, int64_t);
    static ::java::lang::Long getLong(const ::java::lang::String&, const ::java::lang::Long&);
    int32_t hashCode() const;
    int32_t intValue() const;
    int64_t longValue() const;
    static int64_t parseLong(const ::java::lang::String&);
    static int64_t parseLong(const ::java::lang::String&, int32_t);
    int16_t shortValue() const;
    static ::java::lang::String toBinaryString(int64_t);
    static ::java::lang::String toHexString(int64_t);
    static ::java::lang::String toOctalString(int64_t);
    ::java::lang::String toString() const;
    static ::java::lang::String toString(int64_t);
    static ::java::lang::String toString(int64_t, int32_t);
    static ::java::lang::Long valueOf(const ::java::lang::String&);
    static ::java::lang::Long valueOf(const ::java::lang::String&, int32_t);
    static int64_t highestOneBit(int64_t);
    static int64_t lowestOneBit(int64_t);
    static int32_t numberOfLeadingZeros(int64_t);
    static int32_t numberOfTrailingZeros(int64_t);
    static int32_t bitCount(int64_t);
    static int64_t rotateLeft(int64_t, int32_t);
    static int64_t rotateRight(int64_t, int32_t);
    static int64_t reverseBytes(int64_t);
    static int64_t reverse(int64_t);
    static int32_t signum(int64_t);
    static ::java::lang::Long valueOf(int64_t);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Number.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace util { class Random; } }

namespace java {
namespace math {
class BigInteger : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::lang::Comparable,
                   public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BigInteger(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BigInteger(const ::java::math::BigInteger& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    BigInteger(::java::math::BigInteger&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::math::BigInteger& operator=(const ::java::math::BigInteger& x) {obj = x.obj; return *this;}
    ::java::math::BigInteger& operator=(::java::math::BigInteger&& x) {obj = std::move(x.obj); return *this;}
    
    BigInteger(int32_t, const ::java::util::Random&);
    BigInteger(int32_t, int32_t, const ::java::util::Random&);
    BigInteger(const ::java::lang::String&);
    BigInteger(const ::java::lang::String&, int32_t);
    BigInteger(int32_t, const std::vector< int8_t>&);
    BigInteger(const std::vector< int8_t>&);
    static ::java::math::BigInteger valueOf(int64_t);
    std::vector< int8_t> toByteArray() const;
    ::java::math::BigInteger abs() const;
    ::java::math::BigInteger negate() const;
    ::java::math::BigInteger add(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger subtract(const ::java::math::BigInteger&) const;
    int32_t signum() const;
    ::java::math::BigInteger shiftRight(int32_t) const;
    ::java::math::BigInteger shiftLeft(int32_t) const;
    int32_t bitLength() const;
    bool testBit(int32_t) const;
    ::java::math::BigInteger setBit(int32_t) const;
    ::java::math::BigInteger clearBit(int32_t) const;
    ::java::math::BigInteger flipBit(int32_t) const;
    int32_t getLowestSetBit() const;
    int32_t bitCount() const;
    ::java::math::BigInteger not_() const;
    ::java::math::BigInteger and_(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger or_(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger xor_(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger andNot(const ::java::math::BigInteger&) const;
    int32_t intValue() const;
    int64_t longValue() const;
    float floatValue() const;
    double doubleValue() const;
    int32_t compareTo(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger min(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger max(const ::java::math::BigInteger&) const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    ::java::lang::String toString(int32_t) const;
    ::java::math::BigInteger gcd(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger multiply(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger pow(int32_t) const;
    std::vector< ::java::math::BigInteger> divideAndRemainder(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger divide(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger remainder(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger modInverse(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger modPow(const ::java::math::BigInteger&, const ::java::math::BigInteger&) const;
    ::java::math::BigInteger mod(const ::java::math::BigInteger&) const;
    bool isProbablePrime(int32_t) const;
    ::java::math::BigInteger nextProbablePrime() const;
    static ::java::math::BigInteger probablePrime(int32_t, const ::java::util::Random&);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}



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
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace math { class MathContext; } }
namespace java { namespace math { class RoundingMode; } }

namespace java {
namespace math {
class BigDecimal : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::lang::Comparable,
                   public virtual ::java::lang::Number {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BigDecimal(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Number(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BigDecimal(const ::java::math::BigDecimal& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj;}
    BigDecimal(::java::math::BigDecimal&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Number((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::math::BigDecimal& operator=(const ::java::math::BigDecimal& x) {obj = x.obj; return *this;}
    ::java::math::BigDecimal& operator=(::java::math::BigDecimal&& x) {obj = std::move(x.obj); return *this;}
    
    BigDecimal(const std::vector< uint16_t>&, int32_t, int32_t);
    BigDecimal(const std::vector< uint16_t>&, int32_t, int32_t, const ::java::math::MathContext&);
    BigDecimal(const std::vector< uint16_t>&);
    BigDecimal(const std::vector< uint16_t>&, const ::java::math::MathContext&);
    BigDecimal(const ::java::lang::String&);
    BigDecimal(const ::java::lang::String&, const ::java::math::MathContext&);
    BigDecimal(double);
    BigDecimal(double, const ::java::math::MathContext&);
    BigDecimal(const ::java::math::BigInteger&);
    BigDecimal(const ::java::math::BigInteger&, const ::java::math::MathContext&);
    BigDecimal(const ::java::math::BigInteger&, int32_t);
    BigDecimal(const ::java::math::BigInteger&, int32_t, const ::java::math::MathContext&);
    BigDecimal(int32_t);
    BigDecimal(int32_t, const ::java::math::MathContext&);
    BigDecimal(int64_t);
    BigDecimal(int64_t, const ::java::math::MathContext&);
    static ::java::math::BigDecimal valueOf(int64_t, int32_t);
    static ::java::math::BigDecimal valueOf(int64_t);
    static ::java::math::BigDecimal valueOf(double);
    ::java::math::BigDecimal add(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal add(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal subtract(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal subtract(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal multiply(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal multiply(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal divide(const ::java::math::BigDecimal&, int32_t, int32_t) const;
    ::java::math::BigDecimal divide(const ::java::math::BigDecimal&, int32_t, const ::java::math::RoundingMode&) const;
    ::java::math::BigDecimal divide(const ::java::math::BigDecimal&, int32_t) const;
    ::java::math::BigDecimal divide(const ::java::math::BigDecimal&, const ::java::math::RoundingMode&) const;
    ::java::math::BigDecimal divide(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal divide(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal divideToIntegralValue(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal divideToIntegralValue(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal remainder(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal remainder(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    std::vector< ::java::math::BigDecimal> divideAndRemainder(const ::java::math::BigDecimal&) const;
    std::vector< ::java::math::BigDecimal> divideAndRemainder(const ::java::math::BigDecimal&, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal pow(int32_t) const;
    ::java::math::BigDecimal pow(int32_t, const ::java::math::MathContext&) const;
    ::java::math::BigDecimal abs() const;
    ::java::math::BigDecimal abs(const ::java::math::MathContext&) const;
    ::java::math::BigDecimal negate() const;
    ::java::math::BigDecimal negate(const ::java::math::MathContext&) const;
    ::java::math::BigDecimal plus() const;
    ::java::math::BigDecimal plus(const ::java::math::MathContext&) const;
    int32_t signum() const;
    int32_t scale() const;
    int32_t precision() const;
    ::java::math::BigInteger unscaledValue() const;
    ::java::math::BigDecimal round(const ::java::math::MathContext&) const;
    ::java::math::BigDecimal setScale(int32_t, const ::java::math::RoundingMode&) const;
    ::java::math::BigDecimal setScale(int32_t, int32_t) const;
    ::java::math::BigDecimal setScale(int32_t) const;
    ::java::math::BigDecimal movePointLeft(int32_t) const;
    ::java::math::BigDecimal movePointRight(int32_t) const;
    ::java::math::BigDecimal scaleByPowerOfTen(int32_t) const;
    ::java::math::BigDecimal stripTrailingZeros() const;
    int32_t compareTo(const ::java::math::BigDecimal&) const;
    bool equals(const ::java::lang::Object&) const;
    ::java::math::BigDecimal min(const ::java::math::BigDecimal&) const;
    ::java::math::BigDecimal max(const ::java::math::BigDecimal&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;
    ::java::lang::String toEngineeringString() const;
    ::java::lang::String toPlainString() const;
    ::java::math::BigInteger toBigInteger() const;
    ::java::math::BigInteger toBigIntegerExact() const;
    int64_t longValue() const;
    int64_t longValueExact() const;
    int32_t intValue() const;
    int32_t intValueExact() const;
    int16_t shortValueExact() const;
    int8_t byteValueExact() const;
    float floatValue() const;
    double doubleValue() const;
    ::java::math::BigDecimal ulp() const;
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}



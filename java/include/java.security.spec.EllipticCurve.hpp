#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { namespace spec { class ECField; } } }

namespace java {
namespace security {
namespace spec {
class EllipticCurve : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EllipticCurve(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EllipticCurve(const ::java::security::spec::EllipticCurve& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EllipticCurve(::java::security::spec::EllipticCurve&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::EllipticCurve& operator=(const ::java::security::spec::EllipticCurve& x) {obj = x.obj; return *this;}
    ::java::security::spec::EllipticCurve& operator=(::java::security::spec::EllipticCurve&& x) {obj = std::move(x.obj); return *this;}
    
    EllipticCurve(const ::java::security::spec::ECField&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const std::vector< int8_t>&);
    EllipticCurve(const ::java::security::spec::ECField&, const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getA() const;
    ::java::math::BigInteger getB() const;
    ::java::security::spec::ECField getField() const;
    std::vector< int8_t> getSeed() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}
}



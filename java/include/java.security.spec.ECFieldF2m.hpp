#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.ECField.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class ECFieldF2m : public virtual ::java::lang::Object,
                   public virtual ::java::security::spec::ECField {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECFieldF2m(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::ECField(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECFieldF2m(const ::java::security::spec::ECFieldF2m& x) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {obj = x.obj;}
    ECFieldF2m(::java::security::spec::ECFieldF2m&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECFieldF2m& operator=(const ::java::security::spec::ECFieldF2m& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECFieldF2m& operator=(::java::security::spec::ECFieldF2m&& x) {obj = std::move(x.obj); return *this;}
    
    ECFieldF2m(int32_t);
    ECFieldF2m(int32_t, const ::java::math::BigInteger&);
    ECFieldF2m(int32_t, const std::vector< int32_t>&);
    bool equals(const ::java::lang::Object&) const;
    int32_t getFieldSize() const;
    int32_t getM() const;
    std::vector< int32_t> getMidTermsOfReductionPolynomial() const;
    ::java::math::BigInteger getReductionPolynomial() const;
    int32_t hashCode() const;

};
}
}
}



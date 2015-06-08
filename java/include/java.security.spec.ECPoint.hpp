#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class ECPoint : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECPoint(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECPoint(const ::java::security::spec::ECPoint& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ECPoint(::java::security::spec::ECPoint&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECPoint& operator=(const ::java::security::spec::ECPoint& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECPoint& operator=(::java::security::spec::ECPoint&& x) {obj = std::move(x.obj); return *this;}
    
    ECPoint(const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getAffineX() const;
    ::java::math::BigInteger getAffineY() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;

};
}
}
}



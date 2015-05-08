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
class ECFieldFp : public virtual ::java::lang::Object,
                  public virtual ::java::security::spec::ECField {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECFieldFp(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::ECField(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECFieldFp(const ::java::security::spec::ECFieldFp& x) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {obj = x.obj;}
    ECFieldFp(::java::security::spec::ECFieldFp&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::ECField((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECFieldFp& operator=(const ::java::security::spec::ECFieldFp& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECFieldFp& operator=(::java::security::spec::ECFieldFp&& x) {obj = std::move(x.obj); return *this;}
    
    ECFieldFp(const ::java::math::BigInteger&);
    int32_t getFieldSize() const ;
    ::java::math::BigInteger getP() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.KeySpec.hpp"

namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { namespace spec { class ECParameterSpec; } } }

namespace java {
namespace security {
namespace spec {
class ECPrivateKeySpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECPrivateKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECPrivateKeySpec(const ::java::security::spec::ECPrivateKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    ECPrivateKeySpec(::java::security::spec::ECPrivateKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECPrivateKeySpec& operator=(const ::java::security::spec::ECPrivateKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECPrivateKeySpec& operator=(::java::security::spec::ECPrivateKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    ECPrivateKeySpec(const ::java::math::BigInteger&, const ::java::security::spec::ECParameterSpec&);
    ::java::security::spec::ECParameterSpec getParams() const;
    ::java::math::BigInteger getS() const;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.KeySpec.hpp"

namespace java { namespace security { namespace spec { class ECParameterSpec; } } }
namespace java { namespace security { namespace spec { class ECPoint; } } }

namespace java {
namespace security {
namespace spec {
class ECPublicKeySpec : public virtual ::java::lang::Object,
                        public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ECPublicKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ECPublicKeySpec(const ::java::security::spec::ECPublicKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    ECPublicKeySpec(::java::security::spec::ECPublicKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::ECPublicKeySpec& operator=(const ::java::security::spec::ECPublicKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::ECPublicKeySpec& operator=(::java::security::spec::ECPublicKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    ECPublicKeySpec(const ::java::security::spec::ECPoint&, const ::java::security::spec::ECParameterSpec&);
    ::java::security::spec::ECParameterSpec getParams() const;
    ::java::security::spec::ECPoint getW() const;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { class SecureRandom; } }
namespace java { namespace security { namespace interfaces { class DSAParams; } } }

namespace java {
namespace security {
namespace interfaces {
class DSAKeyPairGenerator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAKeyPairGenerator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAKeyPairGenerator(const ::java::security::interfaces::DSAKeyPairGenerator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DSAKeyPairGenerator(::java::security::interfaces::DSAKeyPairGenerator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::DSAKeyPairGenerator& operator=(const ::java::security::interfaces::DSAKeyPairGenerator& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::DSAKeyPairGenerator& operator=(::java::security::interfaces::DSAKeyPairGenerator&& x) {obj = std::move(x.obj); return *this;}
    
    void initialize(const ::java::security::interfaces::DSAParams&, const ::java::security::SecureRandom&) const;
    void initialize(int32_t, bool, const ::java::security::SecureRandom&) const;

};
}
}
}



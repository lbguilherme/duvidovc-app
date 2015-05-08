#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.KeySpec.hpp"


namespace javax {
namespace crypto {
namespace spec {
class DESKeySpec : public virtual ::java::lang::Object,
                   public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DESKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DESKeySpec(const ::javax::crypto::spec::DESKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    DESKeySpec(::javax::crypto::spec::DESKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::DESKeySpec& operator=(const ::javax::crypto::spec::DESKeySpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::DESKeySpec& operator=(::javax::crypto::spec::DESKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    DESKeySpec(const std::vector< int8_t>&);
    DESKeySpec(const std::vector< int8_t>&, int32_t);
    std::vector< int8_t> getKey() const ;
    static bool isParityAdjusted(const std::vector< int8_t>&, int32_t);
    static bool isWeak(const std::vector< int8_t>&, int32_t);

};
}
}
}



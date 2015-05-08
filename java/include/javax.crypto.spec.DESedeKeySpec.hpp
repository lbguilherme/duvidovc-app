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
class DESedeKeySpec : public virtual ::java::lang::Object,
                      public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DESedeKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DESedeKeySpec(const ::javax::crypto::spec::DESedeKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    DESedeKeySpec(::javax::crypto::spec::DESedeKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::DESedeKeySpec& operator=(const ::javax::crypto::spec::DESedeKeySpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::DESedeKeySpec& operator=(::javax::crypto::spec::DESedeKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    DESedeKeySpec(const std::vector< int8_t>&);
    DESedeKeySpec(const std::vector< int8_t>&, int32_t);
    std::vector< int8_t> getKey() const ;
    static bool isParityAdjusted(const std::vector< int8_t>&, int32_t);

};
}
}
}



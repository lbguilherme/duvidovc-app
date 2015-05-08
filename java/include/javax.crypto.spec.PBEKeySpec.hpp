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
class PBEKeySpec : public virtual ::java::lang::Object,
                   public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PBEKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PBEKeySpec(const ::javax::crypto::spec::PBEKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    PBEKeySpec(::javax::crypto::spec::PBEKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::PBEKeySpec& operator=(const ::javax::crypto::spec::PBEKeySpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::PBEKeySpec& operator=(::javax::crypto::spec::PBEKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    PBEKeySpec(const std::vector< uint16_t>&);
    PBEKeySpec(const std::vector< uint16_t>&, const std::vector< int8_t>&, int32_t, int32_t);
    PBEKeySpec(const std::vector< uint16_t>&, const std::vector< int8_t>&, int32_t);
    void clearPassword() const ;
    std::vector< uint16_t> getPassword() const ;
    std::vector< int8_t> getSalt() const ;
    int32_t getIterationCount() const ;
    int32_t getKeyLength() const ;

};
}
}
}



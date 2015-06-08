#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.crypto.SecretKey.hpp"


namespace javax {
namespace crypto {
namespace interfaces {
class PBEKey : public virtual ::java::lang::Object,
               public virtual ::javax::crypto::SecretKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PBEKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::javax::crypto::SecretKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PBEKey(const ::javax::crypto::interfaces::PBEKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::javax::crypto::SecretKey((jobject)0) {obj = x.obj;}
    PBEKey(::javax::crypto::interfaces::PBEKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::javax::crypto::SecretKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::interfaces::PBEKey& operator=(const ::javax::crypto::interfaces::PBEKey& x) {obj = x.obj; return *this;}
    ::javax::crypto::interfaces::PBEKey& operator=(::javax::crypto::interfaces::PBEKey&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getIterationCount() const;
    std::vector< int8_t> getSalt() const;
    std::vector< uint16_t> getPassword() const;

};
}
}
}



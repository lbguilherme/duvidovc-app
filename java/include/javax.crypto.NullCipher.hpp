#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.crypto.Cipher.hpp"


namespace javax {
namespace crypto {
class NullCipher : public virtual ::java::lang::Object,
                   public virtual ::javax::crypto::Cipher {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NullCipher(jobject _obj) : ::java::lang::Object(_obj), ::javax::crypto::Cipher(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NullCipher(const ::javax::crypto::NullCipher& x) : ::java::lang::Object((jobject)0), ::javax::crypto::Cipher((jobject)0) {obj = x.obj;}
    NullCipher(::javax::crypto::NullCipher&& x) : ::java::lang::Object((jobject)0), ::javax::crypto::Cipher((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::NullCipher& operator=(const ::javax::crypto::NullCipher& x) {obj = x.obj; return *this;}
    ::javax::crypto::NullCipher& operator=(::javax::crypto::NullCipher&& x) {obj = std::move(x.obj); return *this;}
    
    NullCipher();

};
}
}



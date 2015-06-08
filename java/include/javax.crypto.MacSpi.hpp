#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace javax {
namespace crypto {
class MacSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MacSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MacSpi(const ::javax::crypto::MacSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MacSpi(::javax::crypto::MacSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::MacSpi& operator=(const ::javax::crypto::MacSpi& x) {obj = x.obj; return *this;}
    ::javax::crypto::MacSpi& operator=(::javax::crypto::MacSpi&& x) {obj = std::move(x.obj); return *this;}
    
    MacSpi();
    ::java::lang::Object clone() const;

};
}
}



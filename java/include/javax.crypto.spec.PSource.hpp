#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace javax {
namespace crypto {
namespace spec {
class PSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PSource(const ::javax::crypto::spec::PSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PSource(::javax::crypto::spec::PSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::PSource& operator=(const ::javax::crypto::spec::PSource& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::PSource& operator=(::javax::crypto::spec::PSource&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const ;

};
}
}
}

#include "javax.crypto.spec.PSource_PSpecified.hpp"


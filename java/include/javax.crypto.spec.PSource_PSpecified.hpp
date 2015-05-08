#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.crypto.spec.PSource.hpp"


namespace javax {
namespace crypto {
namespace spec {
class PSource_PSpecified : public virtual ::java::lang::Object,
                           public virtual ::javax::crypto::spec::PSource {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PSource_PSpecified(jobject _obj) : ::java::lang::Object(_obj), ::javax::crypto::spec::PSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PSource_PSpecified(const ::javax::crypto::spec::PSource_PSpecified& x) : ::java::lang::Object((jobject)0), ::javax::crypto::spec::PSource((jobject)0) {obj = x.obj;}
    PSource_PSpecified(::javax::crypto::spec::PSource_PSpecified&& x) : ::java::lang::Object((jobject)0), ::javax::crypto::spec::PSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::PSource_PSpecified& operator=(const ::javax::crypto::spec::PSource_PSpecified& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::PSource_PSpecified& operator=(::javax::crypto::spec::PSource_PSpecified&& x) {obj = std::move(x.obj); return *this;}
    
    PSource_PSpecified(const std::vector< int8_t>&);
    std::vector< int8_t> getValue() const ;

};
}
}
}



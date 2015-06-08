#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.KeySpec.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace spec {
class EncodedKeySpec : public virtual ::java::lang::Object,
                       public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EncodedKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EncodedKeySpec(const ::java::security::spec::EncodedKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    EncodedKeySpec(::java::security::spec::EncodedKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::EncodedKeySpec& operator=(const ::java::security::spec::EncodedKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::EncodedKeySpec& operator=(::java::security::spec::EncodedKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    EncodedKeySpec(const std::vector< int8_t>&);
    std::vector< int8_t> getEncoded() const;
    ::java::lang::String getFormat() const;

};
}
}
}



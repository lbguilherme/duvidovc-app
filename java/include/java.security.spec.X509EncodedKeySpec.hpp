#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.EncodedKeySpec.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace security {
namespace spec {
class X509EncodedKeySpec : public virtual ::java::lang::Object,
                           public virtual ::java::security::spec::EncodedKeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509EncodedKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::EncodedKeySpec(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509EncodedKeySpec(const ::java::security::spec::X509EncodedKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::EncodedKeySpec((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    X509EncodedKeySpec(::java::security::spec::X509EncodedKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::EncodedKeySpec((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::X509EncodedKeySpec& operator=(const ::java::security::spec::X509EncodedKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::X509EncodedKeySpec& operator=(::java::security::spec::X509EncodedKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    X509EncodedKeySpec(const std::vector< int8_t>&);
    std::vector< int8_t> getEncoded() const;
    ::java::lang::String getFormat() const;

};
}
}
}



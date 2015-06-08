#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.spec.KeySpec.hpp"
#include "javax.crypto.SecretKey.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace javax {
namespace crypto {
namespace spec {
class SecretKeySpec : public virtual ::java::lang::Object,
                      public virtual ::java::io::Serializable,
                      public virtual ::java::security::spec::KeySpec,
                      public virtual ::javax::crypto::SecretKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecretKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::spec::KeySpec(_obj), ::javax::crypto::SecretKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecretKeySpec(const ::javax::crypto::spec::SecretKeySpec& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::javax::crypto::SecretKey((jobject)0) {obj = x.obj;}
    SecretKeySpec(::javax::crypto::spec::SecretKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::javax::crypto::SecretKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::SecretKeySpec& operator=(const ::javax::crypto::spec::SecretKeySpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::SecretKeySpec& operator=(::javax::crypto::spec::SecretKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    SecretKeySpec(const std::vector< int8_t>&, const ::java::lang::String&);
    SecretKeySpec(const std::vector< int8_t>&, int32_t, int32_t, const ::java::lang::String&);
    ::java::lang::String getAlgorithm() const;
    ::java::lang::String getFormat() const;
    std::vector< int8_t> getEncoded() const;
    int32_t hashCode() const;
    bool equals(const ::java::lang::Object&) const;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace spec { class KeySpec; } } }
namespace javax { namespace crypto { class SecretKey; } }
namespace javax { namespace crypto { class SecretKeyFactory; } }

namespace javax {
namespace crypto {
class SecretKeyFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecretKeyFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecretKeyFactory(const ::javax::crypto::SecretKeyFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SecretKeyFactory(::javax::crypto::SecretKeyFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::SecretKeyFactory& operator=(const ::javax::crypto::SecretKeyFactory& x) {obj = x.obj; return *this;}
    ::javax::crypto::SecretKeyFactory& operator=(::javax::crypto::SecretKeyFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const;
    ::java::security::Provider getProvider() const;
    static ::javax::crypto::SecretKeyFactory getInstance(const ::java::lang::String&);
    static ::javax::crypto::SecretKeyFactory getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::javax::crypto::SecretKeyFactory getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::javax::crypto::SecretKey generateSecret(const ::java::security::spec::KeySpec&) const;
    ::java::security::spec::KeySpec getKeySpec(const ::javax::crypto::SecretKey&, const ::java::lang::Class&) const;
    ::javax::crypto::SecretKey translateKey(const ::javax::crypto::SecretKey&) const;

};
}
}



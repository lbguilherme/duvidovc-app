#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Key; } }
namespace java { namespace security { class KeyFactory; } }
namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { namespace spec { class KeySpec; } } }

namespace java {
namespace security {
class KeyFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyFactory(const ::java::security::KeyFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyFactory(::java::security::KeyFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyFactory& operator=(const ::java::security::KeyFactory& x) {obj = x.obj; return *this;}
    ::java::security::KeyFactory& operator=(::java::security::KeyFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::security::KeyFactory getInstance(const ::java::lang::String&);
    static ::java::security::KeyFactory getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::KeyFactory getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::Provider getProvider() const;
    ::java::lang::String getAlgorithm() const;
    ::java::security::PublicKey generatePublic(const ::java::security::spec::KeySpec&) const;
    ::java::security::PrivateKey generatePrivate(const ::java::security::spec::KeySpec&) const;
    ::java::security::spec::KeySpec getKeySpec(const ::java::security::Key&, const ::java::lang::Class&) const;
    ::java::security::Key translateKey(const ::java::security::Key&) const;

};
}
}



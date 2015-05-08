#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace io { class Serializable; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { class Signature; } }

namespace java {
namespace security {
class SignedObject : public virtual ::java::lang::Object,
                     public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SignedObject(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SignedObject(const ::java::security::SignedObject& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    SignedObject(::java::security::SignedObject&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::SignedObject& operator=(const ::java::security::SignedObject& x) {obj = x.obj; return *this;}
    ::java::security::SignedObject& operator=(::java::security::SignedObject&& x) {obj = std::move(x.obj); return *this;}
    
    SignedObject(const ::java::io::Serializable&, const ::java::security::PrivateKey&, const ::java::security::Signature&);
    ::java::lang::Object getObject() const ;
    std::vector< int8_t> getSignature() const ;
    ::java::lang::String getAlgorithm() const ;
    bool verify(const ::java::security::PublicKey&, const ::java::security::Signature&) const ;

};
}
}



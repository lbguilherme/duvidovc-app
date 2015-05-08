#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { class PublicKey; } }

namespace java {
namespace security {
class KeyPair : public virtual ::java::lang::Object,
                public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyPair(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyPair(const ::java::security::KeyPair& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    KeyPair(::java::security::KeyPair&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyPair& operator=(const ::java::security::KeyPair& x) {obj = x.obj; return *this;}
    ::java::security::KeyPair& operator=(::java::security::KeyPair&& x) {obj = std::move(x.obj); return *this;}
    
    KeyPair(const ::java::security::PublicKey&, const ::java::security::PrivateKey&);
    ::java::security::PrivateKey getPrivate() const ;
    ::java::security::PublicKey getPublic() const ;

};
}
}



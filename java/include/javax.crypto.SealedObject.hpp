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
namespace java { namespace security { class Key; } }
namespace javax { namespace crypto { class Cipher; } }

namespace javax {
namespace crypto {
class SealedObject : public virtual ::java::lang::Object,
                     public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SealedObject(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SealedObject(const ::javax::crypto::SealedObject& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    SealedObject(::javax::crypto::SealedObject&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::SealedObject& operator=(const ::javax::crypto::SealedObject& x) {obj = x.obj; return *this;}
    ::javax::crypto::SealedObject& operator=(::javax::crypto::SealedObject&& x) {obj = std::move(x.obj); return *this;}
    
    SealedObject(const ::java::io::Serializable&, const ::javax::crypto::Cipher&);
    ::java::lang::String getAlgorithm() const ;
    ::java::lang::Object getObject(const ::java::security::Key&) const ;
    ::java::lang::Object getObject(const ::javax::crypto::Cipher&) const ;
    ::java::lang::Object getObject(const ::java::security::Key&, const ::java::lang::String&) const ;

};
}
}



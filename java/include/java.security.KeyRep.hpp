#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyRep_Type; } }

namespace java {
namespace security {
class KeyRep : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyRep(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyRep(const ::java::security::KeyRep& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    KeyRep(::java::security::KeyRep&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyRep& operator=(const ::java::security::KeyRep& x) {obj = x.obj; return *this;}
    ::java::security::KeyRep& operator=(::java::security::KeyRep&& x) {obj = std::move(x.obj); return *this;}
    
    KeyRep(const ::java::security::KeyRep_Type&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< int8_t>&);

};
}
}

#include "java.security.KeyRep_Type.hpp"


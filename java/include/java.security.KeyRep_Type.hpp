#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyRep_Type; } }

namespace java {
namespace security {
class KeyRep_Type : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyRep_Type(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyRep_Type(const ::java::security::KeyRep_Type& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    KeyRep_Type(::java::security::KeyRep_Type&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyRep_Type& operator=(const ::java::security::KeyRep_Type& x) {obj = x.obj; return *this;}
    ::java::security::KeyRep_Type& operator=(::java::security::KeyRep_Type&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::security::KeyRep_Type> values();
    static ::java::security::KeyRep_Type valueOf(const ::java::lang::String&);

};
}
}



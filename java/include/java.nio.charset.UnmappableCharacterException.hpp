#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.nio.charset.CharacterCodingException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace nio {
namespace charset {
class UnmappableCharacterException : public virtual ::java::lang::Object,
                                     public virtual ::java::nio::charset::CharacterCodingException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnmappableCharacterException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::nio::charset::CharacterCodingException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnmappableCharacterException(const ::java::nio::charset::UnmappableCharacterException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::charset::CharacterCodingException((jobject)0) {obj = x.obj;}
    UnmappableCharacterException(::java::nio::charset::UnmappableCharacterException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::charset::CharacterCodingException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::UnmappableCharacterException& operator=(const ::java::nio::charset::UnmappableCharacterException& x) {obj = x.obj; return *this;}
    ::java::nio::charset::UnmappableCharacterException& operator=(::java::nio::charset::UnmappableCharacterException&& x) {obj = std::move(x.obj); return *this;}
    
    UnmappableCharacterException(int32_t);
    int32_t getInputLength() const ;
    ::java::lang::String getMessage() const ;

};
}
}
}



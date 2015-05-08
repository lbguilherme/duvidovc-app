#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"


namespace java {
namespace nio {
namespace charset {
class CharacterCodingException : public virtual ::java::lang::Object,
                                 public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharacterCodingException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharacterCodingException(const ::java::nio::charset::CharacterCodingException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    CharacterCodingException(::java::nio::charset::CharacterCodingException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::CharacterCodingException& operator=(const ::java::nio::charset::CharacterCodingException& x) {obj = x.obj; return *this;}
    ::java::nio::charset::CharacterCodingException& operator=(::java::nio::charset::CharacterCodingException&& x) {obj = std::move(x.obj); return *this;}
    
    CharacterCodingException();

};
}
}
}



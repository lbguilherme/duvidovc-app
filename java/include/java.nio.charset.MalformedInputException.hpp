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
class MalformedInputException : public virtual ::java::lang::Object,
                                public virtual ::java::nio::charset::CharacterCodingException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MalformedInputException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::nio::charset::CharacterCodingException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MalformedInputException(const ::java::nio::charset::MalformedInputException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::charset::CharacterCodingException((jobject)0) {obj = x.obj;}
    MalformedInputException(::java::nio::charset::MalformedInputException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::charset::CharacterCodingException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::MalformedInputException& operator=(const ::java::nio::charset::MalformedInputException& x) {obj = x.obj; return *this;}
    ::java::nio::charset::MalformedInputException& operator=(::java::nio::charset::MalformedInputException&& x) {obj = std::move(x.obj); return *this;}
    
    MalformedInputException(int32_t);
    int32_t getInputLength() const;
    ::java::lang::String getMessage() const;

};
}
}
}



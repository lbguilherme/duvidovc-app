#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.AttributedCharacterIterator_Attribute.hpp"


namespace java {
namespace text {
class Format_Field : public virtual ::java::lang::Object,
                     public virtual ::java::text::AttributedCharacterIterator_Attribute {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Format_Field(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::text::AttributedCharacterIterator_Attribute(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Format_Field(const ::java::text::Format_Field& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::text::AttributedCharacterIterator_Attribute((jobject)0) {obj = x.obj;}
    Format_Field(::java::text::Format_Field&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::text::AttributedCharacterIterator_Attribute((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Format_Field& operator=(const ::java::text::Format_Field& x) {obj = x.obj; return *this;}
    ::java::text::Format_Field& operator=(::java::text::Format_Field&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



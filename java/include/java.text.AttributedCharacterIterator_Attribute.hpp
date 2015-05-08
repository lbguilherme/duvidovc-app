#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace text {
class AttributedCharacterIterator_Attribute : public virtual ::java::lang::Object,
                                              public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributedCharacterIterator_Attribute(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributedCharacterIterator_Attribute(const ::java::text::AttributedCharacterIterator_Attribute& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    AttributedCharacterIterator_Attribute(::java::text::AttributedCharacterIterator_Attribute&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::AttributedCharacterIterator_Attribute& operator=(const ::java::text::AttributedCharacterIterator_Attribute& x) {obj = x.obj; return *this;}
    ::java::text::AttributedCharacterIterator_Attribute& operator=(::java::text::AttributedCharacterIterator_Attribute&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    ::java::lang::String toString() const ;

};
}
}



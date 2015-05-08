#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.AttributedCharacterIterator_Attribute.hpp"


namespace java {
namespace awt {
namespace font {
class TextAttribute : public virtual ::java::lang::Object,
                      public virtual ::java::text::AttributedCharacterIterator_Attribute {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextAttribute(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::text::AttributedCharacterIterator_Attribute(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextAttribute(const ::java::awt::font::TextAttribute& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::text::AttributedCharacterIterator_Attribute((jobject)0) {obj = x.obj;}
    TextAttribute(::java::awt::font::TextAttribute&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::text::AttributedCharacterIterator_Attribute((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::awt::font::TextAttribute& operator=(const ::java::awt::font::TextAttribute& x) {obj = x.obj; return *this;}
    ::java::awt::font::TextAttribute& operator=(::java::awt::font::TextAttribute&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}



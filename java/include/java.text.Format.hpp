#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace text { class AttributedCharacterIterator; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class ParsePosition; } }

namespace java {
namespace text {
class Format : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable,
               public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Format(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Format(const ::java::text::Format& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Format(::java::text::Format&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Format& operator=(const ::java::text::Format& x) {obj = x.obj; return *this;}
    ::java::text::Format& operator=(::java::text::Format&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const ;
    ::java::lang::String format(const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer format(const ::java::lang::Object&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::text::AttributedCharacterIterator formatToCharacterIterator(const ::java::lang::Object&) const ;
    ::java::lang::Object parseObject(const ::java::lang::String&) const ;
    ::java::lang::Object parseObject(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;

};
}
}

#include "java.text.Format_Field.hpp"


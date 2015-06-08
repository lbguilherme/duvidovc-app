#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.CharacterIterator.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace text {
class StringCharacterIterator : public virtual ::java::lang::Object,
                                public virtual ::java::text::CharacterIterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringCharacterIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::text::CharacterIterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringCharacterIterator(const ::java::text::StringCharacterIterator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {obj = x.obj;}
    StringCharacterIterator(::java::text::StringCharacterIterator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::StringCharacterIterator& operator=(const ::java::text::StringCharacterIterator& x) {obj = x.obj; return *this;}
    ::java::text::StringCharacterIterator& operator=(::java::text::StringCharacterIterator&& x) {obj = std::move(x.obj); return *this;}
    
    StringCharacterIterator(const ::java::lang::String&);
    StringCharacterIterator(const ::java::lang::String&, int32_t);
    StringCharacterIterator(const ::java::lang::String&, int32_t, int32_t, int32_t);
    ::java::lang::Object clone() const;
    uint16_t current() const;
    bool equals(const ::java::lang::Object&) const;
    uint16_t first() const;
    int32_t getBeginIndex() const;
    int32_t getEndIndex() const;
    int32_t getIndex() const;
    int32_t hashCode() const;
    uint16_t last() const;
    uint16_t next() const;
    uint16_t previous() const;
    uint16_t setIndex(int32_t) const;
    void setText(const ::java::lang::String&) const;

};
}
}



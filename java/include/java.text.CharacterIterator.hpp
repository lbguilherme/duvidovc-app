#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace text {
class CharacterIterator : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharacterIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharacterIterator(const ::java::text::CharacterIterator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    CharacterIterator(::java::text::CharacterIterator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::CharacterIterator& operator=(const ::java::text::CharacterIterator& x) {obj = x.obj; return *this;}
    ::java::text::CharacterIterator& operator=(::java::text::CharacterIterator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const;
    uint16_t current() const;
    uint16_t first() const;
    int32_t getBeginIndex() const;
    int32_t getEndIndex() const;
    int32_t getIndex() const;
    uint16_t last() const;
    uint16_t next() const;
    uint16_t previous() const;
    uint16_t setIndex(int32_t) const;

};
}
}



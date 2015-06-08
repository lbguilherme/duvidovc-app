#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.CharacterIterator.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace text { class AttributedCharacterIterator_Attribute; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace text {
class AttributedCharacterIterator : public virtual ::java::lang::Object,
                                    public virtual ::java::text::CharacterIterator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AttributedCharacterIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::text::CharacterIterator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AttributedCharacterIterator(const ::java::text::AttributedCharacterIterator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {obj = x.obj;}
    AttributedCharacterIterator(::java::text::AttributedCharacterIterator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::CharacterIterator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::AttributedCharacterIterator& operator=(const ::java::text::AttributedCharacterIterator& x) {obj = x.obj; return *this;}
    ::java::text::AttributedCharacterIterator& operator=(::java::text::AttributedCharacterIterator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::Set getAllAttributeKeys() const;
    ::java::lang::Object getAttribute(const ::java::text::AttributedCharacterIterator_Attribute&) const;
    ::java::util::Map getAttributes() const;
    int32_t getRunLimit() const;
    int32_t getRunLimit(const ::java::text::AttributedCharacterIterator_Attribute&) const;
    int32_t getRunLimit(const ::java::util::Set&) const;
    int32_t getRunStart() const;
    int32_t getRunStart(const ::java::text::AttributedCharacterIterator_Attribute&) const;
    int32_t getRunStart(const ::java::util::Set&) const;

};
}
}

#include "java.text.AttributedCharacterIterator_Attribute.hpp"


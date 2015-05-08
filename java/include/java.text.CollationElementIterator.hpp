#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace text { class CharacterIterator; } }

namespace java {
namespace text {
class CollationElementIterator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CollationElementIterator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CollationElementIterator(const ::java::text::CollationElementIterator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CollationElementIterator(::java::text::CollationElementIterator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::CollationElementIterator& operator=(const ::java::text::CollationElementIterator& x) {obj = x.obj; return *this;}
    ::java::text::CollationElementIterator& operator=(::java::text::CollationElementIterator&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getMaxExpansion(int32_t) const ;
    int32_t getOffset() const ;
    int32_t next() const ;
    int32_t previous() const ;
    static int32_t primaryOrder(int32_t);
    void reset() const ;
    static int16_t secondaryOrder(int32_t);
    void setOffset(int32_t) const ;
    void setText(const ::java::text::CharacterIterator&) const ;
    void setText(const ::java::lang::String&) const ;
    static int16_t tertiaryOrder(int32_t);

};
}
}



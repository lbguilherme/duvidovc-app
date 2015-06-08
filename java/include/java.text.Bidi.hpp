#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class AttributedCharacterIterator; } }
namespace java { namespace text { class Bidi; } }

namespace java {
namespace text {
class Bidi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Bidi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Bidi(const ::java::text::Bidi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Bidi(::java::text::Bidi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::Bidi& operator=(const ::java::text::Bidi& x) {obj = x.obj; return *this;}
    ::java::text::Bidi& operator=(::java::text::Bidi&& x) {obj = std::move(x.obj); return *this;}
    
    Bidi(const ::java::text::AttributedCharacterIterator&);
    Bidi(const std::vector< uint16_t>&, int32_t, const std::vector< int8_t>&, int32_t, int32_t, int32_t);
    Bidi(const ::java::lang::String&, int32_t);
    bool baseIsLeftToRight() const;
    ::java::text::Bidi createLineBidi(int32_t, int32_t) const;
    int32_t getBaseLevel() const;
    int32_t getLength() const;
    int32_t getLevelAt(int32_t) const;
    int32_t getRunCount() const;
    int32_t getRunLevel(int32_t) const;
    int32_t getRunLimit(int32_t) const;
    int32_t getRunStart(int32_t) const;
    bool isLeftToRight() const;
    bool isMixed() const;
    bool isRightToLeft() const;
    static void reorderVisually(const std::vector< int8_t>&, int32_t, const std::vector< ::java::lang::Object>&, int32_t, int32_t);
    static bool requiresBidi(const std::vector< uint16_t>&, int32_t, int32_t);
    ::java::lang::String toString() const;

};
}
}



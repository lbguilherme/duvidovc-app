#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace nio { class CharBuffer; } }
namespace java { namespace nio { namespace charset { class Charset; } } }
namespace java { namespace nio { namespace charset { class CharsetEncoder; } } }
namespace java { namespace nio { namespace charset { class CoderResult; } } }
namespace java { namespace nio { namespace charset { class CodingErrorAction; } } }

namespace java {
namespace nio {
namespace charset {
class CharsetEncoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharsetEncoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharsetEncoder(const ::java::nio::charset::CharsetEncoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharsetEncoder(::java::nio::charset::CharsetEncoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::CharsetEncoder& operator=(const ::java::nio::charset::CharsetEncoder& x) {obj = x.obj; return *this;}
    ::java::nio::charset::CharsetEncoder& operator=(::java::nio::charset::CharsetEncoder&& x) {obj = std::move(x.obj); return *this;}
    
    float averageBytesPerChar() const;
    bool canEncode(uint16_t) const;
    bool canEncode(const ::java::lang::CharSequence&) const;
    ::java::nio::charset::Charset charset() const;
    ::java::nio::ByteBuffer encode(const ::java::nio::CharBuffer&) const;
    ::java::nio::charset::CoderResult encode(const ::java::nio::CharBuffer&, const ::java::nio::ByteBuffer&, bool) const;
    ::java::nio::charset::CoderResult flush(const ::java::nio::ByteBuffer&) const;
    bool isLegalReplacement(const std::vector< int8_t>&) const;
    ::java::nio::charset::CodingErrorAction malformedInputAction() const;
    float maxBytesPerChar() const;
    ::java::nio::charset::CharsetEncoder onMalformedInput(const ::java::nio::charset::CodingErrorAction&) const;
    ::java::nio::charset::CharsetEncoder onUnmappableCharacter(const ::java::nio::charset::CodingErrorAction&) const;
    std::vector< int8_t> replacement() const;
    ::java::nio::charset::CharsetEncoder replaceWith(const std::vector< int8_t>&) const;
    ::java::nio::charset::CharsetEncoder reset() const;
    ::java::nio::charset::CodingErrorAction unmappableCharacterAction() const;

};
}
}
}



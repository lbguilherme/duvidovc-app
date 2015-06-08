#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { class ByteBuffer; } }
namespace java { namespace nio { class CharBuffer; } }
namespace java { namespace nio { namespace charset { class Charset; } } }
namespace java { namespace nio { namespace charset { class CharsetDecoder; } } }
namespace java { namespace nio { namespace charset { class CoderResult; } } }
namespace java { namespace nio { namespace charset { class CodingErrorAction; } } }

namespace java {
namespace nio {
namespace charset {
class CharsetDecoder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharsetDecoder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharsetDecoder(const ::java::nio::charset::CharsetDecoder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharsetDecoder(::java::nio::charset::CharsetDecoder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::charset::CharsetDecoder& operator=(const ::java::nio::charset::CharsetDecoder& x) {obj = x.obj; return *this;}
    ::java::nio::charset::CharsetDecoder& operator=(::java::nio::charset::CharsetDecoder&& x) {obj = std::move(x.obj); return *this;}
    
    float averageCharsPerByte() const;
    ::java::nio::charset::Charset charset() const;
    ::java::nio::CharBuffer decode(const ::java::nio::ByteBuffer&) const;
    ::java::nio::charset::CoderResult decode(const ::java::nio::ByteBuffer&, const ::java::nio::CharBuffer&, bool) const;
    ::java::nio::charset::Charset detectedCharset() const;
    ::java::nio::charset::CoderResult flush(const ::java::nio::CharBuffer&) const;
    bool isAutoDetecting() const;
    bool isCharsetDetected() const;
    ::java::nio::charset::CodingErrorAction malformedInputAction() const;
    float maxCharsPerByte() const;
    ::java::nio::charset::CharsetDecoder onMalformedInput(const ::java::nio::charset::CodingErrorAction&) const;
    ::java::nio::charset::CharsetDecoder onUnmappableCharacter(const ::java::nio::charset::CodingErrorAction&) const;
    ::java::lang::String replacement() const;
    ::java::nio::charset::CharsetDecoder replaceWith(const ::java::lang::String&) const;
    ::java::nio::charset::CharsetDecoder reset() const;
    ::java::nio::charset::CodingErrorAction unmappableCharacterAction() const;

};
}
}
}



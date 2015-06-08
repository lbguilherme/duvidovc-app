#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Character; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace lang {
class Character : public virtual ::java::lang::Object,
                  public virtual ::java::io::Serializable,
                  public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Character(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Character(const ::java::lang::Character& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Character(::java::lang::Character&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Character& operator=(const ::java::lang::Character& x) {obj = x.obj; return *this;}
    ::java::lang::Character& operator=(::java::lang::Character&& x) {obj = std::move(x.obj); return *this;}
    
    Character(uint16_t);
    uint16_t charValue() const;
    int32_t compareTo(const ::java::lang::Character&) const;
    static ::java::lang::Character valueOf(uint16_t);
    static bool isValidCodePoint(int32_t);
    static bool isSupplementaryCodePoint(int32_t);
    static bool isHighSurrogate(uint16_t);
    static bool isLowSurrogate(uint16_t);
    static bool isSurrogatePair(uint16_t, uint16_t);
    static int32_t charCount(int32_t);
    static int32_t toCodePoint(uint16_t, uint16_t);
    static int32_t codePointAt(const ::java::lang::CharSequence&, int32_t);
    static int32_t codePointAt(const std::vector< uint16_t>&, int32_t);
    static int32_t codePointAt(const std::vector< uint16_t>&, int32_t, int32_t);
    static int32_t codePointBefore(const ::java::lang::CharSequence&, int32_t);
    static int32_t codePointBefore(const std::vector< uint16_t>&, int32_t);
    static int32_t codePointBefore(const std::vector< uint16_t>&, int32_t, int32_t);
    static int32_t toChars(int32_t, const std::vector< uint16_t>&, int32_t);
    static std::vector< uint16_t> toChars(int32_t);
    static int32_t codePointCount(const ::java::lang::CharSequence&, int32_t, int32_t);
    static int32_t codePointCount(const std::vector< uint16_t>&, int32_t, int32_t);
    static int32_t offsetByCodePoints(const ::java::lang::CharSequence&, int32_t, int32_t);
    static int32_t offsetByCodePoints(const std::vector< uint16_t>&, int32_t, int32_t, int32_t, int32_t);
    static int32_t digit(uint16_t, int32_t);
    static int32_t digit(int32_t, int32_t);
    bool equals(const ::java::lang::Object&) const;
    static uint16_t forDigit(int32_t, int32_t);
    static int32_t getNumericValue(uint16_t);
    static int32_t getNumericValue(int32_t);
    static int32_t getType(uint16_t);
    static int32_t getType(int32_t);
    static int8_t getDirectionality(uint16_t);
    static int8_t getDirectionality(int32_t);
    static bool isMirrored(uint16_t);
    static bool isMirrored(int32_t);
    int32_t hashCode() const;
    static bool isDefined(uint16_t);
    static bool isDefined(int32_t);
    static bool isDigit(uint16_t);
    static bool isDigit(int32_t);
    static bool isIdentifierIgnorable(uint16_t);
    static bool isIdentifierIgnorable(int32_t);
    static bool isISOControl(uint16_t);
    static bool isISOControl(int32_t);
    static bool isJavaIdentifierPart(uint16_t);
    static bool isJavaIdentifierPart(int32_t);
    static bool isJavaIdentifierStart(uint16_t);
    static bool isJavaIdentifierStart(int32_t);
    static bool isJavaLetter(uint16_t);
    static bool isJavaLetterOrDigit(uint16_t);
    static bool isLetter(uint16_t);
    static bool isLetter(int32_t);
    static bool isLetterOrDigit(uint16_t);
    static bool isLetterOrDigit(int32_t);
    static bool isLowerCase(uint16_t);
    static bool isLowerCase(int32_t);
    static bool isSpace(uint16_t);
    static bool isSpaceChar(uint16_t);
    static bool isSpaceChar(int32_t);
    static bool isTitleCase(uint16_t);
    static bool isTitleCase(int32_t);
    static bool isUnicodeIdentifierPart(uint16_t);
    static bool isUnicodeIdentifierPart(int32_t);
    static bool isUnicodeIdentifierStart(uint16_t);
    static bool isUnicodeIdentifierStart(int32_t);
    static bool isUpperCase(uint16_t);
    static bool isUpperCase(int32_t);
    static bool isWhitespace(uint16_t);
    static bool isWhitespace(int32_t);
    static uint16_t reverseBytes(uint16_t);
    static uint16_t toLowerCase(uint16_t);
    static int32_t toLowerCase(int32_t);
    ::java::lang::String toString() const;
    static ::java::lang::String toString(uint16_t);
    static uint16_t toTitleCase(uint16_t);
    static int32_t toTitleCase(int32_t);
    static uint16_t toUpperCase(uint16_t);
    static int32_t toUpperCase(int32_t);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}

#include "java.lang.Character_Subset.hpp"
#include "java.lang.Character_UnicodeBlock.hpp"


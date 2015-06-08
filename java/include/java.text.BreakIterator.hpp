#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class BreakIterator; } }
namespace java { namespace text { class CharacterIterator; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class BreakIterator : public virtual ::java::lang::Object,
                      public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BreakIterator(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BreakIterator(const ::java::text::BreakIterator& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    BreakIterator(::java::text::BreakIterator&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::BreakIterator& operator=(const ::java::text::BreakIterator& x) {obj = x.obj; return *this;}
    ::java::text::BreakIterator& operator=(::java::text::BreakIterator&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::util::Locale> getAvailableLocales();
    static ::java::text::BreakIterator getCharacterInstance();
    static ::java::text::BreakIterator getCharacterInstance(const ::java::util::Locale&);
    static ::java::text::BreakIterator getLineInstance();
    static ::java::text::BreakIterator getLineInstance(const ::java::util::Locale&);
    static ::java::text::BreakIterator getSentenceInstance();
    static ::java::text::BreakIterator getSentenceInstance(const ::java::util::Locale&);
    static ::java::text::BreakIterator getWordInstance();
    static ::java::text::BreakIterator getWordInstance(const ::java::util::Locale&);
    bool isBoundary(int32_t) const;
    int32_t preceding(int32_t) const;
    void setText(const ::java::lang::String&) const;
    int32_t current() const;
    int32_t first() const;
    int32_t following(int32_t) const;
    ::java::text::CharacterIterator getText() const;
    int32_t last() const;
    int32_t next() const;
    int32_t next(int32_t) const;
    int32_t previous() const;
    void setText(const ::java::text::CharacterIterator&) const;
    ::java::lang::Object clone() const;

};
}
}



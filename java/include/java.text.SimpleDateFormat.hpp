#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.DateFormat.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace text { class AttributedCharacterIterator; } }
namespace java { namespace text { class DateFormatSymbols; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class ParsePosition; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class SimpleDateFormat : public virtual ::java::lang::Object,
                         public virtual ::java::text::DateFormat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleDateFormat(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::text::DateFormat(_obj), ::java::text::Format(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleDateFormat(const ::java::text::SimpleDateFormat& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::DateFormat((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj;}
    SimpleDateFormat(::java::text::SimpleDateFormat&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::DateFormat((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::SimpleDateFormat& operator=(const ::java::text::SimpleDateFormat& x) {obj = x.obj; return *this;}
    ::java::text::SimpleDateFormat& operator=(::java::text::SimpleDateFormat&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleDateFormat();
    SimpleDateFormat(const ::java::lang::String&);
    SimpleDateFormat(const ::java::lang::String&, const ::java::text::DateFormatSymbols&);
    SimpleDateFormat(const ::java::lang::String&, const ::java::util::Locale&);
    void applyLocalizedPattern(const ::java::lang::String&) const;
    void applyPattern(const ::java::lang::String&) const;
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::text::AttributedCharacterIterator formatToCharacterIterator(const ::java::lang::Object&) const;
    ::java::lang::StringBuffer format(const ::java::util::Date&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const;
    ::java::util::Date get2DigitYearStart() const;
    ::java::text::DateFormatSymbols getDateFormatSymbols() const;
    int32_t hashCode() const;
    ::java::util::Date parse(const ::java::lang::String&, const ::java::text::ParsePosition&) const;
    void set2DigitYearStart(const ::java::util::Date&) const;
    void setDateFormatSymbols(const ::java::text::DateFormatSymbols&) const;
    ::java::lang::String toLocalizedPattern() const;
    ::java::lang::String toPattern() const;

};
}
}



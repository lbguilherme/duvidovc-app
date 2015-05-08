#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.Format.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace text { class DateFormat; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class NumberFormat; } }
namespace java { namespace text { class ParsePosition; } }
namespace java { namespace util { class Calendar; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class TimeZone; } }

namespace java {
namespace text {
class DateFormat : public virtual ::java::lang::Object,
                   public virtual ::java::text::Format {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateFormat(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::text::Format(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateFormat(const ::java::text::DateFormat& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj;}
    DateFormat(::java::text::DateFormat&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::DateFormat& operator=(const ::java::text::DateFormat& x) {obj = x.obj; return *this;}
    ::java::text::DateFormat& operator=(::java::text::DateFormat&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer format(const ::java::lang::Object&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::lang::String format(const ::java::util::Date&) const ;
    ::java::lang::StringBuffer format(const ::java::util::Date&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    static std::vector< ::java::util::Locale> getAvailableLocales();
    ::java::util::Calendar getCalendar() const ;
    static ::java::text::DateFormat getDateInstance();
    static ::java::text::DateFormat getDateInstance(int32_t);
    static ::java::text::DateFormat getDateInstance(int32_t, const ::java::util::Locale&);
    static ::java::text::DateFormat getDateTimeInstance();
    static ::java::text::DateFormat getDateTimeInstance(int32_t, int32_t);
    static ::java::text::DateFormat getDateTimeInstance(int32_t, int32_t, const ::java::util::Locale&);
    static ::java::text::DateFormat getInstance();
    ::java::text::NumberFormat getNumberFormat() const ;
    static ::java::text::DateFormat getTimeInstance();
    static ::java::text::DateFormat getTimeInstance(int32_t);
    static ::java::text::DateFormat getTimeInstance(int32_t, const ::java::util::Locale&);
    ::java::util::TimeZone getTimeZone() const ;
    int32_t hashCode() const ;
    bool isLenient() const ;
    ::java::util::Date parse(const ::java::lang::String&) const ;
    ::java::util::Date parse(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;
    ::java::lang::Object parseObject(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;
    void setCalendar(const ::java::util::Calendar&) const ;
    void setLenient(bool) const ;
    void setNumberFormat(const ::java::text::NumberFormat&) const ;
    void setTimeZone(const ::java::util::TimeZone&) const ;

};
}
}

#include "java.text.DateFormat_Field.hpp"


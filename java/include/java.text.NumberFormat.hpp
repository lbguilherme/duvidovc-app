#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.Format.hpp"

namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace math { class RoundingMode; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class NumberFormat; } }
namespace java { namespace text { class ParsePosition; } }
namespace java { namespace util { class Currency; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class NumberFormat : public virtual ::java::lang::Object,
                     public virtual ::java::text::Format {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberFormat(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::text::Format(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberFormat(const ::java::text::NumberFormat& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj;}
    NumberFormat(::java::text::NumberFormat&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::NumberFormat& operator=(const ::java::text::NumberFormat& x) {obj = x.obj; return *this;}
    ::java::text::NumberFormat& operator=(::java::text::NumberFormat&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String format(double) const;
    ::java::lang::StringBuffer format(double, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const;
    ::java::lang::String format(int64_t) const;
    ::java::lang::StringBuffer format(int64_t, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const;
    ::java::lang::StringBuffer format(const ::java::lang::Object&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const;
    static std::vector< ::java::util::Locale> getAvailableLocales();
    ::java::util::Currency getCurrency() const;
    static ::java::text::NumberFormat getCurrencyInstance();
    static ::java::text::NumberFormat getCurrencyInstance(const ::java::util::Locale&);
    static ::java::text::NumberFormat getIntegerInstance();
    static ::java::text::NumberFormat getIntegerInstance(const ::java::util::Locale&);
    static ::java::text::NumberFormat getInstance();
    static ::java::text::NumberFormat getInstance(const ::java::util::Locale&);
    int32_t getMaximumFractionDigits() const;
    int32_t getMaximumIntegerDigits() const;
    int32_t getMinimumFractionDigits() const;
    int32_t getMinimumIntegerDigits() const;
    static ::java::text::NumberFormat getNumberInstance();
    static ::java::text::NumberFormat getNumberInstance(const ::java::util::Locale&);
    static ::java::text::NumberFormat getPercentInstance();
    static ::java::text::NumberFormat getPercentInstance(const ::java::util::Locale&);
    int32_t hashCode() const;
    bool isGroupingUsed() const;
    bool isParseIntegerOnly() const;
    ::java::lang::Number parse(const ::java::lang::String&) const;
    ::java::lang::Number parse(const ::java::lang::String&, const ::java::text::ParsePosition&) const;
    ::java::lang::Object parseObject(const ::java::lang::String&, const ::java::text::ParsePosition&) const;
    void setCurrency(const ::java::util::Currency&) const;
    void setGroupingUsed(bool) const;
    void setMaximumFractionDigits(int32_t) const;
    void setMaximumIntegerDigits(int32_t) const;
    void setMinimumFractionDigits(int32_t) const;
    void setMinimumIntegerDigits(int32_t) const;
    void setParseIntegerOnly(bool) const;
    ::java::math::RoundingMode getRoundingMode() const;
    void setRoundingMode(const ::java::math::RoundingMode&) const;

};
}
}

#include "java.text.NumberFormat_Field.hpp"


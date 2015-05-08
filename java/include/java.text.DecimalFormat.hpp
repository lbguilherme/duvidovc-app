#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.text.NumberFormat.hpp"

namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }
namespace java { namespace math { class RoundingMode; } }
namespace java { namespace text { class AttributedCharacterIterator; } }
namespace java { namespace text { class DecimalFormatSymbols; } }
namespace java { namespace text { class FieldPosition; } }
namespace java { namespace text { class ParsePosition; } }
namespace java { namespace util { class Currency; } }

namespace java {
namespace text {
class DecimalFormat : public virtual ::java::lang::Object,
                      public virtual ::java::text::NumberFormat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DecimalFormat(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::text::Format(_obj), ::java::text::NumberFormat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DecimalFormat(const ::java::text::DecimalFormat& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {obj = x.obj;}
    DecimalFormat(::java::text::DecimalFormat&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::text::Format((jobject)0), ::java::text::NumberFormat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::DecimalFormat& operator=(const ::java::text::DecimalFormat& x) {obj = x.obj; return *this;}
    ::java::text::DecimalFormat& operator=(::java::text::DecimalFormat&& x) {obj = std::move(x.obj); return *this;}
    
    DecimalFormat();
    DecimalFormat(const ::java::lang::String&);
    DecimalFormat(const ::java::lang::String&, const ::java::text::DecimalFormatSymbols&);
    void applyLocalizedPattern(const ::java::lang::String&) const ;
    void applyPattern(const ::java::lang::String&) const ;
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::text::AttributedCharacterIterator formatToCharacterIterator(const ::java::lang::Object&) const ;
    ::java::lang::StringBuffer format(double, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::lang::StringBuffer format(int64_t, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::lang::StringBuffer format(const ::java::lang::Object&, const ::java::lang::StringBuffer&, const ::java::text::FieldPosition&) const ;
    ::java::text::DecimalFormatSymbols getDecimalFormatSymbols() const ;
    ::java::util::Currency getCurrency() const ;
    int32_t getGroupingSize() const ;
    int32_t getMultiplier() const ;
    ::java::lang::String getNegativePrefix() const ;
    ::java::lang::String getNegativeSuffix() const ;
    ::java::lang::String getPositivePrefix() const ;
    ::java::lang::String getPositiveSuffix() const ;
    int32_t hashCode() const ;
    bool isDecimalSeparatorAlwaysShown() const ;
    bool isParseBigDecimal() const ;
    void setParseIntegerOnly(bool) const ;
    bool isParseIntegerOnly() const ;
    ::java::lang::Number parse(const ::java::lang::String&, const ::java::text::ParsePosition&) const ;
    void setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols&) const ;
    void setCurrency(const ::java::util::Currency&) const ;
    void setDecimalSeparatorAlwaysShown(bool) const ;
    void setGroupingSize(int32_t) const ;
    void setGroupingUsed(bool) const ;
    bool isGroupingUsed() const ;
    void setMaximumFractionDigits(int32_t) const ;
    void setMaximumIntegerDigits(int32_t) const ;
    void setMinimumFractionDigits(int32_t) const ;
    void setMinimumIntegerDigits(int32_t) const ;
    void setMultiplier(int32_t) const ;
    void setNegativePrefix(const ::java::lang::String&) const ;
    void setNegativeSuffix(const ::java::lang::String&) const ;
    void setPositivePrefix(const ::java::lang::String&) const ;
    void setPositiveSuffix(const ::java::lang::String&) const ;
    void setParseBigDecimal(bool) const ;
    ::java::lang::String toLocalizedPattern() const ;
    ::java::lang::String toPattern() const ;
    ::java::math::RoundingMode getRoundingMode() const ;
    void setRoundingMode(const ::java::math::RoundingMode&) const ;

};
}
}



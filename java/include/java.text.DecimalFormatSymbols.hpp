#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace text { class DecimalFormatSymbols; } }
namespace java { namespace util { class Currency; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class DecimalFormatSymbols : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable,
                             public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DecimalFormatSymbols(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DecimalFormatSymbols(const ::java::text::DecimalFormatSymbols& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    DecimalFormatSymbols(::java::text::DecimalFormatSymbols&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::DecimalFormatSymbols& operator=(const ::java::text::DecimalFormatSymbols& x) {obj = x.obj; return *this;}
    ::java::text::DecimalFormatSymbols& operator=(::java::text::DecimalFormatSymbols&& x) {obj = std::move(x.obj); return *this;}
    
    DecimalFormatSymbols();
    DecimalFormatSymbols(const ::java::util::Locale&);
    static ::java::text::DecimalFormatSymbols getInstance();
    static ::java::text::DecimalFormatSymbols getInstance(const ::java::util::Locale&);
    static std::vector< ::java::util::Locale> getAvailableLocales();
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    ::java::util::Currency getCurrency() const;
    ::java::lang::String getInternationalCurrencySymbol() const;
    ::java::lang::String getCurrencySymbol() const;
    uint16_t getDecimalSeparator() const;
    uint16_t getDigit() const;
    uint16_t getGroupingSeparator() const;
    ::java::lang::String getInfinity() const;
    uint16_t getMinusSign() const;
    uint16_t getMonetaryDecimalSeparator() const;
    ::java::lang::String getNaN() const;
    uint16_t getPatternSeparator() const;
    uint16_t getPercent() const;
    uint16_t getPerMill() const;
    uint16_t getZeroDigit() const;
    ::java::lang::String getExponentSeparator() const;
    int32_t hashCode() const;
    void setCurrency(const ::java::util::Currency&) const;
    void setInternationalCurrencySymbol(const ::java::lang::String&) const;
    void setCurrencySymbol(const ::java::lang::String&) const;
    void setDecimalSeparator(uint16_t) const;
    void setDigit(uint16_t) const;
    void setGroupingSeparator(uint16_t) const;
    void setInfinity(const ::java::lang::String&) const;
    void setMinusSign(uint16_t) const;
    void setMonetaryDecimalSeparator(uint16_t) const;
    void setNaN(const ::java::lang::String&) const;
    void setPatternSeparator(uint16_t) const;
    void setPercent(uint16_t) const;
    void setPerMill(uint16_t) const;
    void setZeroDigit(uint16_t) const;
    void setExponentSeparator(const ::java::lang::String&) const;

};
}
}



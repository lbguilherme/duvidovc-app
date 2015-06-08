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
namespace java { namespace text { class DateFormatSymbols; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace text {
class DateFormatSymbols : public virtual ::java::lang::Object,
                          public virtual ::java::io::Serializable,
                          public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DateFormatSymbols(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DateFormatSymbols(const ::java::text::DateFormatSymbols& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    DateFormatSymbols(::java::text::DateFormatSymbols&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::text::DateFormatSymbols& operator=(const ::java::text::DateFormatSymbols& x) {obj = x.obj; return *this;}
    ::java::text::DateFormatSymbols& operator=(::java::text::DateFormatSymbols&& x) {obj = std::move(x.obj); return *this;}
    
    DateFormatSymbols();
    DateFormatSymbols(const ::java::util::Locale&);
    static ::java::text::DateFormatSymbols getInstance();
    static ::java::text::DateFormatSymbols getInstance(const ::java::util::Locale&);
    static std::vector< ::java::util::Locale> getAvailableLocales();
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    ::java::lang::String toString() const;
    std::vector< ::java::lang::String> getAmPmStrings() const;
    std::vector< ::java::lang::String> getEras() const;
    ::java::lang::String getLocalPatternChars() const;
    std::vector< ::java::lang::String> getMonths() const;
    std::vector< ::java::lang::String> getShortMonths() const;
    std::vector< ::java::lang::String> getShortWeekdays() const;
    std::vector< ::java::lang::String> getWeekdays() const;
    std::vector< ::java::lang::String> getZoneStrings() const;
    int32_t hashCode() const;
    void setAmPmStrings(const std::vector< ::java::lang::String>&) const;
    void setEras(const std::vector< ::java::lang::String>&) const;
    void setLocalPatternChars(const ::java::lang::String&) const;
    void setMonths(const std::vector< ::java::lang::String>&) const;
    void setShortMonths(const std::vector< ::java::lang::String>&) const;
    void setShortWeekdays(const std::vector< ::java::lang::String>&) const;
    void setWeekdays(const std::vector< ::java::lang::String>&) const;
    void setZoneStrings(const std::vector< ::java::lang::String>&) const;

};
}
}



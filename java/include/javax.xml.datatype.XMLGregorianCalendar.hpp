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
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace util { class GregorianCalendar; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class TimeZone; } }
namespace javax { namespace xml { namespace datatype { class Duration; } } }
namespace javax { namespace xml { namespace datatype { class XMLGregorianCalendar; } } }
namespace javax { namespace xml { namespace namespace_ { class QName; } } }

namespace javax {
namespace xml {
namespace datatype {
class XMLGregorianCalendar : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit XMLGregorianCalendar(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    XMLGregorianCalendar(const ::javax::xml::datatype::XMLGregorianCalendar& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    XMLGregorianCalendar(::javax::xml::datatype::XMLGregorianCalendar&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::datatype::XMLGregorianCalendar& operator=(const ::javax::xml::datatype::XMLGregorianCalendar& x) {obj = x.obj; return *this;}
    ::javax::xml::datatype::XMLGregorianCalendar& operator=(::javax::xml::datatype::XMLGregorianCalendar&& x) {obj = std::move(x.obj); return *this;}
    
    XMLGregorianCalendar();
    void clear() const;
    void reset() const;
    void setYear(const ::java::math::BigInteger&) const;
    void setYear(int32_t) const;
    void setMonth(int32_t) const;
    void setDay(int32_t) const;
    void setTimezone(int32_t) const;
    void setTime(int32_t, int32_t, int32_t) const;
    void setHour(int32_t) const;
    void setMinute(int32_t) const;
    void setSecond(int32_t) const;
    void setMillisecond(int32_t) const;
    void setFractionalSecond(const ::java::math::BigDecimal&) const;
    void setTime(int32_t, int32_t, int32_t, const ::java::math::BigDecimal&) const;
    void setTime(int32_t, int32_t, int32_t, int32_t) const;
    ::java::math::BigInteger getEon() const;
    int32_t getYear() const;
    ::java::math::BigInteger getEonAndYear() const;
    int32_t getMonth() const;
    int32_t getDay() const;
    int32_t getTimezone() const;
    int32_t getHour() const;
    int32_t getMinute() const;
    int32_t getSecond() const;
    int32_t getMillisecond() const;
    ::java::math::BigDecimal getFractionalSecond() const;
    int32_t compare(const ::javax::xml::datatype::XMLGregorianCalendar&) const;
    ::javax::xml::datatype::XMLGregorianCalendar normalize() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toXMLFormat() const;
    ::javax::xml::namespace_::QName getXMLSchemaType() const;
    ::java::lang::String toString() const;
    bool isValid() const;
    void add(const ::javax::xml::datatype::Duration&) const;
    ::java::util::GregorianCalendar toGregorianCalendar() const;
    ::java::util::GregorianCalendar toGregorianCalendar(const ::java::util::TimeZone&, const ::java::util::Locale&, const ::javax::xml::datatype::XMLGregorianCalendar&) const;
    ::java::util::TimeZone getTimeZone(int32_t) const;
    ::java::lang::Object clone() const;

};
}
}
}



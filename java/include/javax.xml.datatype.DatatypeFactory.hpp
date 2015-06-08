#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace util { class GregorianCalendar; } }
namespace javax { namespace xml { namespace datatype { class DatatypeFactory; } } }
namespace javax { namespace xml { namespace datatype { class Duration; } } }
namespace javax { namespace xml { namespace datatype { class XMLGregorianCalendar; } } }

namespace javax {
namespace xml {
namespace datatype {
class DatatypeFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatatypeFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatatypeFactory(const ::javax::xml::datatype::DatatypeFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DatatypeFactory(::javax::xml::datatype::DatatypeFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::datatype::DatatypeFactory& operator=(const ::javax::xml::datatype::DatatypeFactory& x) {obj = x.obj; return *this;}
    ::javax::xml::datatype::DatatypeFactory& operator=(::javax::xml::datatype::DatatypeFactory&& x) {obj = std::move(x.obj); return *this;}
    
    static ::javax::xml::datatype::DatatypeFactory newInstance();
    static ::javax::xml::datatype::DatatypeFactory newInstance(const ::java::lang::String&, const ::java::lang::ClassLoader&);
    ::javax::xml::datatype::Duration newDuration(const ::java::lang::String&) const;
    ::javax::xml::datatype::Duration newDuration(int64_t) const;
    ::javax::xml::datatype::Duration newDuration(bool, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigDecimal&) const;
    ::javax::xml::datatype::Duration newDuration(bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    ::javax::xml::datatype::Duration newDurationDayTime(const ::java::lang::String&) const;
    ::javax::xml::datatype::Duration newDurationDayTime(int64_t) const;
    ::javax::xml::datatype::Duration newDurationDayTime(bool, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&) const;
    ::javax::xml::datatype::Duration newDurationDayTime(bool, int32_t, int32_t, int32_t, int32_t) const;
    ::javax::xml::datatype::Duration newDurationYearMonth(const ::java::lang::String&) const;
    ::javax::xml::datatype::Duration newDurationYearMonth(int64_t) const;
    ::javax::xml::datatype::Duration newDurationYearMonth(bool, const ::java::math::BigInteger&, const ::java::math::BigInteger&) const;
    ::javax::xml::datatype::Duration newDurationYearMonth(bool, int32_t, int32_t) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar() const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(const ::java::lang::String&) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(const ::java::util::GregorianCalendar&) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(const ::java::math::BigInteger&, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::math::BigDecimal&, int32_t) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendar(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarDate(int32_t, int32_t, int32_t, int32_t) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarTime(int32_t, int32_t, int32_t, int32_t) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarTime(int32_t, int32_t, int32_t, const ::java::math::BigDecimal&, int32_t) const;
    ::javax::xml::datatype::XMLGregorianCalendar newXMLGregorianCalendarTime(int32_t, int32_t, int32_t, int32_t, int32_t) const;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigDecimal; } }
namespace java { namespace util { class Calendar; } }
namespace java { namespace util { class Date; } }
namespace javax { namespace xml { namespace datatype { class DatatypeConstants_Field; } } }
namespace javax { namespace xml { namespace datatype { class Duration; } } }
namespace javax { namespace xml { namespace namespace_ { class QName; } } }

namespace javax {
namespace xml {
namespace datatype {
class Duration : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Duration(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Duration(const ::javax::xml::datatype::Duration& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Duration(::javax::xml::datatype::Duration&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::xml::datatype::Duration& operator=(const ::javax::xml::datatype::Duration& x) {obj = x.obj; return *this;}
    ::javax::xml::datatype::Duration& operator=(::javax::xml::datatype::Duration&& x) {obj = std::move(x.obj); return *this;}
    
    Duration();
    ::javax::xml::namespace_::QName getXMLSchemaType() const;
    int32_t getSign() const;
    int32_t getYears() const;
    int32_t getMonths() const;
    int32_t getDays() const;
    int32_t getHours() const;
    int32_t getMinutes() const;
    int32_t getSeconds() const;
    int64_t getTimeInMillis(const ::java::util::Calendar&) const;
    int64_t getTimeInMillis(const ::java::util::Date&) const;
    ::java::lang::Number getField(const ::javax::xml::datatype::DatatypeConstants_Field&) const;
    bool isSet(const ::javax::xml::datatype::DatatypeConstants_Field&) const;
    ::javax::xml::datatype::Duration add(const ::javax::xml::datatype::Duration&) const;
    void addTo(const ::java::util::Calendar&) const;
    void addTo(const ::java::util::Date&) const;
    ::javax::xml::datatype::Duration subtract(const ::javax::xml::datatype::Duration&) const;
    ::javax::xml::datatype::Duration multiply(int32_t) const;
    ::javax::xml::datatype::Duration multiply(const ::java::math::BigDecimal&) const;
    ::javax::xml::datatype::Duration negate() const;
    ::javax::xml::datatype::Duration normalizeWith(const ::java::util::Calendar&) const;
    int32_t compare(const ::javax::xml::datatype::Duration&) const;
    bool isLongerThan(const ::javax::xml::datatype::Duration&) const;
    bool isShorterThan(const ::javax::xml::datatype::Duration&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t hashCode() const;
    ::java::lang::String toString() const;

};
}
}
}



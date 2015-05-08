#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Calendar.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class TimeZone; } }

namespace java {
namespace util {
class GregorianCalendar : public virtual ::java::lang::Object,
                          public virtual ::java::util::Calendar {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GregorianCalendar(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj), ::java::util::Calendar(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GregorianCalendar(const ::java::util::GregorianCalendar& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {obj = x.obj;}
    GregorianCalendar(::java::util::GregorianCalendar&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::GregorianCalendar& operator=(const ::java::util::GregorianCalendar& x) {obj = x.obj; return *this;}
    ::java::util::GregorianCalendar& operator=(::java::util::GregorianCalendar&& x) {obj = std::move(x.obj); return *this;}
    
    GregorianCalendar();
    GregorianCalendar(int32_t, int32_t, int32_t);
    GregorianCalendar(int32_t, int32_t, int32_t, int32_t, int32_t);
    GregorianCalendar(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    GregorianCalendar(const ::java::util::Locale&);
    GregorianCalendar(const ::java::util::TimeZone&);
    GregorianCalendar(const ::java::util::TimeZone&, const ::java::util::Locale&);
    void add(int32_t, int32_t) const ;
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t getActualMaximum(int32_t) const ;
    int32_t getActualMinimum(int32_t) const ;
    int32_t getGreatestMinimum(int32_t) const ;
    ::java::util::Date getGregorianChange() const ;
    int32_t getLeastMaximum(int32_t) const ;
    int32_t getMaximum(int32_t) const ;
    int32_t getMinimum(int32_t) const ;
    int32_t hashCode() const ;
    bool isLeapYear(int32_t) const ;
    void roll(int32_t, int32_t) const ;
    void roll(int32_t, bool) const ;
    void setGregorianChange(const ::java::util::Date&) const ;
    void setFirstDayOfWeek(int32_t) const ;
    void setMinimalDaysInFirstWeek(int32_t) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "java.lang.Comparable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Calendar; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Locale; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class TimeZone; } }

namespace java {
namespace util {
class Calendar : public virtual ::java::lang::Object,
                 public virtual ::java::io::Serializable,
                 public virtual ::java::lang::Cloneable,
                 public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Calendar(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Calendar(const ::java::util::Calendar& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Calendar(::java::util::Calendar&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Calendar& operator=(const ::java::util::Calendar& x) {obj = x.obj; return *this;}
    ::java::util::Calendar& operator=(::java::util::Calendar&& x) {obj = std::move(x.obj); return *this;}
    
    void add(int32_t, int32_t) const ;
    bool after(const ::java::lang::Object&) const ;
    bool before(const ::java::lang::Object&) const ;
    void clear() const ;
    void clear(int32_t) const ;
    ::java::lang::Object clone() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t get(int32_t) const ;
    int32_t getActualMaximum(int32_t) const ;
    int32_t getActualMinimum(int32_t) const ;
    static std::vector< ::java::util::Locale> getAvailableLocales();
    int32_t getFirstDayOfWeek() const ;
    int32_t getGreatestMinimum(int32_t) const ;
    static ::java::util::Calendar getInstance();
    static ::java::util::Calendar getInstance(const ::java::util::Locale&);
    static ::java::util::Calendar getInstance(const ::java::util::TimeZone&);
    static ::java::util::Calendar getInstance(const ::java::util::TimeZone&, const ::java::util::Locale&);
    int32_t getLeastMaximum(int32_t) const ;
    int32_t getMaximum(int32_t) const ;
    int32_t getMinimalDaysInFirstWeek() const ;
    int32_t getMinimum(int32_t) const ;
    ::java::util::Date getTime() const ;
    int64_t getTimeInMillis() const ;
    ::java::util::TimeZone getTimeZone() const ;
    int32_t hashCode() const ;
    bool isLenient() const ;
    bool isSet(int32_t) const ;
    void roll(int32_t, int32_t) const ;
    void roll(int32_t, bool) const ;
    void set(int32_t, int32_t) const ;
    void set(int32_t, int32_t, int32_t) const ;
    void set(int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void set(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const ;
    void setFirstDayOfWeek(int32_t) const ;
    void setLenient(bool) const ;
    void setMinimalDaysInFirstWeek(int32_t) const ;
    void setTime(const ::java::util::Date&) const ;
    void setTimeInMillis(int64_t) const ;
    void setTimeZone(const ::java::util::TimeZone&) const ;
    ::java::lang::String toString() const ;
    int32_t compareTo(const ::java::util::Calendar&) const ;
    ::java::lang::String getDisplayName(int32_t, int32_t, const ::java::util::Locale&) const ;
    ::java::util::Map getDisplayNames(int32_t, int32_t, const ::java::util::Locale&) const ;
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}



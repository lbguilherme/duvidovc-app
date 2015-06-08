#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.TimeZone.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class TimeZone; } }

namespace java {
namespace util {
class SimpleTimeZone : public virtual ::java::lang::Object,
                       public virtual ::java::util::TimeZone {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SimpleTimeZone(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::util::TimeZone(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SimpleTimeZone(const ::java::util::SimpleTimeZone& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::TimeZone((jobject)0) {obj = x.obj;}
    SimpleTimeZone(::java::util::SimpleTimeZone&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::TimeZone((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::SimpleTimeZone& operator=(const ::java::util::SimpleTimeZone& x) {obj = x.obj; return *this;}
    ::java::util::SimpleTimeZone& operator=(::java::util::SimpleTimeZone&& x) {obj = std::move(x.obj); return *this;}
    
    SimpleTimeZone(int32_t, const ::java::lang::String&);
    SimpleTimeZone(int32_t, const ::java::lang::String&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    SimpleTimeZone(int32_t, const ::java::lang::String&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    SimpleTimeZone(int32_t, const ::java::lang::String&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    ::java::lang::Object clone() const;
    bool equals(const ::java::lang::Object&) const;
    int32_t getDSTSavings() const;
    int32_t getOffset(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    int32_t getOffset(int64_t) const;
    int32_t getRawOffset() const;
    int32_t hashCode() const;
    bool hasSameRules(const ::java::util::TimeZone&) const;
    bool inDaylightTime(const ::java::util::Date&) const;
    void setDSTSavings(int32_t) const;
    void setEndRule(int32_t, int32_t, int32_t) const;
    void setEndRule(int32_t, int32_t, int32_t, int32_t) const;
    void setEndRule(int32_t, int32_t, int32_t, int32_t, bool) const;
    void setRawOffset(int32_t) const;
    void setStartRule(int32_t, int32_t, int32_t) const;
    void setStartRule(int32_t, int32_t, int32_t, int32_t) const;
    void setStartRule(int32_t, int32_t, int32_t, int32_t, bool) const;
    void setStartYear(int32_t) const;
    ::java::lang::String toString() const;
    bool useDaylightTime() const;

};
}
}



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
namespace java { namespace util { class Date; } }

namespace java {
namespace util {
class Date : public virtual ::java::lang::Object,
             public virtual ::java::io::Serializable,
             public virtual ::java::lang::Cloneable,
             public virtual ::java::lang::Comparable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Date(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Date(const ::java::util::Date& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj;}
    Date(::java::util::Date&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Date& operator=(const ::java::util::Date& x) {obj = x.obj; return *this;}
    ::java::util::Date& operator=(::java::util::Date&& x) {obj = std::move(x.obj); return *this;}
    
    Date();
    Date(int32_t, int32_t, int32_t);
    Date(int32_t, int32_t, int32_t, int32_t, int32_t);
    Date(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    Date(int64_t);
    Date(const ::java::lang::String&);
    bool after(const ::java::util::Date&) const;
    bool before(const ::java::util::Date&) const;
    ::java::lang::Object clone() const;
    int32_t compareTo(const ::java::util::Date&) const;
    bool equals(const ::java::lang::Object&) const;
    int32_t getDate() const;
    int32_t getDay() const;
    int32_t getHours() const;
    int32_t getMinutes() const;
    int32_t getMonth() const;
    int32_t getSeconds() const;
    int64_t getTime() const;
    int32_t getTimezoneOffset() const;
    int32_t getYear() const;
    int32_t hashCode() const;
    static int64_t parse(const ::java::lang::String&);
    void setDate(int32_t) const;
    void setHours(int32_t) const;
    void setMinutes(int32_t) const;
    void setMonth(int32_t) const;
    void setSeconds(int32_t) const;
    void setTime(int64_t) const;
    void setYear(int32_t) const;
    ::java::lang::String toGMTString() const;
    ::java::lang::String toLocaleString() const;
    ::java::lang::String toString() const;
    static int64_t UTC(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    int32_t compareTo(const ::java::lang::Object&) const;

};
}
}



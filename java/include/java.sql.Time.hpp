#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Date.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Time; } }

namespace java {
namespace sql {
class Time : public virtual ::java::lang::Object,
             public virtual ::java::util::Date {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Time(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj), ::java::util::Date(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Time(const ::java::sql::Time& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {obj = x.obj;}
    Time(::java::sql::Time&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Time& operator=(const ::java::sql::Time& x) {obj = x.obj; return *this;}
    ::java::sql::Time& operator=(::java::sql::Time&& x) {obj = std::move(x.obj); return *this;}
    
    Time(int32_t, int32_t, int32_t);
    Time(int64_t);
    int32_t getDate() const ;
    int32_t getDay() const ;
    int32_t getMonth() const ;
    int32_t getYear() const ;
    void setDate(int32_t) const ;
    void setMonth(int32_t) const ;
    void setYear(int32_t) const ;
    void setTime(int64_t) const ;
    ::java::lang::String toString() const ;
    static ::java::sql::Time valueOf(const ::java::lang::String&);

};
}
}



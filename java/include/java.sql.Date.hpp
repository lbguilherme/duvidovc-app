#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Date.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Date; } }

namespace java {
namespace sql {
class Date : public virtual ::java::lang::Object,
             public virtual ::java::util::Date {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Date(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj), ::java::util::Date(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Date(const ::java::sql::Date& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {obj = x.obj;}
    Date(::java::sql::Date&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Date& operator=(const ::java::sql::Date& x) {obj = x.obj; return *this;}
    ::java::sql::Date& operator=(::java::sql::Date&& x) {obj = std::move(x.obj); return *this;}
    
    Date(int32_t, int32_t, int32_t);
    Date(int64_t);
    int32_t getHours() const;
    int32_t getMinutes() const;
    int32_t getSeconds() const;
    void setHours(int32_t) const;
    void setMinutes(int32_t) const;
    void setSeconds(int32_t) const;
    void setTime(int64_t) const;
    ::java::lang::String toString() const;
    static ::java::sql::Date valueOf(const ::java::lang::String&);

};
}
}



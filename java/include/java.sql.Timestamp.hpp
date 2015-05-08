#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.Date.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Timestamp; } }
namespace java { namespace util { class Date; } }

namespace java {
namespace sql {
class Timestamp : public virtual ::java::lang::Object,
                  public virtual ::java::util::Date {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Timestamp(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::java::lang::Comparable(_obj), ::java::util::Date(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Timestamp(const ::java::sql::Timestamp& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {obj = x.obj;}
    Timestamp(::java::sql::Timestamp&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Date((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Timestamp& operator=(const ::java::sql::Timestamp& x) {obj = x.obj; return *this;}
    ::java::sql::Timestamp& operator=(::java::sql::Timestamp&& x) {obj = std::move(x.obj); return *this;}
    
    Timestamp(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    Timestamp(int64_t);
    bool after(const ::java::sql::Timestamp&) const ;
    bool before(const ::java::sql::Timestamp&) const ;
    int32_t compareTo(const ::java::util::Date&) const ;
    int32_t compareTo(const ::java::sql::Timestamp&) const ;
    bool equals(const ::java::lang::Object&) const ;
    bool equals(const ::java::sql::Timestamp&) const ;
    int32_t getNanos() const ;
    int64_t getTime() const ;
    void setNanos(int32_t) const ;
    void setTime(int64_t) const ;
    ::java::lang::String toString() const ;
    static ::java::sql::Timestamp valueOf(const ::java::lang::String&);
    int32_t compareTo(const ::java::lang::Object&) const ;

};
}
}



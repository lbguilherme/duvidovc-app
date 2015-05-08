#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Thread; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }

namespace java {
namespace util {
namespace concurrent {
class TimeUnit : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimeUnit(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimeUnit(const ::java::util::concurrent::TimeUnit& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    TimeUnit(::java::util::concurrent::TimeUnit&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::concurrent::TimeUnit& operator=(const ::java::util::concurrent::TimeUnit& x) {obj = x.obj; return *this;}
    ::java::util::concurrent::TimeUnit& operator=(::java::util::concurrent::TimeUnit&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::java::util::concurrent::TimeUnit> values();
    static ::java::util::concurrent::TimeUnit valueOf(const ::java::lang::String&);
    int64_t convert(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    int64_t toNanos(int64_t) const ;
    int64_t toMicros(int64_t) const ;
    int64_t toMillis(int64_t) const ;
    int64_t toSeconds(int64_t) const ;
    int64_t toMinutes(int64_t) const ;
    int64_t toHours(int64_t) const ;
    int64_t toDays(int64_t) const ;
    void timedWait(const ::java::lang::Object&, int64_t) const ;
    void timedJoin(const ::java::lang::Thread&, int64_t) const ;
    void sleep(int64_t) const ;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class TimerTask; } }

namespace java {
namespace util {
class Timer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Timer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Timer(const ::java::util::Timer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Timer(::java::util::Timer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Timer& operator=(const ::java::util::Timer& x) {obj = x.obj; return *this;}
    ::java::util::Timer& operator=(::java::util::Timer&& x) {obj = std::move(x.obj); return *this;}
    
    Timer(const ::java::lang::String&, bool);
    Timer(const ::java::lang::String&);
    Timer(bool);
    Timer();
    void cancel() const ;
    int32_t purge() const ;
    void schedule(const ::java::util::TimerTask&, const ::java::util::Date&) const ;
    void schedule(const ::java::util::TimerTask&, int64_t) const ;
    void schedule(const ::java::util::TimerTask&, int64_t, int64_t) const ;
    void schedule(const ::java::util::TimerTask&, const ::java::util::Date&, int64_t) const ;
    void scheduleAtFixedRate(const ::java::util::TimerTask&, int64_t, int64_t) const ;
    void scheduleAtFixedRate(const ::java::util::TimerTask&, const ::java::util::Date&, int64_t) const ;

};
}
}



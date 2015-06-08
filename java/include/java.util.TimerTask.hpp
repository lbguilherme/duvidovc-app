#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"


namespace java {
namespace util {
class TimerTask : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimerTask(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimerTask(const ::java::util::TimerTask& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    TimerTask(::java::util::TimerTask&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::TimerTask& operator=(const ::java::util::TimerTask& x) {obj = x.obj; return *this;}
    ::java::util::TimerTask& operator=(::java::util::TimerTask&& x) {obj = std::move(x.obj); return *this;}
    
    bool cancel() const;
    int64_t scheduledExecutionTime() const;
    void run() const;

};
}
}



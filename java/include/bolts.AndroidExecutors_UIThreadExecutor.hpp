#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.concurrent.Executor.hpp"

namespace java { namespace lang { class Runnable; } }

namespace bolts {
class AndroidExecutors_UIThreadExecutor : public virtual ::java::lang::Object,
                                          public virtual ::java::util::concurrent::Executor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidExecutors_UIThreadExecutor(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::Executor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidExecutors_UIThreadExecutor(const ::bolts::AndroidExecutors_UIThreadExecutor& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0) {obj = x.obj;}
    AndroidExecutors_UIThreadExecutor(::bolts::AndroidExecutors_UIThreadExecutor&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AndroidExecutors_UIThreadExecutor& operator=(const ::bolts::AndroidExecutors_UIThreadExecutor& x) {obj = x.obj; return *this;}
    ::bolts::AndroidExecutors_UIThreadExecutor& operator=(::bolts::AndroidExecutors_UIThreadExecutor&& x) {obj = std::move(x.obj); return *this;}
    
    void execute(const ::java::lang::Runnable&) const ;

};
}



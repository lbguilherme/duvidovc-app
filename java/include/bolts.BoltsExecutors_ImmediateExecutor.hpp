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
class BoltsExecutors_ImmediateExecutor : public virtual ::java::lang::Object,
                                         public virtual ::java::util::concurrent::Executor {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BoltsExecutors_ImmediateExecutor(jobject _obj) : ::java::lang::Object(_obj), ::java::util::concurrent::Executor(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BoltsExecutors_ImmediateExecutor(const ::bolts::BoltsExecutors_ImmediateExecutor& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0) {obj = x.obj;}
    BoltsExecutors_ImmediateExecutor(::bolts::BoltsExecutors_ImmediateExecutor&& x) : ::java::lang::Object((jobject)0), ::java::util::concurrent::Executor((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::BoltsExecutors_ImmediateExecutor& operator=(const ::bolts::BoltsExecutors_ImmediateExecutor& x) {obj = x.obj; return *this;}
    ::bolts::BoltsExecutors_ImmediateExecutor& operator=(::bolts::BoltsExecutors_ImmediateExecutor&& x) {obj = std::move(x.obj); return *this;}
    
    void execute(const ::java::lang::Runnable&) const ;

};
}



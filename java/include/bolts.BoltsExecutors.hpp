#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { class ExecutorService; } } }

namespace bolts {
class BoltsExecutors : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BoltsExecutors(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BoltsExecutors(const ::bolts::BoltsExecutors& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    BoltsExecutors(::bolts::BoltsExecutors&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::BoltsExecutors& operator=(const ::bolts::BoltsExecutors& x) {obj = x.obj; return *this;}
    ::bolts::BoltsExecutors& operator=(::bolts::BoltsExecutors&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::concurrent::ExecutorService background();

};
}

#include "bolts.BoltsExecutors_ImmediateExecutor.hpp"


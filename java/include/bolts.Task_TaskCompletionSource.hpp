#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace bolts { class Task; }
namespace java { namespace lang { class Exception; } }

namespace bolts {
class Task_TaskCompletionSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Task_TaskCompletionSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Task_TaskCompletionSource(const ::bolts::Task_TaskCompletionSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Task_TaskCompletionSource(::bolts::Task_TaskCompletionSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::Task_TaskCompletionSource& operator=(const ::bolts::Task_TaskCompletionSource& x) {obj = x.obj; return *this;}
    ::bolts::Task_TaskCompletionSource& operator=(::bolts::Task_TaskCompletionSource&& x) {obj = std::move(x.obj); return *this;}
    
    ::bolts::Task getTask() const ;
    bool trySetCancelled() const ;
    bool trySetError(const ::java::lang::Exception&) const ;
    void setCancelled() const ;
    void setError(const ::java::lang::Exception&) const ;

};
}



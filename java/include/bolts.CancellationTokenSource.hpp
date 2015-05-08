#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace bolts { class CancellationToken; }
namespace java { namespace lang { class String; } }

namespace bolts {
class CancellationTokenSource : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CancellationTokenSource(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CancellationTokenSource(const ::bolts::CancellationTokenSource& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CancellationTokenSource(::bolts::CancellationTokenSource&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::CancellationTokenSource& operator=(const ::bolts::CancellationTokenSource& x) {obj = x.obj; return *this;}
    ::bolts::CancellationTokenSource& operator=(::bolts::CancellationTokenSource&& x) {obj = std::move(x.obj); return *this;}
    
    CancellationTokenSource();
    bool isCancellationRequested() const ;
    ::bolts::CancellationToken getToken() const ;
    void cancel() const ;
    ::java::lang::String toString() const ;

};
}



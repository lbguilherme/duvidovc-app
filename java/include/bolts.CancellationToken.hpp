#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace bolts {
class CancellationToken : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CancellationToken(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CancellationToken(const ::bolts::CancellationToken& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CancellationToken(::bolts::CancellationToken&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::CancellationToken& operator=(const ::bolts::CancellationToken& x) {obj = x.obj; return *this;}
    ::bolts::CancellationToken& operator=(::bolts::CancellationToken&& x) {obj = std::move(x.obj); return *this;}
    
    bool isCancellationRequested() const;
    void throwIfCancellationRequested() const;
    ::java::lang::String toString() const;

};
}



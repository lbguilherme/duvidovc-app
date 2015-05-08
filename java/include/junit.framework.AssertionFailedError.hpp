#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class String; } }

namespace junit {
namespace framework {
class AssertionFailedError : public virtual ::java::lang::Object,
                             public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssertionFailedError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssertionFailedError(const ::junit::framework::AssertionFailedError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AssertionFailedError(::junit::framework::AssertionFailedError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::junit::framework::AssertionFailedError& operator=(const ::junit::framework::AssertionFailedError& x) {obj = x.obj; return *this;}
    ::junit::framework::AssertionFailedError& operator=(::junit::framework::AssertionFailedError&& x) {obj = std::move(x.obj); return *this;}
    
    AssertionFailedError();
    AssertionFailedError(const ::java::lang::String&);

};
}
}



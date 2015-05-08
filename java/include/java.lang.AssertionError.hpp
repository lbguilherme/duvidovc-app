#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Error.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace lang {
class AssertionError : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Error {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AssertionError(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Error(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AssertionError(const ::java::lang::AssertionError& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    AssertionError(::java::lang::AssertionError&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::AssertionError& operator=(const ::java::lang::AssertionError& x) {obj = x.obj; return *this;}
    ::java::lang::AssertionError& operator=(::java::lang::AssertionError&& x) {obj = std::move(x.obj); return *this;}
    
    AssertionError();
    AssertionError(const ::java::lang::Object&);
    AssertionError(bool);
    AssertionError(uint16_t);
    AssertionError(int32_t);
    AssertionError(int64_t);
    AssertionError(float);
    AssertionError(double);

};
}
}



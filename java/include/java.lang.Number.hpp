#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"


namespace java {
namespace lang {
class Number : public virtual ::java::lang::Object,
               public virtual ::java::io::Serializable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Number(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Number(const ::java::lang::Number& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj;}
    Number(::java::lang::Number&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::Number& operator=(const ::java::lang::Number& x) {obj = x.obj; return *this;}
    ::java::lang::Number& operator=(::java::lang::Number&& x) {obj = std::move(x.obj); return *this;}
    
    Number();
    int8_t byteValue() const;
    double doubleValue() const;
    float floatValue() const;
    int32_t intValue() const;
    int64_t longValue() const;
    int16_t shortValue() const;

};
}
}



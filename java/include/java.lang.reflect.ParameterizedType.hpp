#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.reflect.Type.hpp"

namespace java { namespace lang { namespace reflect { class Type; } } }

namespace java {
namespace lang {
namespace reflect {
class ParameterizedType : public virtual ::java::lang::Object,
                          public virtual ::java::lang::reflect::Type {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParameterizedType(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::Type(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParameterizedType(const ::java::lang::reflect::ParameterizedType& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj;}
    ParameterizedType(::java::lang::reflect::ParameterizedType&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::ParameterizedType& operator=(const ::java::lang::reflect::ParameterizedType& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::ParameterizedType& operator=(::java::lang::reflect::ParameterizedType&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::reflect::Type> getActualTypeArguments() const ;
    ::java::lang::reflect::Type getOwnerType() const ;
    ::java::lang::reflect::Type getRawType() const ;

};
}
}
}



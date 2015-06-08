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
class GenericArrayType : public virtual ::java::lang::Object,
                         public virtual ::java::lang::reflect::Type {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GenericArrayType(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::Type(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GenericArrayType(const ::java::lang::reflect::GenericArrayType& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj;}
    GenericArrayType(::java::lang::reflect::GenericArrayType&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::GenericArrayType& operator=(const ::java::lang::reflect::GenericArrayType& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::GenericArrayType& operator=(::java::lang::reflect::GenericArrayType&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::reflect::Type getGenericComponentType() const;

};
}
}
}



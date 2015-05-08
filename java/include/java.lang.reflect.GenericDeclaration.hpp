#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { namespace reflect { class TypeVariable; } } }

namespace java {
namespace lang {
namespace reflect {
class GenericDeclaration : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GenericDeclaration(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GenericDeclaration(const ::java::lang::reflect::GenericDeclaration& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GenericDeclaration(::java::lang::reflect::GenericDeclaration&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::GenericDeclaration& operator=(const ::java::lang::reflect::GenericDeclaration& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::GenericDeclaration& operator=(::java::lang::reflect::GenericDeclaration&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::reflect::TypeVariable> getTypeParameters() const ;

};
}
}
}



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
class WildcardType : public virtual ::java::lang::Object,
                     public virtual ::java::lang::reflect::Type {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WildcardType(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::reflect::Type(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WildcardType(const ::java::lang::reflect::WildcardType& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj;}
    WildcardType(::java::lang::reflect::WildcardType&& x) : ::java::lang::Object((jobject)0), ::java::lang::reflect::Type((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::reflect::WildcardType& operator=(const ::java::lang::reflect::WildcardType& x) {obj = x.obj; return *this;}
    ::java::lang::reflect::WildcardType& operator=(::java::lang::reflect::WildcardType&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< ::java::lang::reflect::Type> getUpperBounds() const ;
    std::vector< ::java::lang::reflect::Type> getLowerBounds() const ;

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }

namespace java {
namespace sql {
class Wrapper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Wrapper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Wrapper(const ::java::sql::Wrapper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Wrapper(::java::sql::Wrapper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::Wrapper& operator=(const ::java::sql::Wrapper& x) {obj = x.obj; return *this;}
    ::java::sql::Wrapper& operator=(::java::sql::Wrapper&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object unwrap(const ::java::lang::Class&) const ;
    bool isWrapperFor(const ::java::lang::Class&) const ;

};
}
}



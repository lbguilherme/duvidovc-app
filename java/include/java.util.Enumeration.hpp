#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace util {
class Enumeration : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Enumeration(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Enumeration(const ::java::util::Enumeration& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Enumeration(::java::util::Enumeration&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Enumeration& operator=(const ::java::util::Enumeration& x) {obj = x.obj; return *this;}
    ::java::util::Enumeration& operator=(::java::util::Enumeration&& x) {obj = std::move(x.obj); return *this;}
    
    bool hasMoreElements() const ;
    ::java::lang::Object nextElement() const ;

};
}
}



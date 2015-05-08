#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace java {
namespace util {
class FormattableFlags : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FormattableFlags(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FormattableFlags(const ::java::util::FormattableFlags& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FormattableFlags(::java::util::FormattableFlags&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::FormattableFlags& operator=(const ::java::util::FormattableFlags& x) {obj = x.obj; return *this;}
    ::java::util::FormattableFlags& operator=(::java::util::FormattableFlags&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



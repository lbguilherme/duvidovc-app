#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace vc {
namespace duvido {
class R_color : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_color(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_color(const ::vc::duvido::R_color& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_color(::vc::duvido::R_color&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::R_color& operator=(const ::vc::duvido::R_color& x) {obj = x.obj; return *this;}
    ::vc::duvido::R_color& operator=(::vc::duvido::R_color&& x) {obj = std::move(x.obj); return *this;}
    
    R_color();

};
}
}



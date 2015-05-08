#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace vc {
namespace duvido {
class R_id : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_id(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_id(const ::vc::duvido::R_id& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_id(::vc::duvido::R_id&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::R_id& operator=(const ::vc::duvido::R_id& x) {obj = x.obj; return *this;}
    ::vc::duvido::R_id& operator=(::vc::duvido::R_id&& x) {obj = std::move(x.obj); return *this;}
    
    R_id();

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace vc {
namespace duvido {
class R : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R(const ::vc::duvido::R& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R(::vc::duvido::R&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::vc::duvido::R& operator=(const ::vc::duvido::R& x) {obj = x.obj; return *this;}
    ::vc::duvido::R& operator=(::vc::duvido::R&& x) {obj = std::move(x.obj); return *this;}
    
    R();

};
}
}

#include "vc.duvido.R_array.hpp"
#include "vc.duvido.R_attr.hpp"
#include "vc.duvido.R_color.hpp"
#include "vc.duvido.R_dimen.hpp"
#include "vc.duvido.R_drawable.hpp"
#include "vc.duvido.R_id.hpp"
#include "vc.duvido.R_layout.hpp"
#include "vc.duvido.R_string.hpp"
#include "vc.duvido.R_style.hpp"
#include "vc.duvido.R_styleable.hpp"


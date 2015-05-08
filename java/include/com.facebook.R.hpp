#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
class R : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R(const ::com::facebook::R& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R(::com::facebook::R&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::R& operator=(const ::com::facebook::R& x) {obj = x.obj; return *this;}
    ::com::facebook::R& operator=(::com::facebook::R&& x) {obj = std::move(x.obj); return *this;}
    
    R();

};
}
}

#include "com.facebook.R_attr.hpp"
#include "com.facebook.R_color.hpp"
#include "com.facebook.R_dimen.hpp"
#include "com.facebook.R_drawable.hpp"
#include "com.facebook.R_id.hpp"
#include "com.facebook.R_layout.hpp"
#include "com.facebook.R_string.hpp"
#include "com.facebook.R_style.hpp"
#include "com.facebook.R_styleable.hpp"


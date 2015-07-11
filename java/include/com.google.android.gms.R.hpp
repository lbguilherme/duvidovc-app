#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace google {
namespace android {
namespace gms {
class R : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R(const ::com::google::android::gms::R& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R(::com::google::android::gms::R&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::google::android::gms::R& operator=(const ::com::google::android::gms::R& x) {obj = x.obj; return *this;}
    ::com::google::android::gms::R& operator=(::com::google::android::gms::R&& x) {obj = std::move(x.obj); return *this;}
    
    R();

};
}
}
}
}

#include "com.google.android.gms.R_attr.hpp"
#include "com.google.android.gms.R_color.hpp"
#include "com.google.android.gms.R_drawable.hpp"
#include "com.google.android.gms.R_id.hpp"
#include "com.google.android.gms.R_integer.hpp"
#include "com.google.android.gms.R_raw.hpp"
#include "com.google.android.gms.R_string.hpp"
#include "com.google.android.gms.R_style.hpp"
#include "com.google.android.gms.R_styleable.hpp"


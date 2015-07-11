#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace mixpanel {
namespace android {
class R : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R(const ::com::mixpanel::android::R& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R(::com::mixpanel::android::R&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::mixpanel::android::R& operator=(const ::com::mixpanel::android::R& x) {obj = x.obj; return *this;}
    ::com::mixpanel::android::R& operator=(::com::mixpanel::android::R&& x) {obj = std::move(x.obj); return *this;}
    
    R();

};
}
}
}

#include "com.mixpanel.android.R_anim.hpp"
#include "com.mixpanel.android.R_attr.hpp"
#include "com.mixpanel.android.R_color.hpp"
#include "com.mixpanel.android.R_drawable.hpp"
#include "com.mixpanel.android.R_id.hpp"
#include "com.mixpanel.android.R_integer.hpp"
#include "com.mixpanel.android.R_layout.hpp"
#include "com.mixpanel.android.R_raw.hpp"
#include "com.mixpanel.android.R_string.hpp"
#include "com.mixpanel.android.R_style.hpp"
#include "com.mixpanel.android.R_styleable.hpp"


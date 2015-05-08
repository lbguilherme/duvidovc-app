#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


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
    R(const ::android::R& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R(::android::R&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R& operator=(const ::android::R& x) {obj = x.obj; return *this;}
    ::android::R& operator=(::android::R&& x) {obj = std::move(x.obj); return *this;}
    
    R();

};
}

#include "android.R_anim.hpp"
#include "android.R_animator.hpp"
#include "android.R_array.hpp"
#include "android.R_attr.hpp"
#include "android.R_bool.hpp"
#include "android.R_color.hpp"
#include "android.R_dimen.hpp"
#include "android.R_drawable.hpp"
#include "android.R_fraction.hpp"
#include "android.R_id.hpp"
#include "android.R_integer.hpp"
#include "android.R_interpolator.hpp"
#include "android.R_layout.hpp"
#include "android.R_menu.hpp"
#include "android.R_mipmap.hpp"
#include "android.R_plurals.hpp"
#include "android.R_raw.hpp"
#include "android.R_string.hpp"
#include "android.R_style.hpp"
#include "android.R_xml.hpp"


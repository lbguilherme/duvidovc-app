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
class R_integer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_integer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_integer(const ::com::mixpanel::android::R_integer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_integer(::com::mixpanel::android::R_integer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::mixpanel::android::R_integer& operator=(const ::com::mixpanel::android::R_integer& x) {obj = x.obj; return *this;}
    ::com::mixpanel::android::R_integer& operator=(::com::mixpanel::android::R_integer&& x) {obj = std::move(x.obj); return *this;}
    
    R_integer();

};
}
}
}



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
class R_style : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_style(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_style(const ::com::mixpanel::android::R_style& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_style(::com::mixpanel::android::R_style&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::mixpanel::android::R_style& operator=(const ::com::mixpanel::android::R_style& x) {obj = x.obj; return *this;}
    ::com::mixpanel::android::R_style& operator=(::com::mixpanel::android::R_style&& x) {obj = std::move(x.obj); return *this;}
    
    R_style();

};
}
}
}



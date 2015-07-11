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
class R_id : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_id(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_id(const ::com::mixpanel::android::R_id& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_id(::com::mixpanel::android::R_id&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::mixpanel::android::R_id& operator=(const ::com::mixpanel::android::R_id& x) {obj = x.obj; return *this;}
    ::com::mixpanel::android::R_id& operator=(::com::mixpanel::android::R_id&& x) {obj = std::move(x.obj); return *this;}
    
    R_id();

};
}
}
}



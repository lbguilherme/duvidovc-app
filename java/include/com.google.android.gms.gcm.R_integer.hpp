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
namespace gcm {
class R_integer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_integer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_integer(const ::com::google::android::gms::gcm::R_integer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_integer(::com::google::android::gms::gcm::R_integer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::google::android::gms::gcm::R_integer& operator=(const ::com::google::android::gms::gcm::R_integer& x) {obj = x.obj; return *this;}
    ::com::google::android::gms::gcm::R_integer& operator=(::com::google::android::gms::gcm::R_integer&& x) {obj = std::move(x.obj); return *this;}
    
    R_integer();

};
}
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace mtp {
class MtpConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MtpConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MtpConstants(const ::android::mtp::MtpConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MtpConstants(::android::mtp::MtpConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::mtp::MtpConstants& operator=(const ::android::mtp::MtpConstants& x) {obj = x.obj; return *this;}
    ::android::mtp::MtpConstants& operator=(::android::mtp::MtpConstants&& x) {obj = std::move(x.obj); return *this;}
    
    MtpConstants();
    static bool isAbstractObject(int32_t);

};
}
}



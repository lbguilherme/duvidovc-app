#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
class R_dimen : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit R_dimen(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    R_dimen(const ::android::R_dimen& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    R_dimen(::android::R_dimen&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::R_dimen& operator=(const ::android::R_dimen& x) {obj = x.obj; return *this;}
    ::android::R_dimen& operator=(::android::R_dimen&& x) {obj = std::move(x.obj); return *this;}
    
    R_dimen();

};
}



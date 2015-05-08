#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class HapticFeedbackConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HapticFeedbackConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HapticFeedbackConstants(const ::android::view::HapticFeedbackConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HapticFeedbackConstants(::android::view::HapticFeedbackConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::HapticFeedbackConstants& operator=(const ::android::view::HapticFeedbackConstants& x) {obj = x.obj; return *this;}
    ::android::view::HapticFeedbackConstants& operator=(::android::view::HapticFeedbackConstants&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



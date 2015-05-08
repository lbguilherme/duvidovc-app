#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class SoundEffectConstants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SoundEffectConstants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SoundEffectConstants(const ::android::view::SoundEffectConstants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SoundEffectConstants(::android::view::SoundEffectConstants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::SoundEffectConstants& operator=(const ::android::view::SoundEffectConstants& x) {obj = x.obj; return *this;}
    ::android::view::SoundEffectConstants& operator=(::android::view::SoundEffectConstants&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getContantForFocusDirection(int32_t);

};
}
}



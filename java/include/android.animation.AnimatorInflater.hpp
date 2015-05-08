#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class Animator; } }
namespace android { namespace content { class Context; } }

namespace android {
namespace animation {
class AnimatorInflater : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimatorInflater(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimatorInflater(const ::android::animation::AnimatorInflater& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AnimatorInflater(::android::animation::AnimatorInflater&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::AnimatorInflater& operator=(const ::android::animation::AnimatorInflater& x) {obj = x.obj; return *this;}
    ::android::animation::AnimatorInflater& operator=(::android::animation::AnimatorInflater&& x) {obj = std::move(x.obj); return *this;}
    
    AnimatorInflater();
    static ::android::animation::Animator loadAnimator(const ::android::content::Context&, int32_t);

};
}
}



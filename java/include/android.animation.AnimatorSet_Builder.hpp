#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class Animator; } }
namespace android { namespace animation { class AnimatorSet_Builder; } }

namespace android {
namespace animation {
class AnimatorSet_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimatorSet_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimatorSet_Builder(const ::android::animation::AnimatorSet_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AnimatorSet_Builder(::android::animation::AnimatorSet_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::AnimatorSet_Builder& operator=(const ::android::animation::AnimatorSet_Builder& x) {obj = x.obj; return *this;}
    ::android::animation::AnimatorSet_Builder& operator=(::android::animation::AnimatorSet_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::animation::AnimatorSet_Builder with(const ::android::animation::Animator&) const ;
    ::android::animation::AnimatorSet_Builder before(const ::android::animation::Animator&) const ;
    ::android::animation::AnimatorSet_Builder after(const ::android::animation::Animator&) const ;
    ::android::animation::AnimatorSet_Builder after(int64_t) const ;

};
}
}



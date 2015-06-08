#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.TypeEvaluator.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace animation {
class ArgbEvaluator : public virtual ::java::lang::Object,
                      public virtual ::android::animation::TypeEvaluator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ArgbEvaluator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TypeEvaluator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ArgbEvaluator(const ::android::animation::ArgbEvaluator& x) : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {obj = x.obj;}
    ArgbEvaluator(::android::animation::ArgbEvaluator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::ArgbEvaluator& operator=(const ::android::animation::ArgbEvaluator& x) {obj = x.obj; return *this;}
    ::android::animation::ArgbEvaluator& operator=(::android::animation::ArgbEvaluator&& x) {obj = std::move(x.obj); return *this;}
    
    ArgbEvaluator();
    ::java::lang::Object evaluate(float, const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}



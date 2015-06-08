#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.TypeEvaluator.hpp"

namespace java { namespace lang { class Integer; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace animation {
class IntEvaluator : public virtual ::java::lang::Object,
                     public virtual ::android::animation::TypeEvaluator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntEvaluator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TypeEvaluator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntEvaluator(const ::android::animation::IntEvaluator& x) : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {obj = x.obj;}
    IntEvaluator(::android::animation::IntEvaluator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::IntEvaluator& operator=(const ::android::animation::IntEvaluator& x) {obj = x.obj; return *this;}
    ::android::animation::IntEvaluator& operator=(::android::animation::IntEvaluator&& x) {obj = std::move(x.obj); return *this;}
    
    IntEvaluator();
    ::java::lang::Integer evaluate(float, const ::java::lang::Integer&, const ::java::lang::Integer&) const;
    ::java::lang::Object evaluate(float, const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}



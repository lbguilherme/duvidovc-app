#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.TypeEvaluator.hpp"

namespace java { namespace lang { class Float; } }
namespace java { namespace lang { class Number; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace animation {
class FloatEvaluator : public virtual ::java::lang::Object,
                       public virtual ::android::animation::TypeEvaluator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FloatEvaluator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TypeEvaluator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FloatEvaluator(const ::android::animation::FloatEvaluator& x) : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {obj = x.obj;}
    FloatEvaluator(::android::animation::FloatEvaluator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TypeEvaluator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::FloatEvaluator& operator=(const ::android::animation::FloatEvaluator& x) {obj = x.obj; return *this;}
    ::android::animation::FloatEvaluator& operator=(::android::animation::FloatEvaluator&& x) {obj = std::move(x.obj); return *this;}
    
    FloatEvaluator();
    ::java::lang::Float evaluate(float, const ::java::lang::Number&, const ::java::lang::Number&) const;
    ::java::lang::Object evaluate(float, const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}



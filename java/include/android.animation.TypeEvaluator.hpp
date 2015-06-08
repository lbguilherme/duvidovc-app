#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace animation {
class TypeEvaluator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TypeEvaluator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TypeEvaluator(const ::android::animation::TypeEvaluator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TypeEvaluator(::android::animation::TypeEvaluator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::TypeEvaluator& operator=(const ::android::animation::TypeEvaluator& x) {obj = x.obj; return *this;}
    ::android::animation::TypeEvaluator& operator=(::android::animation::TypeEvaluator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object evaluate(float, const ::java::lang::Object&, const ::java::lang::Object&) const;

};
}
}



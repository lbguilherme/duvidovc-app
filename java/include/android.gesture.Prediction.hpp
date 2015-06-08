#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace gesture {
class Prediction : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Prediction(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Prediction(const ::android::gesture::Prediction& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Prediction(::android::gesture::Prediction&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::Prediction& operator=(const ::android::gesture::Prediction& x) {obj = x.obj; return *this;}
    ::android::gesture::Prediction& operator=(::android::gesture::Prediction&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const;

};
}
}



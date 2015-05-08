#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace util {
class FloatMath : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FloatMath(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FloatMath(const ::android::util::FloatMath& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FloatMath(::android::util::FloatMath&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::util::FloatMath& operator=(const ::android::util::FloatMath& x) {obj = x.obj; return *this;}
    ::android::util::FloatMath& operator=(::android::util::FloatMath&& x) {obj = std::move(x.obj); return *this;}
    
    static float floor(float);
    static float ceil(float);
    static float sin(float);
    static float cos(float);
    static float sqrt(float);

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class PathEffect : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathEffect(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathEffect(const ::android::graphics::PathEffect& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PathEffect(::android::graphics::PathEffect&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PathEffect& operator=(const ::android::graphics::PathEffect& x) {obj = x.obj; return *this;}
    ::android::graphics::PathEffect& operator=(::android::graphics::PathEffect&& x) {obj = std::move(x.obj); return *this;}
    
    PathEffect();

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class Rasterizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Rasterizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Rasterizer(const ::android::graphics::Rasterizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Rasterizer(::android::graphics::Rasterizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Rasterizer& operator=(const ::android::graphics::Rasterizer& x) {obj = x.obj; return *this;}
    ::android::graphics::Rasterizer& operator=(::android::graphics::Rasterizer&& x) {obj = std::move(x.obj); return *this;}
    
    Rasterizer();

};
}
}



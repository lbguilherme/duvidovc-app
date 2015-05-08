#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class ColorFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ColorFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ColorFilter(const ::android::graphics::ColorFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ColorFilter(::android::graphics::ColorFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::ColorFilter& operator=(const ::android::graphics::ColorFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::ColorFilter& operator=(::android::graphics::ColorFilter&& x) {obj = std::move(x.obj); return *this;}
    
    ColorFilter();

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class MaskFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MaskFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MaskFilter(const ::android::graphics::MaskFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MaskFilter(::android::graphics::MaskFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::MaskFilter& operator=(const ::android::graphics::MaskFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::MaskFilter& operator=(::android::graphics::MaskFilter&& x) {obj = std::move(x.obj); return *this;}
    
    MaskFilter();

};
}
}



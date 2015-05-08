#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class DrawFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawFilter(const ::android::graphics::DrawFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrawFilter(::android::graphics::DrawFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::DrawFilter& operator=(const ::android::graphics::DrawFilter& x) {obj = x.obj; return *this;}
    ::android::graphics::DrawFilter& operator=(::android::graphics::DrawFilter&& x) {obj = std::move(x.obj); return *this;}
    
    DrawFilter();

};
}
}



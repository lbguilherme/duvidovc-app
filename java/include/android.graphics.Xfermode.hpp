#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class Xfermode : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Xfermode(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Xfermode(const ::android::graphics::Xfermode& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Xfermode(::android::graphics::Xfermode&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Xfermode& operator=(const ::android::graphics::Xfermode& x) {obj = x.obj; return *this;}
    ::android::graphics::Xfermode& operator=(::android::graphics::Xfermode&& x) {obj = std::move(x.obj); return *this;}
    
    Xfermode();

};
}
}



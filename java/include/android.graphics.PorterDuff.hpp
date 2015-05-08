#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace graphics {
class PorterDuff : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PorterDuff(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PorterDuff(const ::android::graphics::PorterDuff& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PorterDuff(::android::graphics::PorterDuff&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PorterDuff& operator=(const ::android::graphics::PorterDuff& x) {obj = x.obj; return *this;}
    ::android::graphics::PorterDuff& operator=(::android::graphics::PorterDuff&& x) {obj = std::move(x.obj); return *this;}
    
    PorterDuff();

};
}
}

#include "android.graphics.PorterDuff_Mode.hpp"


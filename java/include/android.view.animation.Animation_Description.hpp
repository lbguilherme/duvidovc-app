#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
namespace animation {
class Animation_Description : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Animation_Description(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Animation_Description(const ::android::view::animation::Animation_Description& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Animation_Description(::android::view::animation::Animation_Description&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::Animation_Description& operator=(const ::android::view::animation::Animation_Description& x) {obj = x.obj; return *this;}
    ::android::view::animation::Animation_Description& operator=(::android::view::animation::Animation_Description&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace gesture {
class OrientedBoundingBox : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OrientedBoundingBox(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OrientedBoundingBox(const ::android::gesture::OrientedBoundingBox& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OrientedBoundingBox(::android::gesture::OrientedBoundingBox&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::OrientedBoundingBox& operator=(const ::android::gesture::OrientedBoundingBox& x) {obj = x.obj; return *this;}
    ::android::gesture::OrientedBoundingBox& operator=(::android::gesture::OrientedBoundingBox&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



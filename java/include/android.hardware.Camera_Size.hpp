#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Camera; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace hardware {
class Camera_Size : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Camera_Size(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Camera_Size(const ::android::hardware::Camera_Size& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Camera_Size(::android::hardware::Camera_Size&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Camera_Size& operator=(const ::android::hardware::Camera_Size& x) {obj = x.obj; return *this;}
    ::android::hardware::Camera_Size& operator=(::android::hardware::Camera_Size&& x) {obj = std::move(x.obj); return *this;}
    
    Camera_Size(const ::android::hardware::Camera&, int32_t, int32_t);
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;

};
}
}



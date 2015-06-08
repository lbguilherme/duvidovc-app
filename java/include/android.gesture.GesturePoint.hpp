#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace gesture {
class GesturePoint : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GesturePoint(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GesturePoint(const ::android::gesture::GesturePoint& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GesturePoint(::android::gesture::GesturePoint&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GesturePoint& operator=(const ::android::gesture::GesturePoint& x) {obj = x.obj; return *this;}
    ::android::gesture::GesturePoint& operator=(::android::gesture::GesturePoint&& x) {obj = std::move(x.obj); return *this;}
    
    GesturePoint(float, float, int64_t);
    ::java::lang::Object clone() const;

};
}
}



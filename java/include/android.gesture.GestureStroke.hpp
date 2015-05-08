#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace gesture { class OrientedBoundingBox; } }
namespace android { namespace graphics { class Path; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace gesture {
class GestureStroke : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureStroke(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureStroke(const ::android::gesture::GestureStroke& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureStroke(::android::gesture::GestureStroke&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureStroke& operator=(const ::android::gesture::GestureStroke& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureStroke& operator=(::android::gesture::GestureStroke&& x) {obj = std::move(x.obj); return *this;}
    
    GestureStroke(const ::java::util::ArrayList&);
    ::java::lang::Object clone() const ;
    ::android::graphics::Path getPath() const ;
    ::android::graphics::Path toPath(float, float, int32_t) const ;
    void clearPath() const ;
    ::android::gesture::OrientedBoundingBox computeOrientedBoundingBox() const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace gesture { class Gesture; } }
namespace android { namespace gesture { class GestureStroke; } }
namespace android { namespace gesture { class OrientedBoundingBox; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace gesture {
class GestureUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureUtils(const ::android::gesture::GestureUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureUtils(::android::gesture::GestureUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureUtils& operator=(const ::android::gesture::GestureUtils& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureUtils& operator=(::android::gesture::GestureUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< float> spatialSampling(const ::android::gesture::Gesture&, int32_t);
    static std::vector< float> spatialSampling(const ::android::gesture::Gesture&, int32_t, bool);
    static std::vector< float> temporalSampling(const ::android::gesture::GestureStroke&, int32_t);
    static ::android::gesture::OrientedBoundingBox computeOrientedBoundingBox(const ::java::util::ArrayList&);
    static ::android::gesture::OrientedBoundingBox computeOrientedBoundingBox(const std::vector< float>&);

};
}
}



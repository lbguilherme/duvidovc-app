#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Path; } }
namespace android { namespace view { namespace animation { class Interpolator; } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
namespace animation {
class PathInterpolatorCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathInterpolatorCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathInterpolatorCompat(const ::android::support::v4::view::animation::PathInterpolatorCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PathInterpolatorCompat(::android::support::v4::view::animation::PathInterpolatorCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::animation::PathInterpolatorCompat& operator=(const ::android::support::v4::view::animation::PathInterpolatorCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::animation::PathInterpolatorCompat& operator=(::android::support::v4::view::animation::PathInterpolatorCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::view::animation::Interpolator create(const ::android::graphics::Path&);
    static ::android::view::animation::Interpolator create(float, float);
    static ::android::view::animation::Interpolator create(float, float, float, float);

};
}
}
}
}
}



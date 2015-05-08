#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }

namespace android {
namespace view {
class Gravity : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Gravity(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Gravity(const ::android::view::Gravity& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Gravity(::android::view::Gravity&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Gravity& operator=(const ::android::view::Gravity& x) {obj = x.obj; return *this;}
    ::android::view::Gravity& operator=(::android::view::Gravity&& x) {obj = std::move(x.obj); return *this;}
    
    Gravity();
    static void apply(int32_t, int32_t, int32_t, const ::android::graphics::Rect&, const ::android::graphics::Rect&);
    static void apply(int32_t, int32_t, int32_t, const ::android::graphics::Rect&, int32_t, int32_t, const ::android::graphics::Rect&);
    static void applyDisplay(int32_t, const ::android::graphics::Rect&, const ::android::graphics::Rect&);
    static bool isVertical(int32_t);
    static bool isHorizontal(int32_t);
    static int32_t getAbsoluteGravity(int32_t, int32_t);

};
}
}



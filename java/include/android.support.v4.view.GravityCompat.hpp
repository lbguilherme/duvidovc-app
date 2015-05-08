#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class GravityCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GravityCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GravityCompat(const ::android::support::v4::view::GravityCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GravityCompat(::android::support::v4::view::GravityCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::GravityCompat& operator=(const ::android::support::v4::view::GravityCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::GravityCompat& operator=(::android::support::v4::view::GravityCompat&& x) {obj = std::move(x.obj); return *this;}
    
    GravityCompat();
    static void apply(int32_t, int32_t, int32_t, const ::android::graphics::Rect&, const ::android::graphics::Rect&, int32_t);
    static void apply(int32_t, int32_t, int32_t, const ::android::graphics::Rect&, int32_t, int32_t, const ::android::graphics::Rect&, int32_t);
    static void applyDisplay(int32_t, const ::android::graphics::Rect&, const ::android::graphics::Rect&, int32_t);
    static int32_t getAbsoluteGravity(int32_t, int32_t);

};
}
}
}
}

#include "android.support.v4.view.GravityCompat_GravityCompatImpl.hpp"
#include "android.support.v4.view.GravityCompat_GravityCompatImplBase.hpp"
#include "android.support.v4.view.GravityCompat_GravityCompatImplJellybeanMr1.hpp"


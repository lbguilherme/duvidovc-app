#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.GravityCompat_GravityCompatImpl.hpp"

namespace android { namespace graphics { class Rect; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class GravityCompat_GravityCompatImplJellybeanMr1 : public virtual ::java::lang::Object,
                                                    public virtual ::android::support::v4::view::GravityCompat_GravityCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GravityCompat_GravityCompatImplJellybeanMr1(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::GravityCompat_GravityCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GravityCompat_GravityCompatImplJellybeanMr1(const ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::GravityCompat_GravityCompatImpl((jobject)0) {obj = x.obj;}
    GravityCompat_GravityCompatImplJellybeanMr1(::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::GravityCompat_GravityCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1& operator=(const ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1& operator=(::android::support::v4::view::GravityCompat_GravityCompatImplJellybeanMr1&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAbsoluteGravity(int32_t, int32_t) const ;
    void apply(int32_t, int32_t, int32_t, const ::android::graphics::Rect&, const ::android::graphics::Rect&, int32_t) const ;
    void apply(int32_t, int32_t, int32_t, const ::android::graphics::Rect&, int32_t, int32_t, const ::android::graphics::Rect&, int32_t) const ;
    void applyDisplay(int32_t, const ::android::graphics::Rect&, const ::android::graphics::Rect&, int32_t) const ;

};
}
}
}
}



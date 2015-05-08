#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl.hpp"

namespace android { namespace view { class ViewGroup_MarginLayoutParams; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1 : public virtual ::java::lang::Object,
                                                                   public virtual ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1(const ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl((jobject)0) {obj = x.obj;}
    MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1(::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1& operator=(const ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1& operator=(::android::support::v4::view::MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getMarginStart(const ::android::view::ViewGroup_MarginLayoutParams&) const ;
    int32_t getMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams&) const ;
    void setMarginStart(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t) const ;
    void setMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t) const ;
    bool isMarginRelative(const ::android::view::ViewGroup_MarginLayoutParams&) const ;
    int32_t getLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams&) const ;
    void setLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t) const ;
    void resolveLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t) const ;

};
}
}
}
}



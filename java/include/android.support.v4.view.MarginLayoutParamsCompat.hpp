#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class ViewGroup_MarginLayoutParams; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MarginLayoutParamsCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MarginLayoutParamsCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MarginLayoutParamsCompat(const ::android::support::v4::view::MarginLayoutParamsCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MarginLayoutParamsCompat(::android::support::v4::view::MarginLayoutParamsCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MarginLayoutParamsCompat& operator=(const ::android::support::v4::view::MarginLayoutParamsCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MarginLayoutParamsCompat& operator=(::android::support::v4::view::MarginLayoutParamsCompat&& x) {obj = std::move(x.obj); return *this;}
    
    MarginLayoutParamsCompat();
    static int32_t getMarginStart(const ::android::view::ViewGroup_MarginLayoutParams&);
    static int32_t getMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams&);
    static void setMarginStart(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t);
    static void setMarginEnd(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t);
    static bool isMarginRelative(const ::android::view::ViewGroup_MarginLayoutParams&);
    static int32_t getLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams&);
    static void setLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t);
    static void resolveLayoutDirection(const ::android::view::ViewGroup_MarginLayoutParams&, int32_t);

};
}
}
}
}

#include "android.support.v4.view.MarginLayoutParamsCompat_MarginLayoutParamsCompatImpl.hpp"
#include "android.support.v4.view.MarginLayoutParamsCompat_MarginLayoutParamsCompatImplBase.hpp"
#include "android.support.v4.view.MarginLayoutParamsCompat_MarginLayoutParamsCompatImplJbMr1.hpp"


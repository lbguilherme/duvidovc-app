#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ScaleGestureDetectorCompat_ScaleGestureDetectorImpl.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl : public virtual ::java::lang::Object,
                                                                        public virtual ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl(const ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl((jobject)0) {obj = x.obj;}
    ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl(::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl& operator=(const ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl& operator=(::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setQuickScaleEnabled(const ::java::lang::Object&, bool) const ;
    bool isQuickScaleEnabled(const ::java::lang::Object&) const ;

};
}
}
}
}



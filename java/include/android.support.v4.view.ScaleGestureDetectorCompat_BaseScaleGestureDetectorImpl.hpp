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
class ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl : public virtual ::java::lang::Object,
                                                                public virtual ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl(const ::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl((jobject)0) {obj = x.obj;}
    ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl(::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ScaleGestureDetectorCompat_ScaleGestureDetectorImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl& operator=(const ::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl& operator=(::android::support::v4::view::ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setQuickScaleEnabled(const ::java::lang::Object&, bool) const;
    bool isQuickScaleEnabled(const ::java::lang::Object&) const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ScaleGestureDetectorCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ScaleGestureDetectorCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ScaleGestureDetectorCompat(const ::android::support::v4::view::ScaleGestureDetectorCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ScaleGestureDetectorCompat(::android::support::v4::view::ScaleGestureDetectorCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ScaleGestureDetectorCompat& operator=(const ::android::support::v4::view::ScaleGestureDetectorCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ScaleGestureDetectorCompat& operator=(::android::support::v4::view::ScaleGestureDetectorCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static void setQuickScaleEnabled(const ::java::lang::Object&, bool);
    static bool isQuickScaleEnabled(const ::java::lang::Object&);

};
}
}
}
}

#include "android.support.v4.view.ScaleGestureDetectorCompat_BaseScaleGestureDetectorImpl.hpp"
#include "android.support.v4.view.ScaleGestureDetectorCompat_ScaleGestureDetectorCompatKitKatImpl.hpp"
#include "android.support.v4.view.ScaleGestureDetectorCompat_ScaleGestureDetectorImpl.hpp"


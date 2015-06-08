#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace gesture { class Gesture; } }
namespace android { namespace gesture { class GestureOverlayView; } }

namespace android {
namespace gesture {
class GestureOverlayView_OnGesturePerformedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureOverlayView_OnGesturePerformedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureOverlayView_OnGesturePerformedListener(const ::android::gesture::GestureOverlayView_OnGesturePerformedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureOverlayView_OnGesturePerformedListener(::android::gesture::GestureOverlayView_OnGesturePerformedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureOverlayView_OnGesturePerformedListener& operator=(const ::android::gesture::GestureOverlayView_OnGesturePerformedListener& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureOverlayView_OnGesturePerformedListener& operator=(::android::gesture::GestureOverlayView_OnGesturePerformedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGesturePerformed(const ::android::gesture::GestureOverlayView&, const ::android::gesture::Gesture&) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace gesture { class GestureOverlayView; } }

namespace android {
namespace gesture {
class GestureOverlayView_OnGesturingListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GestureOverlayView_OnGesturingListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GestureOverlayView_OnGesturingListener(const ::android::gesture::GestureOverlayView_OnGesturingListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GestureOverlayView_OnGesturingListener(::android::gesture::GestureOverlayView_OnGesturingListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::gesture::GestureOverlayView_OnGesturingListener& operator=(const ::android::gesture::GestureOverlayView_OnGesturingListener& x) {obj = x.obj; return *this;}
    ::android::gesture::GestureOverlayView_OnGesturingListener& operator=(::android::gesture::GestureOverlayView_OnGesturingListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGesturingStarted(const ::android::gesture::GestureOverlayView&) const;
    void onGesturingEnded(const ::android::gesture::GestureOverlayView&) const;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace widget {
class ZoomButtonsController_OnZoomListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZoomButtonsController_OnZoomListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZoomButtonsController_OnZoomListener(const ::android::widget::ZoomButtonsController_OnZoomListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ZoomButtonsController_OnZoomListener(::android::widget::ZoomButtonsController_OnZoomListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ZoomButtonsController_OnZoomListener& operator=(const ::android::widget::ZoomButtonsController_OnZoomListener& x) {obj = x.obj; return *this;}
    ::android::widget::ZoomButtonsController_OnZoomListener& operator=(::android::widget::ZoomButtonsController_OnZoomListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onVisibilityChanged(bool) const;
    void onZoom(bool) const;

};
}
}



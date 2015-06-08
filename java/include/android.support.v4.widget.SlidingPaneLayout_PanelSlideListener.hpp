#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SlidingPaneLayout_PanelSlideListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingPaneLayout_PanelSlideListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingPaneLayout_PanelSlideListener(const ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SlidingPaneLayout_PanelSlideListener(::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener& operator=(const ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener& operator=(::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onPanelSlide(const ::android::view::View&, float) const;
    void onPanelOpened(const ::android::view::View&) const;
    void onPanelClosed(const ::android::view::View&) const;

};
}
}
}
}



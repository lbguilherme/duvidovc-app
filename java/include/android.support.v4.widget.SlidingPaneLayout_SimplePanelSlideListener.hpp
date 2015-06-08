#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_PanelSlideListener.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SlidingPaneLayout_SimplePanelSlideListener : public virtual ::java::lang::Object,
                                                   public virtual ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingPaneLayout_SimplePanelSlideListener(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingPaneLayout_SimplePanelSlideListener(const ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener((jobject)0) {obj = x.obj;}
    SlidingPaneLayout_SimplePanelSlideListener(::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener& operator=(const ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener& operator=(::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener&& x) {obj = std::move(x.obj); return *this;}
    
    SlidingPaneLayout_SimplePanelSlideListener();
    void onPanelSlide(const ::android::view::View&, float) const;
    void onPanelOpened(const ::android::view::View&) const;
    void onPanelClosed(const ::android::view::View&) const;

};
}
}
}
}



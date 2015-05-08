#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.SlidingPaneLayout_SlidingPanelLayoutImpl.hpp"

namespace android { namespace support { namespace v4 { namespace widget { class SlidingPaneLayout; } } } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class SlidingPaneLayout_SlidingPanelLayoutImplBase : public virtual ::java::lang::Object,
                                                     public virtual ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SlidingPaneLayout_SlidingPanelLayoutImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SlidingPaneLayout_SlidingPanelLayoutImplBase(const ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl((jobject)0) {obj = x.obj;}
    SlidingPaneLayout_SlidingPanelLayoutImplBase(::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase& operator=(const ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase& operator=(::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    void invalidateChildRegion(const ::android::support::v4::widget::SlidingPaneLayout&, const ::android::view::View&) const ;

};
}
}
}
}



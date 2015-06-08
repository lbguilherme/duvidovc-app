#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerListener.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout_SimpleDrawerListener : public virtual ::java::lang::Object,
                                          public virtual ::android::support::v4::widget::DrawerLayout_DrawerListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout_SimpleDrawerListener(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::DrawerLayout_DrawerListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout_SimpleDrawerListener(const ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {obj = x.obj;}
    DrawerLayout_SimpleDrawerListener(::android::support::v4::widget::DrawerLayout_SimpleDrawerListener&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener& operator=(const ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener& operator=(::android::support::v4::widget::DrawerLayout_SimpleDrawerListener&& x) {obj = std::move(x.obj); return *this;}
    
    DrawerLayout_SimpleDrawerListener();
    void onDrawerSlide(const ::android::view::View&, float) const;
    void onDrawerOpened(const ::android::view::View&) const;
    void onDrawerClosed(const ::android::view::View&) const;
    void onDrawerStateChanged(int32_t) const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerLayoutCompatImpl.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_MarginLayoutParams; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout_DrawerLayoutCompatImplBase : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout_DrawerLayoutCompatImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout_DrawerLayoutCompatImplBase(const ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl((jobject)0) {obj = x.obj;}
    DrawerLayout_DrawerLayoutCompatImplBase(::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase& operator=(const ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase& operator=(::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    void configureApplyInsets(const ::android::view::View&) const ;
    void dispatchChildInsets(const ::android::view::View&, const ::java::lang::Object&, int32_t) const ;
    void applyMarginInsets(const ::android::view::ViewGroup_MarginLayoutParams&, const ::java::lang::Object&, int32_t) const ;
    int32_t getTopInset(const ::java::lang::Object&) const ;
    ::android::graphics::drawable::Drawable getDefaultStatusBarBackground(const ::android::content::Context&) const ;

};
}
}
}
}



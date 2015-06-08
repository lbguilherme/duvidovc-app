#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup_MarginLayoutParams; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout_DrawerLayoutCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout_DrawerLayoutCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout_DrawerLayoutCompatImpl(const ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrawerLayout_DrawerLayoutCompatImpl(::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl& operator=(const ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl& operator=(::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void configureApplyInsets(const ::android::view::View&) const;
    void dispatchChildInsets(const ::android::view::View&, const ::java::lang::Object&, int32_t) const;
    void applyMarginInsets(const ::android::view::ViewGroup_MarginLayoutParams&, const ::java::lang::Object&, int32_t) const;
    int32_t getTopInset(const ::java::lang::Object&) const;
    ::android::graphics::drawable::Drawable getDefaultStatusBarBackground(const ::android::content::Context&) const;

};
}
}
}
}



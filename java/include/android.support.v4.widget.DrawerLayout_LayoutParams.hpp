#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup_MarginLayoutParams.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class ViewGroup_MarginLayoutParams; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout_LayoutParams : public virtual ::java::lang::Object,
                                  public virtual ::android::view::ViewGroup_MarginLayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj), ::android::view::ViewGroup_MarginLayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout_LayoutParams(const ::android::support::v4::widget::DrawerLayout_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj;}
    DrawerLayout_LayoutParams(::android::support::v4::widget::DrawerLayout_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout_LayoutParams& operator=(const ::android::support::v4::widget::DrawerLayout_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout_LayoutParams& operator=(::android::support::v4::widget::DrawerLayout_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    DrawerLayout_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    DrawerLayout_LayoutParams(int32_t, int32_t);
    DrawerLayout_LayoutParams(int32_t, int32_t, int32_t);
    DrawerLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    DrawerLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams&);

};
}
}
}
}



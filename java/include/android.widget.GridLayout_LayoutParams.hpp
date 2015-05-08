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
namespace android { namespace widget { class GridLayout_Spec; } }

namespace android {
namespace widget {
class GridLayout_LayoutParams : public virtual ::java::lang::Object,
                                public virtual ::android::view::ViewGroup_MarginLayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridLayout_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj), ::android::view::ViewGroup_MarginLayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridLayout_LayoutParams(const ::android::widget::GridLayout_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj;}
    GridLayout_LayoutParams(::android::widget::GridLayout_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::GridLayout_LayoutParams& operator=(const ::android::widget::GridLayout_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::widget::GridLayout_LayoutParams& operator=(::android::widget::GridLayout_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    GridLayout_LayoutParams(const ::android::widget::GridLayout_Spec&, const ::android::widget::GridLayout_Spec&);
    GridLayout_LayoutParams();
    GridLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    GridLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams&);
    GridLayout_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setGravity(int32_t) const ;

};
}
}



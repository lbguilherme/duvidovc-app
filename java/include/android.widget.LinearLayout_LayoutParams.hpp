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
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class LinearLayout_LayoutParams : public virtual ::java::lang::Object,
                                  public virtual ::android::view::ViewGroup_MarginLayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinearLayout_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj), ::android::view::ViewGroup_MarginLayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinearLayout_LayoutParams(const ::android::widget::LinearLayout_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj;}
    LinearLayout_LayoutParams(::android::widget::LinearLayout_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::LinearLayout_LayoutParams& operator=(const ::android::widget::LinearLayout_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::widget::LinearLayout_LayoutParams& operator=(::android::widget::LinearLayout_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    LinearLayout_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    LinearLayout_LayoutParams(int32_t, int32_t);
    LinearLayout_LayoutParams(int32_t, int32_t, float);
    LinearLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    LinearLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams&);
    ::java::lang::String debug(const ::java::lang::String&) const;

};
}
}



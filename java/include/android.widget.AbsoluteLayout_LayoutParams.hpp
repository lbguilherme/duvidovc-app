#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.ViewGroup_LayoutParams.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class AbsoluteLayout_LayoutParams : public virtual ::java::lang::Object,
                                    public virtual ::android::view::ViewGroup_LayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsoluteLayout_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsoluteLayout_LayoutParams(const ::android::widget::AbsoluteLayout_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj;}
    AbsoluteLayout_LayoutParams(::android::widget::AbsoluteLayout_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsoluteLayout_LayoutParams& operator=(const ::android::widget::AbsoluteLayout_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::widget::AbsoluteLayout_LayoutParams& operator=(::android::widget::AbsoluteLayout_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    AbsoluteLayout_LayoutParams(int32_t, int32_t, int32_t, int32_t);
    AbsoluteLayout_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AbsoluteLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    ::java::lang::String debug(const ::java::lang::String&) const ;

};
}
}



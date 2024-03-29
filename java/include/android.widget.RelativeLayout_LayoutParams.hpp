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
class RelativeLayout_LayoutParams : public virtual ::java::lang::Object,
                                    public virtual ::android::view::ViewGroup_MarginLayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RelativeLayout_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj), ::android::view::ViewGroup_MarginLayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RelativeLayout_LayoutParams(const ::android::widget::RelativeLayout_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj;}
    RelativeLayout_LayoutParams(::android::widget::RelativeLayout_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RelativeLayout_LayoutParams& operator=(const ::android::widget::RelativeLayout_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::widget::RelativeLayout_LayoutParams& operator=(::android::widget::RelativeLayout_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    RelativeLayout_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    RelativeLayout_LayoutParams(int32_t, int32_t);
    RelativeLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    RelativeLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams&);
    ::java::lang::String debug(const ::java::lang::String&) const;
    void addRule(int32_t) const;
    void addRule(int32_t, int32_t) const;
    std::vector< int32_t> getRules() const;

};
}
}



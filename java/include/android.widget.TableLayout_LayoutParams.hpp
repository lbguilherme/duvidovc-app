#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.LinearLayout_LayoutParams.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class ViewGroup_LayoutParams; } }
namespace android { namespace view { class ViewGroup_MarginLayoutParams; } }

namespace android {
namespace widget {
class TableLayout_LayoutParams : public virtual ::java::lang::Object,
                                 public virtual ::android::widget::LinearLayout_LayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TableLayout_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj), ::android::view::ViewGroup_MarginLayoutParams(_obj), ::android::widget::LinearLayout_LayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TableLayout_LayoutParams(const ::android::widget::TableLayout_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {obj = x.obj;}
    TableLayout_LayoutParams(::android::widget::TableLayout_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TableLayout_LayoutParams& operator=(const ::android::widget::TableLayout_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::widget::TableLayout_LayoutParams& operator=(::android::widget::TableLayout_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    TableLayout_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TableLayout_LayoutParams(int32_t, int32_t);
    TableLayout_LayoutParams(int32_t, int32_t, float);
    TableLayout_LayoutParams();
    TableLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    TableLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams&);

};
}
}



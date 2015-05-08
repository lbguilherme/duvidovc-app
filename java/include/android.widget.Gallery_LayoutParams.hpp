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

namespace android {
namespace widget {
class Gallery_LayoutParams : public virtual ::java::lang::Object,
                             public virtual ::android::view::ViewGroup_LayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Gallery_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Gallery_LayoutParams(const ::android::widget::Gallery_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj;}
    Gallery_LayoutParams(::android::widget::Gallery_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Gallery_LayoutParams& operator=(const ::android::widget::Gallery_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::widget::Gallery_LayoutParams& operator=(::android::widget::Gallery_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    Gallery_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Gallery_LayoutParams(int32_t, int32_t);
    Gallery_LayoutParams(const ::android::view::ViewGroup_LayoutParams&);

};
}
}



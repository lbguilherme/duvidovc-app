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
namespace view {
class ViewGroup_MarginLayoutParams : public virtual ::java::lang::Object,
                                     public virtual ::android::view::ViewGroup_LayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewGroup_MarginLayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewGroup_MarginLayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj;}
    ViewGroup_MarginLayoutParams(::android::view::ViewGroup_MarginLayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewGroup_MarginLayoutParams& operator=(const ::android::view::ViewGroup_MarginLayoutParams& x) {obj = x.obj; return *this;}
    ::android::view::ViewGroup_MarginLayoutParams& operator=(::android::view::ViewGroup_MarginLayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    ViewGroup_MarginLayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ViewGroup_MarginLayoutParams(int32_t, int32_t);
    ViewGroup_MarginLayoutParams(const ::android::view::ViewGroup_LayoutParams&);
    void setMargins(int32_t, int32_t, int32_t, int32_t) const ;

};
}
}



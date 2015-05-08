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

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_LayoutParams : public virtual ::java::lang::Object,
                               public virtual ::android::view::ViewGroup_LayoutParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_LayoutParams(jobject _obj) : ::java::lang::Object(_obj), ::android::view::ViewGroup_LayoutParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_LayoutParams(const ::android::support::v4::view::ViewPager_LayoutParams& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj;}
    ViewPager_LayoutParams(::android::support::v4::view::ViewPager_LayoutParams&& x) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_LayoutParams& operator=(const ::android::support::v4::view::ViewPager_LayoutParams& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_LayoutParams& operator=(::android::support::v4::view::ViewPager_LayoutParams&& x) {obj = std::move(x.obj); return *this;}
    
    ViewPager_LayoutParams();
    ViewPager_LayoutParams(const ::android::content::Context&, const ::android::util::AttributeSet&);

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.ViewPager_OnPageChangeListener.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_SimpleOnPageChangeListener : public virtual ::java::lang::Object,
                                             public virtual ::android::support::v4::view::ViewPager_OnPageChangeListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_SimpleOnPageChangeListener(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::ViewPager_OnPageChangeListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_SimpleOnPageChangeListener(const ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPager_OnPageChangeListener((jobject)0) {obj = x.obj;}
    ViewPager_SimpleOnPageChangeListener(::android::support::v4::view::ViewPager_SimpleOnPageChangeListener&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::ViewPager_OnPageChangeListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener& operator=(const ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_SimpleOnPageChangeListener& operator=(::android::support::v4::view::ViewPager_SimpleOnPageChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    ViewPager_SimpleOnPageChangeListener();
    void onPageScrolled(int32_t, float, int32_t) const;
    void onPageSelected(int32_t) const;
    void onPageScrollStateChanged(int32_t) const;

};
}
}
}
}



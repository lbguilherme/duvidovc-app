#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_OnPageChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_OnPageChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_OnPageChangeListener(const ::android::support::v4::view::ViewPager_OnPageChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPager_OnPageChangeListener(::android::support::v4::view::ViewPager_OnPageChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_OnPageChangeListener& operator=(const ::android::support::v4::view::ViewPager_OnPageChangeListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_OnPageChangeListener& operator=(::android::support::v4::view::ViewPager_OnPageChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onPageScrolled(int32_t, float, int32_t) const;
    void onPageSelected(int32_t) const;
    void onPageScrollStateChanged(int32_t) const;

};
}
}
}
}



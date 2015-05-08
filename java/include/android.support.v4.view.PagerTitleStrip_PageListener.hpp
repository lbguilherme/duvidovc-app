#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.DataSetObserver.hpp"
#include "android.support.v4.view.ViewPager_OnAdapterChangeListener.hpp"
#include "android.support.v4.view.ViewPager_OnPageChangeListener.hpp"

namespace android { namespace support { namespace v4 { namespace view { class PagerAdapter; } } } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class PagerTitleStrip_PageListener : public virtual ::java::lang::Object,
                                     public virtual ::android::database::DataSetObserver,
                                     public virtual ::android::support::v4::view::ViewPager_OnAdapterChangeListener,
                                     public virtual ::android::support::v4::view::ViewPager_OnPageChangeListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PagerTitleStrip_PageListener(jobject _obj) : ::java::lang::Object(_obj), ::android::database::DataSetObserver(_obj), ::android::support::v4::view::ViewPager_OnAdapterChangeListener(_obj), ::android::support::v4::view::ViewPager_OnPageChangeListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PagerTitleStrip_PageListener(const ::android::support::v4::view::PagerTitleStrip_PageListener& x) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0), ::android::support::v4::view::ViewPager_OnAdapterChangeListener((jobject)0), ::android::support::v4::view::ViewPager_OnPageChangeListener((jobject)0) {obj = x.obj;}
    PagerTitleStrip_PageListener(::android::support::v4::view::PagerTitleStrip_PageListener&& x) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0), ::android::support::v4::view::ViewPager_OnAdapterChangeListener((jobject)0), ::android::support::v4::view::ViewPager_OnPageChangeListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::PagerTitleStrip_PageListener& operator=(const ::android::support::v4::view::PagerTitleStrip_PageListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::PagerTitleStrip_PageListener& operator=(::android::support::v4::view::PagerTitleStrip_PageListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onPageScrolled(int32_t, float, int32_t) const ;
    void onPageSelected(int32_t) const ;
    void onPageScrollStateChanged(int32_t) const ;
    void onAdapterChanged(const ::android::support::v4::view::PagerAdapter&, const ::android::support::v4::view::PagerAdapter&) const ;
    void onChanged() const ;

};
}
}
}
}



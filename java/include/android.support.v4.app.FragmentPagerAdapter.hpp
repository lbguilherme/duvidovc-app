#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.PagerAdapter.hpp"

namespace android { namespace os { class Parcelable; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace support { namespace v4 { namespace app { class FragmentManager; } } } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class FragmentPagerAdapter : public virtual ::java::lang::Object,
                             public virtual ::android::support::v4::view::PagerAdapter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentPagerAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::PagerAdapter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentPagerAdapter(const ::android::support::v4::app::FragmentPagerAdapter& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::PagerAdapter((jobject)0) {obj = x.obj;}
    FragmentPagerAdapter(::android::support::v4::app::FragmentPagerAdapter&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::PagerAdapter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentPagerAdapter& operator=(const ::android::support::v4::app::FragmentPagerAdapter& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentPagerAdapter& operator=(::android::support::v4::app::FragmentPagerAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    FragmentPagerAdapter(const ::android::support::v4::app::FragmentManager&);
    ::android::support::v4::app::Fragment getItem(int32_t) const ;
    void startUpdate(const ::android::view::ViewGroup&) const ;
    ::java::lang::Object instantiateItem(const ::android::view::ViewGroup&, int32_t) const ;
    void destroyItem(const ::android::view::ViewGroup&, int32_t, const ::java::lang::Object&) const ;
    void setPrimaryItem(const ::android::view::ViewGroup&, int32_t, const ::java::lang::Object&) const ;
    void finishUpdate(const ::android::view::ViewGroup&) const ;
    bool isViewFromObject(const ::android::view::View&, const ::java::lang::Object&) const ;
    ::android::os::Parcelable saveState() const ;
    void restoreState(const ::android::os::Parcelable&, const ::java::lang::ClassLoader&) const ;
    int64_t getItemId(int32_t) const ;

};
}
}
}
}



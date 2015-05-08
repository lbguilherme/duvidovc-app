#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace database { class DataSetObserver; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class PagerAdapter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PagerAdapter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PagerAdapter(const ::android::support::v4::view::PagerAdapter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PagerAdapter(::android::support::v4::view::PagerAdapter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::PagerAdapter& operator=(const ::android::support::v4::view::PagerAdapter& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::PagerAdapter& operator=(::android::support::v4::view::PagerAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    PagerAdapter();
    int32_t getCount() const ;
    void startUpdate(const ::android::view::ViewGroup&) const ;
    ::java::lang::Object instantiateItem(const ::android::view::ViewGroup&, int32_t) const ;
    void destroyItem(const ::android::view::ViewGroup&, int32_t, const ::java::lang::Object&) const ;
    void setPrimaryItem(const ::android::view::ViewGroup&, int32_t, const ::java::lang::Object&) const ;
    void finishUpdate(const ::android::view::ViewGroup&) const ;
    void startUpdate(const ::android::view::View&) const ;
    ::java::lang::Object instantiateItem(const ::android::view::View&, int32_t) const ;
    void destroyItem(const ::android::view::View&, int32_t, const ::java::lang::Object&) const ;
    void setPrimaryItem(const ::android::view::View&, int32_t, const ::java::lang::Object&) const ;
    void finishUpdate(const ::android::view::View&) const ;
    bool isViewFromObject(const ::android::view::View&, const ::java::lang::Object&) const ;
    ::android::os::Parcelable saveState() const ;
    void restoreState(const ::android::os::Parcelable&, const ::java::lang::ClassLoader&) const ;
    int32_t getItemPosition(const ::java::lang::Object&) const ;
    void notifyDataSetChanged() const ;
    void registerDataSetObserver(const ::android::database::DataSetObserver&) const ;
    void unregisterDataSetObserver(const ::android::database::DataSetObserver&) const ;
    ::java::lang::CharSequence getPageTitle(int32_t) const ;
    float getPageWidth(int32_t) const ;

};
}
}
}
}



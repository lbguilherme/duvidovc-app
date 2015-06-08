#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.DataSetObserver.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_PagerObserver : public virtual ::java::lang::Object,
                                public virtual ::android::database::DataSetObserver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_PagerObserver(jobject _obj) : ::java::lang::Object(_obj), ::android::database::DataSetObserver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_PagerObserver(const ::android::support::v4::view::ViewPager_PagerObserver& x) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0) {obj = x.obj;}
    ViewPager_PagerObserver(::android::support::v4::view::ViewPager_PagerObserver&& x) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_PagerObserver& operator=(const ::android::support::v4::view::ViewPager_PagerObserver& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_PagerObserver& operator=(::android::support::v4::view::ViewPager_PagerObserver&& x) {obj = std::move(x.obj); return *this;}
    
    void onChanged() const;
    void onInvalidated() const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class ViewPager_PageTransformer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_PageTransformer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_PageTransformer(const ::android::support::v4::view::ViewPager_PageTransformer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPager_PageTransformer(::android::support::v4::view::ViewPager_PageTransformer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_PageTransformer& operator=(const ::android::support::v4::view::ViewPager_PageTransformer& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_PageTransformer& operator=(::android::support::v4::view::ViewPager_PageTransformer&& x) {obj = std::move(x.obj); return *this;}
    
    void transformPage(const ::android::view::View&, float) const;

};
}
}
}
}



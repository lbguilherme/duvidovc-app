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
class ViewPager_Decor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPager_Decor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPager_Decor(const ::android::support::v4::view::ViewPager_Decor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPager_Decor(::android::support::v4::view::ViewPager_Decor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::ViewPager_Decor& operator=(const ::android::support::v4::view::ViewPager_Decor& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::ViewPager_Decor& operator=(::android::support::v4::view::ViewPager_Decor&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}



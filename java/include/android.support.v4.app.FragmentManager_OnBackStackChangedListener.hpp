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
namespace app {
class FragmentManager_OnBackStackChangedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FragmentManager_OnBackStackChangedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FragmentManager_OnBackStackChangedListener(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FragmentManager_OnBackStackChangedListener(::android::support::v4::app::FragmentManager_OnBackStackChangedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& operator=(const ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::FragmentManager_OnBackStackChangedListener& operator=(::android::support::v4::app::FragmentManager_OnBackStackChangedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onBackStackChanged() const;

};
}
}
}
}



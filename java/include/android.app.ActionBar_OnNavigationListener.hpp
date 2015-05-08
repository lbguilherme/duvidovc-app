#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class ActionBar_OnNavigationListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBar_OnNavigationListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBar_OnNavigationListener(const ::android::app::ActionBar_OnNavigationListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBar_OnNavigationListener(::android::app::ActionBar_OnNavigationListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActionBar_OnNavigationListener& operator=(const ::android::app::ActionBar_OnNavigationListener& x) {obj = x.obj; return *this;}
    ::android::app::ActionBar_OnNavigationListener& operator=(::android::app::ActionBar_OnNavigationListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onNavigationItemSelected(int32_t, int64_t) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
class ActionBar_OnMenuVisibilityListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBar_OnMenuVisibilityListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBar_OnMenuVisibilityListener(const ::android::app::ActionBar_OnMenuVisibilityListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBar_OnMenuVisibilityListener(::android::app::ActionBar_OnMenuVisibilityListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActionBar_OnMenuVisibilityListener& operator=(const ::android::app::ActionBar_OnMenuVisibilityListener& x) {obj = x.obj; return *this;}
    ::android::app::ActionBar_OnMenuVisibilityListener& operator=(::android::app::ActionBar_OnMenuVisibilityListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onMenuVisibilityChanged(bool) const ;

};
}
}



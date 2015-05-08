#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class ActionBar_Tab; } }
namespace android { namespace app { class FragmentTransaction; } }

namespace android {
namespace app {
class ActionBar_TabListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBar_TabListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBar_TabListener(const ::android::app::ActionBar_TabListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBar_TabListener(::android::app::ActionBar_TabListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActionBar_TabListener& operator=(const ::android::app::ActionBar_TabListener& x) {obj = x.obj; return *this;}
    ::android::app::ActionBar_TabListener& operator=(::android::app::ActionBar_TabListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onTabSelected(const ::android::app::ActionBar_Tab&, const ::android::app::FragmentTransaction&) const ;
    void onTabUnselected(const ::android::app::ActionBar_Tab&, const ::android::app::FragmentTransaction&) const ;
    void onTabReselected(const ::android::app::ActionBar_Tab&, const ::android::app::FragmentTransaction&) const ;

};
}
}



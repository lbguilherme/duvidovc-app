#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class TabHost_OnTabChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabHost_OnTabChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabHost_OnTabChangeListener(const ::android::widget::TabHost_OnTabChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TabHost_OnTabChangeListener(::android::widget::TabHost_OnTabChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TabHost_OnTabChangeListener& operator=(const ::android::widget::TabHost_OnTabChangeListener& x) {obj = x.obj; return *this;}
    ::android::widget::TabHost_OnTabChangeListener& operator=(::android::widget::TabHost_OnTabChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onTabChanged(const ::java::lang::String&) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class TabHost_TabContentFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TabHost_TabContentFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TabHost_TabContentFactory(const ::android::widget::TabHost_TabContentFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TabHost_TabContentFactory(::android::widget::TabHost_TabContentFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TabHost_TabContentFactory& operator=(const ::android::widget::TabHost_TabContentFactory& x) {obj = x.obj; return *this;}
    ::android::widget::TabHost_TabContentFactory& operator=(::android::widget::TabHost_TabContentFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View createTabContent(const ::java::lang::String&) const ;

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace widget {
class ViewSwitcher_ViewFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewSwitcher_ViewFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewSwitcher_ViewFactory(const ::android::widget::ViewSwitcher_ViewFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewSwitcher_ViewFactory(::android::widget::ViewSwitcher_ViewFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ViewSwitcher_ViewFactory& operator=(const ::android::widget::ViewSwitcher_ViewFactory& x) {obj = x.obj; return *this;}
    ::android::widget::ViewSwitcher_ViewFactory& operator=(::android::widget::ViewSwitcher_ViewFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::View makeView() const ;

};
}
}



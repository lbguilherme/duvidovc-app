#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MenuItem; } }

namespace android {
namespace view {
class MenuItem_OnActionExpandListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuItem_OnActionExpandListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuItem_OnActionExpandListener(const ::android::view::MenuItem_OnActionExpandListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuItem_OnActionExpandListener(::android::view::MenuItem_OnActionExpandListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::MenuItem_OnActionExpandListener& operator=(const ::android::view::MenuItem_OnActionExpandListener& x) {obj = x.obj; return *this;}
    ::android::view::MenuItem_OnActionExpandListener& operator=(::android::view::MenuItem_OnActionExpandListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onMenuItemActionExpand(const ::android::view::MenuItem&) const ;
    bool onMenuItemActionCollapse(const ::android::view::MenuItem&) const ;

};
}
}



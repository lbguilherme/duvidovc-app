#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class MenuItem; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MenuItemCompat_OnActionExpandListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuItemCompat_OnActionExpandListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuItemCompat_OnActionExpandListener(const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuItemCompat_OnActionExpandListener(::android::support::v4::view::MenuItemCompat_OnActionExpandListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& operator=(const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& operator=(::android::support::v4::view::MenuItemCompat_OnActionExpandListener&& x) {obj = std::move(x.obj); return *this;}
    
    bool onMenuItemActionExpand(const ::android::view::MenuItem&) const ;
    bool onMenuItemActionCollapse(const ::android::view::MenuItem&) const ;

};
}
}
}
}



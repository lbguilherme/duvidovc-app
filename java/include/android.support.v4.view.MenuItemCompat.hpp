#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace view { class ActionProvider; } } } }
namespace android { namespace support { namespace v4 { namespace view { class MenuItemCompat_OnActionExpandListener; } } } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MenuItemCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuItemCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuItemCompat(const ::android::support::v4::view::MenuItemCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MenuItemCompat(::android::support::v4::view::MenuItemCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MenuItemCompat& operator=(const ::android::support::v4::view::MenuItemCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MenuItemCompat& operator=(::android::support::v4::view::MenuItemCompat&& x) {obj = std::move(x.obj); return *this;}
    
    MenuItemCompat();
    static void setShowAsAction(const ::android::view::MenuItem&, int32_t);
    static ::android::view::MenuItem setActionView(const ::android::view::MenuItem&, const ::android::view::View&);
    static ::android::view::MenuItem setActionView(const ::android::view::MenuItem&, int32_t);
    static ::android::view::View getActionView(const ::android::view::MenuItem&);
    static ::android::view::MenuItem setActionProvider(const ::android::view::MenuItem&, const ::android::support::v4::view::ActionProvider&);
    static ::android::support::v4::view::ActionProvider getActionProvider(const ::android::view::MenuItem&);
    static bool expandActionView(const ::android::view::MenuItem&);
    static bool collapseActionView(const ::android::view::MenuItem&);
    static bool isActionViewExpanded(const ::android::view::MenuItem&);
    static ::android::view::MenuItem setOnActionExpandListener(const ::android::view::MenuItem&, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener&);

};
}
}
}
}

#include "android.support.v4.view.MenuItemCompat_BaseMenuVersionImpl.hpp"
#include "android.support.v4.view.MenuItemCompat_HoneycombMenuVersionImpl.hpp"
#include "android.support.v4.view.MenuItemCompat_IcsMenuVersionImpl.hpp"
#include "android.support.v4.view.MenuItemCompat_MenuVersionImpl.hpp"
#include "android.support.v4.view.MenuItemCompat_OnActionExpandListener.hpp"


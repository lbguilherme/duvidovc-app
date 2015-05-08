#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.MenuItemCompat_MenuVersionImpl.hpp"

namespace android { namespace support { namespace v4 { namespace view { class MenuItemCompat_OnActionExpandListener; } } } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace view {
class MenuItemCompat_HoneycombMenuVersionImpl : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::view::MenuItemCompat_MenuVersionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MenuItemCompat_HoneycombMenuVersionImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::view::MenuItemCompat_MenuVersionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MenuItemCompat_HoneycombMenuVersionImpl(const ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MenuItemCompat_MenuVersionImpl((jobject)0) {obj = x.obj;}
    MenuItemCompat_HoneycombMenuVersionImpl(::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::view::MenuItemCompat_MenuVersionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl& operator=(const ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl& operator=(::android::support::v4::view::MenuItemCompat_HoneycombMenuVersionImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setShowAsAction(const ::android::view::MenuItem&, int32_t) const ;
    ::android::view::MenuItem setActionView(const ::android::view::MenuItem&, const ::android::view::View&) const ;
    ::android::view::MenuItem setActionView(const ::android::view::MenuItem&, int32_t) const ;
    ::android::view::View getActionView(const ::android::view::MenuItem&) const ;
    bool expandActionView(const ::android::view::MenuItem&) const ;
    bool collapseActionView(const ::android::view::MenuItem&) const ;
    bool isActionViewExpanded(const ::android::view::MenuItem&) const ;
    ::android::view::MenuItem setOnActionExpandListener(const ::android::view::MenuItem&, const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener&) const ;

};
}
}
}
}



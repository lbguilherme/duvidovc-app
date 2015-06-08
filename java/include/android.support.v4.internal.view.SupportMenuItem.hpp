#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.MenuItem.hpp"

namespace android { namespace support { namespace v4 { namespace internal { namespace view { class SupportMenuItem; } } } } }
namespace android { namespace support { namespace v4 { namespace view { class ActionProvider; } } } }
namespace android { namespace support { namespace v4 { namespace view { class MenuItemCompat_OnActionExpandListener; } } } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace internal {
namespace view {
class SupportMenuItem : public virtual ::java::lang::Object,
                        public virtual ::android::view::MenuItem {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SupportMenuItem(jobject _obj) : ::java::lang::Object(_obj), ::android::view::MenuItem(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SupportMenuItem(const ::android::support::v4::internal::view::SupportMenuItem& x) : ::java::lang::Object((jobject)0), ::android::view::MenuItem((jobject)0) {obj = x.obj;}
    SupportMenuItem(::android::support::v4::internal::view::SupportMenuItem&& x) : ::java::lang::Object((jobject)0), ::android::view::MenuItem((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::internal::view::SupportMenuItem& operator=(const ::android::support::v4::internal::view::SupportMenuItem& x) {obj = x.obj; return *this;}
    ::android::support::v4::internal::view::SupportMenuItem& operator=(::android::support::v4::internal::view::SupportMenuItem&& x) {obj = std::move(x.obj); return *this;}
    
    void setShowAsAction(int32_t) const;
    ::android::view::MenuItem setShowAsActionFlags(int32_t) const;
    ::android::view::MenuItem setActionView(const ::android::view::View&) const;
    ::android::view::MenuItem setActionView(int32_t) const;
    ::android::view::View getActionView() const;
    ::android::support::v4::internal::view::SupportMenuItem setSupportActionProvider(const ::android::support::v4::view::ActionProvider&) const;
    ::android::support::v4::view::ActionProvider getSupportActionProvider() const;
    bool expandActionView() const;
    bool collapseActionView() const;
    bool isActionViewExpanded() const;
    ::android::support::v4::internal::view::SupportMenuItem setSupportOnActionExpandListener(const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener&) const;

};
}
}
}
}
}



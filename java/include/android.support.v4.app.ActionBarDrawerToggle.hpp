#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.DrawerLayout_DrawerListener.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace support { namespace v4 { namespace widget { class DrawerLayout; } } } }
namespace android { namespace view { class MenuItem; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActionBarDrawerToggle : public virtual ::java::lang::Object,
                              public virtual ::android::support::v4::widget::DrawerLayout_DrawerListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBarDrawerToggle(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::DrawerLayout_DrawerListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBarDrawerToggle(const ::android::support::v4::app::ActionBarDrawerToggle& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {obj = x.obj;}
    ActionBarDrawerToggle(::android::support::v4::app::ActionBarDrawerToggle&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActionBarDrawerToggle& operator=(const ::android::support::v4::app::ActionBarDrawerToggle& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActionBarDrawerToggle& operator=(::android::support::v4::app::ActionBarDrawerToggle&& x) {obj = std::move(x.obj); return *this;}
    
    ActionBarDrawerToggle(const ::android::app::Activity&, const ::android::support::v4::widget::DrawerLayout&, int32_t, int32_t, int32_t);
    ActionBarDrawerToggle(const ::android::app::Activity&, const ::android::support::v4::widget::DrawerLayout&, bool, int32_t, int32_t, int32_t);
    void syncState() const;
    void setHomeAsUpIndicator(const ::android::graphics::drawable::Drawable&) const;
    void setHomeAsUpIndicator(int32_t) const;
    void setDrawerIndicatorEnabled(bool) const;
    bool isDrawerIndicatorEnabled() const;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const;
    bool onOptionsItemSelected(const ::android::view::MenuItem&) const;
    void onDrawerSlide(const ::android::view::View&, float) const;
    void onDrawerOpened(const ::android::view::View&) const;
    void onDrawerClosed(const ::android::view::View&) const;
    void onDrawerStateChanged(int32_t) const;

};
}
}
}
}

#include "android.support.v4.app.ActionBarDrawerToggle_ActionBarDrawerToggleImpl.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_ActionBarDrawerToggleImplBase.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_ActionBarDrawerToggleImplHC.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_ActionBarDrawerToggleImplJellybeanMR2.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_Delegate.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_DelegateProvider.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_SlideDrawable.hpp"


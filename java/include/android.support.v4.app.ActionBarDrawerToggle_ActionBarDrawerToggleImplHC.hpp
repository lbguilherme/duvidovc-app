#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.ActionBarDrawerToggle_ActionBarDrawerToggleImpl.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActionBarDrawerToggle_ActionBarDrawerToggleImplHC : public virtual ::java::lang::Object,
                                                          public virtual ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBarDrawerToggle_ActionBarDrawerToggleImplHC(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBarDrawerToggle_ActionBarDrawerToggleImplHC(const ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl((jobject)0) {obj = x.obj;}
    ActionBarDrawerToggle_ActionBarDrawerToggleImplHC(::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC& operator=(const ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC& operator=(::android::support::v4::app::ActionBarDrawerToggle_ActionBarDrawerToggleImplHC&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::graphics::drawable::Drawable getThemeUpIndicator(const ::android::app::Activity&) const ;
    ::java::lang::Object setActionBarUpIndicator(const ::java::lang::Object&, const ::android::app::Activity&, const ::android::graphics::drawable::Drawable&, int32_t) const ;
    ::java::lang::Object setActionBarDescription(const ::java::lang::Object&, const ::android::app::Activity&, int32_t) const ;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActionBarDrawerToggle_Delegate : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBarDrawerToggle_Delegate(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBarDrawerToggle_Delegate(const ::android::support::v4::app::ActionBarDrawerToggle_Delegate& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBarDrawerToggle_Delegate(::android::support::v4::app::ActionBarDrawerToggle_Delegate&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActionBarDrawerToggle_Delegate& operator=(const ::android::support::v4::app::ActionBarDrawerToggle_Delegate& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActionBarDrawerToggle_Delegate& operator=(::android::support::v4::app::ActionBarDrawerToggle_Delegate&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::graphics::drawable::Drawable getThemeUpIndicator() const;
    void setActionBarUpIndicator(const ::android::graphics::drawable::Drawable&, int32_t) const;
    void setActionBarDescription(int32_t) const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace app { class ActionBarDrawerToggle_Delegate; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActionBarDrawerToggle_DelegateProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActionBarDrawerToggle_DelegateProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActionBarDrawerToggle_DelegateProvider(const ::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActionBarDrawerToggle_DelegateProvider(::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider& operator=(const ::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider& operator=(::android::support::v4::app::ActionBarDrawerToggle_DelegateProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::app::ActionBarDrawerToggle_Delegate getDrawerToggleDelegate() const;

};
}
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NavUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NavUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NavUtils(const ::android::support::v4::app::NavUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NavUtils(::android::support::v4::app::NavUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NavUtils& operator=(const ::android::support::v4::app::NavUtils& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NavUtils& operator=(::android::support::v4::app::NavUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static bool shouldUpRecreateTask(const ::android::app::Activity&, const ::android::content::Intent&);
    static void navigateUpFromSameTask(const ::android::app::Activity&);
    static void navigateUpTo(const ::android::app::Activity&, const ::android::content::Intent&);
    static ::android::content::Intent getParentActivityIntent(const ::android::app::Activity&);
    static ::android::content::Intent getParentActivityIntent(const ::android::content::Context&, const ::java::lang::Class&);
    static ::android::content::Intent getParentActivityIntent(const ::android::content::Context&, const ::android::content::ComponentName&);
    static ::java::lang::String getParentActivityName(const ::android::app::Activity&);
    static ::java::lang::String getParentActivityName(const ::android::content::Context&, const ::android::content::ComponentName&);

};
}
}
}
}

#include "android.support.v4.app.NavUtils_NavUtilsImpl.hpp"
#include "android.support.v4.app.NavUtils_NavUtilsImplBase.hpp"
#include "android.support.v4.app.NavUtils_NavUtilsImplJB.hpp"


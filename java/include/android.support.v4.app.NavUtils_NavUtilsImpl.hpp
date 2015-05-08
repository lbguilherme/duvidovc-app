#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace pm { class ActivityInfo; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NavUtils_NavUtilsImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NavUtils_NavUtilsImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NavUtils_NavUtilsImpl(const ::android::support::v4::app::NavUtils_NavUtilsImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NavUtils_NavUtilsImpl(::android::support::v4::app::NavUtils_NavUtilsImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NavUtils_NavUtilsImpl& operator=(const ::android::support::v4::app::NavUtils_NavUtilsImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NavUtils_NavUtilsImpl& operator=(::android::support::v4::app::NavUtils_NavUtilsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Intent getParentActivityIntent(const ::android::app::Activity&) const ;
    bool shouldUpRecreateTask(const ::android::app::Activity&, const ::android::content::Intent&) const ;
    void navigateUpTo(const ::android::app::Activity&, const ::android::content::Intent&) const ;
    ::java::lang::String getParentActivityName(const ::android::content::Context&, const ::android::content::pm::ActivityInfo&) const ;

};
}
}
}
}



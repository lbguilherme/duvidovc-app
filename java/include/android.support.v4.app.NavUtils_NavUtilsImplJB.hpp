#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NavUtils_NavUtilsImplBase.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { namespace pm { class ActivityInfo; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NavUtils_NavUtilsImplJB : public virtual ::java::lang::Object,
                                public virtual ::android::support::v4::app::NavUtils_NavUtilsImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NavUtils_NavUtilsImplJB(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NavUtils_NavUtilsImpl(_obj), ::android::support::v4::app::NavUtils_NavUtilsImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NavUtils_NavUtilsImplJB(const ::android::support::v4::app::NavUtils_NavUtilsImplJB& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NavUtils_NavUtilsImpl((jobject)0), ::android::support::v4::app::NavUtils_NavUtilsImplBase((jobject)0) {obj = x.obj;}
    NavUtils_NavUtilsImplJB(::android::support::v4::app::NavUtils_NavUtilsImplJB&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NavUtils_NavUtilsImpl((jobject)0), ::android::support::v4::app::NavUtils_NavUtilsImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NavUtils_NavUtilsImplJB& operator=(const ::android::support::v4::app::NavUtils_NavUtilsImplJB& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NavUtils_NavUtilsImplJB& operator=(::android::support::v4::app::NavUtils_NavUtilsImplJB&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::content::Intent getParentActivityIntent(const ::android::app::Activity&) const;
    bool shouldUpRecreateTask(const ::android::app::Activity&, const ::android::content::Intent&) const;
    void navigateUpTo(const ::android::app::Activity&, const ::android::content::Intent&) const;
    ::java::lang::String getParentActivityName(const ::android::content::Context&, const ::android::content::pm::ActivityInfo&) const;

};
}
}
}
}



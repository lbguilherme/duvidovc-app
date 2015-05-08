#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace support { namespace v4 { namespace app { class ShareCompat_IntentBuilder; } } } }
namespace android { namespace view { class Menu; } }
namespace android { namespace view { class MenuItem; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ShareCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareCompat(const ::android::support::v4::app::ShareCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ShareCompat(::android::support::v4::app::ShareCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ShareCompat& operator=(const ::android::support::v4::app::ShareCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ShareCompat& operator=(::android::support::v4::app::ShareCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ShareCompat();
    static ::java::lang::String getCallingPackage(const ::android::app::Activity&);
    static ::android::content::ComponentName getCallingActivity(const ::android::app::Activity&);
    static void configureMenuItem(const ::android::view::MenuItem&, const ::android::support::v4::app::ShareCompat_IntentBuilder&);
    static void configureMenuItem(const ::android::view::Menu&, int32_t, const ::android::support::v4::app::ShareCompat_IntentBuilder&);

};
}
}
}
}

#include "android.support.v4.app.ShareCompat_IntentBuilder.hpp"
#include "android.support.v4.app.ShareCompat_IntentReader.hpp"
#include "android.support.v4.app.ShareCompat_ShareCompatImpl.hpp"
#include "android.support.v4.app.ShareCompat_ShareCompatImplBase.hpp"
#include "android.support.v4.app.ShareCompat_ShareCompatImplICS.hpp"
#include "android.support.v4.app.ShareCompat_ShareCompatImplJB.hpp"


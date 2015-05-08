#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.ContextCompat.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class SharedElementCallback; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActivityCompat : public virtual ::java::lang::Object,
                       public virtual ::android::support::v4::content::ContextCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityCompat(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::ContextCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityCompat(const ::android::support::v4::app::ActivityCompat& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::ContextCompat((jobject)0) {obj = x.obj;}
    ActivityCompat(::android::support::v4::app::ActivityCompat&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::ContextCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActivityCompat& operator=(const ::android::support::v4::app::ActivityCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActivityCompat& operator=(::android::support::v4::app::ActivityCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityCompat();
    static bool invalidateOptionsMenu(const ::android::app::Activity&);
    static void startActivity(const ::android::app::Activity&, const ::android::content::Intent&, const ::android::os::Bundle&);
    static void startActivityForResult(const ::android::app::Activity&, const ::android::content::Intent&, int32_t, const ::android::os::Bundle&);
    static void finishAffinity(const ::android::app::Activity&);
    static void finishAfterTransition(const ::android::app::Activity&);
    static void setEnterSharedElementCallback(const ::android::app::Activity&, const ::android::support::v4::app::SharedElementCallback&);
    static void setExitSharedElementCallback(const ::android::app::Activity&, const ::android::support::v4::app::SharedElementCallback&);
    static void postponeEnterTransition(const ::android::app::Activity&);
    static void startPostponedEnterTransition(const ::android::app::Activity&);

};
}
}
}
}

#include "android.support.v4.app.ActivityCompat_SharedElementCallback21Impl.hpp"


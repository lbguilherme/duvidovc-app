#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.ShareCompat_ShareCompatImplBase.hpp"

namespace android { namespace support { namespace v4 { namespace app { class ShareCompat_IntentBuilder; } } } }
namespace android { namespace view { class MenuItem; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ShareCompat_ShareCompatImplICS : public virtual ::java::lang::Object,
                                       public virtual ::android::support::v4::app::ShareCompat_ShareCompatImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareCompat_ShareCompatImplICS(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::ShareCompat_ShareCompatImpl(_obj), ::android::support::v4::app::ShareCompat_ShareCompatImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareCompat_ShareCompatImplICS(const ::android::support::v4::app::ShareCompat_ShareCompatImplICS& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImpl((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImplBase((jobject)0) {obj = x.obj;}
    ShareCompat_ShareCompatImplICS(::android::support::v4::app::ShareCompat_ShareCompatImplICS&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImpl((jobject)0), ::android::support::v4::app::ShareCompat_ShareCompatImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ShareCompat_ShareCompatImplICS& operator=(const ::android::support::v4::app::ShareCompat_ShareCompatImplICS& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ShareCompat_ShareCompatImplICS& operator=(::android::support::v4::app::ShareCompat_ShareCompatImplICS&& x) {obj = std::move(x.obj); return *this;}
    
    void configureMenuItem(const ::android::view::MenuItem&, const ::android::support::v4::app::ShareCompat_IntentBuilder&) const ;

};
}
}
}
}



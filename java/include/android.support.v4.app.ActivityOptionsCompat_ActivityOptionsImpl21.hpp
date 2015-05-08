#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.ActivityOptionsCompat.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class ActivityOptionsCompat; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActivityOptionsCompat_ActivityOptionsImpl21 : public virtual ::java::lang::Object,
                                                    public virtual ::android::support::v4::app::ActivityOptionsCompat {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityOptionsCompat_ActivityOptionsImpl21(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::ActivityOptionsCompat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityOptionsCompat_ActivityOptionsImpl21(const ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ActivityOptionsCompat((jobject)0) {obj = x.obj;}
    ActivityOptionsCompat_ActivityOptionsImpl21(::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::ActivityOptionsCompat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21& operator=(const ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21& operator=(::android::support::v4::app::ActivityOptionsCompat_ActivityOptionsImpl21&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::Bundle toBundle() const ;
    void update(const ::android::support::v4::app::ActivityOptionsCompat&) const ;

};
}
}
}
}



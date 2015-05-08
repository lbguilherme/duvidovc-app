#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class ActivityOptionsCompat; } } } }
namespace android { namespace support { namespace v4 { namespace util { class Pair; } } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActivityOptionsCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityOptionsCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityOptionsCompat(const ::android::support::v4::app::ActivityOptionsCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActivityOptionsCompat(::android::support::v4::app::ActivityOptionsCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActivityOptionsCompat& operator=(const ::android::support::v4::app::ActivityOptionsCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActivityOptionsCompat& operator=(::android::support::v4::app::ActivityOptionsCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::app::ActivityOptionsCompat makeCustomAnimation(const ::android::content::Context&, int32_t, int32_t);
    static ::android::support::v4::app::ActivityOptionsCompat makeScaleUpAnimation(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t);
    static ::android::support::v4::app::ActivityOptionsCompat makeThumbnailScaleUpAnimation(const ::android::view::View&, const ::android::graphics::Bitmap&, int32_t, int32_t);
    static ::android::support::v4::app::ActivityOptionsCompat makeSceneTransitionAnimation(const ::android::app::Activity&, const ::android::view::View&, const ::java::lang::String&);
    static ::android::support::v4::app::ActivityOptionsCompat makeSceneTransitionAnimation(const ::android::app::Activity&, const std::vector< ::android::support::v4::util::Pair>&);
    ::android::os::Bundle toBundle() const ;
    void update(const ::android::support::v4::app::ActivityOptionsCompat&) const ;

};
}
}
}
}

#include "android.support.v4.app.ActivityOptionsCompat_ActivityOptionsImpl21.hpp"
#include "android.support.v4.app.ActivityOptionsCompat_ActivityOptionsImplJB.hpp"


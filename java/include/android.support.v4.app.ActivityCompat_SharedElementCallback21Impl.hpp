#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class RectF; } }
namespace android { namespace os { class Parcelable; } }
namespace android { namespace support { namespace v4 { namespace app { class SharedElementCallback; } } } }
namespace android { namespace view { class View; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActivityCompat_SharedElementCallback21Impl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityCompat_SharedElementCallback21Impl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityCompat_SharedElementCallback21Impl(const ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActivityCompat_SharedElementCallback21Impl(::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl& operator=(const ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl& operator=(::android::support::v4::app::ActivityCompat_SharedElementCallback21Impl&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityCompat_SharedElementCallback21Impl(const ::android::support::v4::app::SharedElementCallback&);
    void onSharedElementStart(const ::java::util::List&, const ::java::util::List&, const ::java::util::List&) const ;
    void onSharedElementEnd(const ::java::util::List&, const ::java::util::List&, const ::java::util::List&) const ;
    void onRejectSharedElements(const ::java::util::List&) const ;
    void onMapSharedElements(const ::java::util::List&, const ::java::util::Map&) const ;
    ::android::os::Parcelable onCaptureSharedElementSnapshot(const ::android::view::View&, const ::android::graphics::Matrix&, const ::android::graphics::RectF&) const ;
    ::android::view::View onCreateSnapshotView(const ::android::content::Context&, const ::android::os::Parcelable&) const ;

};
}
}
}
}



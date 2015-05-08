#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class SurfaceTexture; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
class Surface : public virtual ::java::lang::Object,
                public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Surface(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Surface(const ::android::view::Surface& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Surface(::android::view::Surface&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::Surface& operator=(const ::android::view::Surface& x) {obj = x.obj; return *this;}
    ::android::view::Surface& operator=(::android::view::Surface&& x) {obj = std::move(x.obj); return *this;}
    
    Surface(const ::android::graphics::SurfaceTexture&);
    bool isValid() const ;
    void release() const ;
    ::android::graphics::Canvas lockCanvas(const ::android::graphics::Rect&) const ;
    void unlockCanvasAndPost(const ::android::graphics::Canvas&) const ;
    void unlockCanvas(const ::android::graphics::Canvas&) const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void readFromParcel(const ::android::os::Parcel&) const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}

#include "android.view.Surface_OutOfResourcesException.hpp"


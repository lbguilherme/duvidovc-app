#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareMedia.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class SharePhoto : public virtual ::java::lang::Object,
                   public virtual ::com::facebook::share::model::ShareMedia {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SharePhoto(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::share::model::ShareMedia(_obj), ::com::facebook::share::model::ShareModel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SharePhoto(const ::com::facebook::share::model::SharePhoto& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareMedia((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj;}
    SharePhoto(::com::facebook::share::model::SharePhoto&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareMedia((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::SharePhoto& operator=(const ::com::facebook::share::model::SharePhoto& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::SharePhoto& operator=(::com::facebook::share::model::SharePhoto&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::graphics::Bitmap getBitmap() const ;
    ::android::net::Uri getImageUrl() const ;
    bool getUserGenerated() const ;
    ::java::lang::String getCaption() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}

#include "com.facebook.share.model.SharePhoto_Builder.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareContent.hpp"
#include "com.facebook.share.model.ShareModel.hpp"

namespace android { namespace os { class Parcel; } }
namespace com { namespace facebook { namespace share { namespace model { class SharePhoto; } } } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideo; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareVideoContent : public virtual ::java::lang::Object,
                          public virtual ::com::facebook::share::model::ShareContent,
                          public virtual ::com::facebook::share::model::ShareModel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareVideoContent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::share::model::ShareContent(_obj), ::com::facebook::share::model::ShareModel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareVideoContent(const ::com::facebook::share::model::ShareVideoContent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareContent((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj;}
    ShareVideoContent(::com::facebook::share::model::ShareVideoContent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareContent((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareVideoContent& operator=(const ::com::facebook::share::model::ShareVideoContent& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareVideoContent& operator=(::com::facebook::share::model::ShareVideoContent&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getContentDescription() const;
    ::java::lang::String getContentTitle() const;
    ::com::facebook::share::model::SharePhoto getPreviewPhoto() const;
    ::com::facebook::share::model::ShareVideo getVideo() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}
}

#include "com.facebook.share.model.ShareVideoContent_Builder.hpp"


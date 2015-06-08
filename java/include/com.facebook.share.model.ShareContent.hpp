#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.model.ShareModel.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace share {
namespace model {
class ShareContent : public virtual ::java::lang::Object,
                     public virtual ::com::facebook::share::model::ShareModel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareContent(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::com::facebook::share::model::ShareModel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareContent(const ::com::facebook::share::model::ShareContent& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj;}
    ShareContent(::com::facebook::share::model::ShareContent&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::com::facebook::share::model::ShareModel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::model::ShareContent& operator=(const ::com::facebook::share::model::ShareContent& x) {obj = x.obj; return *this;}
    ::com::facebook::share::model::ShareContent& operator=(::com::facebook::share::model::ShareContent&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::net::Uri getContentUrl() const;
    ::java::util::List getPeopleIds() const;
    ::java::lang::String getPlaceId() const;
    ::java::lang::String getRef() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}
}

#include "com.facebook.share.model.ShareContent_Builder.hpp"


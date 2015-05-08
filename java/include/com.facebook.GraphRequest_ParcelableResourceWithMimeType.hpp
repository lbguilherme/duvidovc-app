#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace os { class Parcelable; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
class GraphRequest_ParcelableResourceWithMimeType : public virtual ::java::lang::Object,
                                                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GraphRequest_ParcelableResourceWithMimeType(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GraphRequest_ParcelableResourceWithMimeType(const ::com::facebook::GraphRequest_ParcelableResourceWithMimeType& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    GraphRequest_ParcelableResourceWithMimeType(::com::facebook::GraphRequest_ParcelableResourceWithMimeType&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::GraphRequest_ParcelableResourceWithMimeType& operator=(const ::com::facebook::GraphRequest_ParcelableResourceWithMimeType& x) {obj = x.obj; return *this;}
    ::com::facebook::GraphRequest_ParcelableResourceWithMimeType& operator=(::com::facebook::GraphRequest_ParcelableResourceWithMimeType&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getMimeType() const ;
    ::android::os::Parcelable getResource() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    GraphRequest_ParcelableResourceWithMimeType(const ::android::os::Parcelable&, const ::java::lang::String&);

};
}
}



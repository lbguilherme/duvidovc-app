#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ContentProviderResult : public virtual ::java::lang::Object,
                              public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProviderResult(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProviderResult(const ::android::content::ContentProviderResult& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ContentProviderResult(::android::content::ContentProviderResult&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentProviderResult& operator=(const ::android::content::ContentProviderResult& x) {obj = x.obj; return *this;}
    ::android::content::ContentProviderResult& operator=(::android::content::ContentProviderResult&& x) {obj = std::move(x.obj); return *this;}
    
    ContentProviderResult(const ::android::net::Uri&);
    ContentProviderResult(int32_t);
    ContentProviderResult(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    ::java::lang::String toString() const ;

};
}
}



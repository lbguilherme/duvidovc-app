#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }

namespace android {
namespace view {
namespace inputmethod {
class ExtractedTextRequest : public virtual ::java::lang::Object,
                             public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExtractedTextRequest(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExtractedTextRequest(const ::android::view::inputmethod::ExtractedTextRequest& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ExtractedTextRequest(::android::view::inputmethod::ExtractedTextRequest&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::ExtractedTextRequest& operator=(const ::android::view::inputmethod::ExtractedTextRequest& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::ExtractedTextRequest& operator=(::android::view::inputmethod::ExtractedTextRequest&& x) {obj = std::move(x.obj); return *this;}
    
    ExtractedTextRequest();
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;

};
}
}
}



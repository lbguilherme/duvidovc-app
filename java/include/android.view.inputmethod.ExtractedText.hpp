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
class ExtractedText : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExtractedText(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExtractedText(const ::android::view::inputmethod::ExtractedText& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ExtractedText(::android::view::inputmethod::ExtractedText&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::inputmethod::ExtractedText& operator=(const ::android::view::inputmethod::ExtractedText& x) {obj = x.obj; return *this;}
    ::android::view::inputmethod::ExtractedText& operator=(::android::view::inputmethod::ExtractedText&& x) {obj = std::move(x.obj); return *this;}
    
    ExtractedText();
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;

};
}
}
}



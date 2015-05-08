#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Parcel; } }

namespace android {
namespace os {
class Parcelable : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Parcelable(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Parcelable(const ::android::os::Parcelable& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Parcelable(::android::os::Parcelable&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Parcelable& operator=(const ::android::os::Parcelable& x) {obj = x.obj; return *this;}
    ::android::os::Parcelable& operator=(::android::os::Parcelable&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}

#include "android.os.Parcelable_ClassLoaderCreator.hpp"
#include "android.os.Parcelable_Creator.hpp"


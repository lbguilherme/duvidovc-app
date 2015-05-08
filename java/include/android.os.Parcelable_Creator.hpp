#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace os {
class Parcelable_Creator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Parcelable_Creator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Parcelable_Creator(const ::android::os::Parcelable_Creator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Parcelable_Creator(::android::os::Parcelable_Creator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Parcelable_Creator& operator=(const ::android::os::Parcelable_Creator& x) {obj = x.obj; return *this;}
    ::android::os::Parcelable_Creator& operator=(::android::os::Parcelable_Creator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object createFromParcel(const ::android::os::Parcel&) const ;
    std::vector< ::java::lang::Object> newArray(int32_t) const ;

};
}
}



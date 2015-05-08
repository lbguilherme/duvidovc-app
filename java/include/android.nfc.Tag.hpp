#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace nfc {
class Tag : public virtual ::java::lang::Object,
            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Tag(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Tag(const ::android::nfc::Tag& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Tag(::android::nfc::Tag&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::Tag& operator=(const ::android::nfc::Tag& x) {obj = x.obj; return *this;}
    ::android::nfc::Tag& operator=(::android::nfc::Tag&& x) {obj = std::move(x.obj); return *this;}
    
    std::vector< int8_t> getId() const ;
    std::vector< ::java::lang::String> getTechList() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}



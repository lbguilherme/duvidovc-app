#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace nfc { class NdefRecord; } }
namespace android { namespace os { class Parcel; } }

namespace android {
namespace nfc {
class NdefMessage : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NdefMessage(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NdefMessage(const ::android::nfc::NdefMessage& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    NdefMessage(::android::nfc::NdefMessage&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NdefMessage& operator=(const ::android::nfc::NdefMessage& x) {obj = x.obj; return *this;}
    ::android::nfc::NdefMessage& operator=(::android::nfc::NdefMessage&& x) {obj = std::move(x.obj); return *this;}
    
    NdefMessage(const std::vector< int8_t>&);
    NdefMessage(const std::vector< ::android::nfc::NdefRecord>&);
    std::vector< ::android::nfc::NdefRecord> getRecords() const ;
    std::vector< int8_t> toByteArray() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}



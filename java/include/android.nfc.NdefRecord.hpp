#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace nfc { class NdefRecord; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace nfc {
class NdefRecord : public virtual ::java::lang::Object,
                   public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NdefRecord(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NdefRecord(const ::android::nfc::NdefRecord& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    NdefRecord(::android::nfc::NdefRecord&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::nfc::NdefRecord& operator=(const ::android::nfc::NdefRecord& x) {obj = x.obj; return *this;}
    ::android::nfc::NdefRecord& operator=(::android::nfc::NdefRecord&& x) {obj = std::move(x.obj); return *this;}
    
    NdefRecord(int16_t, const std::vector< int8_t>&, const std::vector< int8_t>&, const std::vector< int8_t>&);
    NdefRecord(const std::vector< int8_t>&);
    int16_t getTnf() const;
    std::vector< int8_t> getType() const;
    std::vector< int8_t> getId() const;
    std::vector< int8_t> getPayload() const;
    static ::android::nfc::NdefRecord createApplicationRecord(const ::java::lang::String&);
    static ::android::nfc::NdefRecord createUri(const ::android::net::Uri&);
    static ::android::nfc::NdefRecord createUri(const ::java::lang::String&);
    std::vector< int8_t> toByteArray() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}



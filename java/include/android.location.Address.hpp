#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace location {
class Address : public virtual ::java::lang::Object,
                public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Address(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Address(const ::android::location::Address& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Address(::android::location::Address&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::Address& operator=(const ::android::location::Address& x) {obj = x.obj; return *this;}
    ::android::location::Address& operator=(::android::location::Address&& x) {obj = std::move(x.obj); return *this;}
    
    Address(const ::java::util::Locale&);
    ::java::util::Locale getLocale() const;
    int32_t getMaxAddressLineIndex() const;
    ::java::lang::String getAddressLine(int32_t) const;
    void setAddressLine(int32_t, const ::java::lang::String&) const;
    ::java::lang::String getFeatureName() const;
    void setFeatureName(const ::java::lang::String&) const;
    ::java::lang::String getAdminArea() const;
    void setAdminArea(const ::java::lang::String&) const;
    ::java::lang::String getSubAdminArea() const;
    void setSubAdminArea(const ::java::lang::String&) const;
    ::java::lang::String getLocality() const;
    void setLocality(const ::java::lang::String&) const;
    ::java::lang::String getSubLocality() const;
    void setSubLocality(const ::java::lang::String&) const;
    ::java::lang::String getThoroughfare() const;
    void setThoroughfare(const ::java::lang::String&) const;
    ::java::lang::String getSubThoroughfare() const;
    void setSubThoroughfare(const ::java::lang::String&) const;
    ::java::lang::String getPremises() const;
    void setPremises(const ::java::lang::String&) const;
    ::java::lang::String getPostalCode() const;
    void setPostalCode(const ::java::lang::String&) const;
    ::java::lang::String getCountryCode() const;
    void setCountryCode(const ::java::lang::String&) const;
    ::java::lang::String getCountryName() const;
    void setCountryName(const ::java::lang::String&) const;
    bool hasLatitude() const;
    double getLatitude() const;
    void setLatitude(double) const;
    void clearLatitude() const;
    bool hasLongitude() const;
    double getLongitude() const;
    void setLongitude(double) const;
    void clearLongitude() const;
    ::java::lang::String getPhone() const;
    void setPhone(const ::java::lang::String&) const;
    ::java::lang::String getUrl() const;
    void setUrl(const ::java::lang::String&) const;
    ::android::os::Bundle getExtras() const;
    void setExtras(const ::android::os::Bundle&) const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}



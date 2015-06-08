#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace location { class Location; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace location {
class Location : public virtual ::java::lang::Object,
                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Location(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Location(const ::android::location::Location& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Location(::android::location::Location&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::Location& operator=(const ::android::location::Location& x) {obj = x.obj; return *this;}
    ::android::location::Location& operator=(::android::location::Location&& x) {obj = std::move(x.obj); return *this;}
    
    Location(const ::java::lang::String&);
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;
    void set(const ::android::location::Location&) const;
    void reset() const;
    static ::java::lang::String convert(double, int32_t);
    static double convert(const ::java::lang::String&);
    static void distanceBetween(double, double, double, double, const std::vector< float>&);
    float distanceTo(const ::android::location::Location&) const;
    float bearingTo(const ::android::location::Location&) const;
    ::java::lang::String getProvider() const;
    void setProvider(const ::java::lang::String&) const;
    int64_t getTime() const;
    void setTime(int64_t) const;
    double getLatitude() const;
    void setLatitude(double) const;
    double getLongitude() const;
    void setLongitude(double) const;
    bool hasAltitude() const;
    double getAltitude() const;
    void setAltitude(double) const;
    void removeAltitude() const;
    bool hasSpeed() const;
    float getSpeed() const;
    void setSpeed(float) const;
    void removeSpeed() const;
    bool hasBearing() const;
    float getBearing() const;
    void setBearing(float) const;
    void removeBearing() const;
    bool hasAccuracy() const;
    float getAccuracy() const;
    void setAccuracy(float) const;
    void removeAccuracy() const;
    ::android::os::Bundle getExtras() const;
    void setExtras(const ::android::os::Bundle&) const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}



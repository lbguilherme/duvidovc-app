#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace location { class Criteria; } }
namespace android { namespace location { class GpsStatus; } }
namespace android { namespace location { class GpsStatus_Listener; } }
namespace android { namespace location { class GpsStatus_NmeaListener; } }
namespace android { namespace location { class Location; } }
namespace android { namespace location { class LocationListener; } }
namespace android { namespace location { class LocationProvider; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Looper; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace location {
class LocationManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocationManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocationManager(const ::android::location::LocationManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocationManager(::android::location::LocationManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::LocationManager& operator=(const ::android::location::LocationManager& x) {obj = x.obj; return *this;}
    ::android::location::LocationManager& operator=(::android::location::LocationManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::List getAllProviders() const ;
    ::java::util::List getProviders(bool) const ;
    ::android::location::LocationProvider getProvider(const ::java::lang::String&) const ;
    ::java::util::List getProviders(const ::android::location::Criteria&, bool) const ;
    ::java::lang::String getBestProvider(const ::android::location::Criteria&, bool) const ;
    void requestLocationUpdates(const ::java::lang::String&, int64_t, float, const ::android::location::LocationListener&) const ;
    void requestLocationUpdates(const ::java::lang::String&, int64_t, float, const ::android::location::LocationListener&, const ::android::os::Looper&) const ;
    void requestLocationUpdates(int64_t, float, const ::android::location::Criteria&, const ::android::location::LocationListener&, const ::android::os::Looper&) const ;
    void requestLocationUpdates(const ::java::lang::String&, int64_t, float, const ::android::app::PendingIntent&) const ;
    void requestLocationUpdates(int64_t, float, const ::android::location::Criteria&, const ::android::app::PendingIntent&) const ;
    void requestSingleUpdate(const ::java::lang::String&, const ::android::location::LocationListener&, const ::android::os::Looper&) const ;
    void requestSingleUpdate(const ::android::location::Criteria&, const ::android::location::LocationListener&, const ::android::os::Looper&) const ;
    void requestSingleUpdate(const ::java::lang::String&, const ::android::app::PendingIntent&) const ;
    void requestSingleUpdate(const ::android::location::Criteria&, const ::android::app::PendingIntent&) const ;
    void removeUpdates(const ::android::location::LocationListener&) const ;
    void removeUpdates(const ::android::app::PendingIntent&) const ;
    void addProximityAlert(double, double, float, int64_t, const ::android::app::PendingIntent&) const ;
    void removeProximityAlert(const ::android::app::PendingIntent&) const ;
    bool isProviderEnabled(const ::java::lang::String&) const ;
    ::android::location::Location getLastKnownLocation(const ::java::lang::String&) const ;
    void addTestProvider(const ::java::lang::String&, bool, bool, bool, bool, bool, bool, bool, int32_t, int32_t) const ;
    void removeTestProvider(const ::java::lang::String&) const ;
    void setTestProviderLocation(const ::java::lang::String&, const ::android::location::Location&) const ;
    void clearTestProviderLocation(const ::java::lang::String&) const ;
    void setTestProviderEnabled(const ::java::lang::String&, bool) const ;
    void clearTestProviderEnabled(const ::java::lang::String&) const ;
    void setTestProviderStatus(const ::java::lang::String&, int32_t, const ::android::os::Bundle&, int64_t) const ;
    void clearTestProviderStatus(const ::java::lang::String&) const ;
    bool addGpsStatusListener(const ::android::location::GpsStatus_Listener&) const ;
    void removeGpsStatusListener(const ::android::location::GpsStatus_Listener&) const ;
    bool addNmeaListener(const ::android::location::GpsStatus_NmeaListener&) const ;
    void removeNmeaListener(const ::android::location::GpsStatus_NmeaListener&) const ;
    ::android::location::GpsStatus getGpsStatus(const ::android::location::GpsStatus&) const ;
    bool sendExtraCommand(const ::java::lang::String&, const ::java::lang::String&, const ::android::os::Bundle&) const ;

};
}
}



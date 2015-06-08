#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Iterable; } }

namespace android {
namespace location {
class GpsStatus : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GpsStatus(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GpsStatus(const ::android::location::GpsStatus& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GpsStatus(::android::location::GpsStatus&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::GpsStatus& operator=(const ::android::location::GpsStatus& x) {obj = x.obj; return *this;}
    ::android::location::GpsStatus& operator=(::android::location::GpsStatus&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getTimeToFirstFix() const;
    ::java::lang::Iterable getSatellites() const;
    int32_t getMaxSatellites() const;

};
}
}

#include "android.location.GpsStatus_Listener.hpp"
#include "android.location.GpsStatus_NmeaListener.hpp"


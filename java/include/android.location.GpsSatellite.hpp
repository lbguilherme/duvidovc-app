#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace location {
class GpsSatellite : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GpsSatellite(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GpsSatellite(const ::android::location::GpsSatellite& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GpsSatellite(::android::location::GpsSatellite&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::GpsSatellite& operator=(const ::android::location::GpsSatellite& x) {obj = x.obj; return *this;}
    ::android::location::GpsSatellite& operator=(::android::location::GpsSatellite&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getPrn() const;
    float getSnr() const;
    float getElevation() const;
    float getAzimuth() const;
    bool hasEphemeris() const;
    bool hasAlmanac() const;
    bool usedInFix() const;

};
}
}



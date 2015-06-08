#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace location { class Criteria; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace location {
class LocationProvider : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocationProvider(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocationProvider(const ::android::location::LocationProvider& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocationProvider(::android::location::LocationProvider&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::LocationProvider& operator=(const ::android::location::LocationProvider& x) {obj = x.obj; return *this;}
    ::android::location::LocationProvider& operator=(::android::location::LocationProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    bool meetsCriteria(const ::android::location::Criteria&) const;
    bool requiresNetwork() const;
    bool requiresSatellite() const;
    bool requiresCell() const;
    bool hasMonetaryCost() const;
    bool supportsAltitude() const;
    bool supportsSpeed() const;
    bool supportsBearing() const;
    int32_t getPowerRequirement() const;
    int32_t getAccuracy() const;

};
}
}



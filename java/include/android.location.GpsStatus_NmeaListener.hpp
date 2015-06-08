#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace location {
class GpsStatus_NmeaListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GpsStatus_NmeaListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GpsStatus_NmeaListener(const ::android::location::GpsStatus_NmeaListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GpsStatus_NmeaListener(::android::location::GpsStatus_NmeaListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::GpsStatus_NmeaListener& operator=(const ::android::location::GpsStatus_NmeaListener& x) {obj = x.obj; return *this;}
    ::android::location::GpsStatus_NmeaListener& operator=(::android::location::GpsStatus_NmeaListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onNmeaReceived(int64_t, const ::java::lang::String&) const;

};
}
}



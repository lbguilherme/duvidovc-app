#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace location { class Location; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace location {
class LocationListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocationListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocationListener(const ::android::location::LocationListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocationListener(::android::location::LocationListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::LocationListener& operator=(const ::android::location::LocationListener& x) {obj = x.obj; return *this;}
    ::android::location::LocationListener& operator=(::android::location::LocationListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onLocationChanged(const ::android::location::Location&) const;
    void onStatusChanged(const ::java::lang::String&, int32_t, const ::android::os::Bundle&) const;
    void onProviderEnabled(const ::java::lang::String&) const;
    void onProviderDisabled(const ::java::lang::String&) const;

};
}
}



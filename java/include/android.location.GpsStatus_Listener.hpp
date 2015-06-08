#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace location {
class GpsStatus_Listener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GpsStatus_Listener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GpsStatus_Listener(const ::android::location::GpsStatus_Listener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GpsStatus_Listener(::android::location::GpsStatus_Listener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::GpsStatus_Listener& operator=(const ::android::location::GpsStatus_Listener& x) {obj = x.obj; return *this;}
    ::android::location::GpsStatus_Listener& operator=(::android::location::GpsStatus_Listener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGpsStatusChanged(int32_t) const;

};
}
}



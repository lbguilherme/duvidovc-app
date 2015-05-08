#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace hardware {
class GeomagneticField : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GeomagneticField(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GeomagneticField(const ::android::hardware::GeomagneticField& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GeomagneticField(::android::hardware::GeomagneticField&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::GeomagneticField& operator=(const ::android::hardware::GeomagneticField& x) {obj = x.obj; return *this;}
    ::android::hardware::GeomagneticField& operator=(::android::hardware::GeomagneticField&& x) {obj = std::move(x.obj); return *this;}
    
    GeomagneticField(float, float, float, int64_t);
    float getX() const ;
    float getY() const ;
    float getZ() const ;
    float getDeclination() const ;
    float getInclination() const ;
    float getHorizontalStrength() const ;
    float getFieldStrength() const ;

};
}
}



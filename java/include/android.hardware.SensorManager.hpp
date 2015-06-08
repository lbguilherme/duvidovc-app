#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Sensor; } }
namespace android { namespace hardware { class SensorEventListener; } }
namespace android { namespace hardware { class SensorListener; } }
namespace android { namespace os { class Handler; } }
namespace java { namespace util { class List; } }

namespace android {
namespace hardware {
class SensorManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SensorManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SensorManager(const ::android::hardware::SensorManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SensorManager(::android::hardware::SensorManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::SensorManager& operator=(const ::android::hardware::SensorManager& x) {obj = x.obj; return *this;}
    ::android::hardware::SensorManager& operator=(::android::hardware::SensorManager&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getSensors() const;
    ::java::util::List getSensorList(int32_t) const;
    ::android::hardware::Sensor getDefaultSensor(int32_t) const;
    bool registerListener(const ::android::hardware::SensorListener&, int32_t) const;
    bool registerListener(const ::android::hardware::SensorListener&, int32_t, int32_t) const;
    void unregisterListener(const ::android::hardware::SensorListener&, int32_t) const;
    void unregisterListener(const ::android::hardware::SensorListener&) const;
    void unregisterListener(const ::android::hardware::SensorEventListener&, const ::android::hardware::Sensor&) const;
    void unregisterListener(const ::android::hardware::SensorEventListener&) const;
    bool registerListener(const ::android::hardware::SensorEventListener&, const ::android::hardware::Sensor&, int32_t) const;
    bool registerListener(const ::android::hardware::SensorEventListener&, const ::android::hardware::Sensor&, int32_t, const ::android::os::Handler&) const;
    static bool getRotationMatrix(const std::vector< float>&, const std::vector< float>&, const std::vector< float>&, const std::vector< float>&);
    static float getInclination(const std::vector< float>&);
    static bool remapCoordinateSystem(const std::vector< float>&, int32_t, int32_t, const std::vector< float>&);
    static std::vector< float> getOrientation(const std::vector< float>&, const std::vector< float>&);
    static float getAltitude(float, float);
    static void getAngleChange(const std::vector< float>&, const std::vector< float>&, const std::vector< float>&);
    static void getRotationMatrixFromVector(const std::vector< float>&, const std::vector< float>&);
    static void getQuaternionFromVector(const std::vector< float>&, const std::vector< float>&);

};
}
}



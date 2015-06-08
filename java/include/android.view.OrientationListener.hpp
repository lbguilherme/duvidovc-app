#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.hardware.SensorListener.hpp"

namespace android { namespace content { class Context; } }

namespace android {
namespace view {
class OrientationListener : public virtual ::java::lang::Object,
                            public virtual ::android::hardware::SensorListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OrientationListener(jobject _obj) : ::java::lang::Object(_obj), ::android::hardware::SensorListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OrientationListener(const ::android::view::OrientationListener& x) : ::java::lang::Object((jobject)0), ::android::hardware::SensorListener((jobject)0) {obj = x.obj;}
    OrientationListener(::android::view::OrientationListener&& x) : ::java::lang::Object((jobject)0), ::android::hardware::SensorListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::OrientationListener& operator=(const ::android::view::OrientationListener& x) {obj = x.obj; return *this;}
    ::android::view::OrientationListener& operator=(::android::view::OrientationListener&& x) {obj = std::move(x.obj); return *this;}
    
    OrientationListener(const ::android::content::Context&);
    OrientationListener(const ::android::content::Context&, int32_t);
    void enable() const;
    void disable() const;
    void onAccuracyChanged(int32_t, int32_t) const;
    void onSensorChanged(int32_t, const std::vector< float>&) const;
    void onOrientationChanged(int32_t) const;

};
}
}



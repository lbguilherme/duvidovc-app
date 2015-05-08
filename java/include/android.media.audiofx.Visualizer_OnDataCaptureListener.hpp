#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace audiofx { class Visualizer; } } }

namespace android {
namespace media {
namespace audiofx {
class Visualizer_OnDataCaptureListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Visualizer_OnDataCaptureListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Visualizer_OnDataCaptureListener(const ::android::media::audiofx::Visualizer_OnDataCaptureListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Visualizer_OnDataCaptureListener(::android::media::audiofx::Visualizer_OnDataCaptureListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::Visualizer_OnDataCaptureListener& operator=(const ::android::media::audiofx::Visualizer_OnDataCaptureListener& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::Visualizer_OnDataCaptureListener& operator=(::android::media::audiofx::Visualizer_OnDataCaptureListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onWaveFormDataCapture(const ::android::media::audiofx::Visualizer&, const std::vector< int8_t>&, int32_t) const ;
    void onFftDataCapture(const ::android::media::audiofx::Visualizer&, const std::vector< int8_t>&, int32_t) const ;

};
}
}
}



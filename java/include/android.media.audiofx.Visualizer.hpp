#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace audiofx { class Visualizer_OnDataCaptureListener; } } }

namespace android {
namespace media {
namespace audiofx {
class Visualizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Visualizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Visualizer(const ::android::media::audiofx::Visualizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Visualizer(::android::media::audiofx::Visualizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::Visualizer& operator=(const ::android::media::audiofx::Visualizer& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::Visualizer& operator=(::android::media::audiofx::Visualizer&& x) {obj = std::move(x.obj); return *this;}
    
    Visualizer(int32_t);
    void release() const ;
    int32_t setEnabled(bool) const ;
    bool getEnabled() const ;
    static std::vector< int32_t> getCaptureSizeRange();
    static int32_t getMaxCaptureRate();
    int32_t setCaptureSize(int32_t) const ;
    int32_t getCaptureSize() const ;
    int32_t getSamplingRate() const ;
    int32_t getWaveForm(const std::vector< int8_t>&) const ;
    int32_t getFft(const std::vector< int8_t>&) const ;
    int32_t setDataCaptureListener(const ::android::media::audiofx::Visualizer_OnDataCaptureListener&, int32_t, bool, bool) const ;

};
}
}
}

#include "android.media.audiofx.Visualizer_OnDataCaptureListener.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { namespace audiofx { class EnvironmentalReverb; } } }

namespace android {
namespace media {
namespace audiofx {
class EnvironmentalReverb_OnParameterChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnvironmentalReverb_OnParameterChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnvironmentalReverb_OnParameterChangeListener(const ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EnvironmentalReverb_OnParameterChangeListener(::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener& operator=(const ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener& operator=(::android::media::audiofx::EnvironmentalReverb_OnParameterChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onParameterChange(const ::android::media::audiofx::EnvironmentalReverb&, int32_t, int32_t, int32_t) const ;

};
}
}
}



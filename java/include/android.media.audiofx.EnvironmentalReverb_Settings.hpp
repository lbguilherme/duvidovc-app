#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace media {
namespace audiofx {
class EnvironmentalReverb_Settings : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EnvironmentalReverb_Settings(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EnvironmentalReverb_Settings(const ::android::media::audiofx::EnvironmentalReverb_Settings& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    EnvironmentalReverb_Settings(::android::media::audiofx::EnvironmentalReverb_Settings&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::EnvironmentalReverb_Settings& operator=(const ::android::media::audiofx::EnvironmentalReverb_Settings& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::EnvironmentalReverb_Settings& operator=(::android::media::audiofx::EnvironmentalReverb_Settings&& x) {obj = std::move(x.obj); return *this;}
    
    EnvironmentalReverb_Settings();
    EnvironmentalReverb_Settings(const ::java::lang::String&);
    ::java::lang::String toString() const;

};
}
}
}



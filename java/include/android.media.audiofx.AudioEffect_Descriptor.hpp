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
class AudioEffect_Descriptor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioEffect_Descriptor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioEffect_Descriptor(const ::android::media::audiofx::AudioEffect_Descriptor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioEffect_Descriptor(::android::media::audiofx::AudioEffect_Descriptor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::audiofx::AudioEffect_Descriptor& operator=(const ::android::media::audiofx::AudioEffect_Descriptor& x) {obj = x.obj; return *this;}
    ::android::media::audiofx::AudioEffect_Descriptor& operator=(::android::media::audiofx::AudioEffect_Descriptor&& x) {obj = std::move(x.obj); return *this;}
    
    AudioEffect_Descriptor();
    AudioEffect_Descriptor(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);

};
}
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class AudioFormat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioFormat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioFormat(const ::android::media::AudioFormat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioFormat(::android::media::AudioFormat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioFormat& operator=(const ::android::media::AudioFormat& x) {obj = x.obj; return *this;}
    ::android::media::AudioFormat& operator=(::android::media::AudioFormat&& x) {obj = std::move(x.obj); return *this;}
    
    AudioFormat();

};
}
}



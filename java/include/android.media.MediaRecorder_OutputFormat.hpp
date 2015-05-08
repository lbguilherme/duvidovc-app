#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class MediaRecorder_OutputFormat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaRecorder_OutputFormat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaRecorder_OutputFormat(const ::android::media::MediaRecorder_OutputFormat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaRecorder_OutputFormat(::android::media::MediaRecorder_OutputFormat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaRecorder_OutputFormat& operator=(const ::android::media::MediaRecorder_OutputFormat& x) {obj = x.obj; return *this;}
    ::android::media::MediaRecorder_OutputFormat& operator=(::android::media::MediaRecorder_OutputFormat&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}



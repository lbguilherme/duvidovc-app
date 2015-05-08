#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace media {
class CameraProfile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CameraProfile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CameraProfile(const ::android::media::CameraProfile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CameraProfile(::android::media::CameraProfile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::CameraProfile& operator=(const ::android::media::CameraProfile& x) {obj = x.obj; return *this;}
    ::android::media::CameraProfile& operator=(::android::media::CameraProfile&& x) {obj = std::move(x.obj); return *this;}
    
    CameraProfile();
    static int32_t getJpegEncodingQualityParameter(int32_t);
    static int32_t getJpegEncodingQualityParameter(int32_t, int32_t);

};
}
}



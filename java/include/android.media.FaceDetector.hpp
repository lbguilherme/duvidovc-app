#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace media { class FaceDetector_Face; } }

namespace android {
namespace media {
class FaceDetector : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FaceDetector(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FaceDetector(const ::android::media::FaceDetector& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FaceDetector(::android::media::FaceDetector&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::FaceDetector& operator=(const ::android::media::FaceDetector& x) {obj = x.obj; return *this;}
    ::android::media::FaceDetector& operator=(::android::media::FaceDetector&& x) {obj = std::move(x.obj); return *this;}
    
    FaceDetector(int32_t, int32_t, int32_t);
    int32_t findFaces(const ::android::graphics::Bitmap&, const std::vector< ::android::media::FaceDetector_Face>&) const ;

};
}
}

#include "android.media.FaceDetector_Face.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class PointF; } }

namespace android {
namespace media {
class FaceDetector_Face : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FaceDetector_Face(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FaceDetector_Face(const ::android::media::FaceDetector_Face& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FaceDetector_Face(::android::media::FaceDetector_Face&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::FaceDetector_Face& operator=(const ::android::media::FaceDetector_Face& x) {obj = x.obj; return *this;}
    ::android::media::FaceDetector_Face& operator=(::android::media::FaceDetector_Face&& x) {obj = std::move(x.obj); return *this;}
    
    float confidence() const;
    void getMidPoint(const ::android::graphics::PointF&) const;
    float eyesDistance() const;
    float pose(int32_t) const;

};
}
}



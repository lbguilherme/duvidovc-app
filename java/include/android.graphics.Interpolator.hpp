#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Interpolator_Result; } }

namespace android {
namespace graphics {
class Interpolator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Interpolator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Interpolator(const ::android::graphics::Interpolator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Interpolator(::android::graphics::Interpolator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Interpolator& operator=(const ::android::graphics::Interpolator& x) {obj = x.obj; return *this;}
    ::android::graphics::Interpolator& operator=(::android::graphics::Interpolator&& x) {obj = std::move(x.obj); return *this;}
    
    Interpolator(int32_t);
    Interpolator(int32_t, int32_t);
    void reset(int32_t) const ;
    void reset(int32_t, int32_t) const ;
    int32_t getKeyFrameCount() const ;
    int32_t getValueCount() const ;
    void setKeyFrame(int32_t, int32_t, const std::vector< float>&) const ;
    void setKeyFrame(int32_t, int32_t, const std::vector< float>&, const std::vector< float>&) const ;
    void setRepeatMirror(float, bool) const ;
    ::android::graphics::Interpolator_Result timeToValues(const std::vector< float>&) const ;
    ::android::graphics::Interpolator_Result timeToValues(int32_t, const std::vector< float>&) const ;

};
}
}

#include "android.graphics.Interpolator_Result.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Path; } }

namespace android {
namespace graphics {
class PathMeasure : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathMeasure(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathMeasure(const ::android::graphics::PathMeasure& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PathMeasure(::android::graphics::PathMeasure&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::PathMeasure& operator=(const ::android::graphics::PathMeasure& x) {obj = x.obj; return *this;}
    ::android::graphics::PathMeasure& operator=(::android::graphics::PathMeasure&& x) {obj = std::move(x.obj); return *this;}
    
    PathMeasure();
    PathMeasure(const ::android::graphics::Path&, bool);
    void setPath(const ::android::graphics::Path&, bool) const ;
    float getLength() const ;
    bool getPosTan(float, const std::vector< float>&, const std::vector< float>&) const ;
    bool getMatrix(float, const ::android::graphics::Matrix&, int32_t) const ;
    bool getSegment(float, float, const ::android::graphics::Path&, bool) const ;
    bool isClosed() const ;
    bool nextContour() const ;

};
}
}



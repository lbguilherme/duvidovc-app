#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class ProgramRaster; } }
namespace android { namespace renderscript { class ProgramRaster_Builder; } }
namespace android { namespace renderscript { class ProgramRaster_CullMode; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramRaster_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramRaster_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramRaster_Builder(const ::android::renderscript::ProgramRaster_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProgramRaster_Builder(::android::renderscript::ProgramRaster_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramRaster_Builder& operator=(const ::android::renderscript::ProgramRaster_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramRaster_Builder& operator=(::android::renderscript::ProgramRaster_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ProgramRaster_Builder(const ::android::renderscript::RenderScript&);
    ::android::renderscript::ProgramRaster_Builder setPointSpriteEnabled(bool) const ;
    ::android::renderscript::ProgramRaster_Builder setCullMode(const ::android::renderscript::ProgramRaster_CullMode&) const ;
    ::android::renderscript::ProgramRaster create() const ;

};
}
}



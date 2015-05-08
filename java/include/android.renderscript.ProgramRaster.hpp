#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class ProgramRaster; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramRaster : public virtual ::java::lang::Object,
                      public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramRaster(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramRaster(const ::android::renderscript::ProgramRaster& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    ProgramRaster(::android::renderscript::ProgramRaster&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramRaster& operator=(const ::android::renderscript::ProgramRaster& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramRaster& operator=(::android::renderscript::ProgramRaster&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::renderscript::ProgramRaster CULL_BACK(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::ProgramRaster CULL_FRONT(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::ProgramRaster CULL_NONE(const ::android::renderscript::RenderScript&);

};
}
}

#include "android.renderscript.ProgramRaster_Builder.hpp"
#include "android.renderscript.ProgramRaster_CullMode.hpp"


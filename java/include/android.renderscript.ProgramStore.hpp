#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class ProgramStore; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramStore : public virtual ::java::lang::Object,
                     public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramStore(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramStore(const ::android::renderscript::ProgramStore& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    ProgramStore(::android::renderscript::ProgramStore&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramStore& operator=(const ::android::renderscript::ProgramStore& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramStore& operator=(::android::renderscript::ProgramStore&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::renderscript::ProgramStore BLEND_NONE_DEPTH_TEST(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::ProgramStore BLEND_NONE_DEPTH_NONE(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::ProgramStore BLEND_ALPHA_DEPTH_TEST(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::ProgramStore BLEND_ALPHA_DEPTH_NONE(const ::android::renderscript::RenderScript&);

};
}
}

#include "android.renderscript.ProgramStore_BlendDstFunc.hpp"
#include "android.renderscript.ProgramStore_BlendSrcFunc.hpp"
#include "android.renderscript.ProgramStore_Builder.hpp"
#include "android.renderscript.ProgramStore_DepthFunc.hpp"


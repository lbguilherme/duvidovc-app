#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class ProgramStore; } }
namespace android { namespace renderscript { class ProgramStore_BlendDstFunc; } }
namespace android { namespace renderscript { class ProgramStore_BlendSrcFunc; } }
namespace android { namespace renderscript { class ProgramStore_Builder; } }
namespace android { namespace renderscript { class ProgramStore_DepthFunc; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramStore_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramStore_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramStore_Builder(const ::android::renderscript::ProgramStore_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProgramStore_Builder(::android::renderscript::ProgramStore_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramStore_Builder& operator=(const ::android::renderscript::ProgramStore_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramStore_Builder& operator=(::android::renderscript::ProgramStore_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ProgramStore_Builder(const ::android::renderscript::RenderScript&);
    ::android::renderscript::ProgramStore_Builder setDepthFunc(const ::android::renderscript::ProgramStore_DepthFunc&) const ;
    ::android::renderscript::ProgramStore_Builder setDepthMaskEnabled(bool) const ;
    ::android::renderscript::ProgramStore_Builder setColorMaskEnabled(bool, bool, bool, bool) const ;
    ::android::renderscript::ProgramStore_Builder setBlendFunc(const ::android::renderscript::ProgramStore_BlendSrcFunc&, const ::android::renderscript::ProgramStore_BlendDstFunc&) const ;
    ::android::renderscript::ProgramStore_Builder setDitherEnabled(bool) const ;
    ::android::renderscript::ProgramStore create() const ;

};
}
}



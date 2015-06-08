#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class ProgramFragmentFixedFunction; } }
namespace android { namespace renderscript { class ProgramFragmentFixedFunction_Builder; } }
namespace android { namespace renderscript { class ProgramFragmentFixedFunction_Builder_EnvMode; } }
namespace android { namespace renderscript { class ProgramFragmentFixedFunction_Builder_Format; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramFragmentFixedFunction_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramFragmentFixedFunction_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramFragmentFixedFunction_Builder(const ::android::renderscript::ProgramFragmentFixedFunction_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProgramFragmentFixedFunction_Builder(::android::renderscript::ProgramFragmentFixedFunction_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramFragmentFixedFunction_Builder& operator=(const ::android::renderscript::ProgramFragmentFixedFunction_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramFragmentFixedFunction_Builder& operator=(::android::renderscript::ProgramFragmentFixedFunction_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ProgramFragmentFixedFunction_Builder(const ::android::renderscript::RenderScript&);
    ::android::renderscript::ProgramFragmentFixedFunction_Builder setTexture(const ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode&, const ::android::renderscript::ProgramFragmentFixedFunction_Builder_Format&, int32_t) const;
    ::android::renderscript::ProgramFragmentFixedFunction_Builder setPointSpriteTexCoordinateReplacement(bool) const;
    ::android::renderscript::ProgramFragmentFixedFunction_Builder setVaryingColor(bool) const;
    ::android::renderscript::ProgramFragmentFixedFunction create() const;

};
}
}

#include "android.renderscript.ProgramFragmentFixedFunction_Builder_EnvMode.hpp"
#include "android.renderscript.ProgramFragmentFixedFunction_Builder_Format.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.ProgramVertex.hpp"

namespace android { namespace renderscript { class ProgramVertexFixedFunction_Constants; } }

namespace android {
namespace renderscript {
class ProgramVertexFixedFunction : public virtual ::java::lang::Object,
                                   public virtual ::android::renderscript::ProgramVertex {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramVertexFixedFunction(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj), ::android::renderscript::Program(_obj), ::android::renderscript::ProgramVertex(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramVertexFixedFunction(const ::android::renderscript::ProgramVertexFixedFunction& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0), ::android::renderscript::ProgramVertex((jobject)0) {obj = x.obj;}
    ProgramVertexFixedFunction(::android::renderscript::ProgramVertexFixedFunction&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0), ::android::renderscript::ProgramVertex((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramVertexFixedFunction& operator=(const ::android::renderscript::ProgramVertexFixedFunction& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramVertexFixedFunction& operator=(::android::renderscript::ProgramVertexFixedFunction&& x) {obj = std::move(x.obj); return *this;}
    
    void bindConstants(const ::android::renderscript::ProgramVertexFixedFunction_Constants&) const ;

};
}
}

#include "android.renderscript.ProgramVertexFixedFunction_Builder.hpp"
#include "android.renderscript.ProgramVertexFixedFunction_Constants.hpp"


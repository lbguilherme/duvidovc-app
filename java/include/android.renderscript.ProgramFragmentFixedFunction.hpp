#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.ProgramFragment.hpp"


namespace android {
namespace renderscript {
class ProgramFragmentFixedFunction : public virtual ::java::lang::Object,
                                     public virtual ::android::renderscript::ProgramFragment {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramFragmentFixedFunction(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj), ::android::renderscript::Program(_obj), ::android::renderscript::ProgramFragment(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramFragmentFixedFunction(const ::android::renderscript::ProgramFragmentFixedFunction& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0), ::android::renderscript::ProgramFragment((jobject)0) {obj = x.obj;}
    ProgramFragmentFixedFunction(::android::renderscript::ProgramFragmentFixedFunction&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0), ::android::renderscript::ProgramFragment((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramFragmentFixedFunction& operator=(const ::android::renderscript::ProgramFragmentFixedFunction& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramFragmentFixedFunction& operator=(::android::renderscript::ProgramFragmentFixedFunction&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.renderscript.ProgramFragmentFixedFunction_Builder.hpp"
#include "android.renderscript.ProgramFragmentFixedFunction_Builder_EnvMode.hpp"
#include "android.renderscript.ProgramFragmentFixedFunction_Builder_Format.hpp"


#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.Program.hpp"


namespace android {
namespace renderscript {
class ProgramVertex : public virtual ::java::lang::Object,
                      public virtual ::android::renderscript::Program {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramVertex(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj), ::android::renderscript::Program(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramVertex(const ::android::renderscript::ProgramVertex& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0) {obj = x.obj;}
    ProgramVertex(::android::renderscript::ProgramVertex&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramVertex& operator=(const ::android::renderscript::ProgramVertex& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramVertex& operator=(::android::renderscript::ProgramVertex&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.renderscript.ProgramVertex_Builder.hpp"


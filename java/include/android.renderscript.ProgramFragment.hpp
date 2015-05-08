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
class ProgramFragment : public virtual ::java::lang::Object,
                        public virtual ::android::renderscript::Program {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramFragment(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj), ::android::renderscript::Program(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramFragment(const ::android::renderscript::ProgramFragment& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0) {obj = x.obj;}
    ProgramFragment(::android::renderscript::ProgramFragment&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0), ::android::renderscript::Program((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramFragment& operator=(const ::android::renderscript::ProgramFragment& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramFragment& operator=(::android::renderscript::ProgramFragment&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}

#include "android.renderscript.ProgramFragment_Builder.hpp"


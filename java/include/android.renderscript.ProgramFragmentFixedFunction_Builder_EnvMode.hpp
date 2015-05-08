#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class ProgramFragmentFixedFunction_Builder_EnvMode; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class ProgramFragmentFixedFunction_Builder_EnvMode : public virtual ::java::lang::Object,
                                                     public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramFragmentFixedFunction_Builder_EnvMode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramFragmentFixedFunction_Builder_EnvMode(const ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ProgramFragmentFixedFunction_Builder_EnvMode(::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode& operator=(const ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode& operator=(::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode> values();
    static ::android::renderscript::ProgramFragmentFixedFunction_Builder_EnvMode valueOf(const ::java::lang::String&);

};
}
}



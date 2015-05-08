#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class ProgramRaster_CullMode; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class ProgramRaster_CullMode : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramRaster_CullMode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramRaster_CullMode(const ::android::renderscript::ProgramRaster_CullMode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ProgramRaster_CullMode(::android::renderscript::ProgramRaster_CullMode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramRaster_CullMode& operator=(const ::android::renderscript::ProgramRaster_CullMode& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramRaster_CullMode& operator=(::android::renderscript::ProgramRaster_CullMode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::ProgramRaster_CullMode> values();
    static ::android::renderscript::ProgramRaster_CullMode valueOf(const ::java::lang::String&);

};
}
}



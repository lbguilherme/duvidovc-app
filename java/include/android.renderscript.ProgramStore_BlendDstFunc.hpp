#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class ProgramStore_BlendDstFunc; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class ProgramStore_BlendDstFunc : public virtual ::java::lang::Object,
                                  public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramStore_BlendDstFunc(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramStore_BlendDstFunc(const ::android::renderscript::ProgramStore_BlendDstFunc& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    ProgramStore_BlendDstFunc(::android::renderscript::ProgramStore_BlendDstFunc&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramStore_BlendDstFunc& operator=(const ::android::renderscript::ProgramStore_BlendDstFunc& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramStore_BlendDstFunc& operator=(::android::renderscript::ProgramStore_BlendDstFunc&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::ProgramStore_BlendDstFunc> values();
    static ::android::renderscript::ProgramStore_BlendDstFunc valueOf(const ::java::lang::String&);

};
}
}



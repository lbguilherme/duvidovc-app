#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace renderscript { class Program_BaseProgramBuilder; } }
namespace android { namespace renderscript { class Program_TextureType; } }
namespace android { namespace renderscript { class Type; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Program_BaseProgramBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Program_BaseProgramBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Program_BaseProgramBuilder(const ::android::renderscript::Program_BaseProgramBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Program_BaseProgramBuilder(::android::renderscript::Program_BaseProgramBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Program_BaseProgramBuilder& operator=(const ::android::renderscript::Program_BaseProgramBuilder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Program_BaseProgramBuilder& operator=(::android::renderscript::Program_BaseProgramBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::renderscript::Program_BaseProgramBuilder setShader(const ::java::lang::String&) const ;
    ::android::renderscript::Program_BaseProgramBuilder setShader(const ::android::content::res::Resources&, int32_t) const ;
    int32_t getCurrentConstantIndex() const ;
    int32_t getCurrentTextureIndex() const ;
    ::android::renderscript::Program_BaseProgramBuilder addConstant(const ::android::renderscript::Type&) const ;
    ::android::renderscript::Program_BaseProgramBuilder addTexture(const ::android::renderscript::Program_TextureType&) const ;

};
}
}



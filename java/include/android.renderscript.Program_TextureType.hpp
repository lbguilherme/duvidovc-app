#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Program_TextureType; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Program_TextureType : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Program_TextureType(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Program_TextureType(const ::android::renderscript::Program_TextureType& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Program_TextureType(::android::renderscript::Program_TextureType&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Program_TextureType& operator=(const ::android::renderscript::Program_TextureType& x) {obj = x.obj; return *this;}
    ::android::renderscript::Program_TextureType& operator=(::android::renderscript::Program_TextureType&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Program_TextureType> values();
    static ::android::renderscript::Program_TextureType valueOf(const ::java::lang::String&);

};
}
}



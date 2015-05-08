#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Type_CubemapFace; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Type_CubemapFace : public virtual ::java::lang::Object,
                         public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Type_CubemapFace(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Type_CubemapFace(const ::android::renderscript::Type_CubemapFace& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Type_CubemapFace(::android::renderscript::Type_CubemapFace&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Type_CubemapFace& operator=(const ::android::renderscript::Type_CubemapFace& x) {obj = x.obj; return *this;}
    ::android::renderscript::Type_CubemapFace& operator=(::android::renderscript::Type_CubemapFace&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Type_CubemapFace> values();
    static ::android::renderscript::Type_CubemapFace valueOf(const ::java::lang::String&);

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Shader_TileMode; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Shader_TileMode : public virtual ::java::lang::Object,
                        public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Shader_TileMode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Shader_TileMode(const ::android::graphics::Shader_TileMode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Shader_TileMode(::android::graphics::Shader_TileMode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Shader_TileMode& operator=(const ::android::graphics::Shader_TileMode& x) {obj = x.obj; return *this;}
    ::android::graphics::Shader_TileMode& operator=(::android::graphics::Shader_TileMode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Shader_TileMode> values();
    static ::android::graphics::Shader_TileMode valueOf(const ::java::lang::String&);

};
}
}



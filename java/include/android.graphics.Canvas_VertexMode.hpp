#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class Canvas_VertexMode; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Canvas_VertexMode : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Canvas_VertexMode(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Canvas_VertexMode(const ::android::graphics::Canvas_VertexMode& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Canvas_VertexMode(::android::graphics::Canvas_VertexMode&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Canvas_VertexMode& operator=(const ::android::graphics::Canvas_VertexMode& x) {obj = x.obj; return *this;}
    ::android::graphics::Canvas_VertexMode& operator=(::android::graphics::Canvas_VertexMode&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::Canvas_VertexMode> values();
    static ::android::graphics::Canvas_VertexMode valueOf(const ::java::lang::String&);

};
}
}



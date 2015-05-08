#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace renderscript { class Mesh_Primitive; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace renderscript {
class Mesh_Primitive : public virtual ::java::lang::Object,
                       public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Mesh_Primitive(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Mesh_Primitive(const ::android::renderscript::Mesh_Primitive& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    Mesh_Primitive(::android::renderscript::Mesh_Primitive&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Mesh_Primitive& operator=(const ::android::renderscript::Mesh_Primitive& x) {obj = x.obj; return *this;}
    ::android::renderscript::Mesh_Primitive& operator=(::android::renderscript::Mesh_Primitive&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::renderscript::Mesh_Primitive> values();
    static ::android::renderscript::Mesh_Primitive valueOf(const ::java::lang::String&);

};
}
}



#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Mesh; } }
namespace android { namespace renderscript { class Mesh_TriangleMeshBuilder; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class Mesh_TriangleMeshBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Mesh_TriangleMeshBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Mesh_TriangleMeshBuilder(const ::android::renderscript::Mesh_TriangleMeshBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Mesh_TriangleMeshBuilder(::android::renderscript::Mesh_TriangleMeshBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Mesh_TriangleMeshBuilder& operator=(const ::android::renderscript::Mesh_TriangleMeshBuilder& x) {obj = x.obj; return *this;}
    ::android::renderscript::Mesh_TriangleMeshBuilder& operator=(::android::renderscript::Mesh_TriangleMeshBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    Mesh_TriangleMeshBuilder(const ::android::renderscript::RenderScript&, int32_t, int32_t);
    ::android::renderscript::Mesh_TriangleMeshBuilder addVertex(float, float) const ;
    ::android::renderscript::Mesh_TriangleMeshBuilder addVertex(float, float, float) const ;
    ::android::renderscript::Mesh_TriangleMeshBuilder setTexture(float, float) const ;
    ::android::renderscript::Mesh_TriangleMeshBuilder setNormal(float, float, float) const ;
    ::android::renderscript::Mesh_TriangleMeshBuilder setColor(float, float, float, float) const ;
    ::android::renderscript::Mesh_TriangleMeshBuilder addTriangle(int32_t, int32_t, int32_t) const ;
    ::android::renderscript::Mesh create(bool) const ;

};
}
}



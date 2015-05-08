#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.opengl.GLES10.hpp"

namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }

namespace android {
namespace opengl {
class GLES11 : public virtual ::java::lang::Object,
               public virtual ::android::opengl::GLES10 {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLES11(jobject _obj) : ::java::lang::Object(_obj), ::android::opengl::GLES10(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLES11(const ::android::opengl::GLES11& x) : ::java::lang::Object((jobject)0), ::android::opengl::GLES10((jobject)0) {obj = x.obj;}
    GLES11(::android::opengl::GLES11&& x) : ::java::lang::Object((jobject)0), ::android::opengl::GLES10((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLES11& operator=(const ::android::opengl::GLES11& x) {obj = x.obj; return *this;}
    ::android::opengl::GLES11& operator=(::android::opengl::GLES11&& x) {obj = std::move(x.obj); return *this;}
    
    GLES11();
    static void glBindBuffer(int32_t, int32_t);
    static void glBufferData(int32_t, int32_t, const ::java::nio::Buffer&, int32_t);
    static void glBufferSubData(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glClipPlanef(int32_t, const std::vector< float>&, int32_t);
    static void glClipPlanef(int32_t, const ::java::nio::FloatBuffer&);
    static void glClipPlanex(int32_t, const std::vector< int32_t>&, int32_t);
    static void glClipPlanex(int32_t, const ::java::nio::IntBuffer&);
    static void glColor4ub(int8_t, int8_t, int8_t, int8_t);
    static void glColorPointer(int32_t, int32_t, int32_t, int32_t);
    static void glDeleteBuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteBuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glDrawElements(int32_t, int32_t, int32_t, int32_t);
    static void glGenBuffers(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenBuffers(int32_t, const ::java::nio::IntBuffer&);
    static void glGetBooleanv(int32_t, const std::vector< bool>&, int32_t);
    static void glGetBooleanv(int32_t, const ::java::nio::IntBuffer&);
    static void glGetBufferParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetBufferParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetClipPlanef(int32_t, const std::vector< float>&, int32_t);
    static void glGetClipPlanef(int32_t, const ::java::nio::FloatBuffer&);
    static void glGetClipPlanex(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetClipPlanex(int32_t, const ::java::nio::IntBuffer&);
    static void glGetFixedv(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetFixedv(int32_t, const ::java::nio::IntBuffer&);
    static void glGetFloatv(int32_t, const std::vector< float>&, int32_t);
    static void glGetFloatv(int32_t, const ::java::nio::FloatBuffer&);
    static void glGetLightfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetLightfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetLightxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetLightxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetMaterialfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetMaterialfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetMaterialxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetMaterialxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexEnvfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetTexEnvfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetTexEnviv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexEnviv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexEnvxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexEnvxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetTexParameterfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetTexParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexParameterxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexParameterxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static bool glIsBuffer(int32_t);
    static bool glIsEnabled(int32_t);
    static bool glIsTexture(int32_t);
    static void glNormalPointer(int32_t, int32_t, int32_t);
    static void glPointParameterf(int32_t, float);
    static void glPointParameterfv(int32_t, const std::vector< float>&, int32_t);
    static void glPointParameterfv(int32_t, const ::java::nio::FloatBuffer&);
    static void glPointParameterx(int32_t, int32_t);
    static void glPointParameterxv(int32_t, const std::vector< int32_t>&, int32_t);
    static void glPointParameterxv(int32_t, const ::java::nio::IntBuffer&);
    static void glPointSizePointerOES(int32_t, int32_t, const ::java::nio::Buffer&);
    static void glTexCoordPointer(int32_t, int32_t, int32_t, int32_t);
    static void glTexEnvi(int32_t, int32_t, int32_t);
    static void glTexEnviv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexEnviv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTexParameterfv(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glTexParameterfv(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glTexParameteri(int32_t, int32_t, int32_t);
    static void glTexParameteriv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexParameteriv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTexParameterxv(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexParameterxv(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glVertexPointer(int32_t, int32_t, int32_t, int32_t);

};
}
}



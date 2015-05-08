#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace nio { class Buffer; } }
namespace java { namespace nio { class FloatBuffer; } }
namespace java { namespace nio { class IntBuffer; } }
namespace java { namespace nio { class ShortBuffer; } }

namespace android {
namespace opengl {
class GLES11Ext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLES11Ext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLES11Ext(const ::android::opengl::GLES11Ext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLES11Ext(::android::opengl::GLES11Ext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLES11Ext& operator=(const ::android::opengl::GLES11Ext& x) {obj = x.obj; return *this;}
    ::android::opengl::GLES11Ext& operator=(::android::opengl::GLES11Ext&& x) {obj = std::move(x.obj); return *this;}
    
    GLES11Ext();
    static void glBlendEquationSeparateOES(int32_t, int32_t);
    static void glBlendFuncSeparateOES(int32_t, int32_t, int32_t, int32_t);
    static void glBlendEquationOES(int32_t);
    static void glDrawTexsOES(int16_t, int16_t, int16_t, int16_t, int16_t);
    static void glDrawTexiOES(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glDrawTexxOES(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glDrawTexsvOES(const std::vector< int16_t>&, int32_t);
    static void glDrawTexsvOES(const ::java::nio::ShortBuffer&);
    static void glDrawTexivOES(const std::vector< int32_t>&, int32_t);
    static void glDrawTexivOES(const ::java::nio::IntBuffer&);
    static void glDrawTexxvOES(const std::vector< int32_t>&, int32_t);
    static void glDrawTexxvOES(const ::java::nio::IntBuffer&);
    static void glDrawTexfOES(float, float, float, float, float);
    static void glDrawTexfvOES(const std::vector< float>&, int32_t);
    static void glDrawTexfvOES(const ::java::nio::FloatBuffer&);
    static void glEGLImageTargetTexture2DOES(int32_t, const ::java::nio::Buffer&);
    static void glEGLImageTargetRenderbufferStorageOES(int32_t, const ::java::nio::Buffer&);
    static void glAlphaFuncxOES(int32_t, int32_t);
    static void glClearColorxOES(int32_t, int32_t, int32_t, int32_t);
    static void glClearDepthxOES(int32_t);
    static void glClipPlanexOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glClipPlanexOES(int32_t, const ::java::nio::IntBuffer&);
    static void glColor4xOES(int32_t, int32_t, int32_t, int32_t);
    static void glDepthRangexOES(int32_t, int32_t);
    static void glFogxOES(int32_t, int32_t);
    static void glFogxvOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glFogxvOES(int32_t, const ::java::nio::IntBuffer&);
    static void glFrustumxOES(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glGetClipPlanexOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetClipPlanexOES(int32_t, const ::java::nio::IntBuffer&);
    static void glGetFixedvOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetFixedvOES(int32_t, const ::java::nio::IntBuffer&);
    static void glGetLightxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetLightxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetMaterialxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetMaterialxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexEnvxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexEnvxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexParameterxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexParameterxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glLightModelxOES(int32_t, int32_t);
    static void glLightModelxvOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glLightModelxvOES(int32_t, const ::java::nio::IntBuffer&);
    static void glLightxOES(int32_t, int32_t, int32_t);
    static void glLightxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glLightxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glLineWidthxOES(int32_t);
    static void glLoadMatrixxOES(const std::vector< int32_t>&, int32_t);
    static void glLoadMatrixxOES(const ::java::nio::IntBuffer&);
    static void glMaterialxOES(int32_t, int32_t, int32_t);
    static void glMaterialxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glMaterialxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glMultMatrixxOES(const std::vector< int32_t>&, int32_t);
    static void glMultMatrixxOES(const ::java::nio::IntBuffer&);
    static void glMultiTexCoord4xOES(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glNormal3xOES(int32_t, int32_t, int32_t);
    static void glOrthoxOES(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glPointParameterxOES(int32_t, int32_t);
    static void glPointParameterxvOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glPointParameterxvOES(int32_t, const ::java::nio::IntBuffer&);
    static void glPointSizexOES(int32_t);
    static void glPolygonOffsetxOES(int32_t, int32_t);
    static void glRotatexOES(int32_t, int32_t, int32_t, int32_t);
    static void glSampleCoveragexOES(int32_t, bool);
    static void glScalexOES(int32_t, int32_t, int32_t);
    static void glTexEnvxOES(int32_t, int32_t, int32_t);
    static void glTexEnvxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexEnvxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTexParameterxOES(int32_t, int32_t, int32_t);
    static void glTexParameterxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexParameterxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTranslatexOES(int32_t, int32_t, int32_t);
    static bool glIsRenderbufferOES(int32_t);
    static void glBindRenderbufferOES(int32_t, int32_t);
    static void glDeleteRenderbuffersOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteRenderbuffersOES(int32_t, const ::java::nio::IntBuffer&);
    static void glGenRenderbuffersOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenRenderbuffersOES(int32_t, const ::java::nio::IntBuffer&);
    static void glRenderbufferStorageOES(int32_t, int32_t, int32_t, int32_t);
    static void glGetRenderbufferParameterivOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetRenderbufferParameterivOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static bool glIsFramebufferOES(int32_t);
    static void glBindFramebufferOES(int32_t, int32_t);
    static void glDeleteFramebuffersOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glDeleteFramebuffersOES(int32_t, const ::java::nio::IntBuffer&);
    static void glGenFramebuffersOES(int32_t, const std::vector< int32_t>&, int32_t);
    static void glGenFramebuffersOES(int32_t, const ::java::nio::IntBuffer&);
    static int32_t glCheckFramebufferStatusOES(int32_t);
    static void glFramebufferRenderbufferOES(int32_t, int32_t, int32_t, int32_t);
    static void glFramebufferTexture2DOES(int32_t, int32_t, int32_t, int32_t, int32_t);
    static void glGetFramebufferAttachmentParameterivOES(int32_t, int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetFramebufferAttachmentParameterivOES(int32_t, int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGenerateMipmapOES(int32_t);
    static void glCurrentPaletteMatrixOES(int32_t);
    static void glLoadPaletteFromModelViewMatrixOES();
    static void glMatrixIndexPointerOES(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glWeightPointerOES(int32_t, int32_t, int32_t, const ::java::nio::Buffer&);
    static void glDepthRangefOES(float, float);
    static void glFrustumfOES(float, float, float, float, float, float);
    static void glOrthofOES(float, float, float, float, float, float);
    static void glClipPlanefOES(int32_t, const std::vector< float>&, int32_t);
    static void glClipPlanefOES(int32_t, const ::java::nio::FloatBuffer&);
    static void glGetClipPlanefOES(int32_t, const std::vector< float>&, int32_t);
    static void glGetClipPlanefOES(int32_t, const ::java::nio::FloatBuffer&);
    static void glClearDepthfOES(float);
    static void glTexGenfOES(int32_t, int32_t, float);
    static void glTexGenfvOES(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glTexGenfvOES(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glTexGeniOES(int32_t, int32_t, int32_t);
    static void glTexGenivOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexGenivOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glTexGenxOES(int32_t, int32_t, int32_t);
    static void glTexGenxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glTexGenxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexGenfvOES(int32_t, int32_t, const std::vector< float>&, int32_t);
    static void glGetTexGenfvOES(int32_t, int32_t, const ::java::nio::FloatBuffer&);
    static void glGetTexGenivOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexGenivOES(int32_t, int32_t, const ::java::nio::IntBuffer&);
    static void glGetTexGenxvOES(int32_t, int32_t, const std::vector< int32_t>&, int32_t);
    static void glGetTexGenxvOES(int32_t, int32_t, const ::java::nio::IntBuffer&);

};
}
}


